/*
 * XREFs of sub_18000E4F4 @ 0x18000E4F4
 * Callers:
 *     sub_180014818 @ 0x180014818 (sub_180014818.c)
 * Callees:
 *     sub_180027858 @ 0x180027858 (sub_180027858.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000E4F4(
        __int64 a1,
        _OWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        int a5,
        int a6,
        unsigned int a7,
        float X)
{
  unsigned int v11; // eax
  float v12; // xmm0_4
  volatile signed __int32 *v13; // rbx
  volatile signed __int32 *v14; // rbx
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h]
  _QWORD *v18; // [rsp+30h] [rbp-50h]
  __int64 v19; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+48h] [rbp-38h]
  _QWORD *v22; // [rsp+50h] [rbp-30h]
  _OWORD v23[2]; // [rsp+60h] [rbp-20h] BYREF

  v21 = -2LL;
  v18 = a3;
  v22 = a4;
  v16 = *a4;
  v17 = a4[1];
  *a4 = 0LL;
  a4[1] = 0LL;
  v19 = *a3;
  v20 = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  v23[0] = *a2;
  v23[1] = a2[1];
  sub_180027858(a1, v23, &v19, &v16, v16, v17, v18, v19, v20, v21, v22);
  *(_QWORD *)a1 = &RenderOutputDwm::`vftable';
  *(_QWORD *)(a1 + 1696) = 0LL;
  *(_DWORD *)(a1 + 1704) = a5;
  *(_DWORD *)(a1 + 1708) = a6;
  v11 = 1;
  if ( a7 > 1 )
    v11 = a7;
  *(_DWORD *)(a1 + 1712) = v11;
  v12 = fmaxf(X, 0.0);
  *(float *)(a1 + 1716) = fminf(v12, 1.0);
  v13 = (volatile signed __int32 *)a3[1];
  if ( v13 )
  {
    if ( _InterlockedExchangeAdd(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( _InterlockedExchangeAdd(v13 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
  }
  v14 = (volatile signed __int32 *)a4[1];
  if ( v14 )
  {
    if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( _InterlockedExchangeAdd(v14 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
  }
  return a1;
}
