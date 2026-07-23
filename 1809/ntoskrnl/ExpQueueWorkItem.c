/*
 * XREFs of ExpQueueWorkItem @ 0x1400B7260
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1400D1724 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x1400D1A80 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x1400D2F6C (ExQueueWorkItemToPartition.c)
 *     ExQueueWorkItemEx @ 0x1401297B4 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140151540 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemExFromIo @ 0x14031D278 (ExQueueWorkItemExFromIo.c)
 * Callees:
 *     MmGetNextNode @ 0x140061FC0 (MmGetNextNode.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExpNewThreadNecessary @ 0x1400B6A40 (ExpNewThreadNecessary.c)
 *     ExpIsPoolReadyForWork @ 0x1400B7530 (ExpIsPoolReadyForWork.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThreadWithPriority @ 0x1400CE670 (KiTryUnwaitThreadWithPriority.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExpQueueWorkItem(__int64 a1, __int64 *a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int8 v5; // di
  __int64 v6; // r15
  unsigned int v7; // ebx
  unsigned int v8; // r10d
  unsigned __int8 CurrentIrql; // r13
  _KNODE *ParentNode; // rcx
  unsigned int NextNode; // ecx
  unsigned int v14; // r11d
  __int64 v15; // rsi
  __int64 v16; // r8
  int v17; // r10d
  __int64 v18; // r11
  __int64 v19; // rdx
  __int64 v20; // rsi
  _QWORD **v21; // r14
  __int64 v22; // rcx
  struct _KPRCB *CurrentPrcb; // rbp
  _KTHREAD *CurrentThread; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  int v27; // ecx
  unsigned int v28; // ecx
  _QWORD *v29; // rbx
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rcx
  __int64 v34; // rcx
  __int64 **v35; // rax
  struct _KPRCB *v36; // rcx
  int v37; // [rsp+30h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-48h]
  int v41; // [rsp+A8h] [rbp+20h] BYREF

  v5 = 0;
  v6 = a3;
  v7 = 0;
  v8 = a4;
  v41 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  if ( a4 >= (unsigned __int16)KeNumberNodes )
    v8 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = v8;
  if ( v8 < (unsigned __int16)KeNumberNodes )
  {
    v14 = a5;
    while ( 1 )
    {
      v15 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (_UNKNOWN *)v15 == (_UNKNOWN *)((char *)&KiNodeInit + 384 * (unsigned __int16)NextNode) )
        v15 = 0LL;
      v39 = v15;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(a1, v15, v14) )
        break;
      NextNode = MmGetNextNode(v17, &v41);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_26;
    }
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * *(unsigned __int16 *)(v15 + 146));
    v20 = *(_QWORD *)(v19 + 8 * v18);
    if ( (v20 & 1) != 0 )
      v20 = 0LL;
    v21 = (_QWORD **)(v20 + 8);
    v22 = KeGetCurrentIrql();
    v38 = v22;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)v22 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v37 = 0;
    CurrentThread = CurrentPrcb->CurrentThread;
    while ( _interlockedbittestandset((volatile signed __int32 *)v20, 7u) )
    {
      do
        KeYieldProcessorEx(&v37, v19, v16);
      while ( (*(_DWORD *)v20 & 0x80u) != 0 );
    }
    if ( *v21 != v21 && (CurrentThread->Queue != (_DISPATCHER_HEADER *volatile)v20 || CurrentThread->WaitReason != 15) )
    {
      v25 = 32LL;
      v26 = v20 + 664;
      do
      {
        v27 = *(_DWORD *)(v26 - 4);
        v26 -= 4LL;
        v7 += v27;
        --v25;
        v28 = *(_DWORD *)(v20 + 664);
        if ( v7 >= v28 )
          goto LABEL_29;
      }
      while ( v25 > v6 );
      if ( v7 < v28 )
      {
        v29 = *v21;
        while ( 1 )
        {
          v30 = (_QWORD *)*v29;
          v31 = v29;
          v29 = v30;
          v32 = (_QWORD *)v31[1];
          if ( (_QWORD *)v30[1] != v31 || (_QWORD *)*v32 != v31 )
            break;
          *v32 = v30;
          v30[1] = v32;
          if ( (unsigned __int8)KiTryUnwaitThreadWithPriority(CurrentPrcb, v31, a2, (unsigned int)v6) )
            goto LABEL_23;
          if ( v29 == v21 )
            goto LABEL_29;
        }
LABEL_44:
        __fastfail(3u);
      }
    }
LABEL_29:
    ++*(_DWORD *)(v20 + 4);
    v34 = v20 + 16 * v6 + 24;
    v35 = *(__int64 ***)(v34 + 8);
    if ( *v35 != (__int64 *)v34 )
      goto LABEL_44;
    *a2 = v34;
    a2[1] = (__int64)v35;
    *v35 = a2;
    *(_QWORD *)(v34 + 8) = a2;
LABEL_23:
    _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
    KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 0, v38);
    if ( ExpNewThreadNecessary(v20, *(_DWORD *)(v20 + 720)) )
      KeSetEvent((PRKEVENT)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL * *(unsigned __int16 *)(v39 + 146)) + 16LL), 0, 0);
    v5 = 1;
  }
LABEL_26:
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v36 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v36);
  }
  __writecr8(CurrentIrql);
  return v5;
}
