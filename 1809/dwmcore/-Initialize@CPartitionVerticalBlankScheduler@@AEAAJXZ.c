/*
 * XREFs of ?Initialize@CPartitionVerticalBlankScheduler@@AEAAJXZ @ 0x180061144
 * Callers:
 *     ?RunCompositionThread@CConnection@@AEAAJXZ @ 0x180060FBC (-RunCompositionThread@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnection@@PEAVCDebugFrameCounter@@PEAPEAV1@@Z @ 0x180061210 (-Create@CCrossThreadComposition@@SAJPEAVCKernelTransport@@PEAVICompositorScheduler@@PEAVCConnect.c)
 *     ?Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180080EDC (-Reinitialize@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPartitionVerticalBlankScheduler::Initialize(CPartitionVerticalBlankScheduler *this)
{
  HANDLE WaitableTimerW; // rax
  int v3; // eax
  unsigned int v4; // ecx
  signed int v5; // ebx
  struct CConnection *v6; // r8
  struct CKernelTransport *v7; // rcx
  signed int LastError; // eax
  int v10; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]

  *((_QWORD *)this + 1) = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL);
  SetLastError(0);
  WaitableTimerW = CreateWaitableTimerW(0LL, 0, 0LL);
  *((_QWORD *)this + 3) = WaitableTimerW;
  if ( !WaitableTimerW )
  {
    LastError = GetLastError();
    v5 = LastError;
    if ( LastError > 0 )
      v5 = (unsigned __int16)LastError | 0x80070000;
    v11 = 227;
    if ( v5 >= 0 )
      v5 = -2003304445;
    v10 = v5;
    goto LABEL_15;
  }
  CPartitionVerticalBlankScheduler::Reinitialize(this);
  v3 = CoreUICreateEx(1LL, (char *)this + 96);
  v5 = v3;
  if ( v3 < 0 )
  {
    v11 = 234;
    goto LABEL_14;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 12) + 40LL))(
         *((_QWORD *)this + 12),
         (char *)this + 104);
  v5 = v3;
  if ( v3 < 0 )
  {
    v11 = 235;
    goto LABEL_14;
  }
  v6 = (struct CConnection *)*((_QWORD *)this + 7);
  v7 = (struct CKernelTransport *)*((_QWORD *)this + 6);
  *((_BYTE *)this + 26196) = 1;
  v3 = CCrossThreadComposition::Create(
         v7,
         this,
         v6,
         (CPartitionVerticalBlankScheduler *)((char *)this + 30592),
         (struct CCrossThreadComposition **)this + 8);
  v5 = v3;
  if ( v3 < 0 )
  {
    v11 = 245;
LABEL_14:
    v10 = v3;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v10, v11);
  }
  return (unsigned int)v5;
}
