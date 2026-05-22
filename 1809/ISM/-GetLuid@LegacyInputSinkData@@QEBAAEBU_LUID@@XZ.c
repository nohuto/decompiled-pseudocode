/*
 * XREFs of ?GetLuid@LegacyInputSinkData@@QEBAAEBU_LUID@@XZ @ 0x180020CE0
 * Callers:
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x18001D93C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUInternalHitTestResult@HitTestHelper@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x18008A33C (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z @ 0x1800901A0 (-IsSameByLuid@DWMInputTarget@@UEBA_NPEAX@Z.c)
 * Callees:
 *     ??0bad_optional_access@std@@QEAA@XZ @ 0x180020F40 (--0bad_optional_access@std@@QEAA@XZ.c)
 *     _CxxThrowException_0 @ 0x18012C47A (_CxxThrowException_0.c)
 */

const struct _LUID *__fastcall LegacyInputSinkData::GetLuid(LegacyInputSinkData *this)
{
  __int64 v2; // rcx
  bool v3; // zf
  const struct _LUID *result; // rax
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_BYTE *)this + 28) )
  {
    v2 = *(_QWORD *)this;
    v6 = 0LL;
    NtQueryCompositionInputSinkLuid(v2, &v6);
    v3 = *((_BYTE *)this + 28) == 0;
    *(_QWORD *)((char *)this + 20) = v6;
    if ( v3 )
      *((_BYTE *)this + 28) = 1;
  }
  result = (const struct _LUID *)((char *)this + 20);
  if ( !*((_BYTE *)this + 28) )
  {
    memset(pExceptionObject, 0, 24);
    std::bad_optional_access::bad_optional_access((std::bad_optional_access *)pExceptionObject);
    throw (std::bad_optional_access *)pExceptionObject;
  }
  return result;
}
