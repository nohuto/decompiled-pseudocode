/*
 * XREFs of sub_180028284 @ 0x180028284
 * Callers:
 *     sub_18000E980 @ 0x18000E980 (sub_18000E980.c)
 *     sub_180028354 @ 0x180028354 (sub_180028354.c)
 *     sub_180028400 @ 0x180028400 (sub_180028400.c)
 *     sub_180028460 @ 0x180028460 (sub_180028460.c)
 * Callees:
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 *     sub_18002BEC0 @ 0x18002BEC0 (sub_18002BEC0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180028284(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v6 = -2LL;
  *(_QWORD *)a1 = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  v2 = (_QWORD *)(a1 + 1680);
  sub_18002BDA4(a1 + 1680, v5, **(_QWORD **)(a1 + 1680));
  j_j__o_free(*v2);
  sub_18002BDA4(a1 + 1664, v5, **(_QWORD **)(a1 + 1664));
  j_j__o_free(*(_QWORD *)(a1 + 1664));
  sub_18002BEC0(a1 + 1648, v5, **(_QWORD **)(a1 + 1648));
  j_j__o_free(*(_QWORD *)(a1 + 1648));
  v3 = *(_QWORD *)(a1 + 504);
  if ( v3 )
  {
    *(_QWORD *)(a1 + 504) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return sub_1800672C8(a1);
}
