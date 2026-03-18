/*
 * XREFs of ?UmfdClientSendAndWaitForCompletion@@YAJW4FontDriverType@@PEAVFontDriverDdiRequest@@@Z @ 0x1C0096A40
 * Callers:
 *     UmfdTrueTypeFreeGlyphset @ 0x1C0095AB0 (UmfdTrueTypeFreeGlyphset.c)
 *     UmfdQueryFontTree @ 0x1C0095C90 (UmfdQueryFontTree.c)
 *     UmfdQueryTrueTypeTable @ 0x1C00967C0 (UmfdQueryTrueTypeTable.c)
 *     UmfdQueryAdvanceWidths @ 0x1C0096930 (UmfdQueryAdvanceWidths.c)
 *     UmfdDestroyFont @ 0x1C0098BF0 (UmfdDestroyFont.c)
 *     UmfdLoadFontFile @ 0x1C00F9F20 (UmfdLoadFontFile.c)
 *     UmfdUnloadFontFileInternal @ 0x1C00FD088 (UmfdUnloadFontFileInternal.c)
 *     UmfdQueryFont @ 0x1C00FD960 (UmfdQueryFont.c)
 *     UmfdQueryFontFile @ 0x1C0103FE0 (UmfdQueryFontFile.c)
 *     UmfdQueryTrueTypeOutline @ 0x1C014BF40 (UmfdQueryTrueTypeOutline.c)
 *     UmfdQueryGlyphMetricsPlusBits @ 0x1C0167B38 (UmfdQueryGlyphMetricsPlusBits.c)
 *     UmfdDrvFreeInternal @ 0x1C02D3B60 (UmfdDrvFreeInternal.c)
 *     UmfdEscape @ 0x1C02D3BC0 (UmfdEscape.c)
 *     UmfdFontManagement @ 0x1C02D3C70 (UmfdFontManagement.c)
 *     UmfdGetTrueTypeFile @ 0x1C02D3D30 (UmfdGetTrueTypeFile.c)
 *     UmfdQueryGlyphAttrs @ 0x1C02D3DB0 (UmfdQueryGlyphAttrs.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C0097250 (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z @ 0x1C01140D0 (-Destroy@CEventPoolEntry@CEventPool@@SAXQEAV12@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0166510 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02D3E48 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 *     ??1?$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ @ 0x1C02D484C (--1-$CAutoDestroy@VCWaitableWorkItem@CMultipleConsumerWorkQueue@@@@QEAA@XZ.c)
 *     _CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy @ 0x1C02D4870 (_CMultipleConsumerWorkQueue--WaitForCompletionAndReleaseWorkItem_--_2_--CEventPoolEntryAutoDestr.c)
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
  unsigned __int64 v11; // rsi
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+34h] [rbp-CCh] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  void *v17; // [rsp+40h] [rbp-C0h] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v20; // [rsp+58h] [rbp-A8h]
  __int64 *v21; // [rsp+68h] [rbp-98h]
  _QWORD v22[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  __int64 *v24; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  int *v26; // [rsp+C0h] [rbp-40h]
  int v27; // [rsp+C8h] [rbp-38h]
  int v28; // [rsp+CCh] [rbp-34h]
  int *v29; // [rsp+D0h] [rbp-30h]
  int v30; // [rsp+D8h] [rbp-28h]
  int v31; // [rsp+DCh] [rbp-24h]
  EVENT_DATA_DESCRIPTOR v32; // [rsp+E0h] [rbp-20h] BYREF
  int *v33; // [rsp+100h] [rbp+0h]
  int v34; // [rsp+108h] [rbp+8h]
  int v35; // [rsp+10Ch] [rbp+Ch]
  int *v36; // [rsp+110h] [rbp+10h]
  int v37; // [rsp+118h] [rbp+18h]
  int v38; // [rsp+11Ch] [rbp+1Ch]
  __int64 v39; // [rsp+168h] [rbp+68h] BYREF

  v39 = a2;
  if ( a1 > 3 )
    return 3221225485LL;
  _mm_lfence();
  v2 = (_QWORD *)g_pUmfdClientPort[a1];
  v3 = (__int64 *)EngAllocMem(0, 8u, 0x71724446u);
  v4 = v3;
  if ( !v3 )
    return 3221225495LL;
  *(_QWORD *)&v20 = v2;
  *v3 = 0LL;
  v21 = v3;
  *((_QWORD *)&v20 + 1) = &v39;
  v17 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v24 = v3;
  v23 = v20;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v5 = lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(&v23);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v17);
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
        v11 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v28 = 0;
          v14 = 0;
          v31 = 0;
          v26 = &v13;
          v29 = &v14;
          v13 = v11;
          v27 = 4;
          v30 = 4;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E93B5, 0LL, 0LL, 4u, &pData);
        }
        v5 = UmfdClientWaitForCompletion(v2, v4, 0LL);
        if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
        {
          v35 = 0;
          v33 = &v15;
          v15 = v5;
          v34 = 4;
          v37 = 4;
          v36 = &v16;
          v38 = 0;
          v16 = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v11;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E935E, 0LL, 0LL, 4u, &v32);
        }
      }
      else
      {
        v8 = *(_DWORD *)(v6 + 8) == 3;
        v9 = v2[1];
        v10 = *(_QWORD *)(v6 + 40);
        v22[1] = v10;
        v22[0] = v9;
        v19 = v6;
        if ( v8 )
        {
          CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>::~CAutoDestroy<CMultipleConsumerWorkQueue::CWaitableWorkItem>(&v19);
          CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem_::_2_::CEventPoolEntryAutoDestroy::_CEventPoolEntryAutoDestroy(v22);
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
