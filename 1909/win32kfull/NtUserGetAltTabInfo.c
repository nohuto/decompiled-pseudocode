/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C022B5E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     _GetAltTabInfo @ 0x1C01F4C34 (_GetAltTabInfo.c)
 *     GetLogicalDpiFromMonitor @ 0x1C0229648 (GetLogicalDpiFromMonitor.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, unsigned int a5, int a6)
{
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rsi
  __int64 v16; // rax
  _BYTE *v17; // rdx
  SIZE_T v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r8
  unsigned int v31; // edx
  __int64 v32; // rax
  __int64 v33; // r10
  INT LogicalDpiFromMonitor; // ebx
  INT v35; // r9d
  INT v36; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v39[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v39, 0, sizeof(v39));
  v10 = 1;
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v15 = ValidateHwnd(a1);
    if ( !v15 )
    {
      AltTabInfo = 0;
      goto LABEL_36;
    }
  }
  else
  {
    v15 = 0LL;
  }
  if ( !v15 || v15 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v12) )
      v16 = 0LL;
    else
      v16 = 3LL;
    if ( (v16 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v17 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v17 = (_BYTE *)MmUserProbeAddress;
    *v17 = *v17;
    v17[39] = v17[39];
    v18 = a5;
    if ( !a6 )
      v18 = 2LL * a5;
    ProbeForWrite(a4, v18, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v39 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v39, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24);
      if ( v15 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v27) + 472);
        if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
        {
          v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v28, v29) + 472);
          if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
          {
            v30 = *(_QWORD *)(v15 + 40);
            v31 = *(_DWORD *)(v30 + 288);
            if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v31 >> 8)) & 0x1FF) != 0 )
              goto LABEL_31;
            v12 = (v31 & 0xF) == 2 && (v31 & 0x20000000) != 0;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
              v10 = 0;
            if ( (_DWORD)v12 != v10 )
            {
LABEL_31:
              v32 = ValidateHmonitorNoRip(*(_QWORD *)(v30 + 256));
              if ( v32 )
              {
                GetLogicalDpiFromMonitor(v32, CurrentThreadDpiAwarenessContext);
                LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                            v33,
                                                            *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL));
                v36 = v35;
                *(_DWORD *)&v39[24] = EngMulDiv(*(INT *)&v39[24], v35, LogicalDpiFromMonitor);
                *(_DWORD *)&v39[28] = EngMulDiv(*(INT *)&v39[28], v36, LogicalDpiFromMonitor);
              }
              TransformPointBetweenCoordinateSpaces(&v39[32], &v39[32], 0LL, v15);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v39;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v39[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v39[32];
      }
    }
    else
    {
      UserSetLastError(87LL, v19, v20, v21);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v11, v13, v14);
  }
LABEL_36:
  UserSessionSwitchLeaveCrit(v12);
  return AltTabInfo;
}
