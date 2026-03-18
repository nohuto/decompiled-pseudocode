/*
 * XREFs of AssociateKernelIocpWcp @ 0x1C0033AF0
 * Callers:
 *     ?SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z @ 0x1C0033A64 (-SetupIOCPForDispatcherHandle@IOCPDispatcher@@AEAAPEAXPEAX0W4WaitCompletionPacketPurpose@@I@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall AssociateKernelIocpWcp(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // edx
  int v5; // ebx

  v5 = ZwAssociateWaitCompletionPacket(a1, a2, a3, a4);
  if ( v5 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_D((_DWORD)gBaseLog, v4, 17, 14, (__int64)&WPP_94568d5f27b1311edceb637cdcfb42af_Traceguids, v5);
  }
  return (unsigned int)v5;
}
