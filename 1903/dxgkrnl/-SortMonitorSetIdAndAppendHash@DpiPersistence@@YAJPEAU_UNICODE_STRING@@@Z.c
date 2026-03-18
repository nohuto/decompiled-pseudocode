/*
 * XREFs of ?SortMonitorSetIdAndAppendHash@DpiPersistence@@YAJPEAU_UNICODE_STRING@@@Z @ 0x1C012B64C
 * Callers:
 *     ?AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z @ 0x1C012B5A4 (-AllocateMonitorSetIdFromAdapterSource@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ??_GCCD_SET_STRING_ID@@QEAAPEAXI@Z @ 0x1C0003C68 (--_GCCD_SET_STRING_ID@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C000E0F4 (-RtlUnicodeStringCopy@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D4B94 (-_CcdFreeUnicodeString@CCD_SET_STRING_ID@@SAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z @ 0x1C00D7370 (-_CcdCreateKeyFromSetIdStr@CCD_SET_STRING_ID@@SAJPEAU_UNICODE_STRING@@AEBU_STRING@@@Z.c)
 *     ?GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ @ 0x1C00DA0B0 (-GetConnectedSetStr@CCD_SET_STRING_ID@@QEBAAEBU_STRING@@XZ.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DA2D0 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DpiPersistence::SortMonitorSetIdAndAppendHash(
        struct _UNICODE_STRING *this,
        struct _UNICODE_STRING *a2)
{
  CCD_SET_STRING_ID *v3; // rax
  CCD_SET_STRING_ID *v4; // rdi
  const struct _STRING *ConnectedSetStr; // rax
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  ULONG v11; // r8d
  __int64 v13; // rax
  struct _UNICODE_STRING v14; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)&v14.Length = 0LL;
  v14.Buffer = 0LL;
  v3 = (CCD_SET_STRING_ID *)operator new[](0x38uLL, 0x63644356u, PagedPool);
  if ( v3 )
    v4 = CCD_SET_STRING_ID::CCD_SET_STRING_ID(v3, this);
  else
    v4 = 0LL;
  ConnectedSetStr = CCD_SET_STRING_ID::GetConnectedSetStr(v4);
  v6 = CCD_SET_STRING_ID::_CcdCreateKeyFromSetIdStr(&v14, ConnectedSetStr);
  v10 = v6;
  if ( v6 < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v8, v7, v9);
    *(_QWORD *)(v13 + 24) = v10;
    WdLogEvent5_WdError(v13);
  }
  else
  {
    memset(this->Buffer, 0, this->MaximumLength);
    this->Length = 0;
    RtlUnicodeStringCopy(this, &v14, v11);
    CCD_SET_STRING_ID::_CcdFreeUnicodeString(&v14);
    if ( v4 )
      CCD_SET_STRING_ID::`scalar deleting destructor'(v4);
  }
  return (unsigned int)v10;
}
