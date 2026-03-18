/*
 * XREFs of PoTtmInitiatePowerStateTransition @ 0x1408AB378
 * Callers:
 *     TtmpInitiateModernStandbyTransition @ 0x1408BE1AC (TtmpInitiateModernStandbyTransition.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopReleasePolicyLock @ 0x140595868 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1405958A8 (PopAcquirePolicyLock.c)
 *     PopFilterCapabilities @ 0x14066EEE8 (PopFilterCapabilities.c)
 *     PopStartStopTtmSxTranstion @ 0x1408A8340 (PopStartStopTtmSxTranstion.c)
 *     PopPdcEngagePhases @ 0x1408AB6BC (PopPdcEngagePhases.c)
 */

__int64 __fastcall PoTtmInitiatePowerStateTransition(char a1, unsigned int a2)
{
  __int64 v4; // rcx
  unsigned int started; // ebx
  _BYTE v7[80]; // [rsp+20h] [rbp-58h] BYREF

  memset(v7, 0, 0x4CuLL);
  PopAcquirePolicyLock();
  PopFilterCapabilities((__int64)&PopCapabilities, (__int64)v7);
  PopReleasePolicyLock();
  started = 0;
  if ( v7[20] )
  {
    LOBYTE(v4) = a1;
    return (unsigned int)PopPdcEngagePhases(v4, a2);
  }
  else if ( v7[3] || v7[4] || v7[5] )
  {
    PopAcquirePolicyLock();
    started = PopStartStopTtmSxTranstion(a1);
    PopReleasePolicyLock();
  }
  return started;
}
