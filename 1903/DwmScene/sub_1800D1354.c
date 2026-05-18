/*
 * XREFs of sub_1800D1354 @ 0x1800D1354
 * Callers:
 *     sub_1800D1048 @ 0x1800D1048 (sub_1800D1048.c)
 *     sub_1800D144C @ 0x1800D144C (sub_1800D144C.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800D1354(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi

  if ( a1 != a2 )
  {
    v5 = a1 + 36;
    do
    {
      *(_QWORD *)(a3 + 16) = 0LL;
      *(_QWORD *)(a3 + 24) = 0LL;
      sub_18000F3F4((_QWORD *)a3, v5 - 36);
      *(_DWORD *)(a3 + 32) = *(_DWORD *)(v5 - 4);
      *(_DWORD *)(a3 + 36) = *(_DWORD *)v5;
      *(_BYTE *)(a3 + 40) = *(_BYTE *)(v5 + 4);
      *(_DWORD *)(a3 + 44) = *(_DWORD *)(v5 + 8);
      a3 += 48LL;
      v5 += 48LL;
    }
    while ( v5 - 36 != a2 );
  }
  return a3;
}
