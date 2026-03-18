/*
 * XREFs of rimUpdateLatestMouseState @ 0x1C0154684
 * Callers:
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     rimProcessMouseInput @ 0x1C0154174 (rimProcessMouseInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

unsigned __int64 __fastcall rimUpdateLatestMouseState(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx

  if ( *(_BYTE *)(a2 + 48) )
    result = MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( *(int *)(a2 + 256) >= 0 )
  {
    v5 = *(_QWORD *)(a2 + 264);
    result = v5 - 24;
    if ( v5 - 24 <= 0x168 )
    {
      result = 0xAAAAAAAAAAAAAAABuLL * v5;
      v6 = (unsigned int)(v5 / 0x18) - 1;
      *(_OWORD *)(a2 + 860) = *(_OWORD *)(a2 + 24 * v6 + 476);
      *(_QWORD *)(a2 + 876) = *(_QWORD *)(a2 + 24 * v6 + 492);
    }
  }
  return result;
}
