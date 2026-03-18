/*
 * XREFs of RtlGetHotPatchSize @ 0x1403154D0
 * Callers:
 *     RtlApplyHotPatch @ 0x1405AE038 (RtlApplyHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x140890BF0 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408D856C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408D8758 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1408D893C (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x1408D8A94 (RtlValidateHotPatchBase.c)
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
