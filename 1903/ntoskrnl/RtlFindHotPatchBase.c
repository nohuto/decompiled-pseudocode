/*
 * XREFs of RtlFindHotPatchBase @ 0x1408D87E0
 * Callers:
 *     MiApplyDriverHotPatch @ 0x14088D4B4 (MiApplyDriverHotPatch.c)
 *     MiOpenHotPatchFile @ 0x140890210 (MiOpenHotPatchFile.c)
 *     MiPerformImageHotPatch @ 0x1408905D8 (MiPerformImageHotPatch.c)
 *     MiPrepareToHotPatchImage @ 0x140890CDC (MiPrepareToHotPatchImage.c)
 *     RtlFindHotPatchInformation @ 0x1408D880C (RtlFindHotPatchInformation.c)
 * Callees:
 *     <none>
 */

char *__fastcall RtlFindHotPatchBase(unsigned int *a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx

  if ( a1[4] && (v1 = a1[3], (v2 = *(unsigned int *)((char *)a1 + v1)) != 0) && v2 + 32 <= (unsigned __int64)a1[1] )
    return (char *)a1 + v2;
  else
    return 0LL;
}
