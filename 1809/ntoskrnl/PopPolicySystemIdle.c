/*
 * XREFs of PopPolicySystemIdle @ 0x1405B04E0
 * Callers:
 *     PopPolicyWorkerThread @ 0x1401305A0 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x140010050 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x1400108EC (PopGetConsoleDisplayRequestCount.c)
 *     PopResetIdleTime @ 0x140138BA0 (PopResetIdleTime.c)
 *     PopQueueWorkItem @ 0x140138CC8 (PopQueueWorkItem.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x1405B0688 (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x1405B0814 (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1405B0850 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1405B0968 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x1406DE0F0 (PopExecutePowerAction.c)
 */

__int64 PopPolicySystemIdle()
{
  bool v0; // bl
  bool v1; // di
  int ConsoleDisplayRequestCount; // ebp
  bool v3; // si
  int v4; // r9d
  int v5; // r8d
  int v6; // edx
  _QWORD v8[3]; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v9[20]; // [rsp+80h] [rbp-58h] BYREF
  char v10; // [rsp+94h] [rbp-44h]

  v0 = 0;
  memset(v8, 0, sizeof(v8));
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock();
  if ( MEMORY[0xFFFFF780000002E4] != dword_140417650 )
  {
    dword_140417650 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime(1u);
  }
  PopFilterCapabilities(&PopCapabilities, v9);
  v3 = 0;
  if ( !v10 && dword_140417680 )
    v3 = dword_140417648 - dword_140417680 < (unsigned int)dword_1404180E0;
  if ( dword_14041764C && dword_140417648 >= (unsigned int)dword_14041764C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v10 )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140417664 == 0;
    }
  }
  byte_140417690 = v0;
  if ( v10 && (_DWORD)qword_140417654 == 2 )
    v1 = dword_140417660 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime(5u);
    byte_140417675 = 0;
  }
  PopIsHibernateSupported(v9);
  PopIsDozeSupported(v9);
  LOBYTE(v4) = v3;
  LOBYTE(v5) = dword_140417664 != 0;
  v6 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v6) = v0;
  PopTraceSystemIdleUpdate(dword_140417648, v6, v5, v4);
  if ( v0 )
  {
    if ( v1 )
    {
      PopQueueWorkItem((__int64)&PopSIdleUpdateNotificationWorkItem, DelayedWorkQueue);
    }
    else
    {
      v8[0] = 0x8000000007LL;
      PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)&qword_140417654, dword_140417660, 1);
    }
  }
  PopReleasePolicyLock();
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
