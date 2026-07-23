/*
 * XREFs of MiMappedPageWriter @ 0x1401808E0
 * Callers:
 *     <none>
 * Callees:
 *     MiFreeModWriterEntry @ 0x140022C88 (MiFreeModWriterEntry.c)
 *     MiAllocateModWriterEntry @ 0x140029B74 (MiAllocateModWriterEntry.c)
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14004F090 (KiLeaveGuardedRegionUnsafe.c)
 *     KeWaitForMultipleObjects @ 0x140053760 (KeWaitForMultipleObjects.c)
 *     MiGatherMappedPages @ 0x14007E6A0 (MiGatherMappedPages.c)
 *     KeSetActualBasePriorityThread @ 0x1400CCFC0 (KeSetActualBasePriorityThread.c)
 *     KeSetPriorityThread @ 0x1400CD8F0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x1400FA384 (KeWaitForGate.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiDeleteMappedMdls @ 0x1402AB194 (MiDeleteMappedMdls.c)
 */

__int64 __fastcall MiMappedPageWriter(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  KPRIORITY v3; // eax
  PVOID *v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  __int64 v7; // r9
  void *v8; // rcx
  unsigned int v9; // ebp
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  int v12; // r8d
  _QWORD *ModWriterEntry; // rdi
  unsigned __int32 v14; // eax
  __int64 v15; // r8
  _QWORD *v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rcx
  PVOID Object[18]; // [rsp+40h] [rbp-418h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+D0h] [rbp-388h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = KeSetPriorityThread(CurrentThread, 18);
  *((_DWORD *)&CurrentThread[1].SwapListEntry + 3) |= 2u;
  v4 = Object;
  v5 = 0LL;
  v6 = v3;
  v7 = 16LL;
  do
  {
    v8 = (void *)(v5 + a1 + 4344);
    v5 += 24LL;
    *v4++ = v8;
    --v7;
  }
  while ( v7 );
  Object[16] = (PVOID)(a1 + 104);
  Object[17] = (PVOID)(a1 + 776);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v9 = -1;
LABEL_5:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 7680), v11 = *(_QWORD *)(a1 + 7792), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 772) )
  {
    v9 = KeWaitForMultipleObjects(0x12u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 108);
      if ( !v12 && v9 < 0x10 )
      {
        v4 = (PVOID *)(5LL * v9);
        if ( *(_QWORD *)(a1 + 40LL * v9 + 3408) == 0xFFFFFFFFFLL )
          goto LABEL_4;
      }
      if ( *(_QWORD *)(a1 + 7680) == *(_QWORD *)(a1 + 7792) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 608) >= *(_QWORD *)(a1 + 600) )
        ModWriterEntry = 0LL;
      else
        ModWriterEntry = MiAllocateModWriterEntry(a1, 16LL, 1);
      if ( ModWriterEntry )
      {
        memset(ModWriterEntry, 0, 0x108uLL);
        *ModWriterEntry = 97LL;
        ModWriterEntry[24] = a1;
      }
      else
      {
        --CurrentThread->SpecialApcDisable;
        v17 = (_QWORD *)(a1 + 616);
        v18 = *(__int64 **)(a1 + 616);
        if ( v18 == (__int64 *)(a1 + 616) )
        {
          *(_BYTE *)(a1 + 656) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)(a1 + 616);
          if ( (_QWORD *)v18[1] != v17 )
            goto LABEL_41;
          v19 = *v18;
          if ( *(_QWORD **)(v19 + 8) != ModWriterEntry )
            goto LABEL_41;
          *v17 = v19;
          *(_QWORD *)(v19 + 8) = v17;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 608));
        if ( v14 > *(_DWORD *)(a1 + 612) )
          *(_DWORD *)(a1 + 612) = v14;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 608), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v20 = *(_QWORD **)(a1 + 624);
            if ( *v20 != a1 + 616 )
LABEL_41:
              __fastfail(3u);
            ModWriterEntry[1] = v20;
            *ModWriterEntry = a1 + 616;
            *v20 = ModWriterEntry;
            *(_QWORD *)(a1 + 624) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate(a1 + 632, 0x13u);
    }
    if ( !v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 608) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 608) );
  }
  MiDeleteMappedMdls(a1, v4);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6, v15);
}
