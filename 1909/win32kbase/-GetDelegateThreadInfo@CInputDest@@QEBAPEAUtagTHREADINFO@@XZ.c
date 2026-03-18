/*
 * XREFs of ?GetDelegateThreadInfo@CInputDest@@QEBAPEAUtagTHREADINFO@@XZ @ 0x1C004E350
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingInfo@@HHAEBUINERTIA_INFO@@NPEBUtagRECT@@PEBU_D3DMATRIX@@@Z @ 0x1C017B5D8 (-AddInertiaInfo@CInertiaManager@@QEAA_NPEAUtagTHREADINFO@@_KPEAVCInputDest@@PEAUtagInputRoutingI.c)
 *     ?PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z @ 0x1C017BC68 (-PostInertiaMessage@CInertiaManager@@QEBA_NIPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@1@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall CInputDest::GetDelegateThreadInfo(CInputDest *this)
{
  __int64 v1; // r8

  v1 = 0LL;
  if ( *((_DWORD *)this + 23) == 1 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 64LL);
  if ( *((_DWORD *)this + 23) == 2 )
    return *(struct tagTHREADINFO **)(*((_QWORD *)this + 10) + 264LL);
  return (struct tagTHREADINFO *)v1;
}
