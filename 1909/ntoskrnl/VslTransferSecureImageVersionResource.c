/*
 * XREFs of VslTransferSecureImageVersionResource @ 0x1402915E0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslTransferSecureImageVersionResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v9; // ebx
  _QWORD v10[10]; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v11[14]; // [rsp+80h] [rbp-98h] BYREF

  memset(v11, 0, 0x68uLL);
  memset(v10, 0, 0x48uLL);
  if ( (((a2 & 0xFFF) + a3 + 4095) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v10, a2, a3, 0, 0);
  if ( (int)result >= 0 )
  {
    v11[2] = v10[0];
    v11[3] = v10[7];
    v11[1] = a1;
    v11[4] = a4;
    v9 = VslpEnterIumSecureMode(2, 32LL, 0LL, (__int64)v11);
    VslpUnlockPagesForTransfer((__int64)v10);
    return v9;
  }
  return result;
}
