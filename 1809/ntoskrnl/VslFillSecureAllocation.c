/*
 * XREFs of VslFillSecureAllocation @ 0x14027CAF0
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslFillSecureAllocation(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 i; // rdi
  ULONG v9; // r14d
  _QWORD v11[10]; // [rsp+30h] [rbp-F8h] BYREF
  _BYTE v12[8]; // [rsp+80h] [rbp-A8h] BYREF
  __int64 v13; // [rsp+88h] [rbp-A0h]
  __int64 v14; // [rsp+90h] [rbp-98h]
  __int64 v15; // [rsp+98h] [rbp-90h]
  __int64 v16; // [rsp+A0h] [rbp-88h]

  v4 = 0;
  for ( i = a3; i; i -= v9 )
  {
    v9 = i;
    if ( 2072576 - (unsigned int)(a4 & 0xFFF) <= i )
      v9 = 2072576 - (a4 & 0xFFF);
    v4 = VslpLockPagesForTransfer((__int64)v11, a4, v9, 0, 0);
    if ( v4 < 0 )
      break;
    v15 = v11[0];
    v16 = v11[7];
    v13 = a1;
    v14 = a2;
    v4 = VslpEnterIumSecureMode(2u, 23LL, 0, (__int64)v12);
    VslpUnlockPagesForTransfer((__int64)v11);
    if ( v4 < 0 )
      break;
    a4 += v9;
    a2 += v9;
  }
  return (unsigned int)v4;
}
