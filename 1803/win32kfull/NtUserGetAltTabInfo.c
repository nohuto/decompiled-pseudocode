/*
 * XREFs of NtUserGetAltTabInfo @ 0x1C01ED9E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     _GetAltTabInfo @ 0x1C01BC2F4 (_GetAltTabInfo.c)
 */

__int64 __fastcall NtUserGetAltTabInfo(__int64 a1, int a2, ULONG64 a3, volatile void *a4, ULONG a5, int a6)
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
  __int64 v19; // rdx
  __int64 v20; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  unsigned __int16 v22; // di
  __int64 v23; // rax
  unsigned __int16 v24; // dx
  INT v25; // ebx
  int AltTabInfo; // [rsp+30h] [rbp-A8h]
  _BYTE v28[40]; // [rsp+68h] [rbp-70h] BYREF

  memset(v28, 0, sizeof(v28));
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
    if ( PsGetCurrentProcessWow64Process(v11, v10, v12, v13) )
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
      *(_DWORD *)v28 = 40;
      AltTabInfo = GetAltTabInfo(a2, (__int64)v28, (CHAR *)a4, a5, a6);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v20, v19);
      if ( v14 )
      {
        v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 472);
        if ( (*(_BYTE *)(v11 + 224) & 1) == 0 )
        {
          v11 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 472);
          if ( (*(_BYTE *)(v11 + 224) & 0x20) == 0 )
          {
            v11 = *(_QWORD *)(v14 + 40);
            v22 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
            if ( ((*(_DWORD *)(v11 + 288) >> 8) & 0x1FF) != v22 )
            {
              v23 = ValidateHmonitorNoRip(*(_QWORD *)(v11 + 256));
              if ( v23 )
              {
                if ( !v22 )
                  v22 = *(_WORD *)(*(_QWORD *)(v23 + 40) + 64LL);
                v24 = (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 288LL) >> 8) & 0x1FF;
                if ( !v24 )
                  v24 = *(_WORD *)(*(_QWORD *)(v23 + 40) + 64LL);
                v25 = v24;
                *(_DWORD *)&v28[24] = EngMulDiv(*(INT *)&v28[24], v22, v24);
                *(_DWORD *)&v28[28] = EngMulDiv(*(INT *)&v28[28], v22, v25);
              }
              TransformPointBetweenCoordinateSpaces(&v28[32], &v28[32], 0LL, v14);
            }
          }
        }
      }
      if ( AltTabInfo )
      {
        *(_OWORD *)a3 = *(_OWORD *)v28;
        *(_OWORD *)(a3 + 16) = *(_OWORD *)&v28[16];
        *(_QWORD *)(a3 + 32) = *(_QWORD *)&v28[32];
      }
    }
    else
    {
      UserSetLastError(87LL, v18);
      AltTabInfo = 0;
    }
  }
  else
  {
    AltTabInfo = 0;
    UserSetLastError(1400LL, v10);
  }
LABEL_32:
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  return AltTabInfo;
}
