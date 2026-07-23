/*
 * XREFs of sub_1401A0630 @ 0x1401A0630
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14013926C (KeExitRetpoline.c)
 *     _guard_check_icall @ 0x1401C5FE0 (_guard_check_icall.c)
 */

__int64 __fastcall sub_1401A0630(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 (__fastcall *v6)(__int64); // rbx

  v4 = a1[2];
  v5 = v4 ^ a1[1];
  v6 = (__int64 (__fastcall *)(__int64))(v4 ^ a1[3]);
  if ( (*(_DWORD *)(v5 + 0x974) & 0x100000) != 0 )
    KeExitRetpoline(a1, a2, a3, a4);
  else
    _mm_lfence();
  return v6(v5);
}
