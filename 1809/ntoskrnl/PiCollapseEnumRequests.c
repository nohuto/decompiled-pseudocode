/*
 * XREFs of PiCollapseEnumRequests @ 0x14016C670
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406E77FC (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1406FD700 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 **v4; // rsi
  KIRQL v5; // bl
  __int64 v6; // rdx
  __int64 *i; // rbx
  __int64 *v9; // rcx
  int v10; // eax
  __int64 **v11; // rax
  __int64 *v12; // rax
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = *(__int64 ***)(a1 + 8);
  v5 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v9 = *(__int64 **)v3;
      if ( *(_BYTE *)(v3 + 28) )
        break;
      v10 = *(_DWORD *)(v3 + 24);
      if ( v10 >= 9 && (v10 <= 10 || v10 == 14) )
      {
        v11 = *(__int64 ***)(v3 + 8);
        if ( v9[1] != v3
          || *v11 != (__int64 *)v3
          || (*v11 = v9, v9[1] = (__int64)v11, v12 = *(__int64 **)(a1 + 8), *v12 != a1) )
        {
          __fastfail(3u);
        }
        *(_QWORD *)v3 = a1;
        *(_QWORD *)(v3 + 8) = v12;
        *v12 = v3;
        *(_QWORD *)(a1 + 8) = v3;
      }
      v3 = (__int64)v9;
    }
    while ( v9 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v5 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v5);
  for ( i = *v4; i != (__int64 *)a1; i = (__int64 *)*i )
  {
    LOBYTE(v6) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*(_QWORD *)(i[2] + 312) + 40LL), v6);
    ObfDereferenceObjectWithTag((PVOID)i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != *(__int64 ***)(a1 + 8);
}
