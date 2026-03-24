/*
 * XREFs of RtlGetHotPatchSize @ 0x1402F7E74
 * Callers:
 *     RtlApplyHotPatch @ 0x14057E148 (RtlApplyHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x14085725C (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140899A1C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140899C08 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140899DEC (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x140899F44 (RtlValidateHotPatchBase.c)
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
