/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C00ED6E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00EDB98 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // eax
  int v24; // ebx
  _QWORD *v25; // rdx
  bool v27; // cf
  __int64 v28; // [rsp+90h] [rbp+18h] BYREF
  __int64 v29; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v28 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v28 = *v9;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v8) + 472) + 224LL) & 1) != 0 )
      goto LABEL_12;
    v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 472);
    if ( (*(_BYTE *)(v13 + 224) & 0x20) != 0 )
      goto LABEL_12;
    v15 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                             v13,
                                                                             v12,
                                                                             v14) >> 8)) & 0x1FF) != 0 )
      goto LABEL_18;
    v18 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v19 = 1, (v18 & 0x20000000) == 0) )
      v19 = 0;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v16, v17) & 0xF) != 2
      || (v27 = (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22) & 0x20000000) != 0, v23 = 1, !v27) )
    {
      v23 = 0;
    }
    if ( v19 == v23 )
    {
LABEL_12:
      v24 = DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v28);
      TransformPointBetweenCoordinateSpaces(&v28, &v28, 0LL, v7);
    }
    else
    {
LABEL_18:
      v29 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v29, &v28, v7, 0LL);
      v24 = DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v29);
    }
    if ( v24 )
    {
      v6 = MmUserProbeAddress;
      v25 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v25 = (_QWORD *)MmUserProbeAddress;
      *v25 = *v25;
      *a2 = v28;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
