/*
 * XREFs of VfGetHookAddressForOriginal @ 0x14096669C
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x14088384C (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViLookupThunkArray @ 0x14096684C (ViLookupThunkArray.c)
 */

__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1)
{
  __int64 result; // rax

  result = ViLookupThunkArray(&VfXdvThunks, 48LL, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, 48LL, a1);
    if ( !result )
    {
      result = ViLookupThunkArray(&VfMandatoryThunks, 48LL, a1);
      if ( !result )
      {
        result = ViLookupThunkArray(&VfRegularThunks, 48LL, a1);
        if ( !result )
          return ViLookupThunkArray(&VfOrderDependentThunks, 56LL, a1);
      }
    }
  }
  return result;
}
