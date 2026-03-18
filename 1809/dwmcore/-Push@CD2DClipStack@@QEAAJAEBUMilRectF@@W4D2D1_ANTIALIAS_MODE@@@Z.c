/*
 * XREFs of ?Push@CD2DClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x180014F80
 * Callers:
 *     ?PushGpuClipToScope@CScopedClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800301C8 (-PushGpuClipToScope@CScopedClipStack@@QEAAJAEBUMilRectF@@W4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 * Callees:
 *     ?Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z @ 0x180014FE4 (-Push@CBaseClipStack@@IEAAJAEBUMilRectF@@@Z.c)
 *     ?RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800150C8 (-RoundWithHalvesDown@@YAXAEBUMilRectF@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CD2DClipStack::Push(CD2DClipStack *this, const struct MilRectF *a2, enum D2D1_ANTIALIAS_MODE a3)
{
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF

  if ( a3 == D2D1_ANTIALIAS_MODE_ALIASED )
    RoundWithHalvesDown(a2, &v5);
  else
    v5 = *(_OWORD *)a2;
  return CBaseClipStack::Push(this, (const struct MilRectF *)&v5);
}
