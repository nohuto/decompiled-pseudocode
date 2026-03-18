/*
 * XREFs of ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C012FD4C
 * Callers:
 *     NtGdiEngCreatePalette @ 0x1C010A030 (NtGdiEngCreatePalette.c)
 *     NtGdiHT_Get8BPPMaskPalette @ 0x1C012FAF0 (NtGdiHT_Get8BPPMaskPalette.c)
 *     NtGdiXFORMOBJ_bApplyXform @ 0x1C0285A70 (NtGdiXFORMOBJ_bApplyXform.c)
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
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
