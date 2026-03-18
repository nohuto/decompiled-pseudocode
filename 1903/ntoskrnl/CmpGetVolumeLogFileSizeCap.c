/*
 * XREFs of CmpGetVolumeLogFileSizeCap @ 0x1406E80BC
 * Callers:
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwQueryVolumeInformationFile @ 0x1401C09F0 (ZwQueryVolumeInformationFile.c)
 */

__int64 __fastcall CmpGetVolumeLogFileSizeCap(void *a1)
{
  __int64 result; // rax
  unsigned __int64 v2; // rcx
  struct _IO_STATUS_BLOCK v3; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+50h] [rbp-18h]

  v4[0] = 0LL;
  v4[1] = 0LL;
  v5 = 0LL;
  v3.Pointer = 0LL;
  v3.Information = 0LL;
  if ( ZwQueryVolumeInformationFile(a1, &v3, v4, 0x18u, FileFsSizeInformation) < 0 )
    return 0x2000000LL;
  result = 0x2000000LL;
  v2 = (v4[0] * (unsigned int)v5 * (unsigned __int64)HIDWORD(v5)) >> 11;
  if ( (unsigned int)v2 < 0x2000000 )
  {
    result = (unsigned int)v2;
    if ( (unsigned int)v2 <= 0x80000 )
      return 0x80000LL;
  }
  return result;
}
