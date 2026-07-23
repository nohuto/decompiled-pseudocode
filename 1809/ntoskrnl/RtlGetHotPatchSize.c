/*
 * XREFs of RtlGetHotPatchSize @ 0x1402F8064
 * Callers:
 *     RtlApplyHotPatch @ 0x14057F148 (RtlApplyHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x1408584BC (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x14089AC7C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x14089AE68 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x14089B04C (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x14089B1A4 (RtlValidateHotPatchBase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetHotPatchSize(_DWORD *a1)
{
  __int64 result; // rax

  result = 2LL;
  if ( *a1 >= 3u )
    return (unsigned int)(a1[6] + 2);
  return result;
}
