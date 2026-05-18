/*
 * XREFs of sub_1800A8090 @ 0x1800A8090
 * Callers:
 *     sub_1800A3068 @ 0x1800A3068 (sub_1800A3068.c)
 *     sub_1800A3998 @ 0x1800A3998 (sub_1800A3998.c)
 * Callees:
 *     sub_18000E498 @ 0x18000E498 (sub_18000E498.c)
 *     sub_180027770 @ 0x180027770 (sub_180027770.c)
 *     sub_1800634AC @ 0x1800634AC (sub_1800634AC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_1800A8090(__int64 a1, _QWORD *a2)
{
  volatile signed __int32 *v4; // rbx
  __int64 *v5; // rax
  _QWORD v6[4]; // [rsp+48h] [rbp-90h] BYREF
  _QWORD v7[5]; // [rsp+68h] [rbp-70h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  sub_1800634AC(*a2 + 24LL, (__int64)a2);
  if ( *(_DWORD *)(a1 + 432) != 1 )
  {
    sub_18000E498(v7);
    v5 = sub_18000E498(v6);
    sub_180027770(pExceptionObject, v5, 510, (__int64)v7, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (volatile signed __int32 *)a2[1];
  if ( v4 && _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
    if ( !_InterlockedDecrement(v4 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
}
