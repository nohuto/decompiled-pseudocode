/*
 * XREFs of VfBuildMdlFromScatterGatherList @ 0x14092B270
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfBuildMdlFromScatterGatherList(__int64 a1, __int64 a2, struct _MDL *a3, PMDL *a4)
{
  _QWORD *v8; // rbx
  __int64 AdapterInformationInternal; // rax
  _QWORD *v10; // rsi
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // al
  _QWORD *v13; // rcx
  KIRQL v14; // bp
  _QWORD *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 (__fastcall *RealDmaOperation)(__int64, __int64, struct _MDL *, PMDL *); // rax
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // rbp
  PMDL Mdl; // rax
  PMDL v22; // rdi

  v8 = 0LL;
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( AdapterInformationInternal )
  {
    if ( *(_QWORD *)(a2 + 8) != -559026163LL )
      goto LABEL_19;
    v10 = (_QWORD *)(AdapterInformationInternal + 56);
    if ( (_QWORD *)*v10 != v10 )
    {
      v11 = (KSPIN_LOCK *)(AdapterInformationInternal + 72);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 72));
      v13 = (_QWORD *)*v10;
      v14 = v12;
      while ( 1 )
      {
        v15 = v13 - 9;
        if ( v10 == v15 + 9 )
          break;
        if ( v15[8] == a2 )
        {
          v8 = (_QWORD *)v15[12];
          break;
        }
        v13 = (_QWORD *)v15[9];
      }
      KxReleaseSpinLock(v11);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v14 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v14);
    }
  }
  if ( *(_QWORD *)(a2 + 8) == -559026163LL && v8 )
    *(_QWORD *)(a2 + 8) = v8[6];
LABEL_19:
  RealDmaOperation = (__int64 (__fastcall *)(__int64, __int64, struct _MDL *, PMDL *))ViGetRealDmaOperation(a1);
  v18 = RealDmaOperation(a1, a2, a3, a4);
  v19 = v18;
  if ( v8 )
  {
    v8[6] = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = -559026163LL;
  }
  if ( v18 >= 0 && *a4 == a3 && v8 )
  {
    if ( v8[5] )
    {
      return (unsigned int)-1073741709;
    }
    else
    {
      v20 = v8[7];
      Mdl = IoAllocateMdl(0LL, *(_DWORD *)(v20 + 40), 0, 0, 0LL);
      v22 = Mdl;
      if ( Mdl )
      {
        v8[5] = Mdl;
        memmove(&Mdl[1], (const void *)(v20 + 48), 8 * ((unsigned __int64)*(unsigned int *)(v20 + 40) >> 12));
        v22->ByteOffset += a3->ByteOffset;
        v22->ByteCount -= v22->ByteOffset;
        v22->MdlFlags |= 2u;
        *a4 = v22;
      }
      else
      {
        return (unsigned int)-1073741670;
      }
    }
  }
  return v19;
}
