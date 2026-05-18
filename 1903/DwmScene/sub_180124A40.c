/*
 * XREFs of sub_180124A40 @ 0x180124A40
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     j__o_free @ 0x180125B98 (j__o_free.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180124A40(__int64 a1, char a2)
{
  _QWORD *v4; // rbx
  __int64 v6; // [rsp+28h] [rbp-10h] BYREF

  v4 = (_QWORD *)(a1 + 96);
  sub_18006E244((_QWORD **)(a1 + 96), &v6, **(_QWORD ***)(a1 + 96), *(_QWORD **)(a1 + 96));
  j_j__o_free(*v4);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 8));
  *(_QWORD *)a1 = &Spectre::Utils::ICancellationToken::`vftable';
  if ( (a2 & 1) != 0 )
    j__o_free(a1);
  return a1;
}
