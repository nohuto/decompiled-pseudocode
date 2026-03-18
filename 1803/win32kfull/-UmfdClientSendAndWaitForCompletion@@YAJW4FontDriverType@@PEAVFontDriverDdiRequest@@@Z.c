/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0083010
 * Callers:
 *     UmfdQueryFontTree @ 0x1C007E5A0 (UmfdQueryFontTree.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00804B0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0081790 (UmfdQueryAdvanceWidths.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00BE1F0 (UmfdUnloadFontFileInternal.c)
 *     UmfdLoadFontFile @ 0x1C00BE2A0 (UmfdLoadFontFile.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C00CAAE8 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdDestroyFont @ 0x1C00CAF30 (UmfdDestroyFont.c)
 *     UmfdQueryFont @ 0x1C00F1150 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C00F9F20 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C0125C10 (UmfdQueryTrueTypeOutline.c)
 *     UmfdDrvFreeInternal @ 0x1C02AEEF8 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02AEF60 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02AF010 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02AF0D0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02AF150 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00BFD40 (_TlgKeywordOn.c)
 *     ?Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ @ 0x1C00ED5D4 (-Create@CEventPoolEntry@CEventPool@@SAQEAV12@XZ.c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C00EDEC8 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C00EDF40 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C010CB38 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0139220 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     ??1?$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ @ 0x1C01974E4 (--1-$CAutoDestroy@VCEventPoolEntry@CEventPool@@@@QEAA@XZ.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C0197500 (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C0197520 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 *     ?QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z @ 0x1C028FFF4 (-QueueTryResurrectPffApc@UmfdHostLifeTimeManager@@SAX_K@Z.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02AF1E8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, struct _SLIST_ENTRY *a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rdi
  signed int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rax
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // r14
  __int64 v11; // rbx
  PSLIST_ENTRY v12; // rax
  char *v13; // rax
  struct _SLIST_ENTRY *v14; // rbx
  PSLIST_ENTRY v15; // xmm0_8
  struct _SLIST_ENTRY *v16; // rax
  _BYTE *v17; // rsi
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rsi
  void *v20; // rax
  const GUID *v21; // r9
  PSLIST_ENTRY v22; // [rsp+38h] [rbp-69h] BYREF
  signed int v23; // [rsp+40h] [rbp-61h] BYREF
  int v24; // [rsp+44h] [rbp-5Dh] BYREF
  struct _SLIST_ENTRY *v25; // [rsp+48h] [rbp-59h] BYREF
  PSLIST_ENTRY v26; // [rsp+50h] [rbp-51h]
  void *v27; // [rsp+58h] [rbp-49h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+60h] [rbp-41h] BYREF
  __int64 v29; // [rsp+68h] [rbp-39h] BYREF
  _QWORD v30[3]; // [rsp+70h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-19h] BYREF
  signed int *v32; // [rsp+A8h] [rbp+7h]
  int v33; // [rsp+B0h] [rbp+Fh]
  int v34; // [rsp+B4h] [rbp+13h]
  int *v35; // [rsp+B8h] [rbp+17h]
  int v36; // [rsp+C0h] [rbp+1Fh]
  int v37; // [rsp+C4h] [rbp+23h]

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
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    if ( ((unsigned __int8 (__fastcall *)(struct _SLIST_ENTRY *))a2->Next[1].Next)(a2)
      && UmfdHostLifeTimeManager::s_UmfdHostResurrectionThread != KeGetCurrentThread() )
    {
      v18 = (*((__int64 (__fastcall **)(struct _SLIST_ENTRY *))&a2->Next->Next + 1))(a2);
      UmfdHostLifeTimeManager::QueueTryResurrectPffApc(v18);
      v4 = -1073741823;
      goto LABEL_26;
    }
    v11 = v2[1];
    v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v11 + 16));
    if ( v12 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v11);
    }
    else
    {
      v12 = (PSLIST_ENTRY)CEventPool::CEventPoolEntry::Create();
      if ( !v12 )
      {
        v22 = 0LL;
        goto LABEL_29;
      }
    }
    v22 = v12;
    v26 = v12;
    v13 = (char *)EngAllocMem(0, 0x40u, 0x676D6466u);
    v14 = (struct _SLIST_ENTRY *)v13;
    if ( v13 )
    {
      v15 = v26;
      *((_DWORD *)v13 + 6) = 8;
      *((_QWORD *)v13 + 5) = v15;
      *((_DWORD *)v13 + 7) = 8;
      v16 = (struct _SLIST_ENTRY *)(v13 + 56);
      v14[1].Next = v16;
      v25 = v14;
      v16->Next = a2;
      *((_DWORD *)&v14->Next + 2) = 0;
      v17 = (_BYTE *)*v2;
      if ( !*(_BYTE *)*v2 )
      {
        *((_DWORD *)&v14->Next + 2) = 1;
        ExpInterlockedPushEntrySList((PSLIST_HEADER)v17 + 1, v14);
        KeSetEvent(**((PRKEVENT **)v17 + 1), 1, 0);
LABEL_18:
        *v3 = (__int64)v14;
        v4 = v14 == 0LL ? 0xC0000001 : 0;
LABEL_26:
        AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v27);
        goto LABEL_5;
      }
    }
    else
    {
      v25 = 0LL;
    }
    CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v25);
LABEL_29:
    CAutoDestroy<CEventPool::CEventPoolEntry>::~CAutoDestroy<CEventPool::CEventPoolEntry>(&v22);
    v14 = 0LL;
    goto LABEL_18;
  }
  GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  KeLeaveCriticalRegion();
  v4 = -1073741823;
LABEL_5:
  if ( v4 >= 0 )
  {
    v5 = *v3;
    if ( *v3 )
    {
      v6 = *(_QWORD *)(v5 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v6 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v19 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v20 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v20 )
          ZwClose(v20);
        UmfdCancelServerOutstandingRequests(v2);
        v4 = UmfdClientWaitForCompletion(v2, v3, 0LL);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v34 = 0;
          v32 = &v23;
          v33 = 4;
          v23 = v4;
          v36 = 4;
          v35 = &v24;
          v37 = 0;
          v24 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v19;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E45DB, (LPCGUID)4, v21, 4u, &pData);
        }
      }
      else
      {
        v7 = *(_DWORD *)(v5 + 8) == 3;
        v8 = v2[1];
        v9 = *(_QWORD *)(v5 + 40);
        v30[1] = v9;
        v30[0] = v8;
        v29 = v5;
        if ( v7 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v29);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v30);
          *v3 = 0LL;
          v4 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v5);
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v8) > 8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v8);
            CEventPool::CEventPoolEntry::Destroy((PVOID)v9);
          }
          else
          {
            KeResetEvent(**(PRKEVENT **)(v9 + 8));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v8 + 16), (PSLIST_ENTRY)v9);
          }
          *v3 = 0LL;
          v4 = -1073741823;
        }
      }
    }
    else
    {
      v4 = -1073741811;
    }
  }
  EngFreeMem(v3);
  return (unsigned int)v4;
}
