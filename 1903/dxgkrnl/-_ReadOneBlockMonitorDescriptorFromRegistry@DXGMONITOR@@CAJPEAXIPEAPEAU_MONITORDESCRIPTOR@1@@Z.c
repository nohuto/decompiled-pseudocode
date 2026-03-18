/*
 * XREFs of ?_ReadOneBlockMonitorDescriptorFromRegistry@DXGMONITOR@@CAJPEAXIPEAPEAU_MONITORDESCRIPTOR@1@@Z @ 0x1C02CB274
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C0174660 (-_RetrieveMonitorDescriptorsFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C000DF74 (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

__int64 __fastcall DXGMONITOR::_ReadOneBlockMonitorDescriptorFromRegistry(
        HANDLE KeyHandle,
        __int64 a2,
        struct DXGMONITOR::_MONITORDESCRIPTOR **a3)
{
  __int64 v3; // rbp
  __int64 v6; // rax
  __int64 v7; // rax
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  __int64 v13; // rax
  char *v14; // rbx
  ULONG Length; // esi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  NTSTATUS v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rax
  char *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-50h] BYREF
  WCHAR SourceString; // [rsp+48h] [rbp-40h] BYREF

  v3 = (unsigned int)a2;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !KeyHandle )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdAssertion(KeyHandle, a2);
    WdLogEvent5_WdAssertion(v7);
  }
  *a3 = 0LL;
  v8 = RtlStringCbPrintfW(&SourceString, 8uLL, L"%d", (unsigned int)v3);
  v12 = v8;
  if ( v8 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, &SourceString);
    v14 = 0LL;
    Length = 1024;
    do
    {
      if ( v14 )
        operator delete[](v14);
      v14 = (char *)operator new[](Length, 0x4D677844u, PagedPool);
      if ( v14 )
      {
        ResultLength = 0;
        v19 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, v14, Length, &ResultLength);
        Length = ResultLength;
        LODWORD(v12) = v19;
      }
      else
      {
        v23 = WdLogNewEntry5_WdError(v17, v16, v18);
        WdLogEvent5_WdError(v23);
        LODWORD(v12) = -1073741801;
      }
    }
    while ( (_DWORD)v12 == -2147483643 || (_DWORD)v12 == -1073741789 );
    if ( (int)v12 >= 0 )
    {
      if ( *((_DWORD *)v14 + 1) == 3 && *((_DWORD *)v14 + 2) == 128 )
      {
        v25 = (char *)operator new[](0x9FuLL, 0x4D677844u, PagedPool);
        if ( v25 )
        {
          *(_OWORD *)(v25 + 24) = *(_OWORD *)(v14 + 12);
          *(_OWORD *)(v25 + 40) = *(_OWORD *)(v14 + 28);
          *(_OWORD *)(v25 + 56) = *(_OWORD *)(v14 + 44);
          *(_OWORD *)(v25 + 72) = *(_OWORD *)(v14 + 60);
          *(_OWORD *)(v25 + 88) = *(_OWORD *)(v14 + 76);
          *(_OWORD *)(v25 + 104) = *(_OWORD *)(v14 + 92);
          *(_OWORD *)(v25 + 120) = *(_OWORD *)(v14 + 108);
          *(_OWORD *)(v25 + 136) = *(_OWORD *)(v14 + 124);
          *((_QWORD *)v25 + 2) = *((unsigned int *)v14 + 2);
          *((_DWORD *)v25 + 2) = 3;
          *((_DWORD *)v25 + 3) = (_DWORD)v3 != 0 ? 255 : 1;
          LODWORD(v12) = 0;
          *a3 = (struct DXGMONITOR::_MONITORDESCRIPTOR *)v25;
        }
        else
        {
          v28 = WdLogNewEntry5_WdError(0LL, v26, v27);
          WdLogEvent5_WdError(v28);
          LODWORD(v12) = -1073741801;
        }
      }
      else
      {
        v29 = WdLogNewEntry5_WdWarning(v21, v20, v22);
        *(_QWORD *)(v29 + 24) = v3;
        WdLogEvent5_WdWarning(v29);
        LODWORD(v12) = -1071841279;
      }
    }
    else
    {
      if ( v14 )
        operator delete[](v14);
      v14 = 0LL;
      v24 = WdLogNewEntry5_WdDmmEvent(v21, v20);
      *(_QWORD *)(v24 + 24) = (int)v12;
      WdLogEvent5_WdDmmEvent(v24);
    }
    if ( v14 )
      operator delete[](v14);
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v10, v9, v11);
    *(_QWORD *)(v13 + 24) = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
