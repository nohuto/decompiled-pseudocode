/*
 * XREFs of VfGetHookAddressForOriginal @ 0x14092817C
 * Callers:
 *     KsepPatchDriverImportsTable @ 0x1408483AC (KsepPatchDriverImportsTable.c)
 * Callees:
 *     ViLookupThunkArray @ 0x140928310 (ViLookupThunkArray.c)
 */

__int64 __fastcall VfGetHookAddressForOriginal(__int64 a1)
{
  __int64 result; // rax

  result = ViLookupThunkArray(&VfXdvThunks, 40LL, a1);
  if ( !result )
  {
    result = ViLookupThunkArray(&VfPoolThunks, 40LL, a1);
    if ( !result )
    {
      result = ViLookupThunkArray(&VfMandatoryThunks, 40LL, a1);
      if ( !result )
      {
        result = ViLookupThunkArray(&VfRegularThunks, 40LL, a1);
        if ( !result )
          return ViLookupThunkArray(&VfOrderDependentThunks, 48LL, a1);
      }
    }
  }
  return result;
}
