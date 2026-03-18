/*
 * XREFs of ?ResumeScheduler@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1C00D339C
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXXZ @ 0x1C0106CB0 (-ReleaseCoreResource@DXGADAPTER@@AEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z @ 0x1C00D347C (-ResumeVidMmWorkerThread@ADAPTER_RENDER@@AEAAXEE@Z.c)
 */

void __fastcall ADAPTER_RENDER::ResumeScheduler(ADAPTER_RENDER *this, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // rcx
  unsigned __int8 v6; // si
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // rcx

  *((_DWORD *)this + 135) = 0;
  v4 = *((_QWORD *)this + 66);
  v6 = a2;
  if ( v4 )
  {
    LOBYTE(a2) = a3;
    v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(*((_QWORD *)this + 65) + 8LL) + 768LL))(v4, a2);
    v9 = v7;
    if ( v7 < 0 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8);
      v10[3] = 275LL;
      v10[4] = 19LL;
      v11 = *((_QWORD *)this + 2);
      v10[7] = 0LL;
      v10[5] = v11;
      v10[6] = v9;
      WdLogEvent5_WdCriticalError(v10);
    }
    ADAPTER_RENDER::ResumeVidMmWorkerThread(this, v6, a3);
  }
}
