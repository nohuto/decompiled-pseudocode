/*
 * XREFs of PopPolicySystemIdle @ 0x140670540
 * Callers:
 *     PopPolicyWorkerThread @ 0x140132110 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x1400D5214 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x1400D5B9C (PopGetConsoleDisplayRequestCount.c)
 *     PopResetIdleTime @ 0x14013B3A0 (PopResetIdleTime.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopTraceSystemIdleUpdate @ 0x1406707B4 (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x14067092C (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x140670968 (PopIsHibernateSupported.c)
 *     PopExecutePowerAction @ 0x1407274F8 (PopExecutePowerAction.c)
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
  _BYTE v9[80]; // [rsp+80h] [rbp-58h] BYREF

  memset(v9, 0, 0x4CuLL);
  v0 = 0;
  memset(v8, 0, sizeof(v8));
  if ( PopPlatformAoAc )
    KeBugCheckEx(0xA0u, 0xAuLL, 3uLL, 0LL, 0LL);
  v1 = 0;
  ConsoleDisplayRequestCount = PopGetConsoleDisplayRequestCount();
  PopAcquirePolicyLock();
  if ( MEMORY[0xFFFFF780000002E4] != dword_140442F10 )
  {
    dword_140442F10 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime();
  }
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v9);
  v3 = 0;
  if ( !v9[20] && dword_140442F40 )
    v3 = dword_140442F08 - dword_140442F40 < (unsigned int)dword_140443A40;
  if ( dword_140442F0C && dword_140442F08 >= (unsigned int)dword_140442F0C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v9[20] )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140442F24 == 0;
    }
  }
  byte_140442F50 = v0;
  if ( v9[20] && (_DWORD)qword_140442F14 == 2 )
    v1 = dword_140442F20 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime();
    byte_140442F35 = 0;
  }
  PopIsHibernateSupported(v9);
  PopIsDozeSupported(v9);
  LOBYTE(v4) = v3;
  LOBYTE(v5) = dword_140442F24 != 0;
  v6 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v6) = v0;
  PopTraceSystemIdleUpdate(dword_140442F08, v6, v5, v4);
  if ( v0 && !v1 )
  {
    v8[0] = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)&qword_140442F14, dword_140442F20, 1);
  }
  PopReleasePolicyLock();
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList(dword_140442F0C, dword_140442F08 / (unsigned int)PopIdleScanInterval);
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
