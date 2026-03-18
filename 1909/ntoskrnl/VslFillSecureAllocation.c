/*
 * XREFs of VslFillSecureAllocation @ 0x140290F10
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslFillSecureAllocation(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int i; // ebx
  ULONG v9; // r14d
  _QWORD v11[10]; // [rsp+30h] [rbp-F8h] BYREF
  _QWORD v12[14]; // [rsp+80h] [rbp-A8h] BYREF

  memset(v12, 0, 0x68uLL);
  memset(v11, 0, 0x48uLL);
  for ( i = 0; a3; a3 -= v9 )
  {
    v9 = a3;
    if ( 2072576 - (unsigned int)(a4 & 0xFFF) <= a3 )
      v9 = 2072576 - (a4 & 0xFFF);
    i = VslpLockPagesForTransfer((__int64)v11, a4, v9, 0, 0);
    if ( i < 0 )
      break;
    v12[3] = v11[0];
    v12[4] = v11[7];
    v12[1] = a1;
    v12[2] = a2;
    i = VslpEnterIumSecureMode(2, 23LL, 0LL, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( i < 0 )
      break;
    a4 += v9;
    a2 += v9;
  }
  return (unsigned int)i;
}
