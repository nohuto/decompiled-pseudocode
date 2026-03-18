/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C00A4CCC
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C00A5B60 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     GreMovePointer @ 0x1C00A1790 (GreMovePointer.c)
 *     ?UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x1C00A2CB8 (-UpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     UsingPenCursors @ 0x1C00A5634 (UsingPenCursors.c)
 *     EditionPostRawMouseInputMessage @ 0x1C00A5770 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C00A5B30 (RawInputRequestedForMouse.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     TransitionCursorSuppressionState @ 0x1C00BCFE0 (TransitionCursorSuppressionState.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        LONG a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v12; // r14
  unsigned int v14; // esi
  int v15; // ebx
  __int64 v16; // r8
  unsigned int v17; // ecx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  int v27; // r14d
  __int64 Valid; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  struct tagHOOK *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rbx
  bool v39; // zf
  __int64 v40; // rax
  __int64 v41; // [rsp+30h] [rbp-71h] BYREF
  _WORD v42[2]; // [rsp+38h] [rbp-69h] BYREF
  int v43; // [rsp+3Ch] [rbp-65h]
  int v44; // [rsp+40h] [rbp-61h]
  int v45; // [rsp+44h] [rbp-5Dh]
  int v46; // [rsp+48h] [rbp-59h]
  int v47; // [rsp+4Ch] [rbp-55h]
  int v48; // [rsp+50h] [rbp-51h] BYREF
  _BYTE v49[8]; // [rsp+58h] [rbp-49h] BYREF
  int v50; // [rsp+60h] [rbp-41h] BYREF
  __int64 v51; // [rsp+68h] [rbp-39h]
  _DWORD v52[6]; // [rsp+70h] [rbp-31h] BYREF
  __int64 v53; // [rsp+88h] [rbp-19h]

  v12 = a4;
  v41 = a4;
  v14 = 1;
  if ( ((*(_DWORD *)(gptiRit + 680LL) | *(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL)) & 0x8000) != 0 )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v49,
      L"LowLevelMouseMoveHook",
      0LL);
    v27 = 0;
    v52[2] = 0;
    v52[0] = a1;
    v52[1] = a2;
    v52[3] = a8;
    v52[4] = a6;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v53 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v30, v29, v31, v32);
    if ( Valid )
    {
      EnterCrit(0LL, 1LL);
      v33 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL);
      if ( v33 )
      {
        v38 = *(_QWORD *)(gptiCurrent + 1352LL);
        *(_QWORD *)(gptiCurrent + 1352LL) = v52;
        v39 = xxxCallHook2(v33, 0, 0x200uLL, (__int64)v52, &v48, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1352LL) = v38;
        v40 = *(_QWORD *)(gptiCurrent + 448LL);
        LOBYTE(v27) = !v39;
        v34 = *(unsigned __int16 *)(v40 + 4);
        v36 = (unsigned __int16)(v34 & *(_WORD *)(v40 + 10));
        if ( (v36 & 0xFFFFFDFF) != 0 )
          SetWakeBit(gptiCurrent, v34 & 0xFDFF);
        v14 = 1;
      }
      UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v49);
    if ( v27 )
      return 0LL;
    v12 = v41;
  }
  v15 = 2;
  if ( a5 && (unsigned int)RawInputRequestedForMouse() )
  {
    EnterCrit(0LL, 1LL);
    v42[0] = *(_WORD *)(a5 + 2) & 0xFE7F;
    v43 = *(_DWORD *)(a5 + 4);
    v44 = *(_DWORD *)(a5 + 8);
    v45 = *(_DWORD *)(a5 + 12);
    v46 = *(_DWORD *)(a5 + 16);
    v47 = *(_DWORD *)(a5 + 20);
    v51 = v12;
    v50 = v12 != 0 ? 2 : 0;
    if ( (unsigned int)EditionPostRawMouseInputMessage(0, a7, a6, (unsigned int)&v50, (__int64)v42) )
    {
      v14 = 5;
      *(_WORD *)a5 = -1;
    }
    UserSessionSwitchLeaveCrit(v20, v19, v21, v22);
  }
  if ( (*(_DWORD *)(**(_QWORD **)(gptiRit + 464LL) + 16LL) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8LL);
    UserSessionSwitchLeaveCrit(v24, v23, v25, v26);
  }
  LODWORD(gptCursorAsync) = a1;
  gptCursorAsync->y = a2;
  if ( a10 )
  {
    if ( !a5 || (v16 = 1LL, (*(_BYTE *)(a5 + 2) & 1) != 0) )
      v16 = 0LL;
  }
  else
  {
    v16 = 2LL;
  }
  if ( (unsigned __int8)CCursorClip::BoundPoint(gpCursorClip, gptCursorAsync, v16, 0LL, gptCursorAsync) )
    v14 |= 2u;
  if ( !a5 || (*(_WORD *)(a5 + 2) & 0x100) == 0 )
    v15 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors() )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, v17);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, v17, 0);
    }
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v41,
      L"MoveCursor",
      0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), (unsigned int)gptCursorAsync, gptCursorAsync->y, v15);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)gptCursorAsync, (unsigned int)gptCursorAsync->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v41);
    CCursorSizes::UpdateGlobalCursorSize(gpCursorSizes, gptCursorAsync, 0);
  }
  if ( !gProtocolType )
  {
    if ( gMouseTrails )
      _InterlockedExchange(&gMouseTrailsToHide, gMouseTrails + 1);
  }
  return v14;
}
