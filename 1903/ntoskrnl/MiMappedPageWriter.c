/*
 * XREFs of MiMappedPageWriter @ 0x14018C6A0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140010B30 (KeSetPriorityThread.c)
 *     KeSetActualBasePriorityThread @ 0x140012650 (KeSetActualBasePriorityThread.c)
 *     KeDelayExecutionThread @ 0x14003B180 (KeDelayExecutionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14003F170 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGatherMappedPages @ 0x14007B1D8 (MiGatherMappedPages.c)
 *     KeWaitForMultipleObjects @ 0x14007C530 (KeWaitForMultipleObjects.c)
 *     MiAllocateModWriterEntry @ 0x1400A73D4 (MiAllocateModWriterEntry.c)
 *     MiFreeModWriterEntry @ 0x1400DFA48 (MiFreeModWriterEntry.c)
 *     KeWaitForGate @ 0x14011A9BC (KeWaitForGate.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiDeleteMappedMdls @ 0x1402C3BB4 (MiDeleteMappedMdls.c)
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
  _QWORD *v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rcx
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
  Object[17] = (PVOID)(a1 + 784);
  KeGetCurrentThread()[1].TrapFrame = (_KTRAP_FRAME *)3;
LABEL_4:
  v9 = -1;
LABEL_5:
  if ( v9 == -1
    || (v10 = *(_QWORD *)(a1 + 8448), v11 = *(_QWORD *)(a1 + 8560), v10 <= v11)
    || v10 - v11 < 0x10 && !*(_DWORD *)(a1 + 780) )
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
      if ( *(_QWORD *)(a1 + 8448) == *(_QWORD *)(a1 + 8560) )
        break;
      if ( (unsigned __int64)*(unsigned int *)(a1 + 616) >= *(_QWORD *)(a1 + 608) )
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
        v16 = (_QWORD *)(a1 + 624);
        v17 = *(__int64 **)(a1 + 624);
        if ( v17 == (__int64 *)(a1 + 624) )
        {
          *(_BYTE *)(a1 + 664) = 1;
        }
        else
        {
          ModWriterEntry = *(_QWORD **)(a1 + 624);
          if ( (_QWORD *)v17[1] != v16 )
            goto LABEL_41;
          v18 = *v17;
          if ( *(_QWORD **)(v18 + 8) != ModWriterEntry )
            goto LABEL_41;
          *v16 = v18;
          *(_QWORD *)(v18 + 8) = v16;
        }
        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
      }
      if ( ModWriterEntry )
      {
        v14 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 616));
        if ( v14 > *(_DWORD *)(a1 + 620) )
          *(_DWORD *)(a1 + 620) = v14;
        ModWriterEntry[25] = 0LL;
        if ( !(unsigned int)MiGatherMappedPages(a1, v9, (__int64)ModWriterEntry) )
        {
          _InterlockedAdd((volatile signed __int32 *)(a1 + 616), 0xFFFFFFFF);
          if ( (ModWriterEntry[5] & 1) != 0 )
          {
            --CurrentThread->SpecialApcDisable;
            v19 = *(_QWORD **)(a1 + 632);
            if ( *v19 != a1 + 624 )
LABEL_41:
              __fastfail(3u);
            ModWriterEntry[1] = v19;
            *ModWriterEntry = a1 + 624;
            *v19 = ModWriterEntry;
            *(_QWORD *)(a1 + 632) = ModWriterEntry;
            KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
          }
          else
          {
            MiFreeModWriterEntry(ModWriterEntry, 1u);
          }
        }
        goto LABEL_5;
      }
      KeWaitForGate(a1 + 640, 19);
    }
    if ( !v12 )
      goto LABEL_4;
    if ( !*(_DWORD *)(a1 + 616) )
      break;
    do
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    while ( *(_DWORD *)(a1 + 616) );
  }
  MiDeleteMappedMdls(a1, v4);
  return KeSetActualBasePriorityThread((__int64)CurrentThread, v6);
}
