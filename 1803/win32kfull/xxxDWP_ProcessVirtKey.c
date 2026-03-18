/*
 * XREFs of xxxDWP_ProcessVirtKey @ 0x1C01FF8B0
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C00246A8 (xxxRealDefWindowProc.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C0042C60 (xxxSendTransformableMessageTimeout.c)
 *     _GetKeyState @ 0x1C00ECA24 (_GetKeyState.c)
 *     ?xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01FD714 (-xxxCloseApplication@WindowManagementExtended@@YAXPEAUtagTHREADINFO@@@Z.c)
 */

void __fastcall xxxDWP_ProcessVirtKey(int a1)
{
  unsigned __int16 v1; // bx
  __int64 v2; // rdx
  bool v3; // sf
  __int64 v4; // r8
  __int64 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  _QWORD v9[4]; // [rsp+50h] [rbp-28h] BYREF

  v1 = a1;
  v2 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
  if ( v2 )
  {
    if ( a1 == 9 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v2 + 16) + 868LL) & 1) != 0 )
        return;
    }
    else if ( a1 != 27 )
    {
      if ( a1 == 115 )
        WindowManagementExtended::xxxCloseApplication(gptiCurrent, (struct tagTHREADINFO *)v2);
      return;
    }
    v9[0] = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = v9;
    v9[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v3 = (GetKeyState(0x10u, v2) & 0x8000u) != 0LL;
    v4 = 61520LL;
    if ( v3 )
      v4 = 61504LL;
    v5 = *(__int64 **)(*(_QWORD *)(gptiCurrent + 424LL) + 120LL);
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v5, 0x112u, (HWND)v4, v1, 0, 0, 0LL, 1, 0);
    ThreadUnlock1(v7, v6, v8);
  }
}
