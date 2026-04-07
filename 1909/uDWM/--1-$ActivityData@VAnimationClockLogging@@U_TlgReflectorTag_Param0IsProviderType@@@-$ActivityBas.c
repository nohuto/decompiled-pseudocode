/*
 * XREFs of ??1?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180008564
 * Callers:
 *     ??1?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180008524 (--1-$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VAnimationClockLogging@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18003B8B0 (-reset@-$shared_object@V-$ActivityData@VAnimationClockLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 * Callees:
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000889C (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18003B5B8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x1800B25CC (--$_TlgWriteActivityAutoStop@$0A@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<AnimationClockLogging,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<AnimationClockLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  HANDLE ProcessHeap; // rax
  __int64 v4; // rax

  wil::details::shared_buffer::reset((wil::details::shared_buffer *)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v4 = wil::details::static_lazy<AnimationClockLogging>::get(
           v2,
           lambda_9ef98c5d6b8c5c3c74462e1eb0f6f12e_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<0,4>(*(_QWORD *)(v4 + 8), a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
