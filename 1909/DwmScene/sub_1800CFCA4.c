/*
 * XREFs of sub_1800CFCA4 @ 0x1800CFCA4
 * Callers:
 *     sub_1800CFE60 @ 0x1800CFE60 (sub_1800CFE60.c)
 * Callees:
 *     sub_180026530 @ 0x180026530 (sub_180026530.c)
 *     sub_180026664 @ 0x180026664 (sub_180026664.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall **__fastcall sub_1800CFCA4(__int64 a1))()
{
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rcx
  __int64 *v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v7; // [rsp+30h] [rbp-18h] BYREF

  *(_QWORD *)a1 = &Spectre::Engine::DepthBuffer::`vftable';
  v2 = (_QWORD *)(a1 + 256);
  sub_180026530((__int64 ***)(a1 + 256), &v6, **(__int64 ***)(a1 + 256), *(__int64 **)(a1 + 256));
  j_j__o_free(*v2);
  `eh vector destructor iterator'((void *)(a1 + 192), 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_110);
  `eh vector destructor iterator'((void *)(a1 + 128), 0x10uLL, 4uLL, (void (*)(void *))unknown_libname_110);
  v3 = *(volatile signed __int32 **)(a1 + 120);
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = *(volatile signed __int32 **)(a1 + 104);
  if ( v4 && _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  sub_180026664((__int64 ***)(a1 + 80), &v7, **(__int64 ***)(a1 + 80), *(__int64 **)(a1 + 80));
  j_j__o_free(*(_QWORD *)(a1 + 80));
  return sub_18006403C(a1);
}
