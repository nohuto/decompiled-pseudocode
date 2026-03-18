/*
 * XREFs of NtUserPhysicalToLogicalPoint @ 0x1C0113580
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0113848 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserPhysicalToLogicalPoint(__int64 a1, __int64 *a2)
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
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  unsigned int v39; // ebx
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rcx
  int v44; // ebx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  _QWORD *v49; // rdx
  bool v51; // cf
  __int64 v52; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v53; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v52 = 0LL;
  v53 = 0LL;
  EnterCrit(0LL, 1LL);
  gbValidateHandleForIL = 0;
  v7 = ValidateHwnd(a1);
  if ( v7 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v52 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v8, v9) + 472) + 224LL) & 1) == 0 )
    {
      v15 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12, v13) + 472);
      if ( (*(_BYTE *)(v15 + 224) & 0x20) == 0 )
      {
        v18 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (((unsigned __int16)(v18 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                 v15,
                                                                                 v14,
                                                                                 v16,
                                                                                 v17) >> 8)) & 0x1FF) != 0 )
          goto LABEL_24;
        v22 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
        if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v23 = 1, (v22 & 0x20000000) == 0) )
          v23 = 0;
        if ( (W32GetCurrentThreadDpiAwarenessContext(v22, v19, v20, v21) & 0xF) != 2
          || (v51 = (W32GetCurrentThreadDpiAwarenessContext(v25, v24, v26, v27) & 0x20000000) != 0, v28 = 1, !v51) )
        {
          v28 = 0;
        }
        if ( v23 != v28 )
LABEL_24:
          v53 = v52;
      }
    }
    TransformPointBetweenCoordinateSpaces(&v52, &v52, v7, 0LL);
    if ( (unsigned int)DCEPtInRect(*(_QWORD *)(v7 + 40) + 88LL, v52) )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v29, v30, v31) + 472) + 224LL) & 1) == 0 )
      {
        v36 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v32, v33, v34) + 472);
        if ( (*(_BYTE *)(v36 + 224) & 0x20) == 0 )
        {
          v39 = *(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (((unsigned __int16)(v39 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                                   v36,
                                                                                   v35,
                                                                                   v37,
                                                                                   v38) >> 8)) & 0x1FF) != 0 )
            goto LABEL_25;
          v43 = *(unsigned int *)(*(_QWORD *)(v7 + 40) + 288LL);
          if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 288LL) & 0xF) != 2 || (v44 = 1, (v43 & 0x20000000) == 0) )
            v44 = 0;
          if ( (W32GetCurrentThreadDpiAwarenessContext(v43, v40, v41, v42) & 0xF) == 2
            && (W32GetCurrentThreadDpiAwarenessContext(v46, v45, v47, v48) & 0x20000000) != 0 )
          {
            v4 = 1;
          }
          if ( v44 != v4 )
LABEL_25:
            v52 = v53;
        }
      }
      v6 = MmUserProbeAddress;
      v49 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v49 = (_QWORD *)MmUserProbeAddress;
      *v49 = *v49;
      *a2 = v52;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
