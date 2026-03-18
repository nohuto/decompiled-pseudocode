/*
 * XREFs of MiInitializeWorkingSetManagerParameters @ 0x14019AE8C
 * Callers:
 *     MiProcessWorkingSets @ 0x140047BB0 (MiProcessWorkingSets.c)
 *     MmCreatePartition @ 0x14019A610 (MmCreatePartition.c)
 *     MiInitSystem @ 0x1409F0E88 (MiInitSystem.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     KeGenericCallDpc @ 0x1400F9170 (KeGenericCallDpc.c)
 *     MiSetTrimWhileAgingState @ 0x1400F9F54 (MiSetTrimWhileAgingState.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiInitializeWorkingSetManagerParameters(__int64 a1)
{
  __int64 v2; // rsi
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
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  _QWORD v17[4]; // [rsp+20h] [rbp-48h] BYREF

  v17[0] = 0LL;
  v2 = *(_QWORD *)(a1 + 7800);
  if ( v2 )
  {
    v4 = 0;
  }
  else
  {
    result = (__int64)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA60uLL, 0x64576D4Du);
    v2 = result;
    if ( !result )
      return result;
    memset((void *)result, 0, 0xA60uLL);
    *(_BYTE *)(v2 + 2) = 6;
    *(_DWORD *)(v2 + 4) = 1;
    v4 = 1;
    *(_QWORD *)(v2 + 16) = v2 + 8;
    *(_QWORD *)(v2 + 8) = v2 + 8;
    *(_DWORD *)(v2 + 36) = 256;
    *(_DWORD *)(v2 + 144) = 256;
    *(_BYTE *)(a1 + 8376) = *(_BYTE *)(a1 + 8376) & 0xF8 | 2;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 192));
  v6 = *(_QWORD *)(a1 + 7888);
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
  *(_QWORD *)(v2 + 2392) = v8;
  if ( v6 <= 0x80000 )
    v9 = v6 >> 5;
  else
    v9 = ((v6 - 0x80000) >> 8) + 0x4000;
  if ( v9 < 0x121 )
    v9 = 289LL;
  v10 = v8 >> 2;
  *(_QWORD *)(v2 + 2400) = v9;
  *(_QWORD *)(v2 + 2408) = v9;
  if ( v10 < 0x121 )
    v10 = 289LL;
  *(_QWORD *)(v2 + 2384) = v10;
  if ( v4 == 1 )
    *(_QWORD *)(a1 + 7800) = v2;
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
  *(_QWORD *)(v2 + 64) = v11;
  if ( v4 == 1 )
  {
    *(_DWORD *)(v2 + 108) = 0;
    *(_WORD *)(v2 + 104) = 1;
    *(_BYTE *)(v2 + 106) = 6;
    *(_QWORD *)(v2 + 120) = v2 + 112;
    *(_QWORD *)(v2 + 112) = v2 + 112;
    if ( (ULONG_PTR *)a1 != &MiSystemPartition )
      goto LABEL_28;
    LOWORD(stru_140466910.Header.Lock) = 0;
    stru_140466910.Header.WaitListHead.Blink = &stru_140466910.Header.WaitListHead;
    stru_140466910.Header.WaitListHead.Flink = &stru_140466910.Header.WaitListHead;
    stru_140466910.Header.Size = 6;
    stru_140466910.Header.SignalState = 1;
  }
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_1405711D0 || (v13 = qword_1405711D0 << 8) == 0 )
  {
LABEL_28:
    v12 = *(_QWORD *)(v2 + 2392);
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
  v17[0] = v13;
  if ( (ULONG_PTR *)a1 != &MiSystemPartition || !qword_1405711D8 || (v14 = qword_1405711D8 << 8) == 0 )
  {
    v14 = v13;
    if ( v13 <= v6 )
    {
      v15 = 2 * v13;
      if ( v15 > v6 )
        v14 += (v6 - v14) >> 1;
      else
        v14 = v15;
    }
  }
  v17[1] = v14;
  v17[2] = a1;
  KeGenericCallDpc((__int64)MiUpdatePageThresholdsDpc, (__int64)v17);
  return 1LL;
}
