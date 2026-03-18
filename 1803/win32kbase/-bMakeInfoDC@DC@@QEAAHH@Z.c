/*
 * XREFs of ?bMakeInfoDC@DC@@QEAAHH@Z @ 0x1C0026B90
 * Callers:
 *     GreRestoreDCInternal @ 0x1C0077D70 (GreRestoreDCInternal.c)
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?bSetDefaultRegion@DC@@QEAAHXZ @ 0x1C0026E40 (-bSetDefaultRegion@DC@@QEAAHXZ.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0032FFC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

__int64 __fastcall DC::bMakeInfoDC(DC *this, int a2)
{
  int v2; // eax
  unsigned int v3; // edi
  void *v5; // rcx
  int v6; // eax
  struct tagSIZE v7; // rax
  int v8; // r9^4
  __int64 v10; // rdx
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128 v14; // xmm0
  unsigned __int64 v15; // rdx
  __m128 v16; // xmm0
  __int64 v17; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_DWORD *)this + 9);
  v3 = 0;
  if ( (v2 & 1) != 0 )
    return v3;
  if ( !a2 )
  {
    if ( (v2 & 0x800) == 0 || *((_DWORD *)this + 8) != 2 )
      return v3;
    v10 = *((_QWORD *)this + 311);
    *((_DWORD *)this + 9) = v2 & 0xFFFFF7FF;
    *((_DWORD *)this + 8) = 0;
    *((_QWORD *)this + 63) = v10;
    if ( v10 && (unsigned int)DC::bDpiScaledSurface(this) )
    {
      v15 = *(_QWORD *)(v13 + 660);
    }
    else
    {
      v11 = (void *)*((_QWORD *)this + 59);
      if ( !v11 || !(unsigned int)UserIsWindowGdiScaled(v11, &v17) || (_WORD)v17 == 96 )
      {
        DC::vClearDpiScaling(this);
        goto LABEL_18;
      }
      v16 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v16.m128_f32[0] = v16.m128_f32[0] / 96.0;
      v15 = _mm_unpacklo_ps(v16, v16).m128_u64[0];
    }
    DC::vSetDpiScaling(this, v15);
LABEL_18:
    v12 = *((_QWORD *)this + 63);
    *((_QWORD *)this + 311) = 0LL;
    if ( !v12 || *(_QWORD *)(v12 + 56) == *((_QWORD *)this + 65) )
      return 1;
    *((_QWORD *)this + 65) = *(_QWORD *)(v12 + 56);
LABEL_34:
    DC::bSetDefaultRegion(this);
    return 1;
  }
  if ( (v2 & 0x200000) == 0 && (v2 & 0x800) == 0 && !*((_DWORD *)this + 8) )
  {
    *((_DWORD *)this + 8) = 2;
    v5 = (void *)*((_QWORD *)this + 59);
    *((_DWORD *)this + 9) = v2 | 0x800;
    *((_QWORD *)this + 311) = *((_QWORD *)this + 63);
    *((_QWORD *)this + 63) = 0LL;
    if ( v5 && (unsigned int)UserIsWindowGdiScaled(v5, &v17) && (_WORD)v17 != 96 )
    {
      v14 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v14.m128_f32[0] = v14.m128_f32[0] / 96.0;
      DC::vSetDpiScaling(this, _mm_unpacklo_ps(v14, v14).m128_u64[0]);
    }
    else
    {
      v6 = *((_DWORD *)this + 132);
      if ( (v6 & 1) != 0 )
      {
        *((_DWORD *)this + 9) |= 0x10u;
        *(_QWORD *)((char *)this + 532) = 0LL;
        *((_DWORD *)this + 132) = v6 & 0xFFFFFFF8 | 4;
        *(_QWORD *)((char *)this + 540) = 0LL;
        DC::vUpdateCachedDPIScaleValue(this);
      }
    }
    v17 = *((_QWORD *)this + 6);
    if ( *(_DWORD *)PDEVOBJ::sizl((PDEVOBJ *)&v17).cx == *((_DWORD *)this + 130) )
    {
      v7 = PDEVOBJ::sizl((PDEVOBJ *)&v17);
      if ( *(_DWORD *)(*(_QWORD *)&v7 + 4LL) == v8 )
        return 1;
    }
    *((_QWORD *)this + 65) = **(_QWORD **)&PDEVOBJ::sizl((PDEVOBJ *)&v17);
    goto LABEL_34;
  }
  return v3;
}
