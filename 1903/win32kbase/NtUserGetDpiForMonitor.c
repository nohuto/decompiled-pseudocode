/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C003D3A0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCrit @ 0x1C0025E70 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028720 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C00292EC (UserSetLastError.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C003A18C (DrvGetCurrentDpiInfoFromHDev.c)
 *     EngMulDiv @ 0x1C003D2E0 (EngMulDiv.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003D578 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     HMValidateSharedHandle @ 0x1C003D614 (HMValidateSharedHandle.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     UserSetLastStatus @ 0x1C01A1E84 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v6; // esi
  INT v7; // r14d
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rbx
  int v12; // r15d
  int CurrentThreadDpiAwarenessContext; // ecx
  unsigned __int16 v14; // cx
  _DWORD *v15; // rdx
  ULONG64 v16; // rcx
  _DWORD *v17; // rdx
  INT v19; // edi
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  INT v24; // edx
  INT v25; // ebx
  __int64 v26; // rcx
  INT v27; // edx
  INT v28; // ebx
  INT v29; // eax
  INT v30[28]; // [rsp+30h] [rbp-98h] BYREF

  v6 = 0;
  v7 = 0;
  EnterCrit(0, 1);
  v8 = HMValidateSharedHandle(a1);
  v10 = v8;
  if ( !v8 || (v11 = *(_QWORD *)(v8 + 232)) == 0 )
  {
    v12 = 0;
    UserSetLastError(6LL, v9);
    goto LABEL_15;
  }
  if ( a2 )
  {
    v19 = 96;
    memset(v30, 0, 0x60uLL);
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, (__int64)v30);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v12 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_15;
    }
    v12 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v6 = v30[10];
        v7 = v30[11];
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v24 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v23) + 284);
          v19 = v24;
        }
        else
        {
          v24 = 96;
        }
        v25 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
        v6 = EngMulDiv(v30[10], v24, v25);
        v7 = EngMulDiv(v30[11], v19, v25);
      }
      if ( (v30[23] & 1) != 0 || (v30[23] & 2) != 0 || !v6 )
      {
        v7 = 0;
        v6 = 0;
        UserSetLastError(50LL, v21);
        v12 = 0;
      }
      goto LABEL_24;
    }
    if ( a2 == 1 )
    {
      if ( !v30[14] || (v30[23] & 2) != 0 )
      {
        v7 = 96;
        v6 = 96;
      }
      else
      {
        v6 = EngMulDiv(v30[14], 96, 100);
        v7 = EngMulDiv(v30[15], 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v27 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v26) + 284);
        v19 = v27;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_24;
        v27 = 96;
      }
      v28 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
      v6 = EngMulDiv(v6, v27, v28);
      v7 = EngMulDiv(v7, v19, v28);
    }
LABEL_24:
    if ( SLOBYTE(v30[23]) < 0 )
    {
      v29 = v7;
      v7 = v6;
      v6 = v29;
    }
    goto LABEL_10;
  }
  v12 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
    if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 && (CurrentThreadDpiAwarenessContext & 0x20000000) != 0 )
      v14 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 68LL);
    else
      v14 = *(_WORD *)(*(_QWORD *)(v10 + 40) + 64LL);
    v6 = v14;
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v6 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v22) + 284);
  }
  else
  {
    v6 = 96;
  }
  v7 = v6;
LABEL_10:
  v15 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  v16 = MmUserProbeAddress;
  v17 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v17 = (_DWORD *)MmUserProbeAddress;
  *v17 = *v17;
  *a3 = v6;
  *a4 = v7;
LABEL_15:
  UserSessionSwitchLeaveCrit(v16, (__int64)v17);
  return v12;
}
