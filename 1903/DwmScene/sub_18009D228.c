/*
 * XREFs of sub_18009D228 @ 0x18009D228
 * Callers:
 *     sub_18009DF60 @ 0x18009DF60 (sub_18009DF60.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18009D228(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v6; // rcx

  v4 = *a3;
  *(_QWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSetView::`vftable';
  *(_QWORD *)(a1 + 8) = v4;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 32) = 0LL;
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)a1 = &Spectre::Engine::TextureImageSet::`vftable';
  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)(a1 + 56) = v6;
  if ( *a3 )
    j_j__o_free(*a3);
  return a1;
}
