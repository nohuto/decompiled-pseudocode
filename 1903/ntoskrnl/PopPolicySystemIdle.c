/*
 * XREFs of PopPolicySystemIdle @ 0x1406A1D00
 * Callers:
 *     PopPolicyWorkerThread @ 0x140131900 (PopPolicyWorkerThread.c)
 * Callees:
 *     PopScanIdleList @ 0x1400EDD84 (PopScanIdleList.c)
 *     PopGetConsoleDisplayRequestCount @ 0x1400EE61C (PopGetConsoleDisplayRequestCount.c)
 *     PopResetIdleTime @ 0x1400EE900 (PopResetIdleTime.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595780 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopTraceSystemIdleUpdate @ 0x1406A1EC4 (PopTraceSystemIdleUpdate.c)
 *     PopIsDozeSupported @ 0x1406A203C (PopIsDozeSupported.c)
 *     PopIsHibernateSupported @ 0x1406A2078 (PopIsHibernateSupported.c)
 *     PopFilterCapabilities @ 0x1406A2194 (PopFilterCapabilities.c)
 *     PopExecutePowerAction @ 0x140725658 (PopExecutePowerAction.c)
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
  if ( MEMORY[0xFFFFF780000002E4] != dword_140442F70 )
  {
    dword_140442F70 = MEMORY[0xFFFFF780000002E4];
    PopResetIdleTime();
  }
  PopFilterCapabilities(&PopCapabilities, v9);
  v3 = 0;
  if ( !v9[20] && dword_140442FA0 )
    v3 = dword_140442F68 - dword_140442FA0 < (unsigned int)dword_140443AE0;
  if ( dword_140442F6C && dword_140442F68 >= (unsigned int)dword_140442F6C && !v3 && !PopUserShutdownInProgress )
  {
    if ( v9[20] )
    {
      if ( !PopConsoleDisplayState || !ConsoleDisplayRequestCount )
        v0 = 1;
    }
    else
    {
      v0 = dword_140442F84 == 0;
    }
  }
  byte_140442FB0 = v0;
  if ( v9[20] && (_DWORD)qword_140442F74 == 2 )
    v1 = dword_140442F80 == 1;
  if ( v0 )
  {
    if ( !v1 )
      PopResetIdleTime();
    byte_140442F95 = 0;
  }
  PopIsHibernateSupported(v9);
  PopIsDozeSupported(v9);
  LOBYTE(v4) = v3;
  LOBYTE(v5) = dword_140442F84 != 0;
  v6 = *((_DWORD *)PopPolicy + 22);
  LOBYTE(v6) = v0;
  PopTraceSystemIdleUpdate(dword_140442F68, v6, v5, v4);
  if ( v0 && !v1 )
  {
    v8[0] = 0x8000000007LL;
    PopExecutePowerAction((unsigned int)v8, 0, (unsigned int)&qword_140442F74, dword_140442F80, 1);
  }
  PopReleasePolicyLock();
  if ( !v0 && PsWin32CalloutsEstablished )
    PopScanIdleList();
  if ( KeGetCurrentThread()->WaitBlock[3].SpareLong )
    __fastfail(0x20u);
  return 0LL;
}
