/*
 * XREFs of UserDeleteBaseWindowHandle @ 0x1C011FC60
 * Callers:
 *     NtMITMinuserWindowDestroyed @ 0x1C0114C80 (NtMITMinuserWindowDestroyed.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E6D4 (WPP_RECORDER_SF_.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002EBC4 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C0038944 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C009F820 (WPP_RECORDER_SF_qqq.c)
 *     HMDestroyUnlockedObject @ 0x1C00B34D0 (HMDestroyUnlockedObject.c)
 *     HMFindEntry @ 0x1C0105840 (HMFindEntry.c)
 */

__int64 __fastcall UserDeleteBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  int v3; // edx
  __int64 v4; // rcx
  __int64 ThreadWin32Thread; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  char *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  _BYTE v12[16]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-38h] BYREF
  __int64 CurrentProcessWin32Process; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      22,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1224) & 0x1000000) != 0 )
  {
    v13 = a1;
    v15 = ThreadWin32Thread;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v4);
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v12,
      v6,
      v7);
    v8 = HMFindEntry((__int64)&v13, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    if ( v8 )
    {
      v2 = 1;
      if ( (v8[25] & 1) == 0 )
        HMDestroyUnlockedObject((struct _HANDLEENTRY *)v8, v9, v10);
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_16;
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_qqq(
        (_DWORD)gBaseLog,
        v9,
        11,
        23,
        (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids,
        CurrentProcessWin32Process,
        v15,
        a1);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LOBYTE(v3) = 5;
      WPP_RECORDER_SF_q(
        (_DWORD)gBaseLog,
        v3,
        11,
        24,
        (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids,
        ThreadWin32Thread);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      11,
      25,
      (__int64)&WPP_e1a61034c95d336a845754ebf9035259_Traceguids);
LABEL_16:
  qword_1C0218318 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
