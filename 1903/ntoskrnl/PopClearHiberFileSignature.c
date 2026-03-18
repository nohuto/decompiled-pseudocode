/*
 * XREFs of PopClearHiberFileSignature @ 0x1407477F4
 * Callers:
 *     PopFreeHiberContext @ 0x1407272AC (PopFreeHiberContext.c)
 *     PopEnableHiberFile @ 0x14074AAD0 (PopEnableHiberFile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwFsControlFile @ 0x1401C07F0 (ZwFsControlFile.c)
 */

NTSTATUS PopClearHiberFileSignature()
{
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK v1; // [rsp+50h] [rbp-38h] BYREF
  _DWORD v2[2]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v3; // [rsp+68h] [rbp-20h]
  __int64 v4; // [rsp+70h] [rbp-18h]

  result = 0;
  v1.Pointer = 0LL;
  v1.Information = 0LL;
  if ( (PopSimulateHiberBugcheck & 0x200) == 0 && FileObject )
  {
    v2[0] = 0;
    v2[1] = 1;
    v3 = 4096LL;
    v4 = -4097LL;
    result = ZwFsControlFile(*(HANDLE *)&PopHiberInfo, 0LL, 0LL, 0LL, &v1, 0x98208u, v2, 0x18u, 0LL, 0);
    if ( result == 259 )
      return KeWaitForSingleObject((char *)FileObject + 152, Executive, 0, 0, 0LL);
  }
  return result;
}
