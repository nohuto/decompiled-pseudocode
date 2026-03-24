/*
 * XREFs of MiCleanVad @ 0x140617088
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1405F1BC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiDeleteVad @ 0x140065E10 (MiDeleteVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140074550 (MiUnlockAndDereferenceVad.c)
 *     MiVadDeleted @ 0x140075560 (MiVadDeleted.c)
 *     MiWaitForVadDeletion @ 0x1402CB150 (MiWaitForVadDeletion.c)
 *     MiUnmapVad @ 0x140617488 (MiUnmapVad.c)
 */

__int64 __fastcall MiCleanVad(char *P)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  unsigned int *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // eax

  v2 = 0;
  if ( (unsigned int)MiVadDeleted((__int64)P) == 1 )
  {
    MiWaitForVadDeletion((__int64)v4, v3, v5, v6);
    MiUnlockAndDereferenceVad(P);
    return 1;
  }
  else
  {
    v7 = v4[12];
    if ( (v7 & 0x4000) == 0 || (v7 & 7) == 1 )
      MiUnmapVad(v4, 0LL, 0LL);
    else
      MiDeleteVad(v4, 0LL, 0);
  }
  return v2;
}
