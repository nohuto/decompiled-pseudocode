/*
 * XREFs of sub_18006C250 @ 0x18006C250
 * Callers:
 *     sub_1800205F0 @ 0x1800205F0 (sub_1800205F0.c)
 *     sub_18006C5E0 @ 0x18006C5E0 (sub_18006C5E0.c)
 *     sub_1800B5E38 @ 0x1800B5E38 (sub_1800B5E38.c)
 *     sub_1801284F4 @ 0x1801284F4 (sub_1801284F4.c)
 *     sub_180130173 @ 0x180130173 (sub_180130173.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180017790 @ 0x180017790 (sub_180017790.c)
 *     sub_180063530 @ 0x180063530 (sub_180063530.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_1800698A4 @ 0x1800698A4 (sub_1800698A4.c)
 *     sub_18006C0A8 @ 0x18006C0A8 (sub_18006C0A8.c)
 *     sub_18006DA3C @ 0x18006DA3C (sub_18006DA3C.c)
 *     sub_18006E114 @ 0x18006E114 (sub_18006E114.c)
 *     sub_18006E244 @ 0x18006E244 (sub_18006E244.c)
 *     sub_1800E22E8 @ 0x1800E22E8 (sub_1800E22E8.c)
 *     sub_18011E090 @ 0x18011E090 (sub_18011E090.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127428 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C250(__int64 a1)
{
  __int64 v2; // rdx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx
  volatile signed __int32 *v5; // rbx
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx
  _BYTE v8[8]; // [rsp+28h] [rbp-20h] BYREF
  _BYTE v9[24]; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::RenderDevice::`vftable';
  sub_18006DA3C(a1);
  sub_18006E114(a1 + 4120, v8, **(_QWORD **)(a1 + 4120));
  j_j__o_free(*(_QWORD *)(a1 + 4120));
  sub_18011E090(a1 + 4104);
  *(_QWORD *)(a1 + 4096) = &Spectre::Engine::IGpuQueryPool::`vftable';
  sub_18006C0A8((_QWORD *)(a1 + 3992));
  sub_1800698A4((__int64 *)(a1 + 3856), v2);
  v3 = *(volatile signed __int32 **)(a1 + 3848);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  `eh vector destructor iterator'((void *)(a1 + 1280), 0x28uLL, 0x40uLL, (void (*)(void *))sub_1800424C0);
  sub_1800E22E8(a1 + 1056);
  sub_1800E22E8(a1 + 832);
  sub_1800E22E8(a1 + 608);
  v4 = *(volatile signed __int32 **)(a1 + 600);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 512));
  sub_18006E244(a1 + 496, v9, **(_QWORD **)(a1 + 496));
  j_j__o_free(*(_QWORD *)(a1 + 496));
  sub_180017790((_QWORD *)(a1 + 288));
  v5 = *(volatile signed __int32 **)(a1 + 280);
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  sub_180011388((__int64 *)(a1 + 248));
  unknown_libname_116((__int64 *)(a1 + 208));
  unknown_libname_116((__int64 *)(a1 + 176));
  unknown_libname_116((__int64 *)(a1 + 144));
  unknown_libname_116((__int64 *)(a1 + 112));
  unknown_libname_116((__int64 *)(a1 + 80));
  sub_180063530((__int64 *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 40) )
    sub_180063668(*(_QWORD *)(a1 + 32));
  result = sub_18011E090(a1 + 24);
  v7 = *(volatile signed __int32 **)(a1 + 16);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
