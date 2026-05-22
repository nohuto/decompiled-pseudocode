/*
 * XREFs of ?SetConfigValue@DragRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x18010C880
 * Callers:
 *     <none>
 * Callees:
 *     ?RecomputeOrientationBiasPixels@DragRecognizer@@AEAAXXZ @ 0x18010C764 (-RecomputeOrientationBiasPixels@DragRecognizer@@AEAAXXZ.c)
 */

char __fastcall DragRecognizer::SetConfigValue(DragRecognizer *this, const struct GestureRecognizerConfigValue *a2)
{
  char v2; // bl

  v2 = 1;
  switch ( *(_DWORD *)a2 )
  {
    case 8:
      *((_WORD *)this + 8) = *((_WORD *)a2 + 2);
      goto LABEL_14;
    case 9:
      *((_WORD *)this + 9) = *((_WORD *)a2 + 2);
LABEL_14:
      DragRecognizer::RecomputeOrientationBiasPixels(this);
      return v2;
    case 0xA:
      *((_WORD *)this + 11) = *((_WORD *)a2 + 2);
      break;
    case 0xB:
      *((_WORD *)this + 12) = *((_WORD *)a2 + 2);
      break;
    case 0xC:
      *((_WORD *)this + 13) = *((_WORD *)a2 + 2);
      break;
    case 0xD:
      *((_WORD *)this + 14) = *((_WORD *)a2 + 2);
      break;
    default:
      return 0;
  }
  return v2;
}
