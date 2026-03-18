/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C00ED8D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00EDB98 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
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
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rcx
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  _QWORD *v39; // rdx
  bool v41; // cf
  __int64 v42; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v43; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v42 = 0LL;
  v43 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v9 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v9 = (__int64 *)MmUserProbeAddress;
    v42 = *v9;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v8) + 472) + 224LL) & 1) == 0 )
    {
      v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v11) + 472);
      if ( (*(_BYTE *)(v13 + 224) & 0x20) == 0 )
      {
        v15 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (((unsigned __int16)(v15 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v13,
                                                                                 v12,
                                                                                 v14) >> 8)) & 0x1FF) != 0 )
          goto LABEL_24;
        v18 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v19 = 1, (v18 & 0x20000000) == 0) )
          v19 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v18, v16, v17) & 0xF) != 2
          || (v41 = (W32GetCurrentThreadDpiAwarenessContext(v21, v20, v22) & 0x20000000) != 0, v23 = 1, !v41) )
        {
          v23 = 0;
        }
        if ( v19 != v23 )
LABEL_24:
          v43 = v42;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v42, &v42, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v42) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v24, v25) + 472) + 224LL) & 1) == 0 )
      {
        v29 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v26, v27) + 472);
        if ( (*(_BYTE *)(v29 + 224) & 0x20) == 0 )
        {
          v31 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v31 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v29,
                                                                                   v28,
                                                                                   v30) >> 8)) & 0x1FF) != 0 )
            goto LABEL_25;
          v34 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v35 = 1, (v34 & 0x20000000) == 0) )
            v35 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v34, v32, v33) & 0xF) == 2
            && (W32GetCurrentThreadDpiAwarenessContext(v37, v36, v38) & 0x20000000) != 0 )
          {
            v4 = 1;
          }
          if ( v35 != v4 )
LABEL_25:
            v42 = v43;
        }
      }
      v6 = MmUserProbeAddress;
      v39 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v39 = (_QWORD *)MmUserProbeAddress;
      *v39 = *v39;
      *a2 = v42;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
