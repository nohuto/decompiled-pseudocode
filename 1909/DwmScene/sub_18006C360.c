/*
 * XREFs of sub_18006C360 @ 0x18006C360
 * Callers:
 *     sub_180020700 @ 0x180020700 (sub_180020700.c)
 *     sub_18006C6F0 @ 0x18006C6F0 (sub_18006C6F0.c)
 *     sub_1800B5F48 @ 0x1800B5F48 (sub_1800B5F48.c)
 *     sub_180128604 @ 0x180128604 (sub_180128604.c)
 *     sub_180130283 @ 0x180130283 (sub_180130283.c)
 * Callees:
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     sub_180017800 @ 0x180017800 (sub_180017800.c)
 *     sub_180063640 @ 0x180063640 (sub_180063640.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800699B4 @ 0x1800699B4 (sub_1800699B4.c)
 *     sub_18006C1B8 @ 0x18006C1B8 (sub_18006C1B8.c)
 *     sub_18006DB4C @ 0x18006DB4C (sub_18006DB4C.c)
 *     sub_18006E224 @ 0x18006E224 (sub_18006E224.c)
 *     sub_18006E354 @ 0x18006E354 (sub_18006E354.c)
 *     sub_1800E23F8 @ 0x1800E23F8 (sub_1800E23F8.c)
 *     sub_18011E1A0 @ 0x18011E1A0 (sub_18011E1A0.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x180127538 (_Mtx_destroy_in_situ.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18006C360(__int64 a1)
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
  sub_18006DB4C(a1);
  sub_18006E224(a1 + 4120, v8, **(_QWORD **)(a1 + 4120));
  j_j__o_free(*(_QWORD *)(a1 + 4120));
  sub_18011E1A0(a1 + 4104);
  *(_QWORD *)(a1 + 4096) = &Spectre::Engine::IGpuQueryPool::`vftable';
  sub_18006C1B8((_QWORD *)(a1 + 3992));
  sub_1800699B4((__int64 *)(a1 + 3856), v2);
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
  `eh vector destructor iterator'((void *)(a1 + 1280), 0x28uLL, 0x40uLL, (void (*)(void *))sub_1800425D0);
  sub_1800E23F8(a1 + 1056);
  sub_1800E23F8(a1 + 832);
  sub_1800E23F8(a1 + 608);
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
  sub_18006E354(a1 + 496, v9, **(_QWORD **)(a1 + 496));
  j_j__o_free(*(_QWORD *)(a1 + 496));
  sub_180017800((_QWORD *)(a1 + 288));
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
  sub_1800113D8((__int64 *)(a1 + 248));
  unknown_libname_116((__int64 *)(a1 + 208));
  unknown_libname_116((__int64 *)(a1 + 176));
  unknown_libname_116((__int64 *)(a1 + 144));
  unknown_libname_116((__int64 *)(a1 + 112));
  unknown_libname_116((__int64 *)(a1 + 80));
  sub_180063640((__int64 *)(a1 + 56));
  if ( *(_BYTE *)(a1 + 40) )
    sub_180063778(*(_QWORD *)(a1 + 32));
  result = sub_18011E1A0(a1 + 24);
  v7 = *(volatile signed __int32 **)(a1 + 16);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedDecrement(v7 + 3);
    if ( !(_DWORD)result )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
