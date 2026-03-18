/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C0131110
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this)
{
  int v1; // eax

  if ( *((_DWORD *)this + 21) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 9) + 120LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 21) == 2 )
      MicrosoftTelemetryAssertTriggeredMsgKM("Until raw mouse is fully converged, only onecore callers are expected here.");
    LOBYTE(v1) = 0;
  }
  return v1;
}
