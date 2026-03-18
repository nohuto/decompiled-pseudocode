/*
 * XREFs of ?ProcessManipulationInfo@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB8D8
 * Callers:
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x1801EAF8C (-OnInput@CManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180083CAC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180083FFC (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EA0EC (-CalculateFrameTargets@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB560 (-ProcessFrameInputPostTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EB6C4 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801EC548 (-RouteAllFrames@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x1801ECE74 (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CManipulationManager::ProcessManipulationInfo(CManipulationManager *this, LARGE_INTEGER *a2)
{
  DWORD LowPart; // eax
  DWORD v5; // r14d
  LARGE_INTEGER v6; // rbx
  int v7; // edx
  __int64 v8; // r9
  DWORD v9; // [rsp+30h] [rbp-69h] BYREF
  DWORD v10; // [rsp+34h] [rbp-65h] BYREF
  DWORD v11; // [rsp+38h] [rbp-61h] BYREF
  DWORD v12; // [rsp+3Ch] [rbp-5Dh] BYREF
  LARGE_INTEGER v13; // [rsp+40h] [rbp-59h] BYREF
  LARGE_INTEGER v14; // [rsp+48h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  DWORD *v16; // [rsp+70h] [rbp-29h]
  __int64 v17; // [rsp+78h] [rbp-21h]
  DWORD *v18; // [rsp+80h] [rbp-19h]
  __int64 v19; // [rsp+88h] [rbp-11h]
  DWORD *v20; // [rsp+90h] [rbp-9h]
  __int64 v21; // [rsp+98h] [rbp-1h]
  LARGE_INTEGER *v22; // [rsp+A0h] [rbp+7h]
  __int64 cData; // [rsp+A8h] [rbp+Fh]
  LARGE_INTEGER *v24; // [rsp+B0h] [rbp+17h]
  __int64 v25; // [rsp+B8h] [rbp+1Fh]
  DWORD *v26; // [rsp+C0h] [rbp+27h]
  __int64 v27; // [rsp+C8h] [rbp+2Fh]

  LowPart = a2[13].LowPart;
  v5 = *((_DWORD *)this + 73);
  if ( *((_DWORD *)this + 72) != LowPart )
  {
    ++v5;
    *((_DWORD *)this + 72) = LowPart;
    *((_DWORD *)this + 73) = v5;
  }
  v6 = a2[4];
  QueryPerformanceCounter(a2 + 9);
  a2[6].LowPart = a2[12].LowPart;
  a2[6].HighPart = a2[13].LowPart;
  a2[7].LowPart = v5;
  a2[8] = v6;
  a2[11].LowPart = a2[20].HighPart - 1;
  if ( dword_180305E40 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180305E40, 2uLL) )
  {
    v9 = a2[3].LowPart;
    v16 = &v9;
    v18 = &v10;
    v11 = a2[2].LowPart;
    v20 = &v11;
    v13 = a2[22];
    v22 = &v13;
    v14 = a2[4];
    v24 = &v14;
    v12 = a2[12].LowPart;
    v26 = &v12;
    v17 = v8;
    v10 = v5;
    v19 = v8;
    v21 = v8;
    cData = (unsigned int)(v7 + 6);
    v25 = cData;
    v27 = v8;
    TlgWrite((TraceLoggingHProvider)&dword_180305E40, &unk_1802B6AAE, 0LL, 0LL, cData, &pData);
  }
  CManipulationManager::ProcessFrameInputPreTargeting(this, (struct CManipulationFrame *)a2);
  CManipulationManager::CalculateFrameTargets(this, (struct CManipulationFrame *)a2);
  CManipulationManager::TargetFrameInput(this, (struct CManipulationFrame *)a2);
  CManipulationManager::RouteAllFrames(this, (struct CManipulationFrame *)a2);
  CManipulationManager::ProcessFrameInputPostTargeting(this, (struct CManipulationFrame *)a2);
}
