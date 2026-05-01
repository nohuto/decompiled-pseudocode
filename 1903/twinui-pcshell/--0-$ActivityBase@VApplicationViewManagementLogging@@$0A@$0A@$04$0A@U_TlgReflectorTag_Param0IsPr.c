/*
 * XREFs of ??0?$ActivityBase@VApplicationViewManagementLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180028900
 * Callers:
 *     NotificationDispatcher::RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___ @ 0x180027F40 (NotificationDispatcher--RunAsync__lambda_4181134c5161f261fff3e61f273c9fd8___.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180028AD4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002E740 (-StartWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 */

__int64 __fastcall wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v4; // rcx
  __int64 v6; // rbx
  char v7; // al
  __int64 v8; // rax
  HANDLE ProcessHeap; // rax

  *(_QWORD *)a1 = &wil::ActivityBase<ApplicationViewManagementLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  v4 = a1 + 8;
  *(_QWORD *)v4 = 0LL;
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)(v4 + 16) = 0LL;
  *(_DWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 32) = 0LL;
  if ( a3 )
    wil::details::ThreadFailureCallbackHolder::StartWatching((wil::details::ThreadFailureCallbackHolder *)v4);
  *(_DWORD *)(a1 + 56) = 0;
  v6 = a1 + 56;
  *(_BYTE *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 64);
  *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
  *(_DWORD *)(a2 + 56) = 0;
  *(_BYTE *)(a2 + 60) = 0;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
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
  v7 = *(_BYTE *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = 0LL;
  *(_BYTE *)(a1 + 120) = v7;
  *(_BYTE *)(a2 + 120) = 0;
  *(_DWORD *)(a1 + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
  *(_OWORD *)(a1 + 136) = *(_OWORD *)(a2 + 136);
  *(_OWORD *)(a1 + 152) = *(_OWORD *)(a2 + 152);
  *(_OWORD *)(a1 + 168) = *(_OWORD *)(a2 + 168);
  *(_OWORD *)(a1 + 184) = *(_OWORD *)(a2 + 184);
  *(_OWORD *)(a1 + 200) = *(_OWORD *)(a2 + 200);
  *(_OWORD *)(a1 + 216) = *(_OWORD *)(a2 + 216);
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a2 + 232);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a2 + 248);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a2 + 264);
  *(_QWORD *)(a1 + 280) = *(_QWORD *)(a2 + 280);
  *(_QWORD *)(a1 + 288) = *(_QWORD *)(a2 + 288);
  *(_QWORD *)(a2 + 280) = 0LL;
  *(_QWORD *)(a2 + 288) = 0LL;
  *(_QWORD *)(a1 + 296) = 0LL;
  *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
  *(_QWORD *)(a2 + 304) = 0LL;
  v8 = *(_QWORD *)(a1 + 304);
  if ( v8 )
    v6 = v8 + 8;
  *(_QWORD *)(a1 + 48) = v6;
  *(_QWORD *)(a1 + 40) = v6 + 40;
  *(_QWORD *)(a2 + 48) = a2 + 56;
  if ( *(_DWORD *)(a2 + 32) )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)(a2 + 8));
  return a1;
}
