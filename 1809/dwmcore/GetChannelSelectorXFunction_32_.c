/*
 * XREFs of GetChannelSelectorXFunction_32_ @ 0x18022ACF4
 * Callers:
 *     ApplyTexcoordDisplacement @ 0x18022AEDC (ApplyTexcoordDisplacement.c)
 * Callees:
 *     <none>
 */

void __fastcall GetChannelSelectorXFunction_32_(char a1, char a2, _BYTE *a3)
{
  char v3; // al

  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        qmemcpy(a3, "DisplacementMapEffectGreen", 26);
        v3 = aDisplacementma_3[26];
        break;
      case 2:
        qmemcpy(a3, "DisplacementMapEffectBlueX", 26);
        a3[26] = a2 + 48;
        a3[27] = 0;
        return;
      case 3:
        qmemcpy(a3, "DisplacementMapEffectAlpha", 26);
        v3 = aDisplacementma_0[26];
        break;
      default:
        return;
    }
    a3[26] = v3;
    a3[27] = a2 + 48;
    a3[28] = 0;
  }
  else
  {
    qmemcpy(a3, "DisplacementMapEffectRedX", 25);
    a3[25] = a2 + 48;
    a3[26] = 0;
  }
}
