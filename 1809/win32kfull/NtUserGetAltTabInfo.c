/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C0213EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     _GetAltTabInfo @ 0x1C01DEEC4 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, unsigned int a5, int a6)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rsi
  __int64 v15; // rax
  _BYTE *v16; // rdx
  SIZE_T v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned __int16 v24; // di
  __int64 v25; // rax
  unsigned __int16 v26; // dx
  INT v27; // ebx
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v30[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v30, 0, sizeof(v30));
  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    v14 = ValidateHwnd(a1);
    if ( !v14 )
    {
      AltTabInfo = 0;
      goto LABEL_32;
    }
  }
  else
  {
    v14 = 0LL;
  }
  if ( !v14 || v14 == gspwndAltTab )
  {
    if ( PsGetCurrentProcessWow64Process(v11) )
      v15 = 0LL;
    else
      v15 = 3LL;
    if ( (v15 & a3) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (_BYTE *)a3;
    if ( a3 >= MmUserProbeAddress )
      v16 = (_BYTE *)MmUserProbeAddress;
    *v16 = *v16;
    v16[39] = v16[39];
    v17 = a5;
    if ( !a6 )
      v17 = 2LL * a5;
    ProbeForWrite(a4, v17, 2u);
    if ( *(_DWORD *)a3 == 40 )
    {
      *(_DWORD *)v30 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v30, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v22, v21);
      if ( v14 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 480);
        if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
        {
          v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 480);
          if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
          {
            v11 = *(_QWORD *)(v14 + 40);
            v24 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
            if ( ((*(_DWORD *)(v11 + 288) >> 8) & 0x1FF) != v24 )
            {
              v25 = ValidateHmonitorNoRip(*(_QWORD *)(v11 + 256));
              if ( v25 )
              {
                if ( !v24 )
                  v24 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
                v26 = (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) >> 8) & 0x1FF;
                if ( !v26 )
                  v26 = *(_WORD *)(*(_QWORD *)(v25 + 40) + 64LL);
                v27 = v26;
                *(_DWORD *)&v30[24] = EngMulDiv(*(INT *)&v30[24], v24, v26);
                *(_DWORD *)&v30[28] = EngMulDiv(*(INT *)&v30[28], v24, v27);
              }
              TransformPointBetweenCoordinateSpaces(&v30[32], &v30[32], 0LL, v14);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v30;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v30[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v30[32];
      }
    }
    else
    {
      UserSetLastError(87LL, v18, v19, v20);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v10, v12, v13);
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return AltTabInfo;
}
