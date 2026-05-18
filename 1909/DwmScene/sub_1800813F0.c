/*
 * XREFs of sub_1800813F0 @ 0x1800813F0
 * Callers:
 *     sub_180086B30 @ 0x180086B30 (sub_180086B30.c)
 *     sub_1800C33C0 @ 0x1800C33C0 (sub_1800C33C0.c)
 * Callees:
 *     sub_18007FEE0 @ 0x18007FEE0 (sub_18007FEE0.c)
 *     sub_180080CF0 @ 0x180080CF0 (sub_180080CF0.c)
 *     sub_180081128 @ 0x180081128 (sub_180081128.c)
 *     j__o_free @ 0x180125CA8 (j__o_free.c)
 *     _alloca_probe @ 0x180126130 (_alloca_probe.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800813F0(__int64 *a1, __int64 *a2, unsigned __int8 (__fastcall *a3)(__int64, __int64))
{
  __int64 v6; // rsi
  __int64 *v7; // [rsp+38h] [rbp-1030h] BYREF
  __int64 v8; // [rsp+40h] [rbp-1028h] BYREF
  unsigned __int64 v9; // [rsp+48h] [rbp-1020h]

  v6 = ((char *)a2 - (char *)a1) >> 4;
  if ( v6 > 32 )
  {
    sub_18007FEE0(&v8, (((char *)a2 - (char *)a1) >> 4) - (((char *)a2 - (char *)a1) >> 5));
    sub_180081128(a1, a2, v6, v8, v9, a3);
    if ( v9 > 0x100 )
      j__o_free(v8);
  }
  else if ( v6 > 1 )
  {
    sub_180080CF0(&v7, a1, a2, (__int64 (__fastcall *)(__int64 *, __int64 *))a3);
  }
}
