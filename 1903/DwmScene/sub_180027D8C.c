/*
 * XREFs of sub_180027D8C @ 0x180027D8C
 * Callers:
 *     sub_18001C760 @ 0x18001C760 (sub_18001C760.c)
 * Callees:
 *     sub_180027858 @ 0x180027858 (sub_180027858.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180027D8C(_QWORD *a1, _OWORD *a2, _QWORD *a3, __int64 *a4)
{
  volatile signed __int32 *v7; // rbx
  volatile signed __int32 *v8; // rbx
  __int64 v10[2]; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v11[3]; // [rsp+38h] [rbp-38h] BYREF
  _OWORD v12[2]; // [rsp+50h] [rbp-20h] BYREF

  v10[0] = *a4;
  v10[1] = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v11[0] = *a3;
  v11[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v12[0] = *a2;
  v12[1] = a2[1];
  sub_180027858((__int64)a1, v12, v11, v10);
  *a1 = &Spectre::Engine::D3D11::RenderOutputD3D11Xaml::`vftable';
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    if ( _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  v8 = (volatile signed __int32 *)a4[1];
  if ( v8 )
  {
    if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
    }
  }
  return a1;
}
