/*
 * XREFs of _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C0097250
 * Callers:
 *     ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0096A40 (-UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z.c)
 *     UmfdQueryFontData @ 0x1C0096DC0 (UmfdQueryFontData.c)
 * Callees:
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C01425F4 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02BA3A8 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02D4830 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02D484C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  struct _SLIST_ENTRY **v3; // rdi
  struct _SLIST_ENTRY **v4; // r14
  __int64 v5; // rbx
  PSLIST_ENTRY v6; // rax
  char *v7; // rax
  struct _SLIST_ENTRY *v8; // rbx
  PSLIST_ENTRY v9; // xmm0_8
  struct _SLIST_ENTRY *v10; // rax
  struct _SLIST_ENTRY *v11; // xmm0_8
  unsigned int v12; // edi
  __int64 v13; // rsi
  unsigned __int64 v15; // rax
  PSLIST_ENTRY v16; // [rsp+40h] [rbp+8h] BYREF
  struct _SLIST_ENTRY *v17; // [rsp+48h] [rbp+10h] BYREF
  PSLIST_ENTRY v18; // [rsp+50h] [rbp+18h]

  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 16LL))(*a1[1])
    || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
  {
    v2 = *a1;
    v3 = (struct _SLIST_ENTRY **)a1[1];
    v4 = (struct _SLIST_ENTRY **)a1[2];
    v5 = (*a1)[1];
    v6 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v5 + 16));
    if ( v6 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v5);
    }
    else
    {
      v6 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v6 )
      {
        v16 = 0LL;
        goto LABEL_14;
      }
    }
    v16 = v6;
    v18 = v6;
    v7 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v8 = (struct _SLIST_ENTRY *)v7;
    if ( v7 )
    {
      v9 = v18;
      *((_DWORD *)v7 + 6) = 8;
      *((_QWORD *)v7 + 5) = v9;
      *((_DWORD *)v7 + 7) = 8;
      v10 = (struct _SLIST_ENTRY *)(v7 + 56);
      v8[1].Next = v10;
      v11 = *v3;
      v12 = 0;
      v17 = v8;
      v10->Next = v11;
      *((_DWORD *)&v8->Next + 2) = 0;
      v13 = *v2;
      if ( !*(_BYTE *)v13 )
      {
        *((_DWORD *)&v8->Next + 2) = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)(v13 + 16), v8);
        KeSetEvent(**(PRKEVENT **)(v13 + 8), 1, 0);
        *v4 = v8;
        return v12;
      }
    }
    else
    {
      v17 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v17);
LABEL_14:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v16);
    *v4 = 0LL;
    return (unsigned int)-1073741823;
  }
  v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[1] + 8LL))(*a1[1]);
  UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v15);
  return 3221225473LL;
}
