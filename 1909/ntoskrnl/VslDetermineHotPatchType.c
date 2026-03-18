/*
 * XREFs of VslDetermineHotPatchType @ 0x1408518B8
 * Callers:
 *     MiLoadHotPatch @ 0x14088E6D0 (MiLoadHotPatch.c)
 *     MmRegisterHotPatch @ 0x140A3C60C (MmRegisterHotPatch.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

NTSTATUS __fastcall VslDetermineHotPatchType(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rdi
  __int64 v5; // rbx
  NTSTATUS result; // eax
  _QWORD v7[14]; // [rsp+20h] [rbp-88h] BYREF

  v3 = a2;
  v5 = a1;
  memset(v7, 0, 0x68uLL);
  v7[1] = v5;
  v7[2] = v3;
  result = VslpEnterIumSecureMode(2, 66LL, 0LL, (__int64)v7);
  if ( result >= 0 )
    *a3 = v7[2];
  return result;
}
