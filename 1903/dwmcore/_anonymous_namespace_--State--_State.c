/*
 * XREFs of _anonymous_namespace_::State::_State @ 0x180172C38
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x1800DE60C (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x1800CC7A4 (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

void __fastcall anonymous_namespace_::State::_State(__int64 a1)
{
  int v2; // eax
  void *v3; // rdi
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    if ( *(_QWORD *)(a1 + 32) )
    {
      v2 = RtlUnsubscribeWnfStateChangeNotification() | 0x10000000;
      if ( v2 < 0 )
        ModuleFailFastForHRESULT(v2, retaddr);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
  }
  WaitForThreadpoolWorkCallbacks(*(PTP_WORK *)(a1 + 8), 0);
  CloseThreadpoolWork(*(PTP_WORK *)(a1 + 8));
  v3 = *(void **)(a1 + 40);
  if ( v3 )
  {
    anonymous_namespace_::FramesReport::_FramesReport(*(_QWORD *)(a1 + 40));
    operator delete(v3);
  }
  if ( *(_QWORD *)a1 )
    (***(void (__fastcall ****)(_QWORD, __int64))a1)(*(_QWORD *)a1, 1LL);
}
