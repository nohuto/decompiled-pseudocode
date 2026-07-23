/*
 * XREFs of VslGetSetSecureContext @ 0x140819ACC
 * Callers:
 *     PspGetSetContextInternal @ 0x140620940 (PspGetSetContextInternal.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslGetSetSecureContext(__int64 a1, __int64 a2, ULONG a3)
{
  __int16 v3; // ax
  __int64 result; // rax
  unsigned int v5; // ebx
  _QWORD v6[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v7[2]; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int16 v8; // [rsp+82h] [rbp-86h]
  __int64 v9; // [rsp+88h] [rbp-80h]
  __int64 v10; // [rsp+90h] [rbp-78h]

  v3 = 15;
  if ( !a1 )
    v3 = 14;
  v8 = v3;
  result = VslpLockPagesForTransfer((__int64)v6, a2, a3, a1 != 0, 0);
  if ( (int)result >= 0 )
  {
    v9 = v6[0];
    v10 = v6[7];
    v5 = VslpEnterIumSecureMode(2u, v8, 0, (__int64)v7);
    VslpUnlockPagesForTransfer((__int64)v6);
    return v5;
  }
  return result;
}
