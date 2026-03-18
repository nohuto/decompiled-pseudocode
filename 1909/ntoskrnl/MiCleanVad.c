/*
 * XREFs of MiCleanVad @ 0x14060C580
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVad @ 0x140050550 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x1400539D0 (MiVadDeleted.c)
 *     MiDeleteVad @ 0x1400550D0 (MiDeleteVad.c)
 *     MiWaitForVadDeletion @ 0x1402E53D8 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x1406605C4 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  unsigned int *v3; // rcx
  unsigned int v4; // eax

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion((__int64)v3);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else
  {
    v4 = v3[12];
    if ( (v4 & 0x100000) == 0 || (v4 & 0x70) == 0x10 )
      MiUnmapVad(v3, 0LL, 0LL);
    else
      MiDeleteVad(v3, 0LL, 0);
  }
  return v2;
}
