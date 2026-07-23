/*
 * XREFs of RtlpQueryDiskWriteConstraintPolicyByHandle @ 0x1801152D4
 * Callers:
 *     RtlpQueryDiskWriteConstraintPolicy @ 0x18011526C (RtlpQueryDiskWriteConstraintPolicy.c)
 * Callees:
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtDeviceIoControlFile @ 0x1800A03E0 (NtDeviceIoControlFile.c)
 */

NTSTATUS __fastcall RtlpQueryDiskWriteConstraintPolicyByHandle(void *a1, int *a2)
{
  NTSTATUS result; // eax
  int v4; // eax
  _IO_STATUS_BLOCK v5; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v6[4]; // [rsp+60h] [rbp-28h] BYREF

  result = NtDeviceIoControlFile(a1, 0LL, 0LL, 0LL, &v5, 0x22096Cu, 0LL, 0, v6, 0x10u);
  if ( result >= 0 )
  {
    v4 = 50;
    if ( v6[0] == 1 )
      v4 = 100;
    *a2 = v4;
    return 0;
  }
  if ( (unsigned int)(result + 0x3FFFFFFF) <= 1 || result == -1073741808 )
  {
    *a2 = 100;
    return 0;
  }
  return result;
}
