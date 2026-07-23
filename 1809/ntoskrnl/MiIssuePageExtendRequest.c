/*
 * XREFs of MiIssuePageExtendRequest @ 0x1402B855C
 * Callers:
 *     MiChargeCommit @ 0x14004CF20 (MiChargeCommit.c)
 *     MmResourcesAvailable @ 0x1400FD980 (MmResourcesAvailable.c)
 *     MiPageFileNoFreeSpace @ 0x1402B8800 (MiPageFileNoFreeSpace.c)
 *     MiCreatePagingFile @ 0x14074D1A8 (MiCreatePagingFile.c)
 *     MiExtendWorkingSetSwapPagefile @ 0x14085FC94 (MiExtendWorkingSetSwapPagefile.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     MiQueuePageFileExtension @ 0x1402B89D4 (MiQueuePageFileExtension.c)
 */

__int64 __fastcall MiIssuePageExtendRequest(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  char v5; // r10
  int v7; // r11d
  int v8; // r15d
  volatile signed __int32 *v9; // rbx
  char v10; // al
  char v11; // al
  unsigned int v12; // ecx
  LARGE_INTEGER *Timeout; // rdi
  char v14; // al
  unsigned int v15; // ecx
  __int64 v16; // r9
  char v17; // al
  char v18; // al
  KIRQL v19; // di
  __int64 v20; // rcx
  __int64 v21; // r8
  volatile signed __int32 **v22; // rdx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v25; // [rsp+38h] [rbp-19h] BYREF
  __int16 v26; // [rsp+68h] [rbp+17h]
  char v27; // [rsp+6Ah] [rbp+19h]
  int v28; // [rsp+6Ch] [rbp+1Bh]
  _QWORD v29[2]; // [rsp+70h] [rbp+1Fh] BYREF
  int v30; // [rsp+80h] [rbp+2Fh]
  char v31; // [rsp+84h] [rbp+33h]
  char v32; // [rsp+87h] [rbp+36h]

  CurrentThread = KeGetCurrentThread();
  v5 = a3;
  v7 = a3 & 8;
  if ( (a3 & 8) != 0 && !*(_BYTE *)(a1 + 1617) )
    return 0LL;
  v8 = a3 & 2;
  if ( (a3 & 2) != 0 )
  {
    v9 = (volatile signed __int32 *)(a1 + (v7 != 0 ? 1368LL : 424LL));
    if ( _InterlockedCompareExchange(v9 + 18, 1, 0) )
      return 0LL;
    v10 = *((_BYTE *)v9 + 79);
    a2 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    if ( (a3 & 4) != 0 )
      v11 = v10 | 1;
    else
      v11 = v10 & 0xFE;
    v12 = 0;
    *((_BYTE *)v9 + 79) = v11;
    Timeout = 0LL;
  }
  else
  {
    if ( (ULONG_PTR *(__fastcall *)(__int64))CurrentThread[1].ApcState.ApcListHead[0].Blink == MiDereferenceSegmentThread
      || KeGetCurrentIrql() >= 2u )
    {
      return 0LL;
    }
    if ( (a3 & 8) != 0 )
      a2 = (a2 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
    a3 = *(unsigned int *)(a1 + 7128);
    v9 = (volatile signed __int32 *)&v25;
    v25 = 0LL;
    v30 = 1;
    v31 = a4;
    if ( (v5 & 1) != 0 )
      v14 = v32 & 0xE8 | 2;
    else
      v14 = v32 & 0xE8;
    v26 = 0;
    v28 = 0;
    v32 = v14;
    v29[1] = v29;
    v29[0] = v29;
    v27 = 6;
    if ( v7 )
    {
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
    }
    else if ( a4 >= (unsigned int)a3 )
    {
      v15 = 0;
      Timeout = (LARGE_INTEGER *)&MiOneSecond;
      if ( (_DWORD)a3 )
      {
        v16 = a1 + 7136;
        do
        {
          if ( (*(_WORD *)(*(_QWORD *)v16 + 204LL) & 0x50) == 0 && **(_QWORD **)v16 < *(_QWORD *)(*(_QWORD *)v16 + 8LL) )
            break;
          ++v15;
          v16 += 8LL;
        }
        while ( v15 < (unsigned int)a3 );
      }
      if ( v15 == (_DWORD)a3 )
        return 0LL;
    }
    else
    {
      Timeout = 0LL;
    }
    v12 = 1;
  }
  v17 = *((_BYTE *)v9 + 79);
  if ( v7 )
    v18 = v17 | 8;
  else
    v18 = v17 & 0xF7;
  *((_BYTE *)v9 + 79) = v18;
  LOBYTE(a3) = 17;
  *((_QWORD *)v9 + 5) = 0LL;
  *((_QWORD *)v9 + 10) = 0LL;
  *((_QWORD *)v9 + 4) = a2;
  *((_QWORD *)v9 + 3) = a1;
  MiQueuePageFileExtension(v9, v12, a3);
  if ( !v8 )
  {
    if ( KeWaitForSingleObject((PVOID)(v9 + 12), Executive, 0, 0, Timeout) == 258 )
    {
      v19 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1280));
      if ( !*((_DWORD *)v9 + 13) )
      {
        v20 = *((_QWORD *)v9 + 10);
        if ( v20 )
        {
          *(_QWORD *)(v20 + 80) = 0LL;
        }
        else
        {
          v21 = *((_QWORD *)v9 + 1);
          v22 = (volatile signed __int32 **)*((_QWORD *)v9 + 2);
          if ( *(volatile signed __int32 **)(v21 + 8) != v9 + 2 || *v22 != v9 + 2 )
            __fastfail(3u);
          *v22 = (volatile signed __int32 *)v21;
          *(_QWORD *)(v21 + 8) = v22;
        }
        *((_QWORD *)v9 + 5) = 0LL;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1280));
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v19);
    }
    if ( *((_QWORD *)v9 + 5) )
      return 1LL;
  }
  return 0LL;
}
