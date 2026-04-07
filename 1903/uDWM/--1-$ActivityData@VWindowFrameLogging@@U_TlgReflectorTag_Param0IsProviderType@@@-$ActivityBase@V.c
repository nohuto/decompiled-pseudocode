/*
 * XREFs of ??1?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18000AB10
 * Callers:
 *     ??1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180009820 (--1CloneWindow@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VWindowFrameLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18003D6C0 (-reset@-$shared_object@V-$ActivityData@VWindowFrameLogging@@U_TlgReflectorTag_Param0IsProviderTy.c)
 * Callees:
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x18003BDA8 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18008CF54 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<WindowFrameLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<WindowFrameLogging,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax

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
    v4 = wil::details::static_lazy<WindowFrameLogging>::get(
           v2,
           (void (__cdecl *)())lambda_e6d4de8c865c86d40bfbebb968f8a12c_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<0,5>(v4[1], a1 + 8);
  }
  *(_DWORD *)a1 = 3;
}
