/*
 * XREFs of RtlDetermineHotPatchExtent @ 0x1408D7FAC
 * Callers:
 *     MiLockHotPatchPages @ 0x14088EC58 (MiLockHotPatchPages.c)
 *     MiPrepareToHotPatchImagePatchCallback @ 0x1408909FC (MiPrepareToHotPatchImagePatchCallback.c)
 *     RtlValidateHotPatchBase @ 0x1408D8394 (RtlValidateHotPatchBase.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlDetermineHotPatchExtent(int a1, unsigned int a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // ecx
  int v5; // eax
  int v6; // ecx

  v4 = a1 & 0xFC000;
  switch ( v4 )
  {
    case 114688:
      v5 = -6;
      v6 = 8;
      if ( a2 >= 6 )
        goto LABEL_7;
      break;
    case 180224:
      goto LABEL_6;
    case 245760:
      v5 = 0;
      v6 = 4;
      goto LABEL_7;
    case 376832:
    case 491520:
LABEL_6:
      v5 = 0;
      v6 = 8;
LABEL_7:
      *a3 = (a2 + v5) >> 12;
      *a4 = (v6 + a2 - 1) >> 12;
      return 1;
  }
  return 0;
}
