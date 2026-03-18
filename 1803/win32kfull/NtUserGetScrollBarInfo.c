/*
 * XREFs of NtUserGetScrollBarInfo @ 0x1C0038690
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetScrollBarInfo @ 0x1C003891C (xxxGetScrollBarInfo.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C0042C10 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     IsThreadCrossSessionAttached @ 0x1C0139D6C (IsThreadCrossSessionAttached.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetScrollBarInfo(__int64 a1, __int64 a2, ULONG64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  ULONG_PTR v9; // r15
  int ScrollBarInfo; // edi
  __int64 v11; // rax
  _BYTE *v12; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *ThreadWin32Thread; // rax
  struct _KTHREAD *v21; // rsi
  __int64 v22; // rbx
  __int64 *v23; // rax
  unsigned int v24; // r12d
  unsigned int v25; // ebx
  struct _KTHREAD *v26; // r13
  __int64 v27; // rsi
  __int64 *v28; // rax
  __int64 CurrentProcessWin32Process; // rax
  _QWORD v31[11]; // [rsp+50h] [rbp-88h] BYREF

  memset(&v31[3], 0, 0x3CuLL);
  EnterCrit(0LL, 1LL);
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v31[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v31;
    v31[1] = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    if ( PsGetCurrentProcessWow64Process(gptiCurrent, v5, v7, v8) )
      v11 = 0LL;
    else
      v11 = 3LL;
    if ( (v11 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v12 = (_BYTE *)MmUserProbeAddress;
    *v12 = *v12;
    v12[59] = v12[59];
    LODWORD(v31[3]) = *(_DWORD *)a3;
    ScrollBarInfo = xxxGetScrollBarInfo(v9);
    CurrentThread = KeGetCurrentThread();
    v14 = 0LL;
    if ( !(unsigned int)IsThreadCrossSessionAttached(v16, v15) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v14 = *ThreadWin32Thread;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(v14 + 472) + 224LL) & 1) == 0 )
    {
      v21 = KeGetCurrentThread();
      v22 = 0LL;
      if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
      {
        v23 = (__int64 *)PsGetThreadWin32Thread(v21);
        if ( v23 )
          v22 = *v23;
      }
      if ( (*(_BYTE *)(*(_QWORD *)(v22 + 472) + 224LL) & 0x20) == 0 )
      {
        v24 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL);
        v25 = 18;
        v26 = KeGetCurrentThread();
        v27 = 0LL;
        if ( !(unsigned int)IsThreadCrossSessionAttached(v18, v17) )
        {
          v28 = (__int64 *)PsGetThreadWin32Thread(v26);
          if ( v28 )
            v27 = *v28;
        }
        if ( v27 )
        {
          if ( *(_QWORD *)(v27 + 360) )
            CaptureAndValidateUserModeDpiAwarenessContext(v27);
          if ( *(_DWORD *)(v27 + 340) )
          {
            v25 = *(_DWORD *)(v27 + 340);
          }
          else
          {
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v18);
            if ( CurrentProcessWin32Process )
              v25 = *(_DWORD *)(CurrentProcessWin32Process + 280);
          }
        }
        if ( (((unsigned __int16)(v24 >> 8) ^ (unsigned __int16)(v25 >> 8)) & 0x1FF) != 0 )
          TransformRectBetweenCoordinateSpaces((char *)&v31[3] + 4, (char *)&v31[3] + 4, 0LL, v9);
      }
    }
    if ( ScrollBarInfo )
    {
      *(_OWORD *)a3 = *(_OWORD *)&v31[3];
      *(_OWORD *)(a3 + 16) = *(_OWORD *)&v31[5];
      *(_OWORD *)(a3 + 32) = *(_OWORD *)&v31[7];
      *(_QWORD *)(a3 + 48) = v31[9];
      *(_DWORD *)(a3 + 56) = v31[10];
    }
    ThreadUnlock1(v18, v17, v19);
  }
  else
  {
    ScrollBarInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return ScrollBarInfo;
}
