/*
 * XREFs of sub_1800F4790 @ 0x1800F4790
 * Callers:
 *     sub_1800F1988 @ 0x1800F1988 (sub_1800F1988.c)
 * Callees:
 *     sub_1800168B0 @ 0x1800168B0 (sub_1800168B0.c)
 *     sub_18002554C @ 0x18002554C (sub_18002554C.c)
 *     sub_180064228 @ 0x180064228 (sub_180064228.c)
 *     get_srw_lock @ 0x1800F2F18 (get_srw_lock.c)
 *     sub_1800F425C @ 0x1800F425C (sub_1800F425C.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_1800F4790(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  char **v6; // rax
  __int64 *v7; // rdx

  *(_QWORD *)a1 = &Spectre::Engine::ShaderPropertyBlock::`vftable';
  *(_QWORD *)(a1 + 8) = get_srw_lock(*a2);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v4 = a2[1];
  if ( v4 )
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 1;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = sub_18002554C();
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_QWORD *)(a1 + 128) = 0LL;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_DWORD *)(a1 + 144) = sub_180064228(*a2);
  *(_BYTE *)(a1 + 148) = *(_BYTE *)(*a2 + 1242);
  v5 = *a2;
  v6 = (char **)(*a2 + 80);
  if ( (char **)(a1 + 32) != v6 )
  {
    sub_1800168B0(a1 + 32, *v6, *(_QWORD *)(*a2 + 88));
    v5 = *a2;
  }
  v7 = (__int64 *)(v5 + 104);
  if ( (__int64 *)(a1 + 56) != v7 )
    sub_1800F425C((__int64 *)(a1 + 56), *v7, v7[1]);
  return a1;
}
