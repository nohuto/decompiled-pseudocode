/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0072960
 * Callers:
 *     UmfdDestroyFont @ 0x1C004F3E0 (UmfdDestroyFont.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0072CC0 (UmfdQueryAdvanceWidths.c)
 *     UmfdQueryTrueTypeTable @ 0x1C0072F10 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryFontTree @ 0x1C0075C50 (UmfdQueryFontTree.c)
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0076464 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdLoadFontFile @ 0x1C011F240 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C0122088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C0123040 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C0128F30 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C014B190 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0165F18 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02D4010 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D4070 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D4120 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D41E0 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D4260 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C006EE40 (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C0080EC4 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C013A0D0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C0160CB0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0164F70 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02D42F8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02D4CFC (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02D4D20 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
 */

__int64 __fastcall UmfdClientSendAndWaitForCompletion(unsigned int a1, __int64 a2)
{
  _QWORD *v2; // r14
  __int64 *v3; // rax
  __int64 *v4; // rdi
  int v5; // ebx
  __int64 v6; // rsi
  __int64 v7; // rax
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // r14
  unsigned __int64 v12; // rsi
  void *v13; // rax
  int v14; // [rsp+38h] [rbp-89h] BYREF
  int v15; // [rsp+3Ch] [rbp-85h] BYREF
  void *v16; // [rsp+40h] [rbp-81h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-79h] BYREF
  __int64 v18; // [rsp+50h] [rbp-71h] BYREF
  __int128 v19; // [rsp+58h] [rbp-69h]
  __int64 *v20; // [rsp+68h] [rbp-59h]
  _QWORD v21[3]; // [rsp+70h] [rbp-51h] BYREF
  __int128 v22; // [rsp+88h] [rbp-39h] BYREF
  __int64 *v23; // [rsp+98h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A8h] [rbp-19h] BYREF
  int *v25; // [rsp+C8h] [rbp+7h]
  int v26; // [rsp+D0h] [rbp+Fh]
  int v27; // [rsp+D4h] [rbp+13h]
  int *v28; // [rsp+D8h] [rbp+17h]
  int v29; // [rsp+E0h] [rbp+1Fh]
  int v30; // [rsp+E4h] [rbp+23h]
  __int64 v31; // [rsp+130h] [rbp+6Fh] BYREF

  v31 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (_QWORD *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v4 = v3;
  if ( !v3 )
    return 3221225495LL;
  *(_QWORD *)&v19 = v2;
  *v3 = 0LL;
  v20 = v3;
  *((_QWORD *)&v19 + 1) = &v31;
  v16 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v23 = v3;
  v22 = v19;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v5 = lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()((__int64 **)&v22);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v16);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v5 = -1073741823;
  }
  if ( v5 >= 0 )
  {
    v6 = *v4;
    if ( *v4 )
    {
      v7 = *(_QWORD *)(v6 + 40);
      Timeout.QuadPart = -300000000LL;
      if ( KeWaitForSingleObject(**(PVOID **)(v7 + 8), Executive, 0, 0, &Timeout) == 258 )
      {
        v12 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v13 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v13 )
          ZwClose(v13);
        UmfdCancelServerOutstandingRequests(v2);
        v5 = UmfdClientWaitForCompletion(v2, v4, 0LL);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v27 = 0;
          v25 = &v14;
          v26 = 4;
          v14 = v5;
          v29 = 4;
          v28 = &v15;
          v30 = 0;
          v15 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v12;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9D9E, 0LL, 0LL, 4u, &pData);
        }
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 8) == 3;
        v9 = v2[1];
        v10 = *(_QWORD *)(v6 + 40);
        v21[1] = v10;
        v21[0] = v9;
        v18 = v6;
        if ( v8 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v18);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v21);
          *v4 = 0LL;
          v5 = 0;
        }
        else
        {
          EngFreeMem((PVOID)v6);
          if ( (unsigned int)_InterlockedIncrement((volatile signed __int32 *)v9) > 8 )
          {
            _InterlockedDecrement((volatile signed __int32 *)v9);
            CEventPool::CEventPoolEntry::Destroy((PVOID)v10);
          }
          else
          {
            KeResetEvent(**(PRKEVENT **)(v10 + 8));
            ExpInterlockedPushEntrySList((PSLIST_HEADER)(v9 + 16), (PSLIST_ENTRY)v10);
          }
          *v4 = 0LL;
          v5 = -1073741823;
        }
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  EngFreeMem(v4);
  return (unsigned int)v5;
}
