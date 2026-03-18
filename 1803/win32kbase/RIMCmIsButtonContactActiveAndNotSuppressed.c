/*
 * XREFs of RIMCmIsButtonContactActiveAndNotSuppressed @ 0x1C0106CE8
 * Callers:
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C00E6E60 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimFinalizePointerFlags @ 0x1C010248C (rimFinalizePointerFlags.c)
 * Callees:
 *     RIMCmIsContactSuppressed @ 0x1C0106D50 (RIMCmIsContactSuppressed.c)
 */

__int64 __fastcall RIMCmIsButtonContactActiveAndNotSuppressed(__int64 a1)
{
  __int64 v1; // rcx
  unsigned int v2; // ebx

  if ( *(_DWORD *)(a1 + 24) != 7 )
    return 0LL;
  v1 = *(_QWORD *)(a1 + 872);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 32) & 2) != 0 )
    return (unsigned int)RIMCmIsContactSuppressed(v1) == 0;
  return v2;
}
