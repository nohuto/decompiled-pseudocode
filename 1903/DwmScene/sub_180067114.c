/*
 * XREFs of sub_180067114 @ 0x180067114
 * Callers:
 *     sub_1800671B8 @ 0x1800671B8 (sub_1800671B8.c)
 *     sub_1800676D0 @ 0x1800676D0 (sub_1800676D0.c)
 *     sub_18012CD44 @ 0x18012CD44 (sub_18012CD44.c)
 * Callees:
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067114(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 72);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180063530((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180063668(*(_QWORD *)(a1 + 16));
  return sub_18011E090(a1 + 8);
}
