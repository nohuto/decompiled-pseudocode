/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C0179538
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C017D3F0 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ?GetInstance@CInertiaManager@@SAPEAV1@XZ @ 0x1C0004810 (-GetInstance@CInertiaManager@@SAPEAV1@XZ.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0031A80 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0031DC0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0161A70 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0164B8C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C0178688 (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C017A1A4 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1C017BF10 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C0198428 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 */

void __fastcall CPTPProcessor::ProcessInput(
        CPTPProcessor *this,
        unsigned __int64 a2,
        struct RIMCOMPLETEFRAME *a3,
        int a4,
        int a5,
        int a6)
{
  struct CPointerInputFrame *v10; // rax
  int v11; // edx
  struct CPointerInputFrame *v12; // rsi
  __int64 v13; // r8
  int v14; // ecx
  char *v15; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rdx
  struct CInertiaManager *Instance; // rax
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rax
  char *v36; // rcx
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  bool v44; // zf
  __int64 v45; // rax
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  LPCWSTR *v52[3]; // [rsp+30h] [rbp-18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v52, L"ProcessTouchpadInput", 0LL);
  v10 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  v12 = v10;
  if ( v10 )
  {
    InputTraceLogging::PTP::EngineInput(v10);
    v13 = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 480);
    v14 = *((_DWORD *)gpsi + 497) != 0;
    if ( *((_DWORD *)this + 163) != v14 )
    {
      *((_DWORD *)this + 163) = v14;
      CPTPProcessor::UpdateEnvironment(this, 0LL, v13);
    }
    v15 = (char *)this + 1148;
    *((_QWORD *)this + 74) = a2;
    *((_QWORD *)this + 75) = v12;
    *((_DWORD *)this + 152) = a4;
    *((_DWORD *)this + 153) = a5;
    memset((char *)this + 1148, 0, 0x278uLL);
    *(_QWORD *)((char *)this + 1148) = *(_QWORD *)(*((_QWORD *)v12 + 16) + 256LL);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = qword_1C0215D50;
    if ( qword_1C0215D50 != *((_QWORD *)this + 302) )
    {
      *((_QWORD *)this + 302) = qword_1C0215D50;
      if ( v17 )
      {
        v18 = *(_QWORD *)v15;
        v19 = v17 + *(_QWORD *)v15 - PerformanceCounter.QuadPart;
        v20 = *(_QWORD *)v15 - 1LL;
        if ( v19 >= v20 )
          v19 = *(_QWORD *)v15 - 1LL;
        if ( v19 <= *(_QWORD *)((char *)this + 1780) + 1LL )
        {
          v22 = *(_QWORD *)((char *)this + 1780) + 1LL;
        }
        else
        {
          v21 = v17 - PerformanceCounter.QuadPart;
          if ( v21 + v18 >= v20 )
            v21 = -1LL;
          v22 = v18 + v21;
        }
        *((_QWORD *)this + 304) = v22;
      }
      else
      {
        *((_QWORD *)this + 304) = 0LL;
      }
    }
    v23 = qword_1C0215D58;
    if ( qword_1C0215D58 != *((_QWORD *)this + 303) )
    {
      *((_QWORD *)this + 303) = qword_1C0215D58;
      if ( v23 )
      {
        v24 = *(_QWORD *)v15;
        v25 = v23 + *(_QWORD *)v15 - PerformanceCounter.QuadPart;
        v26 = *(_QWORD *)v15 - 1LL;
        if ( v25 >= v26 )
          v25 = *(_QWORD *)v15 - 1LL;
        if ( v25 <= *(_QWORD *)((char *)this + 1780) + 1LL )
        {
          v28 = *(_QWORD *)((char *)this + 1780) + 1LL;
        }
        else
        {
          v27 = v23 - PerformanceCounter.QuadPart;
          if ( v27 + v24 >= v26 )
            v27 = -1LL;
          v28 = v24 + v27;
        }
        *((_QWORD *)this + 305) = v28;
      }
      else
      {
        *((_QWORD *)this + 305) = 0LL;
      }
    }
    *(_QWORD *)((char *)this + 1156) = *((_QWORD *)this + 304);
    *(_QWORD *)((char *)this + 1164) = *((_QWORD *)this + 305);
    *((_DWORD *)this + 293) = *(_DWORD *)(*((_QWORD *)v12 + 16) + 240LL);
    *((struct tagPOINT *)this + 147) = gptCursorAsync;
    *((_DWORD *)this + 296) = a6 != 0;
    if ( (*((_DWORD *)this + 105) & 1) != 0
      || (Instance = CInertiaManager::GetInstance(),
          (v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))CInertiaManager::QueryInertia)(
                   Instance,
                   gptCursorAsync,
                   15LL)) != 0) )
    {
      LODWORD(v30) = 1;
    }
    *((_DWORD *)this + 297) = v30;
    v31 = 0LL;
    *((_DWORD *)this + 300) = -__CFSHR__(*((_DWORD *)this + 105), 2);
    *((_DWORD *)this + 298) = *((_DWORD *)v12 + 10);
    *((_DWORD *)this + 299) = *((_DWORD *)v12 + 12);
    if ( *((_DWORD *)v12 + 12) )
    {
      do
      {
        v32 = 3 * v31;
        v33 = 496LL * (unsigned int)v31;
        v34 = *((_QWORD *)v12 + 16);
        v31 = (unsigned int)(v31 + 1);
        v32 *= 32LL;
        *(_OWORD *)((char *)this + v32 + 1204) = *(_OWORD *)(v33 + v34 + 176);
        *(_OWORD *)((char *)this + v32 + 1220) = *(_OWORD *)(v33 + v34 + 192);
        *(_OWORD *)((char *)this + v32 + 1236) = *(_OWORD *)(v33 + v34 + 208);
        *(_OWORD *)((char *)this + v32 + 1252) = *(_OWORD *)(v33 + v34 + 224);
        *(_OWORD *)((char *)this + v32 + 1268) = *(_OWORD *)(v33 + v34 + 240);
        *(_OWORD *)((char *)this + v32 + 1284) = *(_OWORD *)(v33 + v34 + 256);
        *(_DWORD *)((char *)this + v32 + 1208) = *(unsigned __int16 *)(v33 + *((_QWORD *)v12 + 16) + 168);
      }
      while ( (_DWORD)v31 != *((_DWORD *)v12 + 12) );
    }
    PTPEngineTraceProducer::OnInput(
      *((PTPEngineTraceProducer **)this + 79),
      (CPTPProcessor *)((char *)this + 1148),
      (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
    v35 = 4LL;
    v36 = (char *)this + 1780;
    do
    {
      v37 = *((_OWORD *)v15 + 1);
      *(_OWORD *)v36 = *(_OWORD *)v15;
      v38 = *((_OWORD *)v15 + 2);
      *((_OWORD *)v36 + 1) = v37;
      v39 = *((_OWORD *)v15 + 3);
      *((_OWORD *)v36 + 2) = v38;
      v40 = *((_OWORD *)v15 + 4);
      *((_OWORD *)v36 + 3) = v39;
      v41 = *((_OWORD *)v15 + 5);
      *((_OWORD *)v36 + 4) = v40;
      v42 = *((_OWORD *)v15 + 6);
      *((_OWORD *)v36 + 5) = v41;
      v43 = *((_OWORD *)v15 + 7);
      v15 += 128;
      *((_OWORD *)v36 + 6) = v42;
      v36 += 128;
      *((_OWORD *)v36 - 1) = v43;
      --v35;
    }
    while ( v35 );
    v44 = *((_QWORD *)this + 75) == 0LL;
    v45 = *((_QWORD *)v15 + 14);
    v46 = *((_OWORD *)v15 + 1);
    *(_OWORD *)v36 = *(_OWORD *)v15;
    v47 = *((_OWORD *)v15 + 2);
    *((_OWORD *)v36 + 1) = v46;
    v48 = *((_OWORD *)v15 + 3);
    *((_OWORD *)v36 + 2) = v47;
    v49 = *((_OWORD *)v15 + 4);
    *((_OWORD *)v36 + 3) = v48;
    v50 = *((_OWORD *)v15 + 5);
    *((_OWORD *)v36 + 4) = v49;
    v51 = *((_OWORD *)v15 + 6);
    *((_OWORD *)v36 + 5) = v50;
    *((_OWORD *)v36 + 6) = v51;
    *((_QWORD *)v36 + 14) = v45;
    if ( !v44 )
    {
      CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v12, 1);
      *((_QWORD *)this + 75) = 0LL;
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_((_DWORD)gBaseLog, v11, 9, 10, (__int64)&WPP_e3f2a7c52d4f3ac02bad02e930d0e3da_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v52);
}
