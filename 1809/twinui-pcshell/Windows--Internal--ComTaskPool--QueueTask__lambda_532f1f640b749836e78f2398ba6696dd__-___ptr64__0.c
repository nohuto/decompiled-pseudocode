/*
 * XREFs of Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64__0 @ 0x180106C6C
 * Callers:
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x180061064 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__&___ptr64_ @ 0x18006113C (Windows--Internal--ComTaskPool--WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd__-___ptr64.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 Windows::Internal::ComTaskPool::QueueTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64__0()
{
  volatile int *v0; // rbx
  DWORD CurrentThreadId; // eax
  unsigned int v2; // eax
  volatile int *v3; // rcx
  unsigned int v4; // ebx
  volatile int *v6; // [rsp+50h] [rbp+18h] BYREF

  v0 = *Windows::Internal::ComTaskPool::WrapWithTask__lambda_532f1f640b749836e78f2398ba6696dd______ptr64_(&v6);
  CurrentThreadId = GetCurrentThreadId();
  v2 = SHTaskPoolQueueTask(0LL, 0LL, CurrentThreadId, 0LL, v0, 0LL);
  v3 = v6;
  v4 = v2;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return v4;
}
