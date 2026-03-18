/*
 * XREFs of NtUserGetComboBoxInfo @ 0x1C0152A60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     xxxGetComboBoxInfo @ 0x1C0152CA4 (xxxGetComboBoxInfo.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
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
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r9
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // r9
  __int64 v27; // [rsp+40h] [rbp-98h] BYREF
  ULONG_PTR v28; // [rsp+48h] [rbp-90h]
  __int64 v29; // [rsp+50h] [rbp-88h]
  _OWORD v30[4]; // [rsp+70h] [rbp-68h] BYREF

  memset(v30, 0, sizeof(v30));
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v4 = 1;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( v6 )
  {
    v27 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v27;
    v28 = v6;
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
    LODWORD(v30[0]) = *(_DWORD *)a2;
    ComboBoxInfo = xxxGetComboBoxInfo(v6);
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 472);
    if ( (*(_BYTE *)(v15 + 224) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v14, v16, v17) + 472);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        v19 = *(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL);
        if ( (((unsigned __int16)(v19 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v15,
                                                                                 v14,
                                                                                 v16,
                                                                                 v18) >> 8)) & 0x1FF) != 0 )
          goto LABEL_26;
        v23 = *(unsigned int *)(*(_QWORD *)(v6 + 40) + 288LL);
        v24 = (*(_DWORD *)(*(_QWORD *)(v6 + 40) + 288LL) & 0xF) == 2 && (v23 & 0x20000000) != 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v23, v20, v21, v22) & 0xF) != 2
          || (W32GetCurrentThreadDpiAwarenessContext(v15, v14, v16, v25) & 0x20000000) == 0 )
        {
          v4 = 0;
        }
        if ( v24 != v4 )
        {
LABEL_26:
          TransformRectBetweenCoordinateSpaces((char *)&v30[1] + 4, (char *)&v30[1] + 4, 0LL, v6);
          TransformRectBetweenCoordinateSpaces((char *)v30 + 4, (char *)v30 + 4, 0LL, v6);
        }
      }
    }
    if ( ComboBoxInfo )
    {
      *(_OWORD *)a2 = v30[0];
      *(_OWORD *)(a2 + 16) = v30[1];
      *(_OWORD *)(a2 + 32) = v30[2];
      *(_OWORD *)(a2 + 48) = v30[3];
    }
    ThreadUnlock1(v15, v14, v16);
  }
  else
  {
    ComboBoxInfo = 0;
  }
  UserSessionSwitchLeaveCrit(v5);
  return ComboBoxInfo;
}
