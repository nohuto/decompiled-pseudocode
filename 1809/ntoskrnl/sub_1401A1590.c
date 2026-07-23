/*
 * XREFs of sub_1401A1590 @ 0x1401A1590
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x1401C5FE0 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1401A1590(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v7; // rdx
  char v8; // r8
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // rdi
  __int16 v11; // ax
  unsigned __int64 v12; // rdi

  KeExitRetpoline(a1, a2, a3, a4);
  v7 = *(_QWORD *)(a1 + 32);
  v8 = 1;
  v9 = (unsigned __int64)&qword_140406648 ^ ((v7 ^ (v7 >> 4)) >> 4);
  v10 = v9;
  if ( (v9 & 0xF) != 0 )
    v8 = v9 & 0xF;
  for ( ; v8; --v8 )
  {
    v7 = *(_QWORD *)((v9 & 0xF) + v7);
    v9 ^= (v7 ^ (v7 >> 4)) >> 4;
  }
  v11 = v10;
  v12 = v7 ^ v10;
  if ( (v11 & 0x1000) == 0 )
    v12 = v7;
  return (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64))(v12 + 24))(
           v12,
           *(_QWORD *)(v12 + 32),
           a3,
           a4);
}
