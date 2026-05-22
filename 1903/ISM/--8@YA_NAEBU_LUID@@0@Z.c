/*
 * XREFs of ??8@YA_NAEBU_LUID@@0@Z @ 0x1800C79A8
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C39C4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800C75F0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 *     ?IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z @ 0x1800C7C50 (-IsSameByInputDest@InputDestTarget@@UEBA_NAEBUtagINPUTDEST@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall operator==(_DWORD *a1, _DWORD *a2)
{
  return a1[1] == a2[1] && *a1 == *a2;
}
