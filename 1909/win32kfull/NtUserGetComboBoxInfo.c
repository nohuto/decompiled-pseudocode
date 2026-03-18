/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0153820
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxGetComboBoxInfo @ 0x1C0153A64 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserGetComboBoxInfo(__int64 a1, ULONG64 a2)
{
  int v4; // r15d
  __int64 v5; // rcx
  ULONG_PTR v6; // r14
  __int64 v7; // rcx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  int ComboBoxInfo; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v22; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v23; // [rsp+48h] [rbp-90h]
  __int64 v24; // [rsp+50h] [rbp-88h]
  _OWORD v25[4]; // [rsp+70h] [rbp-68h] BYREF

  memset(v25, 0, sizeof(v25));
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v22 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v22;
    v23 = v6;
    HMLockObject(v6);
    if ( PsGetCurrentProcessWow64Process(v7) )
      v8 = 0LL;
    else
      v8 = 3LL;
    if ( (v8 & a2) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (_BYTE *)a2;
    if ( a2 >= MmUserProbeAddress )
      v9 = (_BYTE *)MmUserProbeAddress;
    *v9 = *v9;
    v9[63] = v9[63];
    LODWORD(v25[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6);
    v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12) + 472);
    if ( (*(_BYTE *)(v14 + 224) & 1) == 0 )
    {
      v14 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15) + 472);
      if ( (*(_BYTE *)(v14 + 224) & 0x20) == 0 )
      {
        v16 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        if ( (((unsigned __int16)(v16 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v14,
                                                                                 v13,
                                                                                 v15) >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v19 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
        v20 = (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) == 2 && (v19 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v19, v17, v18) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v20 != v4 )
        {
LABEL_26:
          TransformRectBetweenCoordinateSpaces((char *)&v25[1] + 4, (char *)&v25[1] + 4, 0LL, v6);
          TransformRectBetweenCoordinateSpaces((char *)v25 + 4, (char *)v25 + 4, 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v25[0];
      *(_OWORD *)(a2 + 16) = v25[1];
      *(_OWORD *)(a2 + 32) = v25[2];
      *(_OWORD *)(a2 + 48) = v25[3];
    }
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ComboBoxInfo;
}
