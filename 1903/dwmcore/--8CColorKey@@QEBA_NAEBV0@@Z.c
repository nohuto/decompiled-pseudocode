/*
 * XREFs of ??8CColorKey@@QEBA_NAEBV0@@Z @ 0x18009BEB8
 * Callers:
 *     ?ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SETSOURCEMODIFICATIONS@@@Z @ 0x18009BD6C (-ProcessSetSourceModifications@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_WINDOWNODE_SE.c)
 *     ?SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z @ 0x1800D4190 (-SetColorKey@CGdiSpriteBitmap@@UEAAX_NAEBVCColorKey@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CColorKey::operator==(float *a1, float *a2)
{
  float v2; // xmm3_4
  float v3; // xmm4_4
  float v5; // xmm2_4
  float v6; // xmm1_4

  v2 = a1[3];
  v3 = a1[7];
  if ( v3 < v2 || (v5 = *a1, a1[4] < *a1) || a1[5] < a1[1] || a1[6] < a1[2] )
  {
    if ( a2[7] < a2[3] )
      return 1;
    v6 = *a2;
    if ( a2[4] < *a2 || a2[5] < a2[1] || a2[6] < a2[2] )
      return 1;
    v5 = *a1;
  }
  else
  {
    v6 = *a2;
  }
  return v5 == v6
      && a1[1] == a2[1]
      && a1[2] == a2[2]
      && v2 == a2[3]
      && a1[4] == a2[4]
      && a1[5] == a2[5]
      && a1[6] == a2[6]
      && v3 == a2[7];
}
