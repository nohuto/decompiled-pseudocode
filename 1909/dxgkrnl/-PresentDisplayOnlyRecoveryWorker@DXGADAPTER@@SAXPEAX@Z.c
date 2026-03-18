/*
 * XREFs of ?PresentDisplayOnlyRecoveryWorker@DXGADAPTER@@SAXPEAX@Z @ 0x1C01EE700
 * Callers:
 *     <none>
 * Callees:
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F1C0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F298 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     McTemplateK0p @ 0x1C00356F4 (McTemplateK0p.c)
 *     McTemplateK0pt @ 0x1C0035D44 (McTemplateK0pt.c)
 *     DxgkInvalidateDeviceState @ 0x1C004B848 (DxgkInvalidateDeviceState.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023DF70 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z @ 0x1C023E1A0 (-TdrCompleteRecoveryContext@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N1@Z.c)
 */

void __fastcall DXGADAPTER::PresentDisplayOnlyRecoveryWorker(struct _TDR_RECOVERY_CONTEXT *StartContext, __int64 a2)
{
  __int64 v2; // rbx
  const GUID *v4; // r8
  __int64 v5; // rcx
  void *v6; // rdi
  const GUID *v7; // r8
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-28h]
  char v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)StartContext + 4);
  v11 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v10, a2);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPreAcquireAdapterLock, v4, v2, 1);
  }
  while ( *(_QWORD *)(v2 + 144) && !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v2 + 144), 0) )
  {
    Interval.QuadPart = -100000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  v5 = *(_QWORD *)(v2 + 144);
  if ( bTracingEnabled
    && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
    && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
    && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
  {
    LODWORD(v9) = *(_QWORD *)(v2 + 144) != 0LL;
    McTemplateK0pt((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventPostAcquireAdapterLock, v4, v2, v9);
    v5 = *(_QWORD *)(v2 + 144);
  }
  if ( v5 )
  {
    v6 = *(void **)(v2 + 192);
    if ( v6 )
      ObfReferenceObject(*(PVOID *)(v2 + 192));
    TdrCollectDbgInfoStage2(StartContext);
    if ( bTracingEnabled
      && (*(_DWORD *)(&DxgkControlGuid_Context + 2) & 0x1000000) != 0
      && (*(_WORD *)(&DxgkControlGuid_Context + 2) & 0x2000) == 0
      && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      McTemplateK0p((struct _MCGEN_TRACE_CONTEXT *)&DxgkControlGuid_Context, &EventReleaseAdapterLock, v7, v2);
    }
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 144));
    if ( v6 )
    {
      if ( (*(_DWORD *)(v2 + 308) & 4) == 0 )
        DxgkInvalidateDeviceState((__int64)v6);
      ObfDereferenceObject(v6);
    }
  }
  TdrCompleteRecoveryContext(StartContext, 1, 0);
  if ( v11 )
    DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v10, v8);
}
