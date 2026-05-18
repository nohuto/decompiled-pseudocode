/*
 * XREFs of sub_1800C2A10 @ 0x1800C2A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_1800B106C @ 0x1800B106C (sub_1800B106C.c)
 *     sub_1800B1114 @ 0x1800B1114 (sub_1800B1114.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C2A10(__int64 a1, __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v7; // r10
  __int64 v8; // r8
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rdx
  signed __int32 v11; // eax
  __m128 v12; // xmm0
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  double v16; // xmm0_8
  unsigned int v17; // xmm8_4
  double v18; // xmm0_8
  unsigned int v19; // xmm7_4
  double v20; // xmm0_8
  unsigned int v21; // xmm6_4
  __m128 v22; // xmm3
  _DWORD *v23; // rax
  bool v24; // zf
  __int64 v25; // rax
  float v26; // xmm0_4
  __int64 v27; // rcx
  __m128 v28; // xmm6
  __int64 v29; // rbx
  _BYTE v30[32]; // [rsp+38h] [rbp-49h] BYREF
  __int128 v31; // [rsp+58h] [rbp-29h]
  __m128 v32; // [rsp+68h] [rbp-19h]

  v7 = *a2;
  v8 = 0LL;
  v9 = 0LL;
  v10 = *(_QWORD *)(*a2 + 64);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      if ( !v11 )
        break;
      if ( v11 == _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11) )
      {
        v8 = *(_QWORD *)(v7 + 56);
        v9 = *(volatile signed __int32 **)(v7 + 64);
        break;
      }
    }
  }
  v12 = 0LL;
  v31 = 0LL;
  v13 = *(_QWORD *)(v8 + 80);
  if ( v13 )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( !v14 )
        break;
      if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
      {
        v31 = *(_OWORD *)(v8 + 72);
        break;
      }
    }
  }
  if ( v9 )
  {
    if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
      if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
    }
  }
  v15 = sub_180077A8C(a1, *(_DWORD *)(v31 + 112));
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v15 + 64LL))(v15, &unk_180259958, 0LL) )
  {
    v16 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_1802598D8);
    v17 = LODWORD(v16);
    v18 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_1802598F8);
    v19 = LODWORD(v18);
    v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_180259918);
    v21 = LODWORD(v20);
    *(float *)&v20 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_180259938);
    v32.m128_u64[0] = __PAIR64__(v19, v17);
    v32.m128_u64[1] = __PAIR64__(LODWORD(v20), v21);
    v22 = _mm_mul_ps(
            _mm_or_ps(
              _mm_and_ps(_mm_shuffle_ps(v32, v32, 255), (__m128)xmmword_180143F10),
              _mm_andnot_ps((__m128)xmmword_180143F10, (__m128)xmmword_180143DB0)),
            v32);
    v32 = v22;
    v23 = (_DWORD *)*a2;
    v23[74] = v22.m128_i32[0];
    v12 = _mm_shuffle_ps(v22, v22, 85);
    v23[75] = v12.m128_i32[0];
    v23[76] = _mm_shuffle_ps(v22, v22, 170).m128_u32[0];
    v23[77] = _mm_shuffle_ps(v22, v22, 255).m128_u32[0];
  }
  v24 = *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(*(_QWORD *)*a4 + 8LL))(*a4, v30) == 2;
  v25 = *a2;
  if ( v24 )
  {
    v12.m128_u64[1] = *((_QWORD *)&xmmword_18026C280 + 1);
    *(_OWORD *)(v25 + 296) = xmmword_18026C280;
  }
  if ( (*(_DWORD *)(v25 + 440) & 0x100) != 0 )
  {
    if ( (*(_DWORD *)(v25 + 440) & 0x2000000) != 0 )
    {
      v26 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v15 + 88LL))(v15, &unk_18025BDD8);
      v27 = *a2;
      if ( v26 != *(float *)(*a2 + 328) )
      {
        *(float *)(v27 + 328) = v26;
        sub_1800B1114(v27, 2);
      }
    }
    *(double *)v12.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 112LL))(*a4);
    v28 = v12;
    *(double *)v12.m128_u64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 120LL))(*a4);
    sub_1800B106C(*a2, _mm_unpacklo_ps(v28, v12).m128_i64[0]);
  }
  if ( *((_QWORD *)&v31 + 1) && !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v31 + 1) + 8LL)) )
  {
    v29 = *((_QWORD *)&v31 + 1);
    (***((void (__fastcall ****)(_QWORD))&v31 + 1))(*((_QWORD *)&v31 + 1));
    if ( !_InterlockedDecrement((volatile signed __int32 *)(v29 + 12)) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v31 + 1) + 8LL))(*((_QWORD *)&v31 + 1));
  }
}
