/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C011D0F0
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C0111F20 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00268A4 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C005C218 (WPP_RECORDER_SF_qq.c)
 *     LookForMatchingBaseWindowPHE @ 0x1C011D014 (LookForMatchingBaseWindowPHE.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rsi
  __int64 CurrentProcessWin32Process; // rax
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rax
  _QWORD *v10; // rax
  int v11; // r9d

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      10,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x1000000) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_q(
        (_DWORD)gBaseLog,
        v3,
        11,
        13,
        (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids,
        ThreadWin32Thread);
    }
    goto LABEL_17;
  }
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
  if ( LookForMatchingBaseWindowPHE(a1, CurrentProcessWin32Process, 0LL) )
  {
    v2 = 1;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_17;
    v11 = 12;
    LOBYTE(v7) = 5;
    goto LABEL_13;
  }
  LOBYTE(v8) = 23;
  v9 = HMAllocObject(ThreadWin32Thread, 0LL, v8, 0x80u);
  if ( !v9 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_20;
    v11 = 11;
    LOBYTE(v7) = 2;
LABEL_13:
    WPP_RECORDER_SF_qq(
      (_DWORD)gBaseLog,
      v7,
      11,
      v11,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_17;
  }
  *(_DWORD *)(v9 + 120) &= ~2u;
  v2 = 1;
  *(_QWORD *)(v9 + 56) = a1;
  v10 = (_QWORD *)(v9 + 96);
  v10[1] = v10;
  *v10 = v10;
LABEL_17:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      14,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
LABEL_20:
  qword_1C0215318 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
