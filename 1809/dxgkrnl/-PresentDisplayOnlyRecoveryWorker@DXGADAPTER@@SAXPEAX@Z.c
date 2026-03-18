/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C01BEA70
 * Callers:
 *     <none>
 * Callees:
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C00102E0 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C0010310 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C002FD94 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C00303E4 (McTemplateK0pt.c)
 *     DxgkInvalidateDeviceState @ 0x1C0045148 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C020AD00 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C020AF30 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext)
{
  __int64 v1; // rbx
  const GUID *v3; // r8
  __int64 v4; // rcx
  void *v5; // rdi
  const GUID *v6; // r8
  __int64 v7; // [rsp+20h] [rbp-28h]
  char v8; // [rsp+50h] [rbp+8h] BYREF
  char v9; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_QWORD *)StartContext + 4);
  v9 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v8);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v3, v1, 1);
  }
  while ( *(_QWORD *)(v1 + 144) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v1 + 144), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v4 = *(_QWORD *)(v1 + 144);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
  {
    LODWORD(v7) = *(_QWORD *)(v1 + 144) != 0LL;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v3, v1, v7);
    v4 = *(_QWORD *)(v1 + 144);
  }
  if ( v4 )
  {
    v5 = *(void **)(v1 + 192);
    if ( v5 )
      ObfReferenceObject(*(PVOID *)(v1 + 192));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x20000000) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v6, v1);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v1 + 144));
    if ( v5 )
    {
      if ( (*(_DWORD *)(v1 + 308) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v5);
      ObfDereferenceObject(v5);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v9 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v8);
}
