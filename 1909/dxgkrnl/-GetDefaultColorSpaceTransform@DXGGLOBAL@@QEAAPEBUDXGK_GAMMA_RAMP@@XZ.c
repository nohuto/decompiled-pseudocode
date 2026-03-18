/*
 * XREFs of ?GetDefaultColorSpaceTransform@DXGGLOBAL@@QEAAPEBUDXGK_GAMMA_RAMP@@XZ @ 0x1C02441D4
 * Callers:
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00D38B4 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 * Callees:
 *     ?Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z @ 0x1C00026A4 (-Initialize@DXGK_GAMMA_RAMP@@QEAAJW4_D3DDDI_GAMMARAMP_TYPE@@PEBX@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0008FF4 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C5A0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     memset @ 0x1C0025440 (memset.c)
 */

const struct DXGK_GAMMA_RAMP *__fastcall DXGGLOBAL::GetDefaultColorSpaceTransform(DXGGLOBAL *this)
{
  _WORD *v2; // rax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __m128i v11; // xmm0

  if ( !*((_QWORD *)this + 38013) )
  {
    v2 = operator new[](0x30uLL, 0x4B677844u, PagedPool);
    if ( v2 )
    {
      v2[20] = 0;
      *((_QWORD *)v2 + 3) = 0LL;
      *((_QWORD *)v2 + 4) = 0LL;
      *(_QWORD *)v2 = &ReferenceCounted::`vftable';
      *(_QWORD *)v2 = &DXGK_GAMMA_RAMP::`vftable';
      *((_DWORD *)v2 + 2) = 1;
      *((_DWORD *)v2 + 4) = 1;
    }
    *((_QWORD *)this + 38013) = v2;
    if ( v2 )
    {
      v3 = DXGK_GAMMA_RAMP::Initialize((DXGK_GAMMA_RAMP *)v2, D3DDDI_GAMMARAMP_MATRIX_3x4, 0LL);
      v7 = v3;
      if ( v3 >= 0 )
      {
        LODWORD(v7) = 0;
        memset(*(void **)(*((_QWORD *)this + 38013) + 32LL), 0, 0xC034uLL);
        LODWORD(v10) = 0;
        **(_DWORD **)(*((_QWORD *)this + 38013) + 32LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + 20LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + 40LL) = 1065353216;
        *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + 48LL) = 1065353216;
        v9 = 0LL;
        do
        {
          v9 += 12LL;
          v11 = _mm_cvtsi32_si128(v10);
          v10 = (unsigned int)(v10 + 1);
          *(float *)v11.m128i_i32 = _mm_cvtepi32_ps(v11).m128_f32[0] / 4095.0;
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + v9 + 40) = v11.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + v9 + 44) = v11.m128i_i32[0];
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 38013) + 32LL) + v9 + 48) = v11.m128i_i32[0];
        }
        while ( (int)v10 < 4096 );
      }
      else
      {
        v8 = WdLogNewEntry5_WdError(v5, v4, v6);
        *(_QWORD *)(v8 + 24) = v7;
        WdLogEvent5_WdError(v8);
      }
      if ( (int)v7 < 0 )
      {
        ReferenceCounted::Release(*((ReferenceCounted **)this + 38013), v9, v10);
        *((_QWORD *)this + 38013) = 0LL;
      }
    }
  }
  return (const struct DXGK_GAMMA_RAMP *)*((_QWORD *)this + 38013);
}
