/*
 * XREFs of MapDesktop @ 0x1C0021C00
 * Callers:
 *     xxxSetThreadDesktop @ 0x1C000D458 (xxxSetThreadDesktop.c)
 *     zzzComposeDesktop @ 0x1C0010708 (zzzComposeDesktop.c)
 *     NtUserBuildHwndList @ 0x1C006D580 (NtUserBuildHwndList.c)
 *     xxxResolveDesktop @ 0x1C007D690 (xxxResolveDesktop.c)
 *     xxxCreateDesktopEx @ 0x1C007E33C (xxxCreateDesktopEx.c)
 *     UserCommitDesktopMemory @ 0x1C0104300 (UserCommitDesktopMemory.c)
 * Callees:
 *     GetDesktopView @ 0x1C0021DE0 (GetDesktopView.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0021E34 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     ??0?$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ @ 0x1C0021E80 (--0-$CLockDomainExclusiveLeaf@VDLT_DESKTOP@@@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall MapDesktop(__int64 a1, int a2)
{
  __int64 v3; // r14
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  __int64 ProcessWin32Process; // r15
  __int64 v7; // rcx
  __int64 v8; // r12
  _QWORD *v10; // rsi
  __int64 v11; // rdx
  ULONG v12; // eax
  _BYTE v13[8]; // [rsp+50h] [rbp-10h] BYREF
  _BYTE v14[8]; // [rsp+58h] [rbp-8h] BYREF
  int v15; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+58h] BYREF

  v16 = 0LL;
  v3 = *(_QWORD *)(a1 + 16);
  v4 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      a1,
      a2,
      6,
      24,
      (__int64)&WPP_402c5f24833438052b5cb2c912b968aa_Traceguids,
      v3,
      *(_QWORD *)(a1 + 8));
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  if ( *(_DWORD *)a1 != 3 )
  {
    ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 8));
    if ( ProcessWin32Process )
    {
      v7 = *(_QWORD *)(a1 + 8);
      if ( (v7 == gpepCSRSS
         || (unsigned int)IsProcessDwm(v7)
         || (unsigned __int8)ObFindHandleForObject(*(_QWORD *)(a1 + 8), v3, ExDesktopObjectType, 0LL, v13))
        && (v8 = *(_QWORD *)(v3 + 120), (unsigned int)PsGetProcessSessionId(*(_QWORD *)(a1 + 8)) == *(_DWORD *)v3) )
      {
        if ( GetDesktopView(ProcessWin32Process) )
          goto LABEL_10;
        v10 = (_QWORD *)Win32AllocPoolWithQuota(24LL, 1768977237LL);
        if ( v10 )
        {
          v11 = *(_QWORD *)(a1 + 8);
          v18 = 0LL;
          v17 = 0LL;
          v16 = 4096LL;
          v4 = MmMapViewOfSection(v8, v11, &v17, 0LL, 0LL, &v16, &v18, 2, 0x400000, 2);
          if ( v4 < 0 )
          {
            Win32FreePool(v10);
          }
          else
          {
            v10[1] = v3;
            v10[2] = v17;
            CLockDomainExclusiveLeaf<DLT_DESKTOP>::CLockDomainExclusiveLeaf<DLT_DESKTOP>(v14);
            *v10 = *(_QWORD *)(ProcessWin32Process + 696);
            *(_QWORD *)(ProcessWin32Process + 696) = v10;
          }
          if ( v4 >= 0 )
            goto LABEL_10;
        }
        else
        {
          v4 = -1073741801;
        }
      }
      else
      {
        v4 = -1073741790;
      }
    }
    else
    {
      v4 = -1073741811;
    }
    v12 = RtlNtStatusToDosError(v4);
    UserSetLastError(v12);
  }
LABEL_10:
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v5);
  return (unsigned int)v4;
}
