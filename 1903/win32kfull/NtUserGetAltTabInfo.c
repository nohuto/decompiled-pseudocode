/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C022BC00
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     _GetAltTabInfo @ 0x1C01F4DB4 (_GetAltTabInfo.c)
 *     GetLogicalDpiFromMonitor @ 0x1C0229C68 (GetLogicalDpiFromMonitor.c)
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
  __int64 v25; // r9
  __int64 v26; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r8
  unsigned int v34; // edx
  __int64 v35; // rax
  __int64 v36; // r10
  INT LogicalDpiFromMonitor; // ebx
  INT v38; // r9d
  INT v39; // edi
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v42[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v42, 0, sizeof(v42));
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
      *(_DWORD *)v42 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v42, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v23, v22, v24, v25);
      if ( v15 )
      {
        v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v28, v29) + 472);
        if ( (*(_BYTE *)(v12 + 224) & 1) == 0 )
        {
          v12 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v30, v31, v32) + 472);
          if ( (*(_BYTE *)(v12 + 224) & 0x20) == 0 )
          {
            v33 = *(_QWORD *)(v15 + 40);
            v34 = *(_DWORD *)(v33 + 288);
            if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v34 >> 8)) & 0x1FF) != 0 )
              goto LABEL_31;
            v12 = (v34 & 0xF) == 2 && (v34 & 0x20000000) != 0;
            if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2 || (CurrentThreadDpiAwarenessContext & 0x20000000) == 0 )
              v10 = 0;
            if ( (_DWORD)v12 != v10 )
            {
LABEL_31:
              v35 = ValidateHmonitorNoRip(*(_QWORD *)(v33 + 256));
              if ( v35 )
              {
                GetLogicalDpiFromMonitor(v35, CurrentThreadDpiAwarenessContext);
                LogicalDpiFromMonitor = (unsigned __int16)GetLogicalDpiFromMonitor(
                                                            v36,
                                                            *(_DWORD *)(*(_QWORD *)(v15 + 40) + 288LL));
                v39 = v38;
                *(_DWORD *)&v42[24] = EngMulDiv(*(INT *)&v42[24], v38, LogicalDpiFromMonitor);
                *(_DWORD *)&v42[28] = EngMulDiv(*(INT *)&v42[28], v39, LogicalDpiFromMonitor);
              }
              TransformPointBetweenCoordinateSpaces(&v42[32], &v42[32], 0LL, v15);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v42;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v42[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v42[32];
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
