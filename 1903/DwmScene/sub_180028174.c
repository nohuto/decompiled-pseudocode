/*
 * XREFs of sub_180028174 @ 0x180028174
 * Callers:
 *     sub_18000E930 @ 0x18000E930 (sub_18000E930.c)
 *     sub_180028244 @ 0x180028244 (sub_180028244.c)
 *     sub_1800282F0 @ 0x1800282F0 (sub_1800282F0.c)
 *     sub_180028350 @ 0x180028350 (sub_180028350.c)
 * Callees:
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 *     sub_18002BDB0 @ 0x18002BDB0 (sub_18002BDB0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180028174(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = -2LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  v2 = (_QWORD *)(a1 + 1680);
  sub_18002BC94(a1 + 1680, v5, **(_QWORD **)(a1 + 1680));
  j_j__o_free(*v2);
  sub_18002BC94(a1 + 1664, v5, **(_QWORD **)(a1 + 1664));
  j_j__o_free(*(_QWORD *)(a1 + 1664));
  sub_18002BDB0(a1 + 1648, v5, **(_QWORD **)(a1 + 1648));
  j_j__o_free(*(_QWORD *)(a1 + 1648));
  v3 = *(_QWORD *)(a1 + 504);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 504) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_1800671B8(a1);
}
