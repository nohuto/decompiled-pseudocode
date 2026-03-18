/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C012C1A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetComboBoxInfo @ 0x1C012C368 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG_PTR v8; // r14
  __int64 v9; // rax
  _BYTE *v10; // rdx
  int ComboBoxInfo; // edi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  _OWORD v19[6]; // [rsp+50h] [rbp-88h] BYREF

  memset(&v19[2], 0, 0x40uLL);
  EnterCrit(0LL, 1LL);
  v8 = ValidateHwnd(a1);
  if ( v8 )
  {
    *(_QWORD *)&v19[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v19;
    *((_QWORD *)&v19[0] + 1) = v8;
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    if ( PsGetCurrentProcessWow64Process(gptiCurrent, v4, v6, v7) )
      v9 = 0LL;
    else
      v9 = 3LL;
    if ( (v9 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v10 = (_BYTE *)MmUserProbeAddress;
    *v10 = *v10;
    v10[63] = v10[63];
    LODWORD(v19[2]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v8);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13) + 472);
      if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(v8 + 40) + 288LL);
        CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v14, v13);
        v14 = 511LL;
        if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8)) & 0x1FF) != 0 )
        {
          TransformRectBetweenCoordinateSpaces((char *)&v19[3] + 4, (char *)&v19[3] + 4, 0LL, v8);
          TransformRectBetweenCoordinateSpaces((char *)&v19[2] + 4, (char *)&v19[2] + 4, 0LL, v8);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v19[2];
      *(_OWORD *)(a2 + 16) = v19[3];
      *(_OWORD *)(a2 + 32) = v19[4];
      *(_OWORD *)(a2 + 48) = v19[5];
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return ComboBoxInfo;
}
