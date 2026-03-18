/*
 * XREFs of ViFaultsIsTagTarget @ 0x14097A764
 * Callers:
 *     VfFaultsInjectPoolAllocationFailure @ 0x140979B58 (VfFaultsInjectPoolAllocationFailure.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x140338C4C (ExCheckSingleFilter.c)
 *     ViFaultsIsTagPresentInList @ 0x14097A71C (ViFaultsIsTagPresentInList.c)
 */

__int64 __fastcall ViFaultsIsTagTarget(int a1)
{
  int v1; // r8d
  int v2; // r8d
  unsigned int IsTagPresentInList; // ecx

  if ( (unsigned int)ExCheckSingleFilter(a1, 1786137926) || (unsigned int)ExCheckSingleFilter(v1, 1819692358) )
    return 0LL;
  IsTagPresentInList = ViFaultTagsList == &ViFaultTagsList;
  if ( ViFaultTagsList != &ViFaultTagsList )
  {
    IsTagPresentInList = ViFaultsIsTagPresentInList(v2);
    if ( IsTagPresentInList )
      ++dword_1409C8198;
    else
      ++dword_1409C8194;
  }
  return IsTagPresentInList;
}
