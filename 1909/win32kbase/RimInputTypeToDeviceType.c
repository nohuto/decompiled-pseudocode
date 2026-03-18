/*
 * XREFs of RimInputTypeToDeviceType @ 0x1C005B520
 * Callers:
 *     rimCompleteReads @ 0x1C00580E8 (rimCompleteReads.c)
 *     rimIssueReads @ 0x1C00581A4 (rimIssueReads.c)
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 *     RIMDiscoverSpecificDevice @ 0x1C014E248 (RIMDiscoverSpecificDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RimInputTypeToDeviceType(int a1)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 == 1 )
    return 0LL;
  if ( a1 == 2 )
    return result;
  if ( (a1 & 0x3C) == 0 )
    return 0LL;
  return 2LL;
}
