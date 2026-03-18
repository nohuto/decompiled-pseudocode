/*
 * XREFs of ?UpdateAttributes@CFlipExBuffer@@IEAA_NAEBVCFlipToken@@@Z @ 0x1C00169A4
 * Callers:
 *     ?NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z @ 0x1C0016760 (-NotifyTokenInFrame@CFlipExBuffer@@UEAAJAEBVCToken@@PEA_N@Z.c)
 * Callees:
 *     ?GetTransform@CFlipToken@@QEBAXPEAM@Z @ 0x1C0016D24 (-GetTransform@CFlipToken@@QEBAXPEAM@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ @ 0x1C00560C0 (-EnsureHDR10MetaData@CFlipExBuffer@@IEAAJXZ.c)
 */

char __fastcall CFlipExBuffer::UpdateAttributes(CFlipExBuffer *this, const struct CFlipToken *a2)
{
  __m128 v2; // xmm6
  int v4; // edx
  char v6; // si
  int v7; // ecx
  int v8; // eax
  char v9; // al
  unsigned int v10; // edx
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  int v14; // ecx
  __m128i v15; // xmm1
  __m128i v16; // xmm1
  int v17; // eax
  int v18; // eax
  int v19; // eax
  __int64 v21; // xmm1_8
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // [rsp+20h] [rbp-30h] BYREF
  __int64 v26; // [rsp+30h] [rbp-20h]

  v2 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 + 120));
  v4 = *((_DWORD *)this + 41);
  v25 = 0uLL;
  v6 = 0;
  v7 = *((unsigned __int8 *)a2 + 117);
  v26 = 0LL;
  if ( (v4 & 1) != v7 )
  {
    v6 = 1;
    *((_DWORD *)this + 41) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)v7) & 1;
  }
  v8 = *((_DWORD *)a2 + 36);
  if ( *((_DWORD *)this + 28) != v8 )
  {
    *((_DWORD *)this + 28) = v8;
    v6 = 1;
  }
  v9 = (*(__int64 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2);
  v10 = *((_DWORD *)this + 41);
  if ( ((v10 >> 5) & 1) != (v9 != 0) )
  {
    v6 = 1;
    v10 = ((*(unsigned __int8 (__fastcall **)(const struct CFlipToken *))(*(_QWORD *)a2 + 136LL))(a2) != 0 ? 0x20 : 0) | *((_DWORD *)this + 41) & 0xFFFFFFDF;
    *((_DWORD *)this + 41) = v10;
  }
  if ( *((float *)this + 17) != v2.m128_f32[0]
    || *((float *)this + 18) != _mm_shuffle_ps(v2, v2, 85).m128_f32[0]
    || *((float *)this + 19) != _mm_shuffle_ps(v2, v2, 170).m128_f32[0]
    || *((float *)this + 20) != _mm_shuffle_ps(v2, v2, 255).m128_f32[0] )
  {
    *(__m128 *)((char *)this + 68) = v2;
    v6 = 1;
  }
  v11 = *((unsigned __int8 *)a2 + 136);
  if ( ((v10 >> 2) & 1) != v11 )
  {
    v6 = 1;
    v10 ^= ((unsigned __int8)v10 ^ (unsigned __int8)(4 * v11)) & 4;
    *((_DWORD *)this + 41) = v10;
  }
  v12 = *((_DWORD *)a2 + 53);
  if ( *((_DWORD *)this + 21) != v12 )
  {
    *((_DWORD *)this + 21) = v12;
    v6 = 1;
  }
  v13 = *((_DWORD *)a2 + 35);
  if ( *((_DWORD *)this + 12) != v13 )
  {
    *((_DWORD *)this + 12) = v13;
    v6 = 1;
  }
  v14 = *((unsigned __int8 *)a2 + 137);
  if ( ((v10 >> 3) & 1) != v14 )
  {
    v6 = 1;
    *((_DWORD *)this + 41) = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(8 * v14)) & 8;
  }
  v15 = *(__m128i *)((char *)a2 + 148);
  if ( *((_QWORD *)this + 12) != *(_QWORD *)((char *)a2 + 148)
    || *((_QWORD *)this + 13) != _mm_srli_si128(v15, 8).m128i_u64[0] )
  {
    *((__m128i *)this + 6) = v15;
    v6 = 1;
  }
  v16 = *(__m128i *)((char *)a2 + 164);
  if ( *(_QWORD *)((char *)this + 148) != *(_QWORD *)((char *)a2 + 164)
    || *(_QWORD *)((char *)this + 156) != _mm_srli_si128(v16, 8).m128i_u64[0] )
  {
    *(__m128i *)((char *)this + 148) = v16;
    v6 = 1;
  }
  v17 = *((_DWORD *)a2 + 45);
  if ( *((_DWORD *)this + 35) != v17 )
  {
    *((_DWORD *)this + 35) = v17;
    v6 = 1;
  }
  v18 = *((_DWORD *)a2 + 46);
  if ( *((_DWORD *)this + 36) != v18 )
  {
    *((_DWORD *)this + 36) = v18;
    v6 = 1;
  }
  CFlipToken::GetTransform(a2, (float *)&v25);
  if ( *((float *)this + 29) != *(float *)&v25
    || *((float *)this + 30) != *((float *)&v25 + 1)
    || *((float *)this + 31) != *((float *)&v25 + 2)
    || *((float *)this + 32) != *((float *)&v25 + 3)
    || *((float *)this + 33) != *(float *)&v26
    || *((float *)this + 34) != *((float *)&v26 + 1) )
  {
    v6 = 1;
    v21 = v26;
    *(_OWORD *)((char *)this + 116) = v25;
    *(_QWORD *)((char *)this + 132) = v21;
  }
  v19 = *((_DWORD *)a2 + 54);
  if ( *((_DWORD *)this + 23) != v19 )
  {
    *((_DWORD *)this + 23) = v19;
    v6 = 1;
  }
  *((_DWORD *)this + 41) ^= (*((_DWORD *)this + 41) ^ (*((unsigned __int8 *)a2 + 138) << 10)) & 0x400;
  if ( (*((_DWORD *)this + 41) & 0x400) != 0 )
  {
    v22 = *((_DWORD *)a2 + 55);
    *((_DWORD *)this + 86) = v22;
    if ( v22 )
    {
      if ( (int)CFlipExBuffer::EnsureHDR10MetaData(this) < 0 )
      {
        *((_DWORD *)this + 86) = 0;
      }
      else if ( *((_DWORD *)this + 86) == 1 )
      {
        v24 = *((_QWORD *)this + 42);
        *(_OWORD *)v24 = *((_OWORD *)a2 + 14);
        *(_QWORD *)(v24 + 16) = *((_QWORD *)a2 + 30);
        *(_DWORD *)(v24 + 24) = *((_DWORD *)a2 + 62);
      }
      else if ( *((_DWORD *)this + 86) == 2 )
      {
        v23 = *((_QWORD *)this + 42);
        *(_OWORD *)v23 = *((_OWORD *)a2 + 14);
        *(_OWORD *)(v23 + 16) = *((_OWORD *)a2 + 15);
        *(_OWORD *)(v23 + 32) = *((_OWORD *)a2 + 16);
        *(_OWORD *)(v23 + 48) = *((_OWORD *)a2 + 17);
        *(_QWORD *)(v23 + 64) = *((_QWORD *)a2 + 36);
      }
    }
    return 1;
  }
  return v6;
}
