/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0059620
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C001F400 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     EngMulDiv @ 0x1C0057F90 (EngMulDiv.c)
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0059594 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C00597B4 (HMValidateSharedHandle.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C0073B10 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x1C0142AC0 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v7; // esi
  INT v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  _OWORD *v11; // rcx
  int v12; // r12d
  _DWORD *v13; // rdx
  ULONG64 v14; // rcx
  _DWORD *v15; // rdx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  INT v20; // edx
  INT v21; // edi
  INT v22; // ebx
  INT v23; // edi
  __int64 v24; // rcx
  INT v25; // edx
  INT v26; // ebx
  INT v27; // eax
  _BYTE v28[32]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v29[40]; // [rsp+40h] [rbp-88h] BYREF
  INT a; // [rsp+68h] [rbp-60h]
  INT v31; // [rsp+6Ch] [rbp-5Ch]
  INT v32; // [rsp+78h] [rbp-50h]
  INT v33; // [rsp+7Ch] [rbp-4Ch]
  char v34; // [rsp+9Ch] [rbp-2Ch]

  v7 = 0;
  v8 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v28);
  v9 = HMValidateSharedHandle(a1);
  v10 = v9;
  if ( !v9 || (v11 = *(_OWORD **)(v9 + 232)) == 0LL )
  {
    v12 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, (__int64)v29);
    if ( CurrentDpiInfoFromHDev < 0 )
    {
      v12 = 0;
      UserSetLastStatus(CurrentDpiInfoFromHDev);
      goto LABEL_12;
    }
    v12 = 1;
    if ( a2 == 2 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
      {
        v7 = a;
        v8 = v31;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v20 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v19) + 284);
          v21 = v20;
        }
        else
        {
          v21 = 96;
          v20 = 96;
        }
        v22 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
        v7 = EngMulDiv(a, v20, v22);
        v8 = EngMulDiv(v31, v21, v22);
      }
      if ( (v34 & 1) != 0 || (v34 & 2) != 0 || !v7 )
      {
        v8 = 0;
        v7 = 0;
        UserSetLastError(50LL);
        v12 = 0;
      }
      goto LABEL_21;
    }
    if ( a2 == 1 )
    {
      if ( !v32 || (v34 & 2) != 0 )
      {
        v23 = 96;
        v8 = 96;
        v7 = 96;
      }
      else
      {
        v23 = 96;
        v7 = EngMulDiv(v32, 96, 100);
        v8 = EngMulDiv(v33, 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v25 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v24) + 284);
        v23 = v25;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_21;
        v25 = 96;
      }
      v26 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
      v7 = EngMulDiv(v7, v25, v26);
      v8 = EngMulDiv(v8, v23, v26);
    }
LABEL_21:
    if ( v34 < 0 )
    {
      v27 = v8;
      v8 = v7;
      v7 = v27;
    }
    goto LABEL_7;
  }
  v12 = 1;
  if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
  {
    v7 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
  }
  else if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
  {
    v7 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process(v18) + 284);
  }
  else
  {
    v7 = 96;
  }
  v8 = v7;
LABEL_7:
  v13 = a3;
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    v13 = (_DWORD *)MmUserProbeAddress;
  *v13 = *v13;
  v14 = MmUserProbeAddress;
  v15 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v15 = (_DWORD *)MmUserProbeAddress;
  *v15 = *v15;
  *a3 = v7;
  *a4 = v8;
LABEL_12:
  UserSessionSwitchLeaveCrit(v14);
  return v12;
}
