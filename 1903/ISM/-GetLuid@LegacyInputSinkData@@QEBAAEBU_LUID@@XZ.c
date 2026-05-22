/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180001E00
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18002F430 (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x1800C39C4 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800C75F0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  const struct _LUID *result; // rax
  __int64 v3; // rcx
  bool v4; // zf
  void **pExceptionObject; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v3 = *(_QWORD *)this;
    v7 = 0LL;
    NtQueryCompositionInputSinkLuid(v3, &v7);
    v4 = *((_BYTE *)this + 28) == 0;
    *(_QWORD *)((char *)this + 20) = v7;
    if ( v4 )
      *((_BYTE *)this + 28) = 1;
  }
  result = (const struct _LUID *)((char *)this + 20);
  if ( !*((_BYTE *)this + 28) )
  {
    v6 = 0uLL;
    pExceptionObject = &std::bad_optional_access::`vftable';
    throw (std::bad_optional_access *)&pExceptionObject;
  }
  return result;
}
