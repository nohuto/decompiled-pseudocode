/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C00428C0
 * Callers:
 *     UmfdQueryTrueTypeTable @ 0x1C00415F0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryAdvanceWidths @ 0x1C00427B0 (UmfdQueryAdvanceWidths.c)
 *     UmfdDestroyFont @ 0x1C0082580 (UmfdDestroyFont.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00872B4 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C0100E70 (UmfdLoadFontFile.c)
 *     UmfdQueryFontFile @ 0x1C0100FB0 (UmfdQueryFontFile.c)
 *     UmfdQueryFont @ 0x1C0101040 (UmfdQueryFont.c)
 *     UmfdQueryFontTree @ 0x1C01010F0 (UmfdQueryFontTree.c)
 *     UmfdUnloadFontFileInternal @ 0x1C011A088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0149740 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0162CE0 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02C0F00 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02C0F60 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02C1010 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02C10D0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02C1150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00E83C4 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C012DFC0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C015FBF8 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C02A3C1C (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02C11E8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C02C1C0C (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02C1C28 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02C1C4C (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, struct _SLIST_ENTRY *a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  signed int v5; // ebx
  __int64 v6; // rbx
  PSLIST_ENTRY v7; // rax
  char *v8; // rax
  struct _SLIST_ENTRY *v9; // rbx
  PSLIST_ENTRY v10; // xmm0_8
  struct _SLIST_ENTRY *v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rbx
  __int64 v17; // r14
  unsigned __int64 v18; // rsi
  PSLIST_ENTRY v20; // [rsp+38h] [rbp-D0h] BYREF
  int v21; // [rsp+40h] [rbp-C8h] BYREF
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  signed int v23; // [rsp+48h] [rbp-C0h] BYREF
  int v24; // [rsp+4Ch] [rbp-BCh] BYREF
  struct _SLIST_ENTRY *v25; // [rsp+50h] [rbp-B8h] BYREF
  PSLIST_ENTRY v26; // [rsp+58h] [rbp-B0h]
  void *v27; // [rsp+60h] [rbp-A8h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v30[2]; // [rsp+78h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  int *v32; // [rsp+A8h] [rbp-60h]
  int v33; // [rsp+B0h] [rbp-58h]
  int v34; // [rsp+B4h] [rbp-54h]
  int *v35; // [rsp+B8h] [rbp-50h]
  int v36; // [rsp+C0h] [rbp-48h]
  int v37; // [rsp+C4h] [rbp-44h]
  EVENT_DATA_DESCRIPTOR v38; // [rsp+C8h] [rbp-40h] BYREF
  signed int *v39; // [rsp+E8h] [rbp-20h]
  int v40; // [rsp+F0h] [rbp-18h]
  int v41; // [rsp+F4h] [rbp-14h]
  int *v42; // [rsp+F8h] [rbp-10h]
  int v43; // [rsp+100h] [rbp-8h]
  int v44; // [rsp+104h] [rbp-4h]

  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (_QWORD *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  if ( !v3 )
    return 3221225495LL;
  *v3 = 0LL;
  v27 = &UmfdHostLifeTimeManager::s_ReadyLock;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( !UmfdHostLifeTimeManager::s_Ready )
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v5 = -1073741823;
    goto LABEL_21;
  }
  if ( !((unsigned __int8 (__fastcall *)(struct _SLIST_ENTRY *))a2->Next[1].Next)(a2)
    || UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread == KeGetCurrentThread() )
  {
    v6 = v2[1];
    v7 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v6 + 16));
    if ( v7 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v6);
    }
    else
    {
      v7 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v7 )
      {
        v20 = 0LL;
        goto LABEL_13;
      }
    }
    v20 = v7;
    v26 = v7;
    v8 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v9 = (struct _SLIST_ENTRY *)v8;
    if ( v8 )
    {
      v10 = v26;
      *((_DWORD *)v8 + 6) = 8;
      *((_QWORD *)v8 + 5) = v10;
      *((_DWORD *)v8 + 7) = 8;
      v11 = (struct _SLIST_ENTRY *)(v8 + 56);
      v9[1].Next = v11;
      v25 = v9;
      v11->Next = a2;
      *((_DWORD *)&v9->Next + 2) = 0;
      v12 = (_BYTE *)*v2;
      if ( !*(_BYTE *)*v2 )
      {
        *((_DWORD *)&v9->Next + 2) = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v12 + 1, v9);
        KeSetEvent(**((PRKEVENT **)v12 + 1), 1, 0);
        goto LABEL_14;
      }
    }
    else
    {
      v25 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v25);
LABEL_13:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v20);
    v9 = 0LL;
LABEL_14:
    *v3 = (__int64)v9;
    v5 = v9 == 0LL ? 0xC0000001 : 0;
    goto LABEL_15;
  }
  v4 = (*((__int64 (__fastcall **)(struct _SLIST_ENTRY *))&a2->Next->Next + 1))(a2);
  UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v4);
  v5 = -1073741823;
LABEL_15:
  AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v27);
LABEL_21:
  if ( v5 >= 0 )
  {
    v13 = *v3;
    if ( *v3 )
    {
      v14 = *(_QWORD *)(v13 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v14 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v18 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v34 = 0;
          v22 = 0;
          v37 = 0;
          v32 = &v21;
          v35 = &v22;
          v21 = v18;
          v33 = 4;
          v36 = 4;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D71C8, 0LL, 0LL, 4u, &pData);
        }
        v5 = UmfdClientWaitForCompletion(v2, v3, 0LL);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v41 = 0;
          v39 = &v23;
          v23 = v5;
          v40 = 4;
          v43 = 4;
          v42 = &v24;
          v44 = 0;
          v24 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v18;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D7171, 0LL, 0LL, 4u, &v38);
        }
      }
      else
      {
        v15 = *(_DWORD *)(v13 + 8) == 3;
        v16 = v2[1];
        v17 = *(_QWORD *)(v13 + 40);
        v30[1] = v17;
        v30[0] = v16;
        v29 = v13;
        if ( v15 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v29);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v30);
          *v3 = 0LL;
          v5 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v13);
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v16) > 8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v16);
            CEventPool::CEventPoolEntry::Destroy((PVOID)v17);
          }
          else
          {
            KeResetEvent(**(PRKEVENT **)(v17 + 8));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v16 + 16), (PSLIST_ENTRY)v17);
          }
          *v3 = 0LL;
          v5 = -1073741823;
        }
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  EngFreeMem(v3);
  return (unsigned int)v5;
}
