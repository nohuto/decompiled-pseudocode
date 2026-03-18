/*
 * XREFs of vDynamicConvertNewSurfaceDCs @ 0x1C00487A0
 * Callers:
 *     bDynamicProcessAllDriverRealizations @ 0x1C0049830 (bDynamicProcessAllDriverRealizations.c)
 *     pProcessDfbSurfacesInternal @ 0x1C0049C10 (pProcessDfbSurfacesInternal.c)
 * Callees:
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C001D470 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C002AC00 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002C830 (HmgIncrementShareReferenceCount.c)
 *     HmgSafeNextObjt @ 0x1C0049980 (HmgSafeNextObjt.c)
 *     HmgQueryAltLock @ 0x1C006AF70 (HmgQueryAltLock.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 *     ?vUpdateCachedDPIScaleValue@DC@@QEAAXXZ @ 0x1C00C0610 (-vUpdateCachedDPIScaleValue@DC@@QEAAXXZ.c)
 */

DC *__fastcall vDynamicConvertNewSurfaceDCs(__int64 a1, struct OBJECT *a2)
{
  struct OBJECT *v2; // rbp
  __int64 i; // rcx
  DC *result; // rax
  DC *v5; // rbx
  struct OBJECT *v6; // rdi
  __int64 v7; // rsi
  void *v8; // rcx
  int v9; // eax
  unsigned __int64 v10; // rdx
  __m128 v11; // xmm0
  __int16 v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = a2;
  for ( i = 0LL; ; i = *(_QWORD *)v5 )
  {
    LOBYTE(a2) = 1;
    result = (DC *)HmgSafeNextObjt(i, a2);
    v5 = result;
    if ( !result )
      break;
    v6 = (struct OBJECT *)*((_QWORD *)result + 63);
    if ( !v6 )
      continue;
    v7 = *((_QWORD *)v6 + 70);
    if ( !v7 )
      continue;
    *((_QWORD *)result + 63) = v7;
    if ( (unsigned int)DC::bDpiScaledSurface(result) )
    {
      v10 = *(_QWORD *)(v7 + 660);
LABEL_16:
      DC::vSetDpiScaling(v5, v10);
      goto LABEL_10;
    }
    v8 = (void *)*((_QWORD *)v5 + 59);
    if ( v8 && (unsigned int)UserIsWindowGdiScaled(v8, &v12) && v12 != 96 )
    {
      v11 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
      v11.m128_f32[0] = v11.m128_f32[0] / 96.0;
      v10 = _mm_unpacklo_ps(v11, v11).m128_u64[0];
      goto LABEL_16;
    }
    v9 = *((_DWORD *)v5 + 132);
    if ( (v9 & 1) != 0 )
    {
      *((_DWORD *)v5 + 133) = 0;
      *((_DWORD *)v5 + 134) = 0;
      *((_DWORD *)v5 + 135) = 0;
      *((_DWORD *)v5 + 136) = 0;
      *((_DWORD *)v5 + 9) |= 0x10u;
      *((_DWORD *)v5 + 132) = v9 & 0xFFFFFFF8 | 4;
      DC::vUpdateCachedDPIScaleValue(v5);
    }
LABEL_10:
    *((_DWORD *)v5 + 81) |= 0xFu;
    HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v7);
    if ( (unsigned int)HmgQueryAltLock(*(_QWORD *)v6) == 1 )
    {
      *((_QWORD *)v6 + 70) = 0LL;
      result = (DC *)SURFACE::bDeleteSurface((__int64)v6, 0, 0);
      if ( v6 == v2 )
        return result;
    }
    else
    {
      HmgDecrementShareReferenceCountEx(v6, 0LL);
    }
  }
  return result;
}
