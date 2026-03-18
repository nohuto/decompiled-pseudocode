/*
 * XREFs of ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238120
 * Callers:
 *     ?OnInput@CGlobalManipulationManager@@AEAAXXZ @ 0x180237660 (-OnInput@CGlobalManipulationManager@@AEAAXXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1800B3880 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800B539C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180236900 (-CalculateFrameTargets@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237CC4 (-ProcessFrameInputPostTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180237E48 (-ProcessFrameInputPreTargeting@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteAllFrames@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180238CC4 (-RouteAllFrames@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239550 (-TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 */

void __fastcall CGlobalManipulationManager::ProcessManipulationInfo(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  int v2; // eax
  int v5; // esi
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  int v8; // edx
  __int64 v9; // r9
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  int v12; // [rsp+30h] [rbp-89h] BYREF
  int v13; // [rsp+34h] [rbp-85h] BYREF
  int v14; // [rsp+38h] [rbp-81h] BYREF
  int v15; // [rsp+3Ch] [rbp-7Dh] BYREF
  __int128 v16; // [rsp+40h] [rbp-79h] BYREF
  _OWORD v17[2]; // [rsp+50h] [rbp-69h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-49h] BYREF
  int *v19; // [rsp+90h] [rbp-29h]
  __int64 v20; // [rsp+98h] [rbp-21h]
  int *v21; // [rsp+A0h] [rbp-19h]
  __int64 v22; // [rsp+A8h] [rbp-11h]
  int *v23; // [rsp+B0h] [rbp-9h]
  __int64 v24; // [rsp+B8h] [rbp-1h]
  __int128 *v25; // [rsp+C0h] [rbp+7h]
  __int64 cData; // [rsp+C8h] [rbp+Fh]
  _OWORD *v27; // [rsp+D0h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+1Fh]
  int *v29; // [rsp+E0h] [rbp+27h]
  __int64 v30; // [rsp+E8h] [rbp+2Fh]

  v2 = *((_DWORD *)a2 + 38);
  v5 = *((_DWORD *)this + 93);
  if ( *((_DWORD *)this + 92) != v2 )
  {
    ++v5;
    *((_DWORD *)this + 92) = v2;
    *((_DWORD *)this + 93) = v5;
  }
  v17[0] = *((_OWORD *)a2 + 2);
  v16 = *((_OWORD *)a2 + 3);
  QueryPerformanceCounter((LARGE_INTEGER *)a2 + 15);
  v6 = v17[0];
  *((_DWORD *)a2 + 18) = *((_DWORD *)a2 + 36);
  v7 = v16;
  *((_DWORD *)a2 + 19) = *((_DWORD *)a2 + 38);
  *(_OWORD *)((char *)a2 + 88) = v6;
  *((_DWORD *)a2 + 20) = v5;
  *(_OWORD *)((char *)a2 + 104) = v7;
  *((_DWORD *)a2 + 34) = *((_DWORD *)a2 + 53) - 1;
  if ( dword_180337240 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_180337240, 2uLL) )
  {
    v10 = *((_OWORD *)a2 + 2);
    v12 = *((_DWORD *)a2 + 6);
    v11 = *((_OWORD *)a2 + 3);
    v19 = &v12;
    v21 = &v13;
    v14 = *((_DWORD *)a2 + 4);
    v23 = &v14;
    *(_QWORD *)&v16 = *((_QWORD *)a2 + 28);
    v25 = &v16;
    v27 = v17;
    v15 = *((_DWORD *)a2 + 36);
    v29 = &v15;
    v20 = v9;
    v13 = v5;
    v22 = v9;
    v24 = v9;
    cData = (unsigned int)(v8 + 6);
    v17[1] = v11;
    v28 = cData;
    *(_QWORD *)&v17[0] = v10;
    v30 = v9;
    TlgWrite((TraceLoggingHProvider)&dword_180337240, &unk_1802DDD72, 0LL, 0LL, cData, &pData);
  }
  CGlobalManipulationManager::ProcessFrameInputPreTargeting(this, a2);
  CGlobalManipulationManager::CalculateFrameTargets(this, a2);
  CGlobalManipulationManager::TargetFrameInput(this, a2);
  CGlobalManipulationManager::RouteAllFrames(this, a2);
  CGlobalManipulationManager::ProcessFrameInputPostTargeting(this, a2);
}
