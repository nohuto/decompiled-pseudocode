/*
 * XREFs of ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x18004152C
 * Callers:
 *     CFrameApplicationPresentation::_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___ @ 0x18003E6CC (CFrameApplicationPresentation--_AddTaskToQueue__lambda_06d64a626025f4db47aab5f81b5aa1b0___.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18010706C (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_18010706C.c)
 *     ?_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitchAsyncWorker@CAppViewManagerTelemetry@@PEAUIAsyncCallback@@@Z @ 0x18010FDD0 (-_ContinueSwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@VSwitc.c)
 * Callees:
 *     ??0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z @ 0x18003CB8C (--0StoredFailureInfo@wil@@QEAA@$$QEAV01@@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003CC14 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18003EB90 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     memset_0 @ 0x180084F7A (memset_0.c)
 */

__int64 __fastcall wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rcx
  char v6; // al
  __int64 v7; // rax
  __int64 v8; // rcx
  HANDLE ProcessHeap; // rax

  *(_QWORD *)a1 = &wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = a1 + 8;
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( a3 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  *(_DWORD *)(a1 + 56) = 0;
  *(_BYTE *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  memset_0((void *)(a1 + 96), 0, 0x20uLL);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  if ( *(_BYTE *)(a1 + 120) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 112));
    *(_BYTE *)(a1 + 120) = 0;
  }
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
  v6 = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = v6;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  wil::StoredFailureInfo::StoredFailureInfo(a1 + 136, a2 + 136);
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v7 = *(_QWORD *)(a1 + 304);
  v8 = v7 + 8;
  if ( !v7 )
    v8 = a1 + 56;
  *(_QWORD *)(a1 + 48) = v8;
  *(_QWORD *)(a1 + 40) = v8 + 40;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
