/*
 * XREFs of ?GetCoordFromRect@@YAXPEAUtagMONITOR_MARGIN@@PEAUtagRECT@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C00E6788
 * Callers:
 *     ?UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z @ 0x1C00E6688 (-UpdateDesktopThresholdsWorker@@YAXPEAUtagMONITOR_MARGIN@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GetCoordFromRect(int *a1, int *a2, int a3)
{
  int v3; // r8d
  int v4; // r8d
  int v5; // eax
  int v6; // eax

  if ( !a3 )
  {
    *a1 = *a2;
    a1[1] = a2[2];
    v6 = a2[1];
    goto LABEL_6;
  }
  v3 = a3 - 1;
  if ( !v3 )
  {
    *a1 = a2[1];
    a1[1] = a2[3];
    v6 = *a2;
    goto LABEL_6;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    *a1 = a2[1];
    a1[1] = a2[3];
    v5 = a2[2];
LABEL_5:
    v6 = -v5;
LABEL_6:
    a1[2] = v6;
    return;
  }
  if ( v4 == 1 )
  {
    *a1 = *a2;
    a1[1] = a2[2];
    v5 = a2[3];
    goto LABEL_5;
  }
}
