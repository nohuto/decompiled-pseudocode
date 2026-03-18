/*
 * XREFs of RtlpCheckFunctionPatchApplied @ 0x14057E480
 * Callers:
 *     RtlApplyHotPatch @ 0x14057E148 (RtlApplyHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x140857368 (MiPrepareToHotPatchImage.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140899A3C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140899E0C (RtlHotPatchSynchronizationRequired.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpCheckFunctionPatchApplied(_BYTE *a1, _WORD *a2)
{
  char v2; // al

  if ( *a1 == 0xEB )
  {
    v2 = a1[1];
    if ( v2 < 0 )
    {
      if ( v2 == -8 && *(a1 - 6) == 0xFF && *(a1 - 5) == 37 )
        return (__int64)&a1[*((int *)a1 - 1)];
      return -1LL;
    }
  }
  if ( a2 && *(_WORD *)a1 != *a2 )
    return -1LL;
  return 0LL;
}
