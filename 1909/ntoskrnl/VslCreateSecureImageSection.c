/*
 * XREFs of VslCreateSecureImageSection @ 0x140290E10
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290AEC (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290CC8 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // r14
  __int64 result; // rax
  NTSTATUS v11; // ebx
  _QWORD v12[10]; // [rsp+30h] [rbp-A9h] BYREF
  _QWORD v13[14]; // [rsp+80h] [rbp-59h] BYREF

  v7 = a4;
  memset(v13, 0, 0x68uLL);
  memset(v12, 0, 0x48uLL);
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v12, a2, a1 << 12, 0, 0);
  if ( (int)result >= 0 )
  {
    v13[1] = v12[0];
    v13[2] = v12[7];
    v13[3] = a3;
    v13[5] = a5;
    v13[4] = v7;
    v11 = VslpEnterIumSecureMode(2, 25LL, 0LL, (__int64)v13);
    VslpUnlockPagesForTransfer((__int64)v12);
    if ( v11 >= 0 )
      *a6 = v13[2];
    return (unsigned int)v11;
  }
  return result;
}
