/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x140190F3C
 * Callers:
 *     MiProcessWorkingSets @ 0x14006CEC0 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x140190AB0 (MmCreatePartition.c)
 *     MiInitSystem @ 0x1409BD5A8 (MiInitSystem.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiSetTrimWhileAgingState @ 0x140120390 (MiSetTrimWhileAgingState.c)
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v1; // rsi
  __int64 result; // rax
  int v4; // r15d
  KIRQL v5; // al
  unsigned __int64 v6; // rdi
  KIRQL v7; // r14
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rcx
  struct _SINGLE_LIST_ENTRY *v14; // rax
  unsigned __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  struct _SINGLE_LIST_ENTRY v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v1 = *(_QWORD *)(a1 + 7024);
  if ( v1 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA60uLL, 0x64576D4Du);
    v1 = result;
    if ( !result )
      return result;
    memset((void *)result, 0, 0xA60uLL);
    *(_WORD *)v1 = 0;
    *(_BYTE *)(v1 + 2) = 6;
    v4 = 1;
    *(_DWORD *)(v1 + 4) = 1;
    *(_QWORD *)(v1 + 16) = v1 + 8;
    *(_QWORD *)(v1 + 8) = v1 + 8;
    *(_DWORD *)(v1 + 36) = 256;
    *(_DWORD *)(v1 + 144) = 256;
    *(_BYTE *)(a1 + 7608) = *(_BYTE *)(a1 + 7608) & 0xF8 | 2;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 7120);
  v7 = v5;
  *(_BYTE *)(a1 + 12) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 192));
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v7);
  if ( (ULONG_PTR *)a1 == &MiSystemPartition && v6 < 0x21000 )
    v6 = 135168LL;
  if ( v6 > 0x200000 )
    v8 = ((v6 - 0x200000) >> 7) + 0x10000;
  else
    v8 = v6 >> 5;
  if ( v8 < 0x480 )
    v8 = 1152LL;
  *(_QWORD *)(v1 + 2392) = v8;
  if ( v6 <= 0x80000 )
    v9 = v6 >> 5;
  else
    v9 = ((v6 - 0x80000) >> 8) + 0x4000;
  if ( v9 < 0x121 )
    v9 = 289LL;
  v10 = v8 >> 2;
  *(_QWORD *)(v1 + 2400) = v9;
  *(_QWORD *)(v1 + 2408) = v9;
  if ( v10 < 0x121 )
    v10 = 289LL;
  *(_QWORD *)(v1 + 2384) = v10;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 7024) = v1;
  MiSetTrimWhileAgingState(a1, 3);
  if ( v6 < 0x18A88 )
    v11 = 100LL;
  else
    v11 = v6 / 0x3E8;
  if ( v11 > v6 )
  {
    v11 = v6 >> 1;
    if ( !(v6 >> 1) )
      v11 = 1LL;
  }
  *(_QWORD *)(v1 + 64) = v11;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v1 + 108) = 0;
    *(_WORD *)(v1 + 104) = 1;
    *(_BYTE *)(v1 + 106) = 6;
    *(_QWORD *)(v1 + 120) = v1 + 112;
    *(_QWORD *)(v1 + 112) = v1 + 112;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_28;
    LOWORD(stru_14043BF50.Header.Lock) = 0;
    stru_14043BF50.Header.WaitListHead.Blink = &stru_14043BF50.Header.WaitListHead;
    stru_14043BF50.Header.WaitListHead.Flink = &stru_14043BF50.Header.WaitListHead;
    stru_14043BF50.Header.Size = 6;
    stru_14043BF50.Header.SignalState = 1;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_1405411C0 || (v13 = qword_1405411C0 << 8) == 0 )
  {
LABEL_28:
    v12 = *(_QWORD *)(v1 + 2392);
    if ( 2 * v12 > v6 )
    {
      if ( v6 && (v6 - v12) >> 1 )
        v13 = ((v6 - v12) >> 1) + v12;
      else
        v13 = 1LL;
    }
    else
    {
      v13 = 2 * v12;
    }
  }
  v17[0].Next = (struct _SINGLE_LIST_ENTRY *)v13;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition
    || !qword_1405411C8
    || (v14 = (struct _SINGLE_LIST_ENTRY *)(qword_1405411C8 << 8)) == 0LL )
  {
    v14 = (struct _SINGLE_LIST_ENTRY *)v13;
    if ( v13 <= v6 )
    {
      v15 = 2 * v13;
      if ( v15 > v6 )
        v14 = (struct _SINGLE_LIST_ENTRY *)((char *)v14 + ((v6 - (unsigned __int64)v14) >> 1));
      else
        v14 = (struct _SINGLE_LIST_ENTRY *)v15;
    }
  }
  v17[1].Next = v14;
  v17[2].Next = (struct _SINGLE_LIST_ENTRY *)a1;
  KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)MiUpdatePageThresholdsDpc, v17);
  return 1LL;
}
