/*
 * XREFs of PoExecuteIdleCheck @ 0x1402EDC2C
 * Callers:
 *     KeClockInterruptNotify @ 0x1400348F0 (KeClockInterruptNotify.c)
 * Callees:
 *     KeGetPrcb @ 0x140005308 (KeGetPrcb.c)
 *     KeAddProcessorAffinityEx @ 0x14009E060 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14009E0E0 (KeEnumerateNextProcessor.c)
 *     KeIsEmptyAffinityEx @ 0x14009E170 (KeIsEmptyAffinityEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmGetIdleConstrainedMask @ 0x1402EE380 (PpmGetIdleConstrainedMask.c)
 *     PpmEventIdleDurationExpiration @ 0x140301E38 (PpmEventIdleDurationExpiration.c)
 */

__int64 __fastcall PoExecuteIdleCheck(unsigned __int64 a1)
{
  __int64 result; // rax
  struct _KPRCB *Prcb; // rax
  ULONG v4; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v5[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v6; // [rsp+38h] [rbp-C8h]
  int v7; // [rsp+3Ah] [rbp-C6h]
  __int16 v8; // [rsp+3Eh] [rbp-C2h]
  _DWORD v9[44]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v10[22]; // [rsp+F0h] [rbp-10h] BYREF

  v7 = 0;
  v8 = 0;
  memset(v10, 0, 0xA8uLL);
  result = (__int64)memset(&v9[2], 0, 0xA0uLL);
  if ( PpmIdleDurationExpirationTimeout )
  {
    if ( PpmIdleLastIdleDurationExpirationTime + PpmIdleDurationExpirationTimeout < a1 )
    {
      result = PpmGetIdleConstrainedMask(v10);
      if ( (_BYTE)result )
      {
        PpmIdleLastIdleDurationExpirationTime = a1;
        v9[0] = 1310721;
        memset(&v9[1], 0, 0xA4uLL);
        v5[1] = (unsigned __int16 *)v10[1];
        v5[0] = (unsigned __int16 *)v10;
        v6 = 0;
        while ( !(unsigned int)KeEnumerateNextProcessor(&v4, v5) )
        {
          Prcb = (struct _KPRCB *)KeGetPrcb(v4);
          if ( Prcb != KeGetCurrentPrcb() && Prcb->PowerState.IdleTimeExpiration <= a1 )
            KeAddProcessorAffinityEx(v9, v4);
        }
        result = KeIsEmptyAffinityEx(v9);
        if ( !(_DWORD)result )
        {
          PpmEventIdleDurationExpiration(v9);
          return HalRequestIpi(0LL, v9);
        }
      }
    }
  }
  return result;
}
