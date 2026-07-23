/*
 * XREFs of CmAllocateExtraParameter @ 0x1407ED708
 * Callers:
 *     VrpPostOpenOrCreate @ 0x14080C044 (VrpPostOpenOrCreate.c)
 *     VrpPreOpenOrCreate @ 0x14080D4E0 (VrpPreOpenOrCreate.c)
 * Callees:
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

_QWORD *CmAllocateExtraParameter()
{
  _QWORD *result; // rax
  _QWORD *v1; // rbx

  result = CmpAllocateTransientPoolWithTag(PagedPool, 0x50uLL, 0x50454D43u);
  v1 = result;
  if ( result )
  {
    memset(result, 0, 0x50uLL);
    v1[5] = 32LL;
    v1[4] = VrpOriginalKeyNameParameterCleanup;
    result = v1 + 6;
    *((_OWORD *)v1 + 1) = VRP_ORIGINAL_KEY_NAME_PARAMETER_GUID;
  }
  return result;
}
