/*
 * XREFs of sub_1800DF6E0 @ 0x1800DF6E0
 * Callers:
 *     sub_1800DF840 @ 0x1800DF840 (sub_1800DF840.c)
 *     sub_1800E0938 @ 0x1800E0938 (sub_1800E0938.c)
 *     sub_1801310C2 @ 0x1801310C2 (sub_1801310C2.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125BD8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800DF6E0(_QWORD *a1)
{
  volatile signed __int32 *v2; // rbx
  volatile signed __int32 *v3; // rbx
  volatile signed __int32 *v4; // rbx

  *a1 = &Spectre::Engine::RenderTargetState::`vftable';
  v2 = (volatile signed __int32 *)a1[54];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  v3 = (volatile signed __int32 *)a1[52];
  if ( v3 )
  {
    if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
    }
  }
  v4 = (volatile signed __int32 *)a1[50];
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  `eh vector destructor iterator'(a1 + 33, 0x10uLL, 8uLL, (void (*)(void *))unknown_libname_110);
  `eh vector destructor iterator'(a1 + 17, 0x10uLL, 8uLL, (void (*)(void *))unknown_libname_110);
  `eh vector destructor iterator'(a1 + 1, 0x10uLL, 8uLL, (void (*)(void *))unknown_libname_110);
}
