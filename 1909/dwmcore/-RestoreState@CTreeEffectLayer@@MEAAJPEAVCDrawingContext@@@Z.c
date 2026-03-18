/*
 * XREFs of ?RestoreState@CTreeEffectLayer@@MEAAJPEAVCDrawingContext@@@Z @ 0x18000CD80
 * Callers:
 *     <none>
 * Callees:
 *     ?Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x18000CE08 (-Draw@CTreeEffectLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?FlushD2D@CDrawingContext@@QEAAJXZ @ 0x18003F558 (-FlushD2D@CDrawingContext@@QEAAJXZ.c)
 *     ?RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18003FBF0 (-RestoreState@CExternalLayer@@UEAAJPEAVCDrawingContext@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTreeEffectLayer::RestoreState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v4; // eax
  unsigned int v5; // ecx
  int v6; // r8d
  unsigned int v7; // ebx
  unsigned int v9; // [rsp+20h] [rbp-18h]

  v4 = CExternalLayer::RestoreState(this, a2);
  v6 = 0;
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = 303;
    goto LABEL_18;
  }
  *((_BYTE *)a2 + 6350) = *((_BYTE *)this + 112);
  switch ( *((_DWORD *)this + 29) )
  {
    case 1:
      v6 = 1;
      break;
    case 2:
      v6 = 2;
      break;
    case 3:
      v6 = 6;
      break;
    case 4:
      v6 = 5;
      break;
    case 5:
      v6 = 7;
      break;
  }
  *((_DWORD *)a2 + 62) = v6;
  v4 = CDrawingContext::FlushD2D(a2);
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = 313;
    goto LABEL_18;
  }
  v4 = CTreeEffectLayer::Draw(this, a2);
  v7 = v4;
  if ( v4 < 0 )
  {
    v9 = 315;
LABEL_18:
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, v9, 0LL);
  }
  return v7;
}
