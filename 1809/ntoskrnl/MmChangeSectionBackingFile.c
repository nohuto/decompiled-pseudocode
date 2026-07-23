/*
 * XREFs of MmChangeSectionBackingFile @ 0x14012FAC8
 * Callers:
 *     FsRtlChangeBackingFileObject @ 0x140169DE0 (FsRtlChangeBackingFileObject.c)
 *     MiShareExistingControlArea @ 0x1405DFC94 (MiShareExistingControlArea.c)
 * Callees:
 *     ObFastReplaceObject @ 0x140094864 (ObFastReplaceObject.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140100280 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MmChangeSectionBackingFile(_QWORD *a1, _QWORD *a2, int a3)
{
  int v5; // esi
  KIRQL v6; // al
  __int64 *v7; // rdi
  KIRQL v8; // bp
  __int64 v9; // rdi
  int v10; // ebx
  volatile __int64 *v11; // rcx
  unsigned __int64 v12; // rbx
  void *v13; // rcx
  int v14; // r8d
  volatile LONG *v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx

  if ( (a3 & 0xFFFFFFFC) != 0 || a3 == 3 )
    return 3221225713LL;
  if ( a1 && a1[5] != a2[5] )
    return 3221225712LL;
  v5 = a3 & 1;
  while ( 1 )
  {
    v6 = ExAcquireSpinLockExclusive(&dword_140439C80);
    v7 = (__int64 *)a2[5];
    v8 = v6;
    if ( v5 )
      v9 = *v7;
    else
      v9 = v7[2];
    if ( !v9 )
    {
      v15 = &dword_140439C80;
      goto LABEL_18;
    }
    v10 = ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)(v9 + 72));
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140439C80);
    if ( v10 )
      break;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
  }
  if ( (*(_DWORD *)(v9 + 56) & 1) == 0 )
  {
    v11 = (volatile __int64 *)(v9 + 64);
    if ( a1 )
    {
      if ( (_QWORD *)(*v11 & 0xFFFFFFFFFFFFFFF0uLL) != a1 )
        goto LABEL_14;
      ObFastReplaceObject(v11, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v13 = a1;
      goto LABEL_13;
    }
    v12 = *v11 & 0xFFFFFFFFFFFFFFF0uLL;
    if ( v12 )
    {
      ObFastReplaceObject(v11, (ULONG_PTR)a2);
      ObfReferenceObjectWithTag(a2, 0x746C6644u);
      v13 = (void *)v12;
LABEL_13:
      ObDereferenceObjectDeferDelete(v13);
    }
  }
LABEL_14:
  v14 = *(_DWORD *)(v9 + 56);
  if ( (v14 & 0x200) != 0 && ((__int64)KeGetCurrentThread()[1].Queue & 0x40) == 0 )
    *(_DWORD *)(v9 + 56) = v14 & 0xFFFFFDFF;
  v15 = (volatile LONG *)(v9 + 72);
LABEL_18:
  ExReleaseSpinLockExclusiveFromDpcLevel(v15);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(v8);
  return 0LL;
}
