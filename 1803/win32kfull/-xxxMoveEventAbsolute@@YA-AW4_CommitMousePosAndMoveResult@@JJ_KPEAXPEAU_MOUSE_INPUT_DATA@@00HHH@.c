/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00HHH@Z @ 0x1C0069DB0
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1C0069D20 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     TransitionCursorSuppressionState @ 0x1C000A5B0 (TransitionCursorSuppressionState.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     UpdateCursorImageForMonitorDpi @ 0x1C006A0F8 (UpdateCursorImageForMonitorDpi.c)
 *     UsingPenCursors @ 0x1C006AA08 (UsingPenCursors.c)
 *     EditionPostRawMouseInputMessage @ 0x1C006AA30 (EditionPostRawMouseInputMessage.c)
 *     RawInputRequestedForMouse @ 0x1C006AD80 (RawInputRequestedForMouse.c)
 *     _MonitorFromPoint @ 0x1C00723A0 (_MonitorFromPoint.c)
 *     GreMovePointer @ 0x1C00C5F10 (GreMovePointer.c)
 *     PhkFirstValid @ 0x1C00D7E40 (PhkFirstValid.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C013A3EC (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMoveEventAbsolute(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        int a9,
        int a10)
{
  __int64 v11; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  unsigned int v15; // esi
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  __int64 v19; // r8
  int v20; // ebx
  unsigned __int16 v21; // bx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rcx
  __int16 v33; // ax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  int v42; // esi
  __int64 Valid; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  struct tagHOOK *v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rbx
  bool v54; // zf
  __int64 v55; // rax
  _WORD v57[2]; // [rsp+38h] [rbp-59h] BYREF
  int v58; // [rsp+3Ch] [rbp-55h]
  int v59; // [rsp+40h] [rbp-51h]
  int v60; // [rsp+44h] [rbp-4Dh]
  int v61; // [rsp+48h] [rbp-49h]
  int v62; // [rsp+4Ch] [rbp-45h]
  int v63; // [rsp+50h] [rbp-41h] BYREF
  int v64; // [rsp+58h] [rbp-39h] BYREF
  __int64 v65; // [rsp+60h] [rbp-31h]
  _DWORD v66[6]; // [rsp+68h] [rbp-29h] BYREF
  __int64 v67; // [rsp+80h] [rbp-11h]

  v11 = a2;
  v13 = **(_QWORD **)(gptiRit + 456LL);
  v14 = (unsigned int)(*(_DWORD *)(gptiRit + 672LL) | *(_DWORD *)(v13 + 16));
  if ( ((*(_WORD *)(gptiRit + 672LL) | *(_WORD *)(v13 + 16)) & 0x8000) != 0 )
  {
    v42 = 0;
    v66[2] = 0;
    v66[0] = a1;
    v66[1] = v11;
    v66[3] = a8;
    v66[4] = a6;
    if ( a5 && a3 == *(_DWORD *)(a5 + 20) && (*(_BYTE *)(a5 + 2) & 0x50) != 0 )
      a3 = (unsigned __int8)a3 | 0xFF515700LL;
    v67 = a3;
    EnterSharedCrit(0LL, 1LL);
    Valid = PhkFirstValid(gptiRit, 14LL);
    UserSessionSwitchLeaveCrit(v45, v44, v46, v47);
    if ( Valid )
    {
      EnterCrit(0LL, 1LL);
      v48 = (struct tagHOOK *)PhkFirstValid(gptiRit, 14LL);
      if ( v48 )
      {
        v53 = *(_QWORD *)(gptiCurrent + 1360LL);
        *(_QWORD *)(gptiCurrent + 1360LL) = v66;
        v54 = xxxCallHook2(v48, 0, 0x200uLL, (__int64)v66, &v63, 0) == 0;
        *(_QWORD *)(gptiCurrent + 1360LL) = v53;
        v55 = *(_QWORD *)(gptiCurrent + 440LL);
        LOBYTE(v42) = !v54;
        v49 = *(unsigned __int16 *)(v55 + 4);
        v51 = (unsigned __int16)(v49 & *(_WORD *)(v55 + 10));
        if ( (v51 & 0xFFFFFDFF) != 0 )
          SetWakeBit(gptiCurrent, v49 & 0xFDFF);
      }
      UserSessionSwitchLeaveCrit(v50, v49, v51, v52);
      if ( v42 )
        return 0LL;
    }
  }
  v15 = 1;
  if ( a5 && (unsigned int)RawInputRequestedForMouse(v13, v14, a3, v11) )
  {
    EnterCrit(0LL, 1LL);
    v33 = *(_WORD *)(a5 + 2);
    v65 = a4;
    v57[0] = v33 & 0xFE7F;
    v58 = *(_DWORD *)(a5 + 4);
    v59 = *(_DWORD *)(a5 + 8);
    v60 = *(_DWORD *)(a5 + 12);
    v61 = *(_DWORD *)(a5 + 16);
    v62 = *(_DWORD *)(a5 + 20);
    v64 = a4 != 0 ? 2 : 0;
    if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a6, &v64, v57) )
    {
      v15 = 5;
      *(_WORD *)a5 = -1;
    }
    UserSessionSwitchLeaveCrit(v35, v34, v36, v37);
  }
  v16 = **(_QWORD **)(gptiRit + 456LL);
  if ( (*(_DWORD *)(v16 + 16) & 4) != 0 )
    return 0LL;
  if ( a9 && gCursorSuppressionState == 2 )
  {
    EnterCrit(0LL, 1LL);
    if ( gCursorSuppressionState == 2 )
      TransitionCursorSuppressionState(8, 1);
    UserSessionSwitchLeaveCrit(v39, v38, v40, v41);
  }
  v17 = 0;
  if ( a5 && (*(_BYTE *)(a5 + 2) & 1) == 0 )
  {
    EnterCrit(0LL, 1LL);
    v32 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v17 = 2;
      if ( gspwndInternalCapture )
      {
        v32 = *(_QWORD *)(*(_QWORD *)(gspwndInternalCapture + 16LL) + 664LL);
        if ( v32 )
        {
          if ( (*(_DWORD *)(v32 + 196) & 0xC00) != 0 )
            v17 = 3;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v32, v29, v30, v31);
  }
  v18 = GetDelegationFlags(v16, v14, a3, v11) & 2;
  gptCursorAsync[0] = a1;
  gptCursorAsync[1] = a2;
  if ( a10 )
  {
    v19 = v17 | 4;
    if ( !(_DWORD)v18 )
      v19 = v17;
    if ( (unsigned __int8)CCursorClip::BoundPoint(
                            gpCursorClip,
                            *(_QWORD *)gptCursorAsync,
                            v19,
                            *(_QWORD *)gptCursorAsync) )
      v15 |= 2u;
  }
  if ( a5 && (*(_WORD *)(a5 + 2) & 0x100) != 0 )
    v20 = 2;
  else
    v20 = a8 != 0;
  if ( a9 )
  {
    if ( (unsigned int)UsingPenCursors() )
    {
      _InterlockedOr((volatile signed __int32 *)&Feedback::gdwPointerCursorOps, 1u);
      KeSetEvent(Feedback::gpevtPointerCursorOperation, 1, 0);
    }
    EtwTraceGreMovePointerBegin(a6, gptCursorAsync[0], gptCursorAsync[1]);
    GreMovePointer(*(HDEV *)(gpDispInfo + 40LL), gptCursorAsync[0], gptCursorAsync[1], v20);
    EtwTraceGreMovePointerEnd(a6, gptCursorAsync[0], gptCursorAsync[1]);
  }
  v21 = 0;
  if ( a9 )
  {
    EnterCrit(0LL, 1LL);
    v22 = ValidateHmonitorNoRip(ghCursorMonitor);
    if ( v22 )
      v21 = *(_WORD *)(*(_QWORD *)(v22 + 40) + 64LL);
    if ( MonitorFromPoint(*(_QWORD *)gptCursorAsync, 2LL, 18LL) )
      v23 = *(_QWORD *)MonitorFromPoint(*(_QWORD *)gptCursorAsync, 2LL, 18LL);
    else
      v23 = 0LL;
    ghCursorMonitor = v23;
    UpdateCursorImageForMonitorDpi(v21);
    UserSessionSwitchLeaveCrit(v25, v24, v26, v27);
  }
  if ( !gProtocolType )
  {
    if ( gMouseTrails )
      _InterlockedExchange(&gMouseTrailsToHide, gMouseTrails + 1);
  }
  return v15;
}
