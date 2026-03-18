/*
 * XREFs of RtlGetHotPatchSize @ 0x1402F7D74
 * Callers:
 *     RtlApplyHotPatch @ 0x14057E148 (RtlApplyHotPatch.c)
 *     MiPrepareDriverForHotPatch @ 0x14085727C (MiPrepareDriverForHotPatch.c)
 *     RtlCountRequiredHotPatchAddressTableEntries @ 0x140899A3C (RtlCountRequiredHotPatchAddressTableEntries.c)
 *     RtlEnumerateHotPatchPatches @ 0x140899C28 (RtlEnumerateHotPatchPatches.c)
 *     RtlHotPatchSynchronizationRequired @ 0x140899E0C (RtlHotPatchSynchronizationRequired.c)
 *     RtlValidateHotPatchBase @ 0x140899F64 (RtlValidateHotPatchBase.c)
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
