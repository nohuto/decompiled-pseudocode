/*
 * XREFs of ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x1800197A4
 * Callers:
 *     _lambda_60d16d02b9cc51a6582d9c6577bb1617_::operator() @ 0x18001855C (_lambda_60d16d02b9cc51a6582d9c6577bb1617_--operator().c)
 *     _lambda_2998a484fcd7d742033ed970065ccf76_::operator() @ 0x18007CA70 (_lambda_2998a484fcd7d742033ed970065ccf76_--operator().c)
 * Callees:
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 *     ?AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z @ 0x1801274BC (-AssignMessage@StoredCallContextInfo@details@wil@@AEAAXPEBG@Z.c)
 */

__int64 __fastcall wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)v2 == 1 )
  {
    *(_BYTE *)(a2 + 24) = 0;
    *(_DWORD *)a2 = *(_DWORD *)(v2 + 40);
    *(_QWORD *)(a2 + 8) = *(_QWORD *)(v2 + 48);
    if ( *(_BYTE *)(v2 + 64) )
      wil::details::StoredCallContextInfo::AssignMessage(
        (wil::details::StoredCallContextInfo *)a2,
        *(const unsigned __int16 **)(v2 + 56));
    else
      *(_QWORD *)(a2 + 16) = *(_QWORD *)(v2 + 56);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_QWORD *)(a2 + 40) = a1;
    *(_QWORD *)(a2 + 64) = a2;
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 32));
  }
  else
  {
    memset_0((void *)a2, 0, 0x20uLL);
    *(_QWORD *)(a2 + 32) = 0LL;
    *(_QWORD *)(a2 + 40) = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 56) = 0;
    *(_QWORD *)(a2 + 64) = 0LL;
  }
  return a2;
}
