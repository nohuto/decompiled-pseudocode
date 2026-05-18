/*
 * XREFs of sub_1800B5D5C @ 0x1800B5D5C
 * Callers:
 *     sub_180015574 @ 0x180015574 (sub_180015574.c)
 * Callees:
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_1800B6B70 @ 0x1800B6B70 (sub_1800B6B70.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800B5D5C(__int64 a1, __int64 a2, _QWORD *a3)
{
  volatile signed __int32 *v5; // rbx
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF

  v7[0] = *a3;
  v7[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  sub_18006BC20(a1, a2, v7);
  *(_QWORD *)a1 = &Spectre::Engine::RenderDeviceGeneric::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  sub_180026168((char *)(a1 + 112), L"RenderDeviceGeneric", 0x13uLL);
  sub_180026168((char *)(a1 + 80), L"Universal", 9uLL);
  sub_1800B6B70(a1);
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
