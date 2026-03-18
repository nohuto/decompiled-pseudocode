/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C026DD48
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C026DDD0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C026DE10 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C026DE40 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C026DFA0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C026DFE0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C026E050 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C026E080 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C026E0D0 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C026E120 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C026E170 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C026E1E0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C026E210 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C026E260 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C031D82C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C031D82C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C031D82C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C031D834) == 0 )
        return 1;
    }
  }
  return v0;
}
