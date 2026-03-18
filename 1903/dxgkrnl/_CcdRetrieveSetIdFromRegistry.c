/*
 * XREFs of _CcdRetrieveSetIdFromRegistry @ 0x1C00D79F4
 * Callers:
 *     _CcdLazyRetrieveSetIdFromRegistry @ 0x1C00D79D0 (_CcdLazyRetrieveSetIdFromRegistry.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z @ 0x1C00DA2D0 (--0CCD_SET_STRING_ID@@QEAA@AEBU_UNICODE_STRING@@@Z.c)
 *     ??4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z @ 0x1C00DA500 (--4CCD_SET_STRING_ID@@QEAAAEAV0@AEBV0@@Z.c)
 *     _CcdRetrieveValueFromRegistry @ 0x1C00DAAD4 (_CcdRetrieveValueFromRegistry.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C00DD8D0 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CcdRetrieveSetIdFromRegistry(HANDLE KeyHandle, const WCHAR *a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-50h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  v6 = CcdRetrieveValueFromRegistry(KeyHandle, &DestinationString);
  v10 = v6;
  if ( v6 < 0 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v12[3] = v10;
    v12[4] = KeyHandle;
    v12[5] = a2;
    v12[6] = a3;
    WdLogEvent5_WdError(v12);
  }
  else
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v8, v7, v9);
    v13[3] = MEMORY[4];
    v13[4] = KeyHandle;
    v13[5] = a2;
    v13[6] = a3;
    WdLogEvent5_WdError(v13);
    LODWORD(v10) = -1073741788;
  }
  operator delete[](0LL);
  return (unsigned int)v10;
}
