/*
 * XREFs of ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C0150A1C
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C0129F00 (NtGdiEngCreatePalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C01507B0 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C0299430 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall bSafeReadBits(void *a1, char *a2, unsigned int a3)
{
  char *v4; // rcx

  if ( a1 && a2 )
  {
    v4 = &a2[a3];
    if ( v4 < a2 || (unsigned __int64)v4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
  return 1LL;
}
