/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C0113390
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0113848 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  int v29; // ebx
  _QWORD *v30; // rdx
  bool v32; // cf
  __int64 v33; // [rsp+90h] [rbp+18h] BYREF
  __int64 v34; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v33 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v33 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v8, v9) + 472) + 224LL) & 1) != 0 )
      goto LABEL_12;
    v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 472);
    if ( (*(_BYTE *)(v15 + 224) & 0x20) != 0 )
      goto LABEL_12;
    v18 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                             v15,
                                                                             v14,
                                                                             v16,
                                                                             v17) >> 8)) & 0x1FF) != 0 )
      goto LABEL_18;
    v22 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v23 = 1, (v22 & 0x20000000) == 0) )
      v23 = 0;
    if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v19, v20, v21) & 0xF) != 2
      || (v32 = (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0x20000000) != 0, v28 = 1, !v32) )
    {
      v28 = 0;
    }
    if ( v23 == v28 )
    {
LABEL_12:
      v29 = DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v33);
      TransformPointBetweenCoordinateSpaces(&v33, &v33, 0LL, v7);
    }
    else
    {
LABEL_18:
      v34 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v34, &v33, v7, 0LL);
      v29 = DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v34);
    }
    if ( v29 )
    {
      v6 = MmUserProbeAddress;
      v30 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v30 = (_QWORD *)MmUserProbeAddress;
      *v30 = *v30;
      *a2 = v33;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
