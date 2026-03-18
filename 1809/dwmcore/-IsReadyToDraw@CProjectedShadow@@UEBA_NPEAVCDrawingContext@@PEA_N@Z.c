/*
 * XREFs of ?IsReadyToDraw@CProjectedShadow@@UEBA_NPEAVCDrawingContext@@PEA_N@Z @ 0x1801CB870
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801AD7D4 (-GetCasterBounds@CProjectedShadowCaster@@QEBAXPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AD988 (-GetEffectiveMaskBrush@CProjectedShadowCaster@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 *     ?GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ @ 0x1801AEDF0 (-GetEffectiveMaskBrush@CProjectedShadowReceiver@@QEAAPEAVCSpriteVisualContent@@XZ.c)
 */

char __fastcall CProjectedShadow::IsReadyToDraw(CProjectedShadow *this, struct CDrawingContext *a2, bool *a3)
{
  bool v3; // bl
  CProjectedShadowCaster *v5; // rcx
  char v8; // di
  struct CSpriteVisualContent *EffectiveMaskBrush; // rax
  struct CSpriteVisualContent *v10; // rax
  char v11; // al
  float v12; // xmm2_4
  char v14; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v15[7]; // [rsp+21h] [rbp-47h] BYREF
  float v16[4]; // [rsp+28h] [rbp-40h] BYREF

  v3 = 0;
  v5 = (CProjectedShadowCaster *)*((_QWORD *)this + 9);
  v14 = 0;
  v15[0] = 0;
  v8 = 1;
  if ( *((_QWORD *)v5 + 7) && *(_QWORD *)(*((_QWORD *)this + 10) + 56LL) )
  {
    EffectiveMaskBrush = CProjectedShadowCaster::GetEffectiveMaskBrush(v5);
    if ( EffectiveMaskBrush )
      v8 = (*(__int64 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, char *))(*(_QWORD *)EffectiveMaskBrush + 280LL))(
             EffectiveMaskBrush,
             a2,
             &v14);
    v10 = CProjectedShadowReceiver::GetEffectiveMaskBrush(*((CProjectedShadowReceiver **)this + 10));
    if ( v10 )
    {
      if ( !v8
        || (v8 = 1,
            !(*(unsigned __int8 (__fastcall **)(struct CSpriteVisualContent *, struct CDrawingContext *, _BYTE *))(*(_QWORD *)v10 + 280LL))(
               v10,
               a2,
               v15)) )
      {
        v8 = 0;
      }
    }
    CProjectedShadowCaster::GetCasterBounds(*((_QWORD *)this + 9), (__int64)v16);
    if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16[2] - v16[0])) & _xmm) < 0.0000011920929
      || (v11 = 0, v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v16[3] - v16[1])) & _xmm), v12 < 0.0000011920929) )
    {
      v11 = 1;
    }
    if ( v14 || v15[0] || v11 )
      v3 = 1;
    *a3 = v3;
    return v8;
  }
  else
  {
    *a3 = 1;
    return 0;
  }
}
