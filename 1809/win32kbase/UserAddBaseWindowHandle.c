/*
 * XREFs of UserAddBaseWindowHandle @ 0x1C00F3C10
 * Callers:
 *     NtMITMinuserWindowCreated @ 0x1C00ED540 (NtMITMinuserWindowCreated.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0025170 (W32GetThreadWin32Thread.c)
 *     HMAllocObject @ 0x1C002DDE0 (HMAllocObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_q @ 0x1C004F724 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 *     HMFindEntry @ 0x1C00EB920 (HMFindEntry.c)
 */

__int64 __fastcall UserAddBaseWindowHandle(__int64 a1)
{
  unsigned int v2; // ebx
  __int64 ThreadWin32Thread; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  unsigned __int16 v7; // r9
  unsigned __int8 v8; // dl
  _QWORD v10[4]; // [rsp+40h] [rbp-38h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0xAu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  v2 = 0;
  RIMLockExclusive((__int64)&gWndLock);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (*(_DWORD *)(ThreadWin32Thread + 1208) & 0x1000000) != 0 )
  {
    RIMLockExclusive((__int64)&gHmLock);
    v10[0] = a1;
    v10[2] = 0LL;
    v10[1] = PsGetCurrentProcessWin32Process(v4);
    if ( HMFindEntry((__int64)v10, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd) )
    {
      v2 = 1;
      if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
        goto LABEL_11;
      v7 = 12;
      v8 = 5;
    }
    else
    {
      v5 = HMAllocObject(ThreadWin32Thread, 0LL, 0x17u, 0x80u);
      if ( v5 )
      {
        *(_DWORD *)(v5 + 120) &= ~2u;
        v2 = 1;
        *(_QWORD *)(v5 + 56) = a1;
        v6 = (_QWORD *)(v5 + 96);
        v6[1] = v6;
        *v6 = v6;
LABEL_11:
        qword_1C01D0CB0 = 0LL;
        ExReleasePushLockExclusiveEx(&gHmLock, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_14;
      }
      v7 = 11;
      v8 = 2;
    }
    WPP_RECORDER_SF_qq(
      gBaseLog,
      v8,
      0x10u,
      v7,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      ThreadWin32Thread,
      a1);
    goto LABEL_11;
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      gBaseLog,
      5u,
      0x10u,
      0xDu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids,
      ThreadWin32Thread);
LABEL_14:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x10u,
      0xEu,
      (__int64)&WPP_5514d2cca87735d76e5bca4322c66bfd_Traceguids);
  qword_1C01D0CA0 = 0LL;
  ExReleasePushLockExclusiveEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
