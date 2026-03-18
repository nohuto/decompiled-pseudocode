/*
 * XREFs of VslCaptureSecureImageIat @ 0x1408533D8
 * Callers:
 *     MiApplyImportOptimizationToRuntimeDriver @ 0x14070E9E0 (MiApplyImportOptimizationToRuntimeDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCaptureSecureImageIat(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v7; // ebx
  _QWORD v8[10]; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD v9[14]; // [rsp+80h] [rbp-88h] BYREF

  memset(v9, 0, 0x68uLL);
  memset(v8, 0, 0x48uLL);
  if ( (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v8, a2, a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v9[2] = v8[0];
    v9[3] = v8[7];
    v9[1] = a1;
    v7 = VslpEnterIumSecureMode(2, 41LL, 0LL, (__int64)v9);
    VslpUnlockPagesForTransfer((__int64)v8);
    return v7;
  }
  return result;
}
