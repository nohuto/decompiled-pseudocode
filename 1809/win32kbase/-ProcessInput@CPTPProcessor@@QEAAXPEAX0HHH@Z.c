/*
 * XREFs of ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C014B724
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C014CF80 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0030308 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C0030404 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     memset @ 0x1C00AF780 (memset.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C0135D6C (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C0138A2C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z @ 0x1C014A90C (-EngineInput@PTP@InputTraceLogging@@SAXPEBUCPointerInputFrame@@_N@Z.c)
 *     ?UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INFO@@@Z @ 0x1C014C2B8 (-UpdateEnvironment@CPTPProcessor@@AEAAXW4EnvironmentUpdateOptions@@PEAUtagHID_POINTER_DEVICE_INF.c)
 *     ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01604D8 (-OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z.c)
 *     ApiSetQueryInertiaStatus @ 0x1C0164914 (ApiSetQueryInertiaStatus.c)
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
  struct CPointerInputFrame *v11; // rsi
  __int64 v12; // r8
  int v13; // ecx
  char *v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // rdx
  int InertiaStatus; // eax
  __int64 v29; // r8
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rax
  char *v34; // rcx
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  bool v42; // zf
  int v43; // eax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  LPCWSTR *v50[3]; // [rsp+30h] [rbp-18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v50, L"ProcessTouchpadInput", 0LL);
  v10 = CTouchProcessor::CommitRimCompleteFrame(this, a3, 1, 0);
  v11 = v10;
  if ( v10 )
  {
    InputTraceLogging::PTP::EngineInput(v10);
    v12 = *(_QWORD *)(HMValidateHandleNoSecure(a2, 19) + 480);
    v13 = *((_DWORD *)gpsi + 497) != 0;
    if ( *((_DWORD *)this + 155) != v13 )
    {
      *((_DWORD *)this + 155) = v13;
      CPTPProcessor::UpdateEnvironment(this, 0LL, v12);
    }
    v14 = (char *)this + 1144;
    *((_QWORD *)this + 70) = a2;
    *((_QWORD *)this + 71) = v11;
    *((_DWORD *)this + 144) = a4;
    *((_DWORD *)this + 145) = a5;
    memset((char *)this + 1144, 0, 0x274uLL);
    *((_QWORD *)this + 143) = *(_QWORD *)(*((_QWORD *)v11 + 13) + 312LL);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v16 = qword_1C01D1460;
    if ( qword_1C01D1460 != *((_QWORD *)this + 301) )
    {
      *((_QWORD *)this + 301) = qword_1C01D1460;
      if ( v16 )
      {
        v17 = *(_QWORD *)v14;
        v18 = v16 + *(_QWORD *)v14 - PerformanceCounter.QuadPart;
        v19 = *(_QWORD *)v14 - 1LL;
        if ( v18 >= v19 )
          v18 = *(_QWORD *)v14 - 1LL;
        if ( v18 <= *(_QWORD *)((char *)this + 1772) + 1LL )
        {
          v21 = *(_QWORD *)((char *)this + 1772) + 1LL;
        }
        else
        {
          v20 = v16 - PerformanceCounter.QuadPart;
          if ( v20 + v17 >= v19 )
            v20 = -1LL;
          v21 = v17 + v20;
        }
        *((_QWORD *)this + 303) = v21;
      }
      else
      {
        *((_QWORD *)this + 303) = 0LL;
      }
    }
    v22 = qword_1C01D1468;
    if ( qword_1C01D1468 != *((_QWORD *)this + 302) )
    {
      *((_QWORD *)this + 302) = qword_1C01D1468;
      if ( v22 )
      {
        v23 = *(_QWORD *)v14;
        v24 = v22 + *(_QWORD *)v14 - PerformanceCounter.QuadPart;
        v25 = *(_QWORD *)v14 - 1LL;
        if ( v24 >= v25 )
          v24 = *(_QWORD *)v14 - 1LL;
        if ( v24 <= *(_QWORD *)((char *)this + 1772) + 1LL )
        {
          v27 = *(_QWORD *)((char *)this + 1772) + 1LL;
        }
        else
        {
          v26 = v22 - PerformanceCounter.QuadPart;
          if ( v26 + v23 >= v25 )
            v26 = -1LL;
          v27 = v23 + v26;
        }
        *((_QWORD *)this + 304) = v27;
      }
      else
      {
        *((_QWORD *)this + 304) = 0LL;
      }
    }
    *((_QWORD *)this + 144) = *((_QWORD *)this + 303);
    *((_QWORD *)this + 145) = *((_QWORD *)this + 304);
    *((_DWORD *)this + 292) = *(_DWORD *)(*((_QWORD *)v11 + 13) + 296LL);
    *(struct tagPOINT *)((char *)this + 1172) = gptCursorAsync;
    *((_DWORD *)this + 295) = a6 != 0;
    if ( (*((_DWORD *)this + 84) & 1) != 0 || (InertiaStatus = ApiSetQueryInertiaStatus()) != 0 )
      InertiaStatus = 1;
    *((_DWORD *)this + 296) = InertiaStatus;
    v29 = 0LL;
    *((_DWORD *)this + 297) = *((_DWORD *)v11 + 10);
    *((_DWORD *)this + 298) = *((_DWORD *)v11 + 12);
    if ( *((_DWORD *)v11 + 12) )
    {
      do
      {
        v30 = *((_QWORD *)v11 + 13);
        v31 = 576 * v29;
        v32 = 96 * v29;
        v29 = (unsigned int)(v29 + 1);
        *(_OWORD *)((char *)this + v32 + 1196) = *(_OWORD *)(v31 + v30 + 232);
        *(_OWORD *)((char *)this + v32 + 1212) = *(_OWORD *)(v31 + v30 + 248);
        *(_OWORD *)((char *)this + v32 + 1228) = *(_OWORD *)(v31 + v30 + 264);
        *(_OWORD *)((char *)this + v32 + 1244) = *(_OWORD *)(v31 + v30 + 280);
        *(_OWORD *)((char *)this + v32 + 1260) = *(_OWORD *)(v31 + v30 + 296);
        *(_OWORD *)((char *)this + v32 + 1276) = *(_OWORD *)(v31 + v30 + 312);
        *(_DWORD *)((char *)this + v32 + 1200) = *(unsigned __int16 *)(v31 + *((_QWORD *)v11 + 13) + 224);
      }
      while ( (_DWORD)v29 != *((_DWORD *)v11 + 12) );
    }
    PTPEngineTraceProducer::OnInput(
      *((PTPEngineTraceProducer **)this + 75),
      (CPTPProcessor *)((char *)this + 1144),
      (struct tagTPAAPSTATE *)&CPTPProcessor::s_aapState);
    v33 = 4LL;
    v34 = (char *)this + 1772;
    do
    {
      v35 = *((_OWORD *)v14 + 1);
      *(_OWORD *)v34 = *(_OWORD *)v14;
      v36 = *((_OWORD *)v14 + 2);
      *((_OWORD *)v34 + 1) = v35;
      v37 = *((_OWORD *)v14 + 3);
      *((_OWORD *)v34 + 2) = v36;
      v38 = *((_OWORD *)v14 + 4);
      *((_OWORD *)v34 + 3) = v37;
      v39 = *((_OWORD *)v14 + 5);
      *((_OWORD *)v34 + 4) = v38;
      v40 = *((_OWORD *)v14 + 6);
      *((_OWORD *)v34 + 5) = v39;
      v41 = *((_OWORD *)v14 + 7);
      v14 += 128;
      *((_OWORD *)v34 + 6) = v40;
      v34 += 128;
      *((_OWORD *)v34 - 1) = v41;
      --v33;
    }
    while ( v33 );
    v42 = *((_QWORD *)this + 71) == 0LL;
    v43 = *((_DWORD *)v14 + 28);
    v44 = *((_OWORD *)v14 + 1);
    *(_OWORD *)v34 = *(_OWORD *)v14;
    v45 = *((_OWORD *)v14 + 2);
    *((_OWORD *)v34 + 1) = v44;
    v46 = *((_OWORD *)v14 + 3);
    *((_OWORD *)v34 + 2) = v45;
    v47 = *((_OWORD *)v14 + 4);
    *((_OWORD *)v34 + 3) = v46;
    v48 = *((_OWORD *)v14 + 5);
    *((_OWORD *)v34 + 4) = v47;
    v49 = *((_OWORD *)v14 + 6);
    *((_OWORD *)v34 + 5) = v48;
    *((_OWORD *)v34 + 6) = v49;
    *((_DWORD *)v34 + 28) = v43;
    if ( !v42 )
    {
      CTouchProcessor::FreeFrame((struct _KTHREAD **)this, v11, 1);
      *((_QWORD *)this + 71) = 0LL;
    }
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)this + 1), 2u, 0xEu, 0xAu, (__int64)&WPP_b9ee5d7c140439ce994d439d87d536f6_Traceguids);
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v50);
}
