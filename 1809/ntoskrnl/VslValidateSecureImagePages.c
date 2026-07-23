/*
 * XREFs of VslValidateSecureImagePages @ 0x14027D360
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     VslpLockPagesForTransfer @ 0x14027C704 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x14027C8E0 (VslpUnlockPagesForTransfer.c)
 */

__int64 __fastcall VslValidateSecureImagePages(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  int v6; // esi
  unsigned __int64 i; // rdi
  int v11; // r13d
  unsigned __int64 v12; // rbx
  int v13; // r13d
  _QWORD v16[10]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v18; // [rsp+98h] [rbp-68h]
  int v19; // [rsp+A0h] [rbp-60h]
  __int64 v20; // [rsp+A8h] [rbp-58h]
  __int64 v21; // [rsp+B0h] [rbp-50h]
  __int64 v22; // [rsp+B8h] [rbp-48h]
  char v23; // [rsp+C0h] [rbp-40h]

  v6 = 0;
  for ( i = a3; i; i -= v12 )
  {
    v11 = 0;
    v12 = i;
    if ( (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576 <= i )
      v12 = (-(__int64)((a4 & 0xFFF) != 0) & 0xFFFFFFFFFFFFF000uLL) + 2072576;
    LOBYTE(v11) = (v12 & 0xFFF) != 0;
    v13 = (v12 >> 12) + v11;
    v6 = VslpLockPagesForTransfer((__int64)v16, a4, v13 << 12, 0, 0);
    if ( v6 < 0 )
      break;
    v18 = a1;
    v20 = v16[0];
    v21 = v16[7];
    v23 = a6;
    v19 = a2;
    v22 = a5;
    v6 = VslpEnterIumSecureMode(2u, 193LL, 0, (__int64)v17);
    VslpUnlockPagesForTransfer((__int64)v16);
    if ( v6 < 0 )
      break;
    a4 += v12;
    a5 += v12;
    a2 += v13;
  }
  return (unsigned int)v6;
}
