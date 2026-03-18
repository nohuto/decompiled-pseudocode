/*
 * XREFs of ??1MULTIPANSURFLOCK@@QEAA@XZ @ 0x1C028E7B8
 * Callers:
 *     ?PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C028E8B0 (-PanAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z.c)
 *     ?PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C028EA20 (-PanBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 *     ?PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C028F9E0 (-PanStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POI.c)
 *     ?PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0290170 (-PanTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z.c)
 * Callees:
 *     ?vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0291274 (-vUnLockBmp1AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0291330 (-vUnLockBmp2AndRemovePunt@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0291474 (-vUnLockShadowR@MULTIPANSURFLOCK@@QEAAXXZ.c)
 *     ?vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ @ 0x1C0291508 (-vUnLockShadowW@MULTIPANSURFLOCK@@QEAAXXZ.c)
 */

void __fastcall MULTIPANSURFLOCK::~MULTIPANSURFLOCK(MULTIPANSURFLOCK *this)
{
  __int64 v1; // rax
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( *(_QWORD *)this == v1 )
  {
    if ( !*((_QWORD *)this + 4) && !*((_QWORD *)this + 5) )
    {
      MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(this);
      return;
    }
    if ( *((_BYTE *)this + 48) == 1 )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    _InterlockedOr(v3, 0);
    if ( *((_BYTE *)this + 49) == 1 )
      goto LABEL_18;
  }
  else
  {
    if ( v1 && !*((_QWORD *)this + 5) )
      MULTIPANSURFLOCK::vUnLockBmp2AndRemovePunt(this);
    _InterlockedOr(v3, 0);
    if ( *(_QWORD *)this && !*((_QWORD *)this + 4) )
      MULTIPANSURFLOCK::vUnLockBmp1AndRemovePunt(this);
    if ( *((_BYTE *)this + 48) )
      MULTIPANSURFLOCK::vUnLockShadowR(this);
    _InterlockedOr(v3, 0);
    if ( *((_BYTE *)this + 49) )
LABEL_18:
      MULTIPANSURFLOCK::vUnLockShadowW(this);
  }
}
