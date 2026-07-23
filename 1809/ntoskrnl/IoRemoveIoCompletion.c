/*
 * XREFs of IoRemoveIoCompletion @ 0x140058990
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x140059B50 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletionEx @ 0x1405EACE0 (NtRemoveIoCompletionEx.c)
 *     NtRemoveIoCompletion @ 0x14068FFB0 (NtRemoveIoCompletion.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KeRemoveQueueEx @ 0x140058D60 (KeRemoveQueueEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     IoFreeIrp @ 0x1400B95B0 (IoFreeIrp.c)
 *     IopCompleteRequest @ 0x1400BFC50 (IopCompleteRequest.c)
 *     IopDropIrp @ 0x1400E0A1C (IopDropIrp.c)
 *     IopInterlockedAdd @ 0x14012FA8C (IopInterlockedAdd.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 *     IopFreeMiniCompletionPacket @ 0x1405EAC20 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rbx
  __int64 v9; // r13
  ULONG v10; // esi
  __int64 i; // rdi
  PLIST_ENTRY v12; // rbx
  char Flink; // al
  struct _LIST_ENTRY *v14; // r15
  struct _LIST_ENTRY *Blink; // r12
  __int64 v16; // r14
  __int64 result; // rax
  struct _LIST_ENTRY **p_Blink; // rbx
  int v19; // eax
  unsigned __int64 v20; // r13
  unsigned __int8 CurrentIrql; // r8
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *SchedulerAssist; // rcx
  struct _KPRCB *v24; // rcx
  _DWORD *v25; // rdx
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct _KPRCB *v30; // rcx
  unsigned __int8 v31; // [rsp+30h] [rbp-F8h]
  __int128 v33; // [rsp+48h] [rbp-E0h]
  __int64 v34; // [rsp+58h] [rbp-D0h] BYREF
  ULONG v35; // [rsp+60h] [rbp-C8h]
  PLIST_ENTRY *v36; // [rsp+68h] [rbp-C0h]
  struct _KPRCB *v37; // [rsp+70h] [rbp-B8h]
  PVOID v38; // [rsp+78h] [rbp-B0h]
  char v39; // [rsp+80h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+88h] [rbp-A0h]
  struct _KQUEUE *v41; // [rsp+90h] [rbp-98h]
  __int64 v42; // [rsp+98h] [rbp-90h]
  PLIST_ENTRY *v43; // [rsp+A0h] [rbp-88h]
  ULONG *v44; // [rsp+A8h] [rbp-80h]
  _BYTE v45[48]; // [rsp+B0h] [rbp-78h] BYREF
  void *retaddr; // [rsp+128h] [rbp+0h]

  v8 = EntryArray;
  v36 = EntryArray;
  v9 = a2;
  v38 = a1;
  v41 = a1;
  v42 = a2;
  v43 = EntryArray;
  v44 = a5;
  DWORD1(v33) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v35 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    v12 = v8[i];
    if ( (unsigned __int64)&v12[-17].Blink + 7 <= 1 || v12 == (PLIST_ENTRY)192 || v12 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v12[1].Flink;
    if ( Flink )
    {
      if ( Flink != 2 )
      {
        v14 = v12[2].Flink;
        Blink = v12[1].Blink;
        LODWORD(v33) = v12[2].Blink;
        *((_QWORD *)&v33 + 1) = v12[3].Flink;
        IopFreeMiniCompletionPacket(v12);
        goto LABEL_9;
      }
      v14 = v12[3].Blink;
      Blink = v12[3].Flink;
      LODWORD(v33) = v12[4].Blink;
      *((_QWORD *)&v33 + 1) = v12[4].Flink;
      Object = v12[5].Flink;
      CurrentIrql = KeGetCurrentIrql();
      v31 = CurrentIrql;
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&v12[6]);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v37 = CurrentPrcb;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v27 = SchedulerAssist[5];
            SchedulerAssist[5] = v27 + 1;
            if ( v27 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              CurrentPrcb = v37;
              CurrentIrql = v31;
            }
          }
        }
        if ( !_interlockedbittestandset64((volatile signed __int32 *)&v12[6], 0LL) )
          goto LABEL_20;
        v26 = CurrentPrcb->SchedulerAssist;
        if ( v26 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v28 = v26[5] - 1;
            v26[5] = v28;
            if ( !v28 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        KxWaitForSpinLockAndAcquire(&v12[6]);
      }
      CurrentIrql = v31;
LABEL_20:
      LOBYTE(v12[6].Blink) = 0;
      v12[5].Blink = 0LL;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(&v12[6], retaddr);
        CurrentIrql = v31;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)&v12[6], 0LL);
      }
      v24 = KeGetCurrentPrcb();
      v25 = v24->SchedulerAssist;
      if ( v25 )
      {
        if ( v24->NestingLevel <= 1u )
        {
          v29 = v25[5] - 1;
          v25[5] = v29;
          if ( !v29 )
          {
            KiRemoveSystemWorkPriorityKick(v24);
            CurrentIrql = v31;
          }
        }
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v30 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v30);
        CurrentIrql = v31;
      }
      __writecr8(CurrentIrql);
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      ObfDereferenceObjectWithTag(v38, 0x746C6644u);
      ObfDereferenceObjectWithTag(v12, 0x746C6644u);
      v9 = a2;
      goto LABEL_9;
    }
    p_Blink = &v12[-11].Blink;
    v14 = p_Blink[12];
    v37 = (struct _KPRCB *)(p_Blink + 15);
    Blink = p_Blink[15];
    v33 = *((_OWORD *)p_Blink + 3);
    v19 = *((_DWORD *)p_Blink + 4);
    if ( (v19 & 0x2000) != 0 )
    {
      v34 = 0LL;
      v20 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
      p_Blink[12] = 0LL;
      if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
      {
        IopCompleteRequest(
          (_DWORD)p_Blink + 120,
          (unsigned int)&v39,
          (unsigned int)&v34,
          (_DWORD)p_Blink + 192,
          (__int64)&v34);
        v9 = a2;
      }
      else
      {
        if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 760)) )
        {
          KiStackAttachProcess((_KPROCESS *)v20, 0LL, (__int64)v45);
          IopCompleteRequest((_DWORD)v37, (unsigned int)&v39, (unsigned int)&v34, (_DWORD)p_Blink + 192, (__int64)&v34);
          KiUnstackDetachProcess((__int64)v45, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 760));
        }
        else
        {
          IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
          LODWORD(v33) = -1073741536;
          *((_QWORD *)&v33 + 1) = 0LL;
        }
        v9 = a2;
      }
    }
    else if ( (v19 & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(p_Blink + 11, 0xFFFFFFFFLL) )
    {
      IoFreeIrp((PIRP)p_Blink);
    }
LABEL_9:
    v16 = 32LL * (unsigned int)i;
    *(_QWORD *)(v16 + v9) = Blink;
    *(_QWORD *)(v16 + v9 + 8) = v14;
    *(_OWORD *)(v16 + v9 + 16) = v33;
    v8 = v36;
  }
  result = (unsigned int)v12;
LABEL_11:
  *v44 = v10;
  return result;
}
