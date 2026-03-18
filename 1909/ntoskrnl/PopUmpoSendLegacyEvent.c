/*
 * XREFs of PopUmpoSendLegacyEvent @ 0x1407271BC
 * Callers:
 *     PopDirectedDripsSendSuspendResumeNotification @ 0x1405B1BB8 (PopDirectedDripsSendSuspendResumeNotification.c)
 *     NtPowerInformation @ 0x140699980 (NtPowerInformation.c)
 * Callees:
 *     PopUmpoSendPowerMessage @ 0x1400D636C (PopUmpoSendPowerMessage.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 */

__int64 __fastcall PopUmpoSendLegacyEvent(__int128 *a1)
{
  bool v2; // zf
  __int128 v3; // xmm0
  _QWORD Src[11]; // [rsp+20h] [rbp-58h] BYREF

  memset(Src, 0, 0x48uLL);
  v2 = *((_BYTE *)a1 + 12) == 0;
  v3 = *a1;
  LODWORD(Src[0]) = 7;
  *(_OWORD *)&Src[1] = v3;
  if ( !v2 && *((_DWORD *)a1 + 1) == 18 )
    PfPowerActionNotify(5, 0LL, 0);
  return PopUmpoSendPowerMessage(Src, 0x48uLL, *((_BYTE *)a1 + 13));
}
