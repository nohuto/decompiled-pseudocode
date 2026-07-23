/*
 * XREFs of PoExecuteIdleCheck @ 0x1402D3A20
 * Callers:
 *     KeClockInterruptNotify @ 0x140060C40 (KeClockInterruptNotify.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140062160 (KeIsEmptyAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140063BD0 (KeEnumerateNextProcessor.c)
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1402D412C (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x1402E58EC (PpmEventIdleDurationExpiration.c)
 */

void __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  struct _KPRCB *Prcb; // rax
  ULONG v3; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v4[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v5; // [rsp+38h] [rbp-C8h]
  _DWORD v6[44]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v7[8]; // [rsp+F0h] [rbp-10h] BYREF
  unsigned __int16 *v8; // [rsp+F8h] [rbp-8h]

  if ( PpmIdleDurationExpirationTimeout
    && PpmIdleDurationExpirationTimeout + PpmIdleLastIdleDurationExpirationTime < a1
    && (unsigned __int8)PpmGetIdleConstrainedMask(v7) )
  {
    PpmIdleLastIdleDurationExpirationTime = a1;
    v6[0] = 1310721;
    memset(&v6[1], 0, 0xA4uLL);
    v4[1] = v8;
    v4[0] = (unsigned __int16 *)v7;
    v5 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v3, v4) )
    {
      Prcb = (struct _KPRCB *)KeGetPrcb(v3);
      if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
        KeAddProcessorAffinityEx(v6, v3);
    }
    if ( !(unsigned int)KeIsEmptyAffinityEx(v6) )
    {
      PpmEventIdleDurationExpiration(v6);
      HalRequestIpi(0LL, v6);
    }
  }
}
