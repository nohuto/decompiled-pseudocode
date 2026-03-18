/*
 * XREFs of ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EE4B8
 * Callers:
 *     ?Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C01EEED0 (-Reset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C023E6B0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?Enter@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F1C0 (-Enter@DXGCRITICALREGION@@QEAAXXZ.c)
 *     ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1C001F298 (-Leave@DXGCRITICALREGION@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGCRITICALREGION@@QEAA@XZ @ 0x1C0032690 (--1DXGCRITICALREGION@@QEAA@XZ.c)
 *     ?DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ @ 0x1C01FC498 (-DdiResetFromTimeout@ADAPTER_RENDER@@QEAAJXZ.c)
 *     TdrBugcheckOnTimeout @ 0x1C023F0EC (TdrBugcheckOnTimeout.c)
 */

__int64 __fastcall DXGADAPTER::PrepareToReset(DXGADAPTER *this, struct _TDR_RECOVERY_CONTEXT *a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  bool v10; // r15
  ULONG IsResourceAcquiredSharedLite; // eax
  bool v12; // r14
  unsigned int i; // esi
  __int64 v14; // rdx
  __int64 v16; // rdx
  char v17; // [rsp+50h] [rbp+8h] BYREF
  char v18; // [rsp+51h] [rbp+9h]
  union _LARGE_INTEGER Interval; // [rsp+58h] [rbp+10h] BYREF

  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    *(_QWORD *)(v4 + 24) = 7666LL;
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_QWORD *)this + 320);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = 7671LL;
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_QWORD *)this + 320);
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(v5 + 544) + 8LL) + 112LL))(*(_QWORD *)(v5 + 552));
  if ( !KeResetEvent((PRKEVENT)this + 9) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 7695LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v18 = 0;
  DXGCRITICALREGION::Enter((DXGCRITICALREGION *)&v17, v7);
  v10 = ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 30)) != 0;
  IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(*((PERESOURCE *)this + 30));
  v12 = IsResourceAcquiredSharedLite != 0;
  if ( v10 )
  {
LABEL_15:
    if ( (int)ADAPTER_RENDER::DdiResetFromTimeout(*((ADAPTER_RENDER **)this + 320)) < 0 )
    {
      *((_QWORD *)a2 + 13) = *((_QWORD *)this + 55);
      TdrBugcheckOnTimeout((ULONG_PTR)a2);
    }
    *((_BYTE *)this + 2503) = 1;
    if ( !v10 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)this + 30));
      if ( v12 )
        ExAcquireResourceSharedLite(*((PERESOURCE *)this + 30), 1u);
    }
    KeSetEvent((PRKEVENT)this + 9, 0, 0);
    if ( v18 )
      DXGCRITICALREGION::Leave((DXGCRITICALREGION *)&v17, v16);
    return 0LL;
  }
  else
  {
    if ( IsResourceAcquiredSharedLite )
      ExReleaseResourceLite(*((PERESOURCE *)this + 30));
    for ( i = 0; ; ++i )
    {
      if ( ExAcquireResourceExclusiveLite(*((PERESOURCE *)this + 30), 0) )
      {
        *((_DWORD *)a2 + 699) = i;
        goto LABEL_15;
      }
      if ( i >= dword_1C00A2D70 )
        break;
      Interval.QuadPart = -10000000LL;
      KeDelayExecutionThread(0, 0, &Interval);
    }
    KeSetEvent((PRKEVENT)this + 9, 0, 0);
    DXGCRITICALREGION::~DXGCRITICALREGION((DXGCRITICALREGION *)&v17, v14);
    return 3221225653LL;
  }
}
