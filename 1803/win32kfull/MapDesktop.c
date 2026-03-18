/*
 * XREFs of MapDesktop @ 0x1C0011B90
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     NtUserBuildHwndList @ 0x1C0029040 (NtUserBuildHwndList.c)
 *     xxxResolveDesktop @ 0x1C00B8640 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C00B91B4 (xxxCreateDesktopEx.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     UserCommitDesktopMemory @ 0x1C0100F90 (UserCommitDesktopMemory.c)
 * Callees:
 *     GetDesktopView @ 0x1C0011D20 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0011D40 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall MapDesktop(__int64 a1)
{
  __int64 v1; // rbp
  NTSTATUS v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ProcessWin32Process; // r14
  __int64 v9; // rcx
  __int64 v10; // r15
  _QWORD *v12; // rsi
  __int64 v13; // rdx
  ULONG v14; // eax
  _BYTE v15[72]; // [rsp+50h] [rbp-48h] BYREF
  int v16; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v17; // [rsp+A8h] [rbp+10h] BYREF
  __int64 v18; // [rsp+B0h] [rbp+18h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+20h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v3 = 0;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v16);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v9 = *(_QWORD *)(a1 + 8);
      if ( (v9 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v9)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v1, ExDesktopObjectType, 0LL, v15))
        && (v10 = *(_QWORD *)(v1 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v1) )
      {
        if ( GetDesktopView(ProcessWin32Process, v1) )
          goto LABEL_8;
        v12 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
        if ( v12 )
        {
          v13 = *(_QWORD *)(a1 + 8);
          v18 = 0LL;
          v17 = 0LL;
          v19 = 4096LL;
          v3 = MmMapViewOfSection(v10, v13, &v17, 0LL, 0LL, &v19, &v18, 2, 0x400000, 2);
          if ( v3 < 0 )
          {
            Win32FreePool(v12);
          }
          else
          {
            v12[1] = v1;
            v12[2] = v17;
            *v12 = *(_QWORD *)(ProcessWin32Process + 696);
            *(_QWORD *)(ProcessWin32Process + 696) = v12;
          }
          if ( v3 >= 0 )
            goto LABEL_8;
        }
        else
        {
          v3 = -1073741801;
        }
      }
      else
      {
        v3 = -1073741790;
      }
    }
    else
    {
      v3 = -1073741811;
    }
    v14 = RtlNtStatusToDosError(v3);
    UserSetLastError(v14);
  }
LABEL_8:
  if ( !v16 )
    UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (unsigned int)v3;
}
