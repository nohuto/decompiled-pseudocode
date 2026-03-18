/*
 * XREFs of ?VerifierRandomFailure@@YAHK@Z @ 0x1C0281D14
 * Callers:
 *     VerifierBRUSHOBJ_pvAllocRbrush @ 0x1C0281DA0 (VerifierBRUSHOBJ_pvAllocRbrush.c)
 *     VerifierCLIPOBJ_ppoGetPath @ 0x1C0281DE0 (VerifierCLIPOBJ_ppoGetPath.c)
 *     VerifierEngAllocMem @ 0x1C0281E10 (VerifierEngAllocMem.c)
 *     VerifierEngAllocUserMem @ 0x1C0281F90 (VerifierEngAllocUserMem.c)
 *     VerifierEngCreateBitmap @ 0x1C0281FD0 (VerifierEngCreateBitmap.c)
 *     VerifierEngCreateClip @ 0x1C0282040 (VerifierEngCreateClip.c)
 *     VerifierEngCreateDeviceBitmap @ 0x1C0282070 (VerifierEngCreateDeviceBitmap.c)
 *     VerifierEngCreateDeviceSurface @ 0x1C02820C0 (VerifierEngCreateDeviceSurface.c)
 *     VerifierEngCreateDriverObj @ 0x1C0282110 (VerifierEngCreateDriverObj.c)
 *     VerifierEngCreatePalette @ 0x1C0282160 (VerifierEngCreatePalette.c)
 *     VerifierEngCreatePath @ 0x1C02821D0 (VerifierEngCreatePath.c)
 *     VerifierEngCreateRedirectionDeviceBitmap @ 0x1C0282200 (VerifierEngCreateRedirectionDeviceBitmap.c)
 *     VerifierEngCreateWnd @ 0x1C0282250 (VerifierEngCreateWnd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VerifierRandomFailure()
{
  unsigned int v0; // ebx

  v0 = 0;
  if ( (gvs & 4) != 0 )
  {
    if ( dword_1C030D54C )
      goto LABEL_6;
    if ( MEMORY[0xFFFFF78000000014] > GreBootTime.QuadPart + 0x117D78400LL )
    {
      dword_1C030D54C = 1;
      Seed = MEMORY[0xFFFFF78000000014];
    }
    if ( dword_1C030D54C )
    {
LABEL_6:
      if ( (RtlRandom(&Seed) & dword_1C030D554) == 0 )
        return 1;
    }
  }
  return v0;
}
