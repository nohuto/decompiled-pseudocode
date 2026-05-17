/*
 * XREFs of TpWaitForJobNotification @ 0x180032A60
 * Callers:
 *     <none>
 * Callees:
 *     TppJobpValidateJob @ 0x1800327B0 (TppJobpValidateJob.c)
 *     TppJobpRundownJob @ 0x180032968 (TppJobpRundownJob.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 */

__int64 __fastcall TpWaitForJobNotification(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9

  result = TppJobpValidateJob(a1, 0LL, a3);
  if ( (_DWORD)result )
  {
    TppJobpRundownJob(a1, v5, v6, v7);
    return TppBarrierAdjust(a1 + 128, 0LL);
  }
  return result;
}
