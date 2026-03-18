/*
 * XREFs of NtUserLogicalToPhysicalPoint @ 0x1C010B570
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C010B948 (DCEPtInRect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserLogicalToPhysicalPoint(__int64 a1, __int64 *a2)
{
  int v4; // edi
  _QWORD *v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  int v15; // ebx
  __int64 v17; // [rsp+90h] [rbp+18h] BYREF
  __int64 v18; // [rsp+98h] [rbp+20h] BYREF

  EnterCrit(0LL, 1LL);
  v4 = 0;
  gbValidateHandleForIL = 0;
  v9 = ValidateHwnd(a1);
  if ( v9 )
  {
    v10 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v10 = (__int64 *)MmUserProbeAddress;
    v17 = *v10;
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)v5) + 480) + 224LL) & 1) != 0
      || (v13 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11) + 480),
          (*(_BYTE *)(v13 + 224) & 0x20) != 0)
      || (v14 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 288LL),
          (((unsigned __int16)(v14 >> 8) ^ (unsigned __int16)((unsigned int)W32GetCurrentThreadDpiAwarenessContext(
                                                                              v13,
                                                                              v12) >> 8)) & 0x1FF) == 0) )
    {
      v15 = DCEPtInRect(*(_QWORD *)(v9 + 40) + 88LL, v17);
      TransformPointBetweenCoordinateSpaces(&v17, &v17, 0LL, v9);
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v18, &v17, v9, 0LL);
      v15 = DCEPtInRect(*(_QWORD *)(v9 + 40) + 88LL, v18);
    }
    if ( v15 )
    {
      v6 = MmUserProbeAddress;
      v5 = a2;
      if ( (unsigned __int64)a2 >= MmUserProbeAddress )
        v5 = (_QWORD *)MmUserProbeAddress;
      *v5 = *v5;
      *a2 = v17;
      v4 = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v4;
}
