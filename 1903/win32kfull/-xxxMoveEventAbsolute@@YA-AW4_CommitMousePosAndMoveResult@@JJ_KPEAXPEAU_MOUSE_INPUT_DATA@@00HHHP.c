/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHHPEAU_MouseCursorPerf@@@Z @ 0x1C00422E4
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C0041BC0 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     EditionPostRawMouseInputMessage @ 0x1C0041C80 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C00422BC (RawInputRequestedForMouse.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00457CC (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     GreMovePointer @ 0x1C00467C0 (GreMovePointer.c)
 *     TransitionCursorSuppressionState @ 0x1C0081090 (TransitionCursorSuppressionState.c)
 *     UsingPenCursors @ 0x1C0088F54 (UsingPenCursors.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C00B4500 (PhkFirstValid.c)
 *     SetWakeBit @ 0x1C00CF810 (SetWakeBit.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        LPCWSTR *a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        LARGE_INTEGER *a11)
{
  LPCWSTR *v14; // r14
  unsigned int v15; // esi
  __int64 v16; // xmm1_8
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r8
  unsigned int v20; // ecx
  __int16 v22; // ax
  __int64 v23; // rcx
  int v24; // r14d
  __int64 Valid; // rbx
  __int64 v26; // rcx
  struct tagHOOK *v27; // rax
  __int64 v28; // rbx
  __int64 v29; // rax
  bool v30; // zf
  __int64 v31; // rax
  int v32; // edx
  LPCWSTR *v33; // [rsp+38h] [rbp-79h] BYREF
  _WORD v34[2]; // [rsp+40h] [rbp-71h] BYREF
  int v35; // [rsp+44h] [rbp-6Dh]
  int v36; // [rsp+48h] [rbp-69h]
  int v37; // [rsp+4Ch] [rbp-65h]
  int v38; // [rsp+50h] [rbp-61h]
  int v39; // [rsp+54h] [rbp-5Dh]
  __int128 v40; // [rsp+58h] [rbp-59h] BYREF
  __int64 v41; // [rsp+68h] [rbp-49h]
  int v42; // [rsp+70h] [rbp-41h] BYREF
  LPCWSTR *v43; // [rsp+78h] [rbp-39h] BYREF
  _DWORD v44[6]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v45; // [rsp+98h] [rbp-19h]

  v14 = a4;
  v33 = a4;
  if ( ((*(_DWORD *)(**(_QWORD **)(gptiRit + 456LL) + 16LL) | *(_DWORD *)(gptiRit + 672LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v43, L"LowLevelMouseMoveHook", 0LL);
    v24 = 0;
    v44[4] = a6;
    v44[5] = 0;
    v44[0] = a1;
    v44[1] = a2;
    v44[2] = 0;
    v44[3] = a8;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v45 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v26);
    if ( Valid )
    {
      a11[4] = KeQueryPerformanceCounter(0LL);
      EnterCrit(0LL, 1LL);
      v27 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL);
      if ( v27 )
      {
        v28 = *(_QWORD *)(gptiCurrent + 1376LL);
        *(_QWORD *)(gptiCurrent + 1376LL) = v44;
        v29 = xxxCallHook2(v27, 0, 0x200uLL, (__int64)v44, &v42, 0);
        *(_QWORD *)(gptiCurrent + 1376LL) = v28;
        v30 = v29 == 0;
        v31 = *(_QWORD *)(gptiCurrent + 440LL);
        LOBYTE(v24) = !v30;
        v32 = *(unsigned __int16 *)(v31 + 4);
        if ( ((unsigned __int16)v32 & *(_WORD *)(v31 + 10) & 0xFDFF) != 0 )
          SetWakeBit(gptiCurrent, v32 & 0xFFFFFDFF);
      }
      a11[5] = KeQueryPerformanceCounter(0LL);
      UserSessionSwitchLeaveCrit(a11);
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v43);
    if ( v24 )
      return 0LL;
    v14 = v33;
  }
  v15 = 1;
  if ( a5 )
  {
    EnterCrit(0LL, 1LL);
    v16 = *((_QWORD *)&gObjDummyLock + 2);
    v40 = gObjDummyLock;
    v41 = v16;
    v17 = RawInputRequestedForMouse();
    v18 = 0LL;
    if ( v17 )
    {
      v22 = *(_WORD *)(a5 + 2);
      v34[1] = 0;
      *((_QWORD *)&v40 + 1) = v14;
      v34[0] = v22 & 0xFE7F;
      v35 = *(_DWORD *)(a5 + 4);
      v36 = *(_DWORD *)(a5 + 8);
      v37 = *(_DWORD *)(a5 + 12);
      v38 = *(_DWORD *)(a5 + 16);
      v39 = *(_DWORD *)(a5 + 20);
      v41 = 0LL;
      *(_QWORD *)&v40 = v14 != 0LL ? 2uLL : 0;
      if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, (__int64)&v40, (__int64)v34) )
      {
        v15 = 5;
        *(_WORD *)a5 = -1;
      }
    }
    UserSessionSwitchLeaveCrit(v18);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 456LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8LL);
    UserSessionSwitchLeaveCrit(v23);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v19 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v19 = 0LL;
  }
  else
  {
    v19 = 2LL;
  }
  if ( (unsigned __int8)CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v19, 0LL, gptCursorAsync) )
    v15 |= 2u;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors() )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v20);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v20, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v33, L"MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    a11[2] = KeQueryPerformanceCounter(0LL);
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL));
    a11[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v33);
    CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) )
      _InterlockedExchange(&gMouseTrailsToHide, LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc) + 1);
  }
  return v15;
}
