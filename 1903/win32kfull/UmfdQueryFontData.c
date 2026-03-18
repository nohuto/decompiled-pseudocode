/*
 * XREFs of UmfdQueryFontData @ 0x1C006EB10
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@PEBIPEA_N@Z @ 0x1C006ED4C (-WaitForCompletionAndReleaseWorkItem@CMultipleConsumerWorkQueue@@QEAA_NQEAVCWaitableWorkItem@1@P.c)
 *     _lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator() @ 0x1C006EE40 (_lambda_6aad3aa5895b9deeeac484e7d6965f8a_--operator().c)
 *     ?UmfdCancelServerOutstandingRequests@@YAJPEAX@Z @ 0x1C0080EC4 (-UmfdCancelServerOutstandingRequests@@YAJPEAX@Z.c)
 *     _TlgKeywordOn @ 0x1C00B7EA8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     ?TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ @ 0x1C0160CB0 (-TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager@@SAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ??1AutoSharedUmfdLookupLock@@QEAA@XZ @ 0x1C0164F70 (--1AutoSharedUmfdLookupLock@@QEAA@XZ.c)
 *     ?UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z @ 0x1C02D42F8 (-UmfdClientWaitForCompletion@@YAJPEAX0PEBI@Z.c)
 */

__int64 __fastcall UmfdQueryFontData(__int64 a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6, int a7)
{
  __int64 v11; // rcx
  void *v12; // rsi
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v13; // rax
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v14; // rdi
  int v15; // ebx
  unsigned __int64 v17; // r14
  void *v18; // rax
  bool v19[4]; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v21; // [rsp+40h] [rbp-C8h] BYREF
  void ***v22; // [rsp+48h] [rbp-C0h] BYREF
  void *v23; // [rsp+50h] [rbp-B8h] BYREF
  void **v24; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A8h]
  struct _KTHREAD *CurrentThread; // [rsp+68h] [rbp-A0h]
  __int64 v27; // [rsp+70h] [rbp-98h]
  __int64 v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  int v30; // [rsp+88h] [rbp-80h]
  int v31; // [rsp+8Ch] [rbp-7Ch]
  __int64 v32; // [rsp+90h] [rbp-78h]
  __int64 v33; // [rsp+98h] [rbp-70h]
  __int64 v34; // [rsp+A0h] [rbp-68h]
  int v35; // [rsp+A8h] [rbp-60h]
  unsigned int v36; // [rsp+ACh] [rbp-5Ch]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  __int128 v38; // [rsp+B8h] [rbp-50h]
  __int128 v39; // [rsp+C8h] [rbp-40h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v40; // [rsp+D8h] [rbp-30h]
  __int128 ThreadInformation; // [rsp+E8h] [rbp-20h] BYREF
  struct CMultipleConsumerWorkQueue::CWaitableWorkItem **v42; // [rsp+F8h] [rbp-10h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+108h] [rbp+0h] BYREF
  int *v44; // [rsp+128h] [rbp+20h]
  int v45; // [rsp+130h] [rbp+28h]
  int v46; // [rsp+134h] [rbp+2Ch]
  __int64 *v47; // [rsp+138h] [rbp+30h]
  int v48; // [rsp+140h] [rbp+38h]
  int v49; // [rsp+144h] [rbp+3Ch]

  LODWORD(v25) = 2;
  CurrentThread = KeGetCurrentThread();
  LOBYTE(v28) = 0;
  ThreadInformation = 0uLL;
  if ( ZwQueryInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadAmILastThread|0x20, &ThreadInformation, 0x10u, 0LL) >= 0 )
  {
    v27 = ThreadInformation;
    LOBYTE(v28) = 1;
  }
  v37 = 0LL;
  v36 = -1;
  v24 = &QueryFontDataRequest::`vftable';
  v33 = a5;
  v34 = a6;
  v35 = a7;
  v38 = 0LL;
  v29 = a1;
  v32 = a2;
  v30 = a3;
  v31 = a4;
  v11 = *(int *)(*(_QWORD *)(a2 + 24) + 8LL);
  v22 = &v24;
  if ( (unsigned int)v11 > 3 )
    return 0xFFFFFFFFLL;
  v12 = (void *)g_pUmfdClientPort[v11];
  v13 = (struct CMultipleConsumerWorkQueue::CWaitableWorkItem **)EngAllocMem(0, 8u, 0x71724446u);
  v14 = v13;
  if ( !v13 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)&ThreadInformation = v12;
  *v13 = 0LL;
  v42 = v13;
  *((_QWORD *)&ThreadInformation + 1) = &v22;
  v23 = &UmfdHostLifeTimeManager::s_ReadyLock;
  v40 = v13;
  v39 = ThreadInformation;
  KeEnterCriticalRegion();
  GreAcquirePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
  if ( UmfdHostLifeTimeManager::s_Ready )
  {
    v15 = lambda_6aad3aa5895b9deeeac484e7d6965f8a_::operator()(&v39);
    AutoSharedUmfdLookupLock::~AutoSharedUmfdLookupLock((AutoSharedUmfdLookupLock *)&v23);
  }
  else
  {
    GreReleasePushLockShared(&UmfdHostLifeTimeManager::s_ReadyLock);
    KeLeaveCriticalRegion();
    v15 = -1073741823;
  }
  if ( v15 >= 0 )
  {
    if ( *v14 )
    {
      if ( CMultipleConsumerWorkQueue::WaitForCompletionAndReleaseWorkItem(
             (CMultipleConsumerWorkQueue *)v12,
             *v14,
             (const unsigned int *)"0u",
             v19) )
      {
        *v14 = 0LL;
        v15 = 0;
      }
      else if ( v19[0] )
      {
        v17 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
        v18 = UmfdHostLifeTimeManager::TerminateUmfdHostRetainHandle();
        if ( v18 )
          ZwClose(v18);
        UmfdCancelServerOutstandingRequests(v12);
        v15 = UmfdClientWaitForCompletion(v12, v14, 0LL);
        if ( hProvider > 5u )
        {
          if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x200000000000uLL) )
          {
            v46 = 0;
            v44 = &v20;
            v20 = v15;
            v45 = 4;
            v48 = 4;
            v47 = &v21;
            v49 = 0;
            LODWORD(v21) = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - v17;
            TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E9D9E, 0LL, 0LL, 4u, &pData);
          }
        }
      }
      else
      {
        *v14 = 0LL;
        v15 = -1073741823;
      }
    }
    else
    {
      v15 = -1073741811;
    }
  }
  EngFreeMem(v14);
  if ( v15 >= 0 )
    return v36;
  else
    return 0xFFFFFFFFLL;
}
