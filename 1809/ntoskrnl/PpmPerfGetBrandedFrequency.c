/*
 * XREFs of PpmPerfGetBrandedFrequency @ 0x14086C34C
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 * Callees:
 *     PpmAcquireLock @ 0x140006020 (PpmAcquireLock.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     PpmReleaseLock @ 0x14008BC20 (PpmReleaseLock.c)
 *     KeGetProcessorIndexFromNumber @ 0x1400A73B0 (KeGetProcessorIndexFromNumber.c)
 *     PpmPerfAccumulateBrandedFrequency @ 0x14086C30C (PpmPerfAccumulateBrandedFrequency.c)
 */

__int64 __fastcall PpmPerfGetBrandedFrequency(PPROCESSOR_NUMBER ProcNumber, _DWORD *a2)
{
  unsigned int v4; // ebx
  ULONG ProcessorIndexFromNumber; // eax
  unsigned __int16 *v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int16 v8; // [rsp+30h] [rbp-18h]
  ULONG v9; // [rsp+50h] [rbp+8h] BYREF

  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  v4 = 0;
  a2[1] = 0;
  if ( ProcNumber )
  {
    if ( ProcNumber->Reserved
      || (ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber), ProcessorIndexFromNumber == -1) )
    {
      v4 = -1073741811;
    }
    else
    {
      PpmPerfAccumulateBrandedFrequency(ProcessorIndexFromNumber, a2);
    }
  }
  else
  {
    v7[1] = (unsigned __int16 *)qword_140405158[0];
    v7[0] = (unsigned __int16 *)PpmCheckRegistered;
    v8 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v9, v7) )
      PpmPerfAccumulateBrandedFrequency(v9, a2);
  }
  PpmReleaseLock(&PpmPerfPolicyLock);
  return v4;
}
