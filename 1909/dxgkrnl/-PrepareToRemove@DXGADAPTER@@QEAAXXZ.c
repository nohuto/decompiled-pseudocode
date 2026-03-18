/*
 * XREFs of ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x1C01EE3CC
 * Callers:
 *     DpiPowerArbiterThread @ 0x1C01815C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z @ 0x1C003832C (-DdiPowerRuntimeControlRequest@DXGADAPTER@@QEAAJPEBU_GUID@@PEAX_K12PEA_K@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D2D88 (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 */

void __fastcall DXGADAPTER::PrepareToRemove(DXGADAPTER *this)
{
  bool v1; // zf
  struct _KTIMER *v3; // rdi
  __int64 v4; // rcx

  v1 = *((_QWORD *)this + 325) == 0LL;
  *((_DWORD *)this + 44) = 5;
  if ( !v1 )
  {
    v3 = (struct _KTIMER *)((char *)this + 3144);
    *((_BYTE *)this + 3030) = 1;
    if ( !KeCancelTimer((PKTIMER)((char *)this + 3144)) )
    {
      KeFlushQueuedDpcs();
      if ( !KeCancelTimer(v3) )
        KeFlushQueuedDpcs();
    }
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 24) + 64LL) + 40LL) + 28LL) >= 0x3008u )
    {
      DXGADAPTER::DdiPowerRuntimeControlRequest(this, &GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED, 0LL, 0LL, 0LL, 0LL, 0LL);
      *((_BYTE *)this + 3033) = 0;
    }
    *((_DWORD *)this + 818) = 0;
  }
  v4 = *((_QWORD *)this + 320);
  if ( v4 )
    ADAPTER_RENDER::FlushScheduler(v4, 5, 0xFFFFFFFF, 0);
}
