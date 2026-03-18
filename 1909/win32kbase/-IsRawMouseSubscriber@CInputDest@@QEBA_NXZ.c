/*
 * XREFs of ?IsRawMouseSubscriber@CInputDest@@QEBA_NXZ @ 0x1C015BA40
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputDest::IsRawMouseSubscriber(CInputDest *this, __int64 a2, __int64 a3)
{
  int v3; // eax

  if ( *((_DWORD *)this + 23) == 1 )
  {
    return (*(_DWORD *)(*((_QWORD *)this + 10) + 120LL) & 2u) >> 1;
  }
  else
  {
    if ( *((_DWORD *)this + 23) == 2 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, (unsigned int)(*((_DWORD *)this + 23) - 1), a3);
    LOBYTE(v3) = 0;
  }
  return v3;
}
