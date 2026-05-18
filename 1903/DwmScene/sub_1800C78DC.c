/*
 * XREFs of sub_1800C78DC @ 0x1800C78DC
 * Callers:
 *     sub_1800BE470 @ 0x1800BE470 (sub_1800BE470.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 * Callees:
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 *     sub_1800FE47C @ 0x1800FE47C (sub_1800FE47C.c)
 *     sub_1800FE498 @ 0x1800FE498 (sub_1800FE498.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800C78DC(__int64 a1, _QWORD *a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v9; // r10
  __int64 v10; // r9
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rdx
  signed __int32 v13; // eax
  __int64 v14; // rdx
  signed __int32 v15; // eax
  __int64 v16; // rdi
  float v17; // xmm6_4
  float v18; // xmm2_4
  unsigned int v19; // xmm1_4
  volatile signed __int32 *v20; // rbx
  volatile signed __int32 *v21; // rbx
  __m128 v22; // xmm3
  __m128 v23; // xmm3
  __m128 v24; // xmm0
  __m128 v25; // xmm0
  __int64 v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // [rsp+28h] [rbp-69h] BYREF
  volatile signed __int32 *v29; // [rsp+30h] [rbp-61h]
  __int64 v30; // [rsp+38h] [rbp-59h] BYREF
  volatile signed __int32 *v31; // [rsp+40h] [rbp-51h]
  unsigned __int64 v32; // [rsp+48h] [rbp-49h] BYREF
  int v33; // [rsp+50h] [rbp-41h]
  int v34; // [rsp+60h] [rbp-31h]
  __int64 v35; // [rsp+68h] [rbp-29h]
  __int64 v36; // [rsp+70h] [rbp-21h]
  unsigned int v37; // [rsp+78h] [rbp-19h]
  __int128 v38; // [rsp+80h] [rbp-11h] BYREF
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+5Fh] BYREF

  result = (__int64)&retaddr;
  v35 = -2LL;
  v9 = *a2;
  if ( *a2 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = *(_QWORD *)(v9 + 64);
    if ( v12 )
    {
      while ( 1 )
      {
        v13 = *(_DWORD *)(v12 + 8);
        if ( !v13 )
          break;
        if ( v13 == _InterlockedCompareExchange((volatile signed __int32 *)(v12 + 8), v13 + 1, v13) )
        {
          v10 = *(_QWORD *)(v9 + 56);
          v11 = *(volatile signed __int32 **)(v9 + 64);
          break;
        }
      }
    }
    v38 = 0LL;
    v14 = *(_QWORD *)(v10 + 80);
    if ( v14 )
    {
      while ( 1 )
      {
        v15 = *(_DWORD *)(v14 + 8);
        if ( !v15 )
          break;
        if ( v15 == _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 8), v15 + 1, v15) )
        {
          v38 = *(_OWORD *)(v10 + 72);
          break;
        }
      }
    }
    if ( v11 )
    {
      if ( _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
        if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
      }
    }
    v16 = sub_18007797C(a1, *(_DWORD *)(v38 + 112));
    v36 = qword_18025DEE8;
    v37 = dword_18025DEF0;
    v17 = 0.0;
    v30 = 0LL;
    v31 = 0LL;
    result = (__int64)sub_1800C1DD4(a1, &v30, (__int64 *)&v38);
    if ( v30 )
    {
      v28 = 0LL;
      v29 = 0LL;
      sub_180012630(v30, &v28);
      result = v28;
      if ( v28 )
      {
        v18 = *(float *)(v28 + 104);
        v17 = v18 + v18;
        v19 = *(_DWORD *)(v28 + 108);
        LODWORD(v36) = *(_DWORD *)(v28 + 100);
        *((float *)&v36 + 1) = v18;
        v37 = v19;
      }
      if ( v29 )
      {
        result = (unsigned int)_InterlockedDecrement(v29 + 2);
        if ( !(_DWORD)result )
        {
          v20 = v29;
          (**(void (__fastcall ***)(volatile signed __int32 *))v29)(v29);
          result = (unsigned int)_InterlockedDecrement(v20 + 3);
          if ( !(_DWORD)result )
            result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v29 + 8LL))(v29);
        }
      }
    }
    if ( v31 )
    {
      result = (unsigned int)_InterlockedDecrement(v31 + 2);
      if ( !(_DWORD)result )
      {
        v21 = v31;
        (**(void (__fastcall ***)(volatile signed __int32 *))v31)(v31);
        result = (unsigned int)_InterlockedDecrement(v21 + 3);
        if ( !(_DWORD)result )
          result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v31 + 8LL))(v31);
      }
    }
    v22 = _mm_movelh_ps((__m128)(unsigned __int64)v36, (__m128)v37);
    v23 = _mm_mul_ps(v22, v22);
    v24 = _mm_shuffle_ps(v23, v23, 102);
    v25 = _mm_shuffle_ps(v24, v24, 85);
    if ( a3 )
    {
      *(double *)v25.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_18025B038);
      v25.m128_f32[0] = v25.m128_f32[0] * v17;
      v34 = 0;
      v32 = _mm_unpacklo_ps((__m128)0LL, v25).m128_u64[0];
      v33 = 0;
      result = sub_1800FE47C(*a2, &v32);
    }
    if ( a4 )
    {
      v26 = *a2;
      (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v16 + 88LL))(v16, &unk_18025AE38);
      result = sub_1800FE498(v26);
    }
    if ( *((_QWORD *)&v38 + 1) )
    {
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v38 + 1) + 8LL));
      if ( !(_DWORD)result )
      {
        v27 = *((_QWORD *)&v38 + 1);
        (***((void (__fastcall ****)(_QWORD))&v38 + 1))(*((_QWORD *)&v38 + 1));
        result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 12));
        if ( !(_DWORD)result )
          return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v38 + 1) + 8LL))(*((_QWORD *)&v38 + 1));
      }
    }
  }
  return result;
}
