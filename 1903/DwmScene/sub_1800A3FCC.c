/*
 * XREFs of sub_1800A3FCC @ 0x1800A3FCC
 * Callers:
 *     sub_180090A04 @ 0x180090A04 (sub_180090A04.c)
 *     sub_1800A34AC @ 0x1800A34AC (sub_1800A34AC.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800A8E14 @ 0x1800A8E14 (sub_1800A8E14.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 * Callees:
 *     sub_1800A618C @ 0x1800A618C (sub_1800A618C.c)
 */

__int64 __fastcall sub_1800A3FCC(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  v2 = (_QWORD *)(a1 + 16);
  sub_1800A618C(a1 + 16, &v4, a2);
  if ( v4 == *v2 )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(v4 + 64);
}
