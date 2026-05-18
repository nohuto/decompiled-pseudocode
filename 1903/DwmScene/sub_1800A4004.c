/*
 * XREFs of sub_1800A4004 @ 0x1800A4004
 * Callers:
 *     sub_1800A35D4 @ 0x1800A35D4 (sub_1800A35D4.c)
 *     sub_1800DBFD4 @ 0x1800DBFD4 (sub_1800DBFD4.c)
 *     sub_1800F2C78 @ 0x1800F2C78 (sub_1800F2C78.c)
 * Callees:
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 */

__int64 __fastcall sub_1800A4004(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 2088);
  sub_1800A618C(a1 + 2088, &v4, a2);
  if ( v4 == *v2 )
    return 511LL;
  else
    return *(unsigned __int16 *)(v4 + 64);
}
