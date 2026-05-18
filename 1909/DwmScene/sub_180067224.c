/*
 * XREFs of sub_180067224 @ 0x180067224
 * Callers:
 *     sub_1800672C8 @ 0x1800672C8 (sub_1800672C8.c)
 *     sub_1800677E0 @ 0x1800677E0 (sub_1800677E0.c)
 *     sub_18012CE54 @ 0x18012CE54 (sub_18012CE54.c)
 * Callees:
 *     sub_180063640 @ 0x180063640 (sub_180063640.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180067224(__int64 a1)
{
  volatile signed __int32 *v2; // rcx

  *(_QWORD *)a1 = &Spectre::Engine::IRenderOutput::`vftable';
  v2 = *(volatile signed __int32 **)(a1 + 72);
  if ( v2 && _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
  sub_180063640((__int64 *)(a1 + 40));
  if ( *(_BYTE *)(a1 + 24) )
    sub_180063778(*(_QWORD *)(a1 + 16));
  return sub_18011E1A0(a1 + 8);
}
