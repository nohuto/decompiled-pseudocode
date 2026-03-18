/*
 * XREFs of ?IsSupported@DispBrokerClient@DispBroker@@QEAA_NXZ @ 0x1C00E0EB0
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00E0C5C (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DispBroker::DispBrokerClient::IsSupported(DispBroker::DispBrokerClient *this)
{
  int CurrentProcessSessionId; // ebx
  DispBroker::DispBrokerClient *v3; // rdx

  CurrentProcessSessionId = PsGetCurrentProcessSessionId();
  if ( (unsigned int)RtlGetActiveConsoleId() != CurrentProcessSessionId )
    return 0;
  v3 = (DispBroker::DispBrokerClient *)((char *)this + 4);
  if ( !*((_BYTE *)this + 8) )
    v3 = this;
  return *(_DWORD *)v3 == 3;
}
