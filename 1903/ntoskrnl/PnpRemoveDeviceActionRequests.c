/*
 * XREFs of PnpRemoveDeviceActionRequests @ 0x140177278
 * Callers:
 *     PipSetDevNodeState @ 0x14014568C (PipSetDevNodeState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008500 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400A20A0 (KxReleaseSpinLock.c)
 *     PopDirectedDripsClearDisengageReason @ 0x140159350 (PopDirectedDripsClearDisengageReason.c)
 *     PnpDeleteDeviceActionRequest @ 0x14015DA84 (PnpDeleteDeviceActionRequest.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall PnpRemoveDeviceActionRequests(__int64 a1)
{
  KIRQL v2; // al
  __int64 v3; // rbx
  KIRQL v4; // bp
  __int64 *v5; // rdi
  __int64 result; // rax
  __int64 **v7; // rax
  _DWORD *v8; // rax
  struct _KEVENT *v9; // rcx
  __int64 v10; // r15
  KIRQL v11; // r14
  __int64 v12; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v14; // rcx

  v2 = KeAcquireSpinLockRaiseToDpc(&PnpSpinLock);
  v3 = PnpEnumerationRequestList;
  v4 = v2;
  if ( (__int64 *)PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = *(__int64 **)v3;
      if ( *(_QWORD *)(v3 + 16) == a1 )
      {
        v7 = *(__int64 ***)(v3 + 8);
        if ( v5[1] != v3 || *v7 != (__int64 *)v3 )
          __fastfail(3u);
        *v7 = v5;
        v5[1] = (__int64)v7;
        v8 = *(_DWORD **)(v3 + 48);
        if ( v8 )
          *v8 = -1073741810;
        v9 = *(struct _KEVENT **)(v3 + 40);
        if ( v9 )
          KeSetEvent(v9, 0, 0);
        v10 = *(unsigned int *)(v3 + 24);
        v11 = KeAcquireSpinLockRaiseToDpc(&qword_140444D00);
        v12 = MEMORY[0xFFFFF78000000008];
        if ( !--dword_140444D08 )
        {
          PopDirectedDripsClearDisengageReason(4);
          if ( byte_140444D78 )
          {
            qword_140444D80 += v12 - qword_140444D88;
            qword_140444D88 = 0LL;
          }
        }
        --dword_140444D10[v10];
        KxReleaseSpinLock(&qword_140444D00);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(v11);
        ObfDereferenceObjectWithTag(*(PVOID *)(v3 + 16), 0x746C6644u);
        PnpDeleteDeviceActionRequest((volatile signed __int32 *)v3);
      }
      v3 = (__int64)v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  KxReleaseSpinLock(&PnpSpinLock);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v14);
  }
  result = v4;
  __writecr8(v4);
  return result;
}
