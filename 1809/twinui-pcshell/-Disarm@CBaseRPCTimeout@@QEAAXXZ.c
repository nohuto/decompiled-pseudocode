/*
 * XREFs of ?Disarm@CBaseRPCTimeout@@QEAAXXZ @ 0x18011B3F0
 * Callers:
 *     ??0CRPCTimeout@@QEAA@K@Z @ 0x18011910C (--0CRPCTimeout@@QEAA@K@Z.c)
 *     ??1CRPCTimeout@@QEAA@XZ @ 0x180119878 (--1CRPCTimeout@@QEAA@XZ.c)
 *     ?QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEAPEAX@Z @ 0x18011E7E0 (-QueryService@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_QUERY_SERVICE_OPTION@@KAEBU_GUID@@1PEA.c)
 *     ?GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z @ 0x180131440 (-GetEnterpriseIdForWindow@EdpHelpers@@YAJPEAUHWND__@@PEAPEAG@Z.c)
 *     _lambda_36384bfe8fddeea64aa1ca6986ceb908_::operator() @ 0x1801D64F4 (_lambda_36384bfe8fddeea64aa1ca6986ceb908_--operator().c)
 *     _lambda_a3aeb034ce425ddb7d0e73cd92572bd8_::operator() @ 0x18023CE30 (_lambda_a3aeb034ce425ddb7d0e73cd92572bd8_--operator().c)
 *     _lambda_41ea728de8cee2282d4ec3314b3d541b_::operator() @ 0x18024D338 (_lambda_41ea728de8cee2282d4ec3314b3d541b_--operator().c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___::Run @ 0x18024E270 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8cb864d560eabf2ff9644d5f66b5c768___--Run.c)
 * Callees:
 *     <none>
 */

void __fastcall CBaseRPCTimeout::Disarm(CBaseRPCTimeout *this)
{
  void *v2; // rdx

  if ( *((int *)this + 2) >= 0 )
  {
    *((_DWORD *)this + 2) = -2147467259;
    CoDisableCallCancellation(0LL);
    v2 = (void *)*((_QWORD *)this + 2);
    if ( v2 )
    {
      DeleteTimerQueueTimer(0LL, v2, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
      *((_QWORD *)this + 2) = 0LL;
    }
  }
}
