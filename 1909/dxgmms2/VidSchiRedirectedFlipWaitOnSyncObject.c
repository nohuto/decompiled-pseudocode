/*
 * XREFs of VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C002F844
 * Callers:
 *     VidSchSubmitCommandContextless @ 0x1C00337B0 (VidSchSubmitCommandContextless.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0008230 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSubmitPresentHistoryToken @ 0x1C0012E80 (VidSchiSubmitPresentHistoryToken.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0018640 (memmove.c)
 *     VidSchIsVSyncEnabled @ 0x1C007B780 (VidSchIsVSyncEnabled.c)
 */

__int64 __fastcall VidSchiRedirectedFlipWaitOnSyncObject(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v4; // r13d
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  void (__fastcall *v12)(_QWORD, __int64, __int64); // rax
  __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v20; // rax
  PSLIST_ENTRY v21; // r15
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(__int64, __int64, __int64, __int64); // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _SLIST_ENTRY *Next; // rax
  struct _SLIST_ENTRY *v30; // rax
  __int64 v31; // r14
  __int64 *v32; // r15
  __int64 **v33; // rax
  _QWORD v34[2]; // [rsp+30h] [rbp-40h] BYREF
  char v35; // [rsp+40h] [rbp-30h]
  _QWORD v36[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v37; // [rsp+68h] [rbp-8h]

  v4 = 0;
  v8 = *(_QWORD *)(*(_DWORD *)(a2 + 556) * ((8 * *(_DWORD *)(a2 + 560) + 191) & 0xFFFFFFF8) + a2 + 600);
  if ( v8 )
    v9 = *(_QWORD *)(*(_QWORD *)(v8 + 8) + 32LL);
  else
    v9 = 0LL;
  v10 = *(unsigned int *)(a2 + 124);
  if ( (*(_DWORD *)a2 & 0x1000000) != 0 && (_DWORD)v10 != -1 )
  {
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 8 * v10 + 2576) + 33280LL);
    if ( (_DWORD)v11 != -1 )
    {
      v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(a1 + 2432);
      if ( v12 )
        v12(*(_QWORD *)(a1 + 2496), v11, 0xFFFFFFFFLL);
    }
  }
  if ( (*a4 & 0x1000) != 0 && (*a4 & 0xC00) != 0x400 && (_DWORD)v10 != -1 && (*(_DWORD *)a2 & 0x1040000) == 0x1040000 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 720));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 1272));
    _InterlockedIncrement((volatile signed __int32 *)(v9 + 4 * v10 + 1208));
    if ( (*(_DWORD *)(v9 + 48) & 2) != 0 || *(int *)(a2 + 128) >= 4 || *(_BYTE *)(a1 + 144) )
      VidSchIsVSyncEnabled(a1, (unsigned int)v10);
  }
  v37 = 0;
  v36[0] = a1 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v36);
  v14 = *(_QWORD *)(a2 + 472);
  v34[1] = v34;
  v34[0] = v34;
  v35 = 0;
  if ( *(_BYTE *)(a3 + 28) )
    goto LABEL_20;
  v15 = *(unsigned __int64 **)(a3 + 64);
  if ( *(_BYTE *)(a3 + 29) )
  {
    if ( *v15 >= v14 )
    {
LABEL_20:
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
      v16[3] = a3;
      v16[4] = **(_QWORD **)(a3 + 64);
      v16[5] = *(_QWORD *)(a2 + 472);
      WdLogEvent5_WdEvent(v16);
      v17 = *(_QWORD *)(a2 + 24);
      if ( v17 )
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 4));
      v18 = *(_QWORD *)(a2 + 40);
      if ( v18 )
        _InterlockedIncrement((volatile signed __int32 *)(v18 + 4));
      VidSchiSubmitPresentHistoryToken((struct HwQueueStagingList *)v34, 0LL, (_QWORD *)a2, 0LL, a1);
      goto LABEL_25;
    }
  }
  else if ( *(_DWORD *)v15 - (int)v14 >= 0 )
  {
    goto LABEL_20;
  }
  if ( *(_DWORD *)(a3 + 32) == 0x7FFFFFFF )
  {
    v20 = WdLogNewEntry5_WdAssertion(v14, v13);
    WdLogEvent5_WdAssertion(v20);
    v4 = -1073741823;
  }
  else
  {
    ++*(_DWORD *)(a1 + 820);
    v21 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(a1 + 800));
    if ( v21
      || (v22 = *(unsigned int *)(a1 + 844),
          v23 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(a1 + 848),
          v24 = *(unsigned int *)(a1 + 840),
          v25 = *(unsigned int *)(a1 + 836),
          ++*(_DWORD *)(a1 + 824),
          (v21 = (PSLIST_ENTRY)v23(v25, v22, v24, a1 + 800)) != 0LL) )
    {
      *((_QWORD *)&v21->Next + 1) = a3;
      v21[1].Next = *(struct _SLIST_ENTRY **)(a2 + 472);
      memmove(&v21[2].Next + 1, (const void *)a2, *(unsigned int *)(a2 + 540));
      Next = v21[4].Next;
      if ( Next )
        _InterlockedAdd((volatile signed __int32 *)&Next->Next + 1, 1u);
      v30 = v21[5].Next;
      if ( v30 )
        _InterlockedAdd((volatile signed __int32 *)&v30->Next + 1, 1u);
      v31 = a1 + 776;
      v32 = (__int64 *)(&v21[1].Next + 1);
      v33 = *(__int64 ***)(v31 + 8);
      if ( *v33 != (__int64 *)v31 )
        __fastfail(3u);
      *v32 = v31;
      v32[1] = (__int64)v33;
      *v33 = v32;
      *(_QWORD *)(v31 + 8) = v32;
      ++*(_DWORD *)(a3 + 40);
      _InterlockedAdd((volatile signed __int32 *)(a3 + 32), 1u);
      v4 = 0;
    }
    else
    {
      v28 = WdLogNewEntry5_WdAssertion(v27, v26);
      WdLogEvent5_WdAssertion(v28);
      v4 = -1073741801;
    }
  }
LABEL_25:
  if ( !v35 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v34);
  AcquireSpinLock::Release((AcquireSpinLock *)v36);
  return v4;
}
