/*
 * XREFs of ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1800C554C
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C39C4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800C6ABC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ToCompositionInputType(char a1)
{
  __int64 result; // rax

  if ( (a1 & 0x28) != 0 )
    return 3LL;
  if ( (a1 & 0x10) != 0 )
    return 4LL;
  if ( (a1 & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( (a1 & 4) != 0 )
    return 2LL;
  return result;
}
