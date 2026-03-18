/*
 * XREFs of VslCreateEnclave @ 0x140851B34
 * Callers:
 *     PsCreateVsmEnclave @ 0x1408CC224 (PsCreateVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14012A77C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VslpLockPagesForTransfer @ 0x140290D8C (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x140290F68 (VslpUnlockPagesForTransfer.c)
 *     VslCloseSecureHandle @ 0x140290FB0 (VslCloseSecureHandle.c)
 *     VslCreateSecureProcess @ 0x140851C90 (VslCreateSecureProcess.c)
 */

__int64 __fastcall VslCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ULONG a7,
        unsigned __int8 a8,
        _QWORD *a9)
{
  __int64 result; // rax
  NTSTATUS v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[14]; // [rsp+90h] [rbp-70h] BYREF

  memset(v17, 0, 0x68uLL);
  memset(v16, 0, 0x48uLL);
  if ( !*(_QWORD *)(a2 + 728) )
  {
    result = VslCreateSecureProcess(a2, a3, &v15);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 728), v15, 0LL) )
      VslCloseSecureHandle(v15);
  }
  if ( !a7 || (result = VslpLockPagesForTransfer((__int64)v16, a6, a7, 0, 0), (int)result >= 0) )
  {
    v17[1] = *(_QWORD *)(a2 + 728);
    v17[3] = a5;
    v17[5] = v16[0];
    v17[6] = v16[7];
    v17[7] = a8;
    v17[2] = a4;
    v17[4] = a1;
    v14 = VslpEnterIumSecureMode(2, 44LL, 0LL, (__int64)v17);
    if ( v16[0] )
      VslpUnlockPagesForTransfer((__int64)v16);
    if ( v14 >= 0 )
      *a9 = v17[2];
    return (unsigned int)v14;
  }
  return result;
}
