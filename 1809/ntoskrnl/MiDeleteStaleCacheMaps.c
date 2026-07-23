/*
 * XREFs of MiDeleteStaleCacheMaps @ 0x1400F0BCC
 * Callers:
 *     MiWorkingSetManager @ 0x1400EF634 (MiWorkingSetManager.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void MiDeleteStaleCacheMaps()
{
  int v0; // esi
  KIRQL v1; // di
  unsigned __int64 *v2; // rdx
  int v3; // eax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  void *v9; // rcx
  __int64 v10; // r8
  _QWORD *v11; // rdx
  signed __int32 v12[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD v13[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( (__int64 *)qword_14043BDE0 != &qword_14043BDE0 )
  {
    _InterlockedOr(v12, 0);
    v0 = KiCacheFlushTimeStamp;
    if ( (unsigned int)(KiCacheFlushTimeStamp - dword_14043BDF0) > 2
      || (dword_14043BDF0 & 1) == 0 && (unsigned int)(KiCacheFlushTimeStamp - dword_14043BDF0) >= 2 )
    {
      v13[1] = v13;
      v13[0] = v13;
      v1 = ExAcquireSpinLockExclusive(&dword_14043BDC0);
      while ( (__int64 *)qword_14043BDE0 != &qword_14043BDE0 )
      {
        v2 = (unsigned __int64 *)(qword_14043BDE0 - 24);
        v3 = *(_DWORD *)(qword_14043BDE0 - 24 + 56);
        if ( (unsigned int)(v0 - v3) <= 2 && ((v3 & 1) != 0 || (unsigned int)(v0 - v3) < 2) )
          break;
        v4 = (_QWORD *)qword_14043BDE0;
        v5 = *(_QWORD *)qword_14043BDE0;
        v6 = (_QWORD *)v2[4];
        if ( *(_QWORD *)(*(_QWORD *)qword_14043BDE0 + 8LL) != qword_14043BDE0
          || *v6 != qword_14043BDE0
          || (*v6 = v5,
              *(_QWORD *)(v5 + 8) = v6,
              RtlAvlRemoveNode((unsigned __int64 *)&qword_14043BDD8, v2),
              v7 = v13[0],
              --qword_14043BDF8,
              *(_QWORD **)(v13[0] + 8LL) != v13) )
        {
LABEL_25:
          __fastfail(3u);
        }
        *v4 = v13[0];
        v4[1] = v13;
        *(_QWORD *)(v7 + 8) = v4;
        v13[0] = v4;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_14043BDC0);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
      __writecr8(v1);
      while ( (_QWORD *)v13[0] != v13 )
      {
        v9 = (void *)(v13[0] - 24LL);
        v10 = *(_QWORD *)v13[0];
        v11 = *(_QWORD **)(v13[0] + 8LL);
        if ( *(_QWORD *)(*(_QWORD *)v13[0] + 8LL) != v13[0] || *v11 != v13[0] )
          goto LABEL_25;
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
}
