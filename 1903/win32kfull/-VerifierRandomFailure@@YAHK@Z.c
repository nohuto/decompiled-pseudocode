/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C029845C
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C02984E0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0298520 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0298550 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C02986D0 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C0298710 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C0298780 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C02987B0 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C0298800 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C0298850 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C02988A0 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C0298910 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0298940 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C0298990 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C032244C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C032244C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C032244C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C0322454) == 0 )
        return 1;
    }
  }
  return v0;
}
