/*
 * XREFs of UmfdQueryFontData @ 0x1C0096DC0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C009715C (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C0097250 (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0166510 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02D3E48 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  CMultipleConsumerWorkQueue *v12; // r14
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v13; // rax
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v14; // rdi
  int v15; // ebx
  unsigned __int64 v16; // rsi
  bool v18[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v19; // [rsp+3Ch] [rbp-CCh] BYREF
  int v20; // [rsp+40h] [rbp-C8h] BYREF
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  __int64 v22; // [rsp+48h] [rbp-C0h] BYREF
  void ***v23; // [rsp+50h] [rbp-B8h] BYREF
  void *v24; // [rsp+58h] [rbp-B0h] BYREF
  void **v25; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-98h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-90h]
  __int64 v28; // [rsp+80h] [rbp-88h]
  char v29; // [rsp+88h] [rbp-80h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  int v31; // [rsp+98h] [rbp-70h]
  int v32; // [rsp+9Ch] [rbp-6Ch]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  __int64 v34; // [rsp+A8h] [rbp-60h]
  __int64 v35; // [rsp+B0h] [rbp-58h]
  int v36; // [rsp+B8h] [rbp-50h]
  unsigned int v37; // [rsp+BCh] [rbp-4Ch]
  __int64 v38; // [rsp+C0h] [rbp-48h]
  __int128 v39; // [rsp+C8h] [rbp-40h]
  __int128 v40; // [rsp+D8h] [rbp-30h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v41; // [rsp+E8h] [rbp-20h]
  __int128 ThreadInformation; // [rsp+F8h] [rbp-10h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v43; // [rsp+108h] [rbp+0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+118h] [rbp+10h] BYREF
  int *v45; // [rsp+138h] [rbp+30h]
  __int64 v46; // [rsp+140h] [rbp+38h]
  int *v47; // [rsp+148h] [rbp+40h]
  __int64 v48; // [rsp+150h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR v49; // [rsp+158h] [rbp+50h] BYREF
  int *v50; // [rsp+178h] [rbp+70h]
  __int64 v51; // [rsp+180h] [rbp+78h]
  __int64 *v52; // [rsp+188h] [rbp+80h]
  __int64 v53; // [rsp+190h] [rbp+88h]

  LODWORD(v26) = 2;
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  ThreadInformation = 0uLL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v28 = ThreadInformation;
    v29 = 1;
  }
  v37 = -1;
  v25 = &QueryFontDataRequest::`vftable';
  v34 = a5;
  v35 = a6;
  v36 = a7;
  v38 = 0LL;
  v39 = 0LL;
  v30 = a1;
  v33 = a2;
  v31 = a3;
  v32 = a4;
  v11 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v23 = &v25;
  if ( (unsigned int)v11 > 3 )
    return 0xFFFFFFFFLL;
  v12 = (CMultipleConsumerWorkQueue *)g_pUmfdClientPort[v11];
  v13 = (struct CMultipleConsumerWorkQueue::CWaitableWorkItem **)EngAllocMem(0, 8u, 0x71724446u);
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)&ThreadInformation = v12;
  *v13 = 0LL;
  v43 = v13;
  *((_QWORD *)&ThreadInformation + 1) = &v23;
  v24 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v41 = v13;
  v40 = ThreadInformation;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v15 = lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(&v40);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v24);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v15 = -1073741823;
  }
  if ( v15 >= 0 )
  {
    if ( !*v14 )
    {
      v15 = -1073741811;
      goto LABEL_22;
    }
    if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(v12, *v14, (const unsigned int *)"0u", v18) )
    {
      v15 = 0;
      goto LABEL_21;
    }
    if ( !v18[0] )
    {
      v15 = -1073741823;
LABEL_21:
      *v14 = 0LL;
      goto LABEL_22;
    }
    v16 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
    {
      v19 = v16;
      v45 = &v19;
      v47 = &v20;
      v46 = 4LL;
      v20 = 0;
      v48 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E93B5, 0LL, 0LL, 4u, &pData);
    }
    v15 = UmfdClientWaitForCompletion(v12, v14, 0LL);
    if ( hProvider > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
      {
        v21 = v15;
        v50 = &v21;
        v51 = 4LL;
        v53 = 4LL;
        v52 = &v22;
        LODWORD(v22) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v16;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E935E, 0LL, 0LL, 4u, &v49);
      }
    }
  }
LABEL_22:
  EngFreeMem(v14);
  if ( v15 >= 0 )
    return v37;
  return 0xFFFFFFFFLL;
}
