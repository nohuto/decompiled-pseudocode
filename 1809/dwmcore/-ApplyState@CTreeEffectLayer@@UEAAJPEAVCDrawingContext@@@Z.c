/*
 * XREFs of ?ApplyState@CTreeEffectLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x180014550
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CTreeEffectLayer::ApplyState(CTreeEffectLayer *this, struct CDrawingContext *a2)
{
  int v2; // r8d
  int v3; // eax

  v2 = 0;
  *((_BYTE *)this + 112) = *((_BYTE *)a2 + 6350);
  v3 = *((_DWORD *)a2 + 62);
  *((_BYTE *)a2 + 6350) = 0;
  if ( v3 == 1 )
  {
    v2 = 1;
  }
  else if ( v3 > 1 )
  {
    if ( v3 <= 3 )
    {
      v2 = 2;
      goto LABEL_3;
    }
    switch ( v3 )
    {
      case 4:
        goto LABEL_9;
      case 5:
        v2 = 4;
        break;
      case 6:
LABEL_9:
        v2 = 3;
        break;
    }
  }
LABEL_3:
  *((_DWORD *)this + 29) = v2;
  *((_DWORD *)a2 + 62) = 1;
  return CExternalLayer::ApplyState(this, a2);
}
