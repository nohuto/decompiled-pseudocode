/*
 * XREFs of RtlGetHotPatchSize @ 0x140314F20
 * Callers:
 *     RtlApplyHotPatch @ 0x1405AE018 (RtlApplyHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x140890410 (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x1408D7E6C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x1408D8058 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x1408D823C (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x1408D8394 (RtlValidateHotPatchBase.c)
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
