/*
 * XREFs of VslCreateSecureImageSection @ 0x14027C9F0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslCreateSecureImageSection(
        unsigned int a1,
        __int64 a2,
        unsigned __int8 a3,
        unsigned int a4,
        unsigned int a5,
        _QWORD *a6)
{
  __int64 v7; // rbx
  __int64 result; // rax
  NTSTATUS v9; // ebx
  _QWORD v10[10]; // [rsp+30h] [rbp-D8h] BYREF
  _BYTE v11[8]; // [rsp+80h] [rbp-88h] BYREF
  __int64 v12; // [rsp+88h] [rbp-80h]
  __int64 v13; // [rsp+90h] [rbp-78h]
  __int64 v14; // [rsp+98h] [rbp-70h]
  __int64 v15; // [rsp+A0h] [rbp-68h]
  __int64 v16; // [rsp+A8h] [rbp-60h]

  v7 = a4;
  if ( a1 > 0x1FA )
    return 3221225485LL;
  result = VslpLockPagesForTransfer((__int64)v10, a2, a1 << 12, 0, 0);
  if ( (int)result >= 0 )
  {
    v12 = v10[0];
    v13 = v10[7];
    v14 = a3;
    v16 = a5;
    v15 = v7;
    v9 = VslpEnterIumSecureMode(2u, 25LL, 0, (__int64)v11);
    VslpUnlockPagesForTransfer((__int64)v10);
    if ( v9 >= 0 )
      *a6 = v13;
    return (unsigned int)v9;
  }
  return result;
}
