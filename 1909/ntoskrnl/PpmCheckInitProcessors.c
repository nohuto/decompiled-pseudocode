/*
 * XREFs of PpmCheckInitProcessors @ 0x1407760B8
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x140776D6C (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1408A1A10 (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x140A0685C (PoInitSystem.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     PopExecuteOnTargetProcessors @ 0x140098ED8 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     KeSubtractAffinityEx @ 0x14009EC70 (KeSubtractAffinityEx.c)
 *     PpmReleaseLock @ 0x1400F0968 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400F0BFC (PpmAcquireLock.c)
 *     KeOrAffinityEx @ 0x1400FFF10 (KeOrAffinityEx.c)
 *     PpmParkRegisterParking @ 0x14019415C (PpmParkRegisterParking.c)
 *     PpmCheckApplyParkConstraints @ 0x140194CF0 (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x140194EC0 (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmUpdateProcessorPolicy @ 0x14074760C (PpmUpdateProcessorPolicy.c)
 *     PpmAllocatePerfCheck @ 0x140776C0C (PpmAllocatePerfCheck.c)
 *     PpmHvEnableQosEnlightenment @ 0x140776C7C (PpmHvEnableQosEnlightenment.c)
 *     PpmCheckReInit @ 0x140776E5C (PpmCheckReInit.c)
 */

LONG __fastcall PpmCheckInitProcessors(int a1)
{
  __int64 Prcb; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  int v7; // [rsp+20h] [rbp-E0h] BYREF
  ULONG v8; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ah] [rbp-C6h]
  __int16 v12; // [rsp+3Eh] [rbp-C2h]
  _QWORD v13[22]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v14[88]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v14, 0, 0xA8uLL);
  v11 = 0;
  v12 = 0;
  memset(v13, 0, 0xA8uLL);
  v7 = 0;
  if ( a1 )
  {
    LODWORD(v13[0]) = 1310721;
    memset((char *)v13 + 4, 0, 0xA4uLL);
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity((__int64)v14);
    if ( !(unsigned __int8)KeSubtractAffinityEx(v14, (unsigned __int16 *)PpmCheckRegistered, v13) )
      return PpmReleaseLock(&PpmPerfPolicyLock);
  }
  KeOrAffinityEx((unsigned __int16 *)PpmCheckRegistered, (unsigned __int16 *)v13, PpmCheckRegistered);
  if ( !(unsigned int)KeIsEmptyAffinityEx(v13) )
  {
    v9[1] = (unsigned __int16 *)v13[1];
    v9[0] = (unsigned __int16 *)v13;
    v10 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v8, v9) )
    {
      Prcb = KeGetPrcb(v8);
      PpmAllocatePerfCheck(Prcb);
    }
    PopExecuteOnTargetProcessors((__int64)v13, (__int64)PpmCheckProcessorInit, 0LL, 0LL);
  }
  PpmParkRegisterParking();
  if ( (KeGetCurrentPrcb()->FeatureBits & 0x8000000000LL) != 0 )
  {
    PpmAllowedActions |= 0x400u;
    v7 |= 0x400u;
    PpmUpdateProcessorPolicy(&v7, 0LL);
  }
  PpmCheckReInit();
  PpmCheckApplyParkConstraints(v4, v3, v5);
  return PpmHvEnableQosEnlightenment();
}
