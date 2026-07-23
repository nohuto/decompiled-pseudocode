/*
 * XREFs of VslCreateEnclave @ 0x14081914C
 * Callers:
 *     PsCreateVsmEnclave @ 0x14088EDFC (PsCreateVsmEnclave.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 *     VslCloseSecureHandle @ 0x14027C930 (VslCloseSecureHandle.c)
 *     VslCreateSecureProcess @ 0x140819280 (VslCreateSecureProcess.c)
 */

__int64 __fastcall VslCreateEnclave(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        ULONG a7,
        _QWORD *a8)
{
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  NTSTATUS v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v16[7]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]
  _BYTE v18[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int64 v21; // [rsp+A8h] [rbp-58h]
  __int64 v22; // [rsp+B0h] [rbp-50h]
  __int64 v23; // [rsp+B8h] [rbp-48h]
  __int64 v24; // [rsp+C0h] [rbp-40h]

  if ( !*(_QWORD *)(a2 + 720) )
  {
    result = VslCreateSecureProcess(a2, a3, &v15);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 720), v15, 0LL) )
      VslCloseSecureHandle(v15);
  }
  if ( a7 )
  {
    result = VslpLockPagesForTransfer((__int64)v16, a6, a7, 0, 0);
    if ( (int)result < 0 )
      return result;
    v12 = v17;
    v13 = v16[0];
  }
  else
  {
    v13 = 0LL;
    v12 = 0LL;
    v16[0] = 0LL;
    v17 = 0LL;
  }
  v19 = *(_QWORD *)(a2 + 720);
  v23 = v13;
  v24 = v12;
  v21 = a5;
  v20 = a4;
  v22 = a1;
  v14 = VslpEnterIumSecureMode(2u, 41LL, 0, (__int64)v18);
  if ( v16[0] )
    VslpUnlockPagesForTransfer((__int64)v16);
  if ( v14 >= 0 )
    *a8 = v20;
  return (unsigned int)v14;
}
