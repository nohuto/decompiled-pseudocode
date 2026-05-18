/*
 * XREFs of sub_1800B5E6C @ 0x1800B5E6C
 * Callers:
 *     sub_1800155E4 @ 0x1800155E4 (sub_1800155E4.c)
 * Callees:
 *     sub_180026278 @ 0x180026278 (sub_180026278.c)
 *     sub_18006BD30 @ 0x18006BD30 (sub_18006BD30.c)
 *     sub_1800B6C80 @ 0x1800B6C80 (sub_1800B6C80.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B5E6C(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006BD30(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_180026278((char *)(a1 + 112), L"RenderDeviceGeneric", 0x13uLL);
  sub_180026278((char *)(a1 + 80), L"Universal", 9uLL);
  sub_1800B6C80(a1);
  v5 = (volatile signed __int32 *)a3[1];
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  return a1;
}
