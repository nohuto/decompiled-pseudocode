/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C0297EAC
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C0297F30 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0297F70 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0297FA0 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C0298120 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C0298160 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C02981D0 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C0298200 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C0298250 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C02982A0 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C02982F0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C0298360 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0298390 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C02983E0 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032044C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032044C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032044C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C0320454) == 0 )
        return 1;
    }
  }
  return v0;
}
