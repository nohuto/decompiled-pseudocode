/*
 * XREFs of PpmCheckInitProcessors @ 0x140772AD8
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x14077378C (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1408A21D0 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A06340 (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x1400BE2F0 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x1400BEDF0 (KeSubtractAffinityEx.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     KeOrAffinityEx @ 0x1400FDD80 (KeOrAffinityEx.c)
 *     PpmParkRegisterParking @ 0x14019397C (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x140194510 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401946E0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PpmUpdateProcessorPolicy @ 0x14074570C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x14077362C (PpmAllocatePerfCheck.c)
 *     PpmHvEnableQosEnlightenment @ 0x14077369C (PpmHvEnableQosEnlightenment.c)
 *     PpmCheckReInit @ 0x14077387C (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  int v4; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v5; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v6[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v7; // [rsp+38h] [rbp-C8h]
  int v8; // [rsp+3Ah] [rbp-C6h]
  __int16 v9; // [rsp+3Eh] [rbp-C2h]
  _QWORD v10[22]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v11[88]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v11, 0, 0xA8uLL);
  v8 = 0;
  v9 = 0;
  memset(v10, 0, 0xA8uLL);
  v4 = 0;
  if ( a1 )
  {
    LODWORD(v10[0]) = 1310721;
    memset((char *)v10 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v11);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v11, (unsigned __int16 *)PpmCheckRegistered, v10) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v10, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v10) )
  {
    v6[1] = (unsigned __int16 *)v10[1];
    v6[0] = (unsigned __int16 *)v10;
    v7 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v5, v6) )
    {
      Prcb = KeGetPrcb(v5);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v10, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    PpmAllowedActions |= 0x400u;
    v4 |= 0x400u;
    PpmUpdateProcessorPolicy(&v4, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
  return PpmHvEnableQosEnlightenment();
}
