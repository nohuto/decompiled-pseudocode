/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002EE60
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C0032D90 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C00073A0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C000F5F0 (VidSchiSubmitPresentHistoryToken.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A670 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C001A680 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C0069EB0 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r15d
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // r8
  __int64 v13; // rdx
  void (__fastcall *v14)(_QWORD, __int64, __int64); // rax
  __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rax
  PSLIST_ENTRY v23; // rbp
  __int64 v24; // rdx
  __int64 (__fastcall *v25)(__int64, __int64, __int64, __int64); // rax
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _SLIST_ENTRY *Next; // rax
  struct _SLIST_ENTRY *v32; // rax
  __int64 v33; // rsi
  __int64 *v34; // rbp
  __int64 **v35; // rax
  _QWORD v36[2]; // [rsp+30h] [rbp-58h] BYREF
  char v37; // [rsp+40h] [rbp-48h]
  _BYTE v38[40]; // [rsp+48h] [rbp-40h] BYREF

  v4 = 0;
  v9 = *(_QWORD *)(*(_DWORD *)(a2 + 564) * ((8 * *(_DWORD *)(a2 + 568) + 191) & 0xFFFFFFF8) + a2 + 608);
  if ( v9 )
    v10 = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 32LL);
  else
    v10 = 0LL;
  v11 = *(unsigned int *)(a2 + 124);
  v12 = 0xFFFFFFFFLL;
  if ( (*(_DWORD *)a2 & 0x1000000) != 0 && (_DWORD)v11 != -1 )
  {
    v13 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v11 + 2576) + 33272LL);
    if ( (_DWORD)v13 != -1 )
    {
      v14 = *(void (__fastcall **)(_QWORD, __int64, __int64))(a1 + 2432);
      if ( v14 )
      {
        v14(*(_QWORD *)(a1 + 2496), v13, 0xFFFFFFFFLL);
        v12 = 0xFFFFFFFFLL;
      }
    }
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v11 != -1 && (*(_DWORD *)a2 & 0x1040000) == 0x1040000 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 720), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 1268), 1u);
    _InterlockedAdd((volatile signed __int32 *)(v10 + 4 * v11 + 1204), 1u);
    if ( (*(_DWORD *)(v10 + 48) & 2) != 0 || *(int *)(a2 + 128) >= 4 || *(_BYTE *)(a1 + 144) )
      VidSchIsVSyncEnabled(a1, (unsigned int)v11);
  }
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v38, (unsigned __int64 *)(a1 + 1648), v12, 0);
  v16 = *(_QWORD *)(a2 + 472);
  v36[1] = v36;
  v36[0] = v36;
  v37 = 0;
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_20;
  v17 = *(unsigned __int64 **)(a3 + 64);
  if ( *(_BYTE *)(a3 + 29) )
  {
    if ( *v17 >= v16 )
    {
LABEL_20:
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15);
      v18[3] = a3;
      v18[4] = **(_QWORD **)(a3 + 64);
      v18[5] = *(_QWORD *)(a2 + 472);
      WdLogEvent5_WdEvent(v18);
      v19 = *(_QWORD *)(a2 + 24);
      if ( v19 )
        _InterlockedAdd((volatile signed __int32 *)(v19 + 4), 1u);
      v20 = *(_QWORD *)(a2 + 40);
      if ( v20 )
        _InterlockedAdd((volatile signed __int32 *)(v20 + 4), 1u);
      VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v36, 0LL, (_QWORD *)a2, 0LL, a1);
      goto LABEL_25;
    }
  }
  else if ( *(_DWORD *)v17 - (int)v16 >= 0 )
  {
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a3 + 32) == 0x7FFFFFFF )
  {
    v22 = WdLogNewEntry5_WdAssertion(v16, v15);
    WdLogEvent5_WdAssertion(v22);
    v4 = -1073741823;
  }
  else
  {
    ++*(_DWORD *)(a1 + 820);
    v23 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 800));
    if ( v23
      || (v24 = *(unsigned int *)(a1 + 844),
          v25 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 848),
          v26 = *(unsigned int *)(a1 + 840),
          v27 = *(unsigned int *)(a1 + 836),
          ++*(_DWORD *)(a1 + 824),
          (v23 = (PSLIST_ENTRY)v25(v27, v24, v26, a1 + 800)) != 0LL) )
    {
      *((_QWORD *)&v23->Next + 1) = a3;
      v23[1].Next = *(struct _SLIST_ENTRY **)(a2 + 472);
      memmove(&v23[2].Next + 1, (const void *)a2, *(unsigned int *)(a2 + 540));
      Next = v23[4].Next;
      if ( Next )
        _InterlockedAdd((volatile signed __int32 *)&Next->Next + 1, 1u);
      v32 = v23[5].Next;
      if ( v32 )
        _InterlockedAdd((volatile signed __int32 *)&v32->Next + 1, 1u);
      v33 = a1 + 776;
      v34 = (__int64 *)(&v23[1].Next + 1);
      v35 = *(__int64 ***)(v33 + 8);
      if ( *v35 != (__int64 *)v33 )
        __fastfail(3u);
      *v34 = v33;
      v34[1] = (__int64)v35;
      *v35 = v34;
      *(_QWORD *)(v33 + 8) = v34;
      ++*(_DWORD *)(a3 + 40);
      _InterlockedAdd((volatile signed __int32 *)(a3 + 32), 1u);
    }
    else
    {
      v30 = WdLogNewEntry5_WdAssertion(v29, v28);
      WdLogEvent5_WdAssertion(v30);
      v4 = -1073741801;
    }
  }
LABEL_25:
  if ( !v37 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v36);
  AcquireSpinLock::Release((AcquireSpinLock *)v38);
  return v4;
}
