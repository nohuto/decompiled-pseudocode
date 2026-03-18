/*
 * XREFs of NtUserGetDpiForMonitor @ 0x1C0013A20
 * Callers:
 *     <none>
 * Callees:
 *     DrvGetCurrentDpiInfoFromHDev @ 0x1C0013574 (DrvGetCurrentDpiInfoFromHDev.c)
 *     HMValidateSharedHandle @ 0x1C0013BD4 (HMValidateSharedHandle.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002581C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     EngMulDiv @ 0x1C0039AE0 (EngMulDiv.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     ??0EnterLeaveCrit@@QEAA@XZ @ 0x1C00A8AD4 (--0EnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastStatus @ 0x1C0165E98 (UserSetLastStatus.c)
 */

__int64 __fastcall NtUserGetDpiForMonitor(__int64 a1, int a2, INT *a3, INT *a4)
{
  INT v7; // esi
  INT v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r12d
  _DWORD *v13; // rdx
  ULONG64 v14; // rcx
  _DWORD *v15; // rdx
  NTSTATUS CurrentDpiInfoFromHDev; // eax
  INT v18; // edx
  INT v19; // edi
  INT v20; // ebx
  INT v21; // edi
  INT v22; // edx
  INT v23; // ebx
  INT v24; // eax
  _BYTE v25[32]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v26[40]; // [rsp+40h] [rbp-88h] BYREF
  INT a; // [rsp+68h] [rbp-60h]
  INT v28; // [rsp+6Ch] [rbp-5Ch]
  INT v29; // [rsp+78h] [rbp-50h]
  INT v30; // [rsp+7Ch] [rbp-4Ch]
  char v31; // [rsp+9Ch] [rbp-2Ch]

  v7 = 0;
  v8 = 0;
  EnterLeaveCrit::EnterLeaveCrit((EnterLeaveCrit *)v25);
  v9 = HMValidateSharedHandle(a1);
  v10 = v9;
  if ( !v9 || (v11 = *(_QWORD *)(v9 + 232)) == 0 )
  {
    v12 = 0;
    UserSetLastError(6LL);
    goto LABEL_12;
  }
  if ( a2 )
  {
    CurrentDpiInfoFromHDev = DrvGetCurrentDpiInfoFromHDev(v11, (__int64)v26);
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
        v8 = v28;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
        {
          v18 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 284);
          v19 = v18;
        }
        else
        {
          v19 = 96;
          v18 = 96;
        }
        v20 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
        v7 = EngMulDiv(a, v18, v20);
        v8 = EngMulDiv(v28, v19, v20);
      }
      if ( (v31 & 1) != 0 || (v31 & 2) != 0 || !v7 )
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
      if ( !v29 || (v31 & 2) != 0 )
      {
        v21 = 96;
        v8 = 96;
        v7 = 96;
      }
      else
      {
        v21 = 96;
        v7 = EngMulDiv(v29, 96, 100);
        v8 = EngMulDiv(v30, 96, 100);
      }
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 1 )
      {
        v22 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 284);
        v21 = v22;
      }
      else
      {
        if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) == 2 )
          goto LABEL_21;
        v22 = 96;
      }
      v23 = *(unsigned __int16 *)(*(_QWORD *)(v10 + 40) + 64LL);
      v7 = EngMulDiv(v7, v22, v23);
      v8 = EngMulDiv(v8, v21, v23);
    }
LABEL_21:
    if ( v31 < 0 )
    {
      v24 = v8;
      v8 = v7;
      v7 = v24;
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
    v7 = *(unsigned __int16 *)(PsGetCurrentProcessWin32Process() + 284);
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
