/*
 * XREFs of CMFGetFileSizeEx @ 0x140916198
 * Callers:
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryInformationFile @ 0x1401C02F0 (ZwQueryInformationFile.c)
 */

NTSTATUS __fastcall CMFGetFileSizeEx(void *a1, _QWORD *a2)
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v4; // [rsp+30h] [rbp-38h] BYREF
  __int64 v5; // [rsp+40h] [rbp-28h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v4.Pointer = 0LL;
  v4.Information = 0LL;
  result = ZwQueryInformationFile(a1, &v4, &v5, 0x18u, FileStandardInformation);
  if ( (result & 0xC0000000) != 0xC0000000 )
  {
    *a2 = v6;
    return 0;
  }
  return result;
}
