/*
 * XREFs of ?SuspendScheduler@ADAPTER_RENDER@@QEAAJEE@Z @ 0x1C00D32F4
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00D2F54 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 *     ?FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z @ 0x1C00D30EC (-FlushScheduler@ADAPTER_RENDER@@QEAAJW4DXGADAPTER_FLUSHSCHEDULER_REASON@@IH@Z.c)
 *     ?AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z @ 0x1C00F9164 (-AcquireCoreResourceExclusive@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@E@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0011FEC (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z @ 0x1C00D341C (-SuspendVidMmWorkerThread@ADAPTER_RENDER@@AEAAXW4_VIDMM_WORKER_THREAD_SUSPEND_REASON@@E@Z.c)
 */

__int64 __fastcall ADAPTER_RENDER::SuspendScheduler(ADAPTER_RENDER *this, char a2, __int64 a3)
{
  char v3; // si
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(__int64, __int64, __int64); // rax
  __int64 v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rcx

  v3 = a3;
  if ( *((_DWORD *)this + 135) && DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)this + 2)) )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v12);
    v13[3] = 275LL;
    v13[4] = 39LL;
    v13[5] = *((_QWORD *)this + 2);
    v14 = *((unsigned int *)this + 135);
    v13[7] = 0LL;
    v13[6] = v14;
    WdLogEvent5_WdCriticalError(v13);
  }
  v6 = 0;
  if ( !*((_QWORD *)this + 69) )
    goto LABEL_5;
  LOBYTE(a3) = a2;
  ADAPTER_RENDER::SuspendVidMmWorkerThread(this, (unsigned int)(v3 != 0) + 1, a3);
  v8 = *((_QWORD *)this + 66);
  if ( !v8
    || (LOBYTE(v7) = v3 != 0,
        v9 = *(_QWORD *)(*((_QWORD *)this + 65) + 8LL),
        v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64))(v9 + 760),
        LOBYTE(v9) = a2,
        v6 = v10(v8, v9, v7),
        v6 >= 0) )
  {
LABEL_5:
    *((_DWORD *)this + 135) = 0xFFFF;
  }
  return (unsigned int)v6;
}
