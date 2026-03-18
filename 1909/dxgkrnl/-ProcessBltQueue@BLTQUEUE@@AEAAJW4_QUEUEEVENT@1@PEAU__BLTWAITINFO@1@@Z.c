/*
 * XREFs of ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x1C0145D84
 * Callers:
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C015C290 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C001B8E0 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     ?RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z @ 0x1C0145EB8 (-RemoveQueueHead@BLTQUEUE@@AEAAPEAVBLTENTRY@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?FinishCommand@BLTQUEUE@@AEAAXJ@Z @ 0x1C0145F40 (-FinishCommand@BLTQUEUE@@AEAAXJ@Z.c)
 *     ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x1C01598CC (-SignalVSyncEvent@BLTQUEUE@@AEAAXXZ.c)
 *     ?Blt@BLTENTRY@@QEAAJXZ @ 0x1C027B5E4 (-Blt@BLTENTRY@@QEAAJXZ.c)
 *     ?DiscardPendingPresent@BLTQUEUE@@AEAAXXZ @ 0x1C027C0E0 (-DiscardPendingPresent@BLTQUEUE@@AEAAXXZ.c)
 *     ?IndirectBlt@BLTENTRY@@QEAAJXZ @ 0x1C027C328 (-IndirectBlt@BLTENTRY@@QEAAJXZ.c)
 *     ?InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027C3A4 (-InsertQueueHead@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z @ 0x1C027C45C (-InsertQueueTail@BLTQUEUE@@AEAAXPEAU_LIST_ENTRY@@PEAVBLTENTRY@@@Z.c)
 *     ?ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z @ 0x1C027DB70 (-ReleasePresentDoneEvent@BLTENTRY@@QEAAXE@Z.c)
 *     ?UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z @ 0x1C027EC1C (-UpdatePresentStats@BLTQUEUE@@AEAAXPEAVBLTENTRY@@PEAU__BLTWAITINFO@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::ProcessBltQueue(__int64 a1, int a2, __int64 a3)
{
  int v3; // r12d
  int v5; // r13d
  struct _LIST_ENTRY *v7; // rdi
  int v8; // ebx
  struct BLTENTRY *v9; // rax
  struct BLTENTRY *v10; // rbp
  char v11; // cl
  char v12; // al
  __int64 v13; // rbx
  int v15; // eax
  void *v16; // rcx
  struct _KEVENT *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rax
  bool v22; // zf
  int v23; // eax

  v3 = 0;
  v5 = a2;
  if ( *(int *)(a1 + 852) < 0 )
  {
    if ( a2 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
    return *(unsigned int *)(a1 + 852);
  }
  if ( a2 == 1 )
  {
    v15 = *(_DWORD *)(a1 + 324);
    if ( v15 )
      *(_DWORD *)(a1 + 324) = v15 - 1;
  }
  v7 = (struct _LIST_ENTRY *)(a1 + 64);
  v8 = 2;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 324) )
      *(_DWORD *)a3 |= 2u;
    v9 = BLTQUEUE::RemoveQueueHead((BLTQUEUE *)a1, v7);
    v10 = v9;
    if ( !v9 )
      break;
    if ( v5 == 2 )
    {
      v16 = (void *)*((_QWORD *)v9 + 5);
      *((_DWORD *)v9 + 130) |= 1u;
      ObfDereferenceObject(v16);
      *((_QWORD *)v10 + 5) = 0LL;
    }
    if ( (*((_DWORD *)v10 + 130) & 1) == 0 )
    {
      v17 = (struct _KEVENT *)*((_QWORD *)v10 + 5);
      if ( KeReadStateEvent(v17) )
      {
        *((_DWORD *)v10 + 130) |= 1u;
        goto LABEL_30;
      }
      *(_DWORD *)a3 |= 1u;
      HIDWORD(v20) = 0;
      *(_QWORD *)(a3 + 8) = v17;
      ++*((_DWORD *)v10 + 131);
      LODWORD(v20) = (unsigned int)(5 * *(_DWORD *)(a1 + 208)) % *(_DWORD *)(a1 + 212);
      if ( *((_DWORD *)v10 + 131) > (unsigned int)(5 * *(_DWORD *)(a1 + 208)) / *(_DWORD *)(a1 + 212) )
      {
        *((_DWORD *)v10 + 130) |= 3u;
        *(_DWORD *)(a1 + 848) |= 4u;
        v21 = WdLogNewEntry5_WdError(v18, v20, v19);
        *(_QWORD *)(v21 + 24) = a1;
        WdLogEvent5_WdError(v21);
        *(_DWORD *)a3 &= ~1u;
LABEL_30:
        ObfDereferenceObject(*((PVOID *)v10 + 5));
        *((_QWORD *)v10 + 5) = 0LL;
      }
      v7 = (struct _LIST_ENTRY *)(a1 + 64);
    }
    if ( v5 != 1
      && (*((_DWORD *)v10 + 130) & 1) != 0
      && !*(_DWORD *)(a1 + 324)
      && *((_DWORD *)v10 + 14)
      && !*(_BYTE *)(a1 + 192) )
    {
      *(_DWORD *)a3 |= 2u;
    }
    if ( (*(_DWORD *)a3 & 2) != 0 || (*(_DWORD *)a3 & 1) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, v7, v10);
      goto LABEL_13;
    }
    KeWaitForSingleObject((PVOID)(a1 + 104), Executive, 0, 0, 0LL);
    BLTQUEUE::UpdatePresentStats((BLTQUEUE *)a1, v10, (struct BLTQUEUE::__BLTWAITINFO *)a3);
    if ( v5 == 1 )
      BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      BLTQUEUE::InsertQueueHead((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 64), v10);
      KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
      goto LABEL_13;
    }
    v5 = -1;
    if ( (*((_DWORD *)DXGDODPRESENT::GetAdapter(*(DXGDODPRESENT **)a1) + 77) & 0x100) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 2568), Executive, 0, 0, 0LL);
      v3 = BLTENTRY::IndirectBlt(v10);
      KeReleaseMutex((PRKMUTEX)(a1 + 2568), 0);
      v8 = 2;
    }
    else
    {
      v3 = BLTENTRY::Blt(v10);
      BLTENTRY::ReleasePresentDoneEvent(v10, 1u);
    }
    if ( v3 >= 0 )
    {
      v22 = *(_BYTE *)(a1 + 192) == 0;
      *(_DWORD *)(a1 + 320) = *((_DWORD *)v10 + 14);
      if ( v22 )
        v23 = *((_DWORD *)v10 + 14);
      else
        v23 = 0;
      *(_DWORD *)(a1 + 324) = v23;
    }
    BLTQUEUE::InsertQueueTail((BLTQUEUE *)a1, (struct _LIST_ENTRY *)(a1 + 80), v10);
    if ( *(_BYTE *)(a1 + 406) )
    {
      *(_BYTE *)(a1 + 406) = 0;
      BLTQUEUE::FinishCommand((BLTQUEUE *)a1, v3);
    }
    KeReleaseMutex((PRKMUTEX)(a1 + 104), 0);
    if ( v3 < 0 )
    {
      BLTQUEUE::DiscardPendingPresent((BLTQUEUE *)a1);
      *(_DWORD *)(a1 + 852) = v3;
      return (unsigned int)v3;
    }
    v7 = (struct _LIST_ENTRY *)(a1 + 64);
  }
  v11 = *(_BYTE *)(a1 + 405);
  v12 = *(_BYTE *)(a1 + 406);
  if ( v11 )
  {
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    if ( !v12 )
      goto LABEL_13;
LABEL_9:
    v8 = 0;
  }
  *(_DWORD *)(a1 + 840) = v8 | *(_DWORD *)(a1 + 840) & 0xFFFFFFFD;
  if ( v11 )
  {
    v13 = 5LL * *(unsigned int *)(a1 + 752);
    *(LARGE_INTEGER *)(a1 + 8 * v13 + 768) = KeQueryPerformanceCounter(0LL);
    *(_DWORD *)(a1 + 8 * v13 + 776) = v5;
  }
  *(_WORD *)(a1 + 405) = 0;
  BLTQUEUE::FinishCommand((BLTQUEUE *)a1, 0);
LABEL_13:
  if ( v5 == 1 )
    BLTQUEUE::SignalVSyncEvent((BLTQUEUE *)a1);
  return (unsigned int)v3;
}
