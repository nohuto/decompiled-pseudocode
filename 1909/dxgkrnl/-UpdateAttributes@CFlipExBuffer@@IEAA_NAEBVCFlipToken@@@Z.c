/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C001682C
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0016640 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0023340 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C005D040 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v3; // xmm6
  char v5; // si
  char v6; // al
  unsigned int v7; // edx
  int v8; // ecx
  int v9; // eax
  char v10; // al
  unsigned int v11; // edx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  __m128i v16; // xmm1
  __m128i v17; // xmm1
  int v18; // eax
  int v19; // eax
  __m128 v20; // xmm2
  __int64 v21; // xmm3_8
  int v22; // eax
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rcx

  v3 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 120));
  v5 = 0;
  if ( *((_DWORD *)this + 13) != (*(unsigned int (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 120LL))(a2) )
  {
    *((_DWORD *)this + 13) = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 120LL))(a2);
    v5 = 1;
  }
  v6 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2);
  v7 = *((_DWORD *)this + 41);
  if ( ((v7 >> 12) & 1) != v6 )
  {
    v5 = 1;
    *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 128LL))(a2) << 12)) & 0x1000;
    v7 = *((_DWORD *)this + 41);
  }
  v8 = *((unsigned __int8 *)a2 + 118);
  if ( (v7 & 1) != v8 )
  {
    v5 = 1;
    *((_DWORD *)this + 41) = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)v8) & 1;
  }
  v9 = *((_DWORD *)a2 + 36);
  if ( *((_DWORD *)this + 28) != v9 )
  {
    *((_DWORD *)this + 28) = v9;
    v5 = 1;
  }
  v10 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2);
  v11 = *((_DWORD *)this + 41);
  if ( ((v11 >> 5) & 1) != (v10 != 0) )
  {
    v5 = 1;
    v11 = ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 144LL))(a2) != 0 ? 0x20 : 0) | *((_DWORD *)this + 41) & 0xFFFFFFDF;
    *((_DWORD *)this + 41) = v11;
  }
  if ( *((float *)this + 17) != v3.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v3, v3, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v3, v3, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v3, v3, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v3;
    v5 = 1;
  }
  v12 = *((unsigned __int8 *)a2 + 136);
  if ( ((v11 >> 2) & 1) != v12 )
  {
    v5 = 1;
    v11 ^= ((unsigned __int8)v11 ^ (unsigned __int8)(4 * v12)) & 4;
    *((_DWORD *)this + 41) = v11;
  }
  v13 = *((_DWORD *)a2 + 53);
  if ( *((_DWORD *)this + 21) != v13 )
  {
    *((_DWORD *)this + 21) = v13;
    v5 = 1;
  }
  v14 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 12) != v14 )
  {
    *((_DWORD *)this + 12) = v14;
    v5 = 1;
  }
  v15 = *((unsigned __int8 *)a2 + 137);
  if ( ((v11 >> 3) & 1) != v15 )
  {
    v5 = 1;
    *((_DWORD *)this + 41) = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(8 * v15)) & 8;
  }
  v16 = *(__m128i *)((char *)a2 + 148);
  if ( *((_QWORD *)this + 12) != *(_QWORD *)((char *)a2 + 148)
    || *((_QWORD *)this + 13) != _mm_srli_si128(v16, 8).m128i_u64[0] )
  {
    *((__m128i *)this + 6) = v16;
    v5 = 1;
  }
  v17 = *(__m128i *)((char *)a2 + 164);
  if ( *(_QWORD *)((char *)this + 148) != *(_QWORD *)((char *)a2 + 164)
    || *(_QWORD *)((char *)this + 156) != _mm_srli_si128(v17, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 148) = v17;
    v5 = 1;
  }
  v18 = *((_DWORD *)a2 + 45);
  if ( *((_DWORD *)this + 35) != v18 )
  {
    *((_DWORD *)this + 35) = v18;
    v5 = 1;
  }
  v19 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 36) != v19 )
  {
    *((_DWORD *)this + 36) = v19;
    v5 = 1;
  }
  v20 = *(__m128 *)((char *)a2 + 188);
  v21 = *(_QWORD *)((char *)a2 + 204);
  if ( *((float *)this + 29) != v20.m128_f32[0]
    || *((float *)this + 30) != _mm_shuffle_ps(v20, v20, 85).m128_f32[0]
    || *((float *)this + 31) != _mm_shuffle_ps(v20, v20, 170).m128_f32[0]
    || *((float *)this + 32) != _mm_shuffle_ps(v20, v20, 255).m128_f32[0]
    || *((float *)this + 33) != *(float *)&v21
    || *((float *)this + 34) != *((float *)&v21 + 1) )
  {
    *(__m128 *)((char *)this + 116) = v20;
    v5 = 1;
    *(_QWORD *)((char *)this + 132) = v21;
  }
  v22 = *((_DWORD *)a2 + 54);
  if ( *((_DWORD *)this + 23) != v22 )
  {
    *((_DWORD *)this + 23) = v22;
    v5 = 1;
  }
  *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (*((unsigned __int8 *)a2 + 138) << 10)) & 0x400;
  if ( (*((_DWORD *)this + 41) & 0x400) != 0 )
  {
    v24 = *((_DWORD *)a2 + 55);
    *((_DWORD *)this + 86) = v24;
    if ( v24 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        *((_DWORD *)this + 86) = 0;
      }
      else if ( *((_DWORD *)this + 86) == 1 )
      {
        v26 = *((_QWORD *)this + 42);
        *(_OWORD *)v26 = *((_OWORD *)a2 + 14);
        *(_QWORD *)(v26 + 16) = *((_QWORD *)a2 + 30);
        *(_DWORD *)(v26 + 24) = *((_DWORD *)a2 + 62);
      }
      else if ( *((_DWORD *)this + 86) == 2 )
      {
        v25 = *((_QWORD *)this + 42);
        *(_OWORD *)v25 = *((_OWORD *)a2 + 14);
        *(_OWORD *)(v25 + 16) = *((_OWORD *)a2 + 15);
        *(_OWORD *)(v25 + 32) = *((_OWORD *)a2 + 16);
        *(_OWORD *)(v25 + 48) = *((_OWORD *)a2 + 17);
        *(_QWORD *)(v25 + 64) = *((_QWORD *)a2 + 36);
      }
    }
    return 1;
  }
  return v5;
}
