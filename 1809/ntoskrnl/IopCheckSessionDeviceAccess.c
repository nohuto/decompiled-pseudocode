/*
 * XREFs of IopCheckSessionDeviceAccess @ 0x140283ED8
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x14004F060 (MmGetSessionIdEx.c)
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1401B442C (KeIsExecutingInArbitraryThreadContext.c)
 *     IopGetSessionIdFromPDO @ 0x1406ECED4 (IopGetSessionIdFromPDO.c)
 */

bool __fastcall IopCheckSessionDeviceAccess(__int64 a1)
{
  int SessionId; // eax
  int v3; // ebx
  __int64 ThreadServerSilo; // rax
  _DWORD **v5; // rax
  int SessionIdFromPDO; // eax
  bool result; // al

  SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  v3 = 0;
  if ( SessionId != -1 )
    v3 = SessionId;
  if ( KeIsExecutingInArbitraryThreadContext()
    || (ThreadServerSilo = PsGetThreadServerSilo((__int64)KeGetCurrentThread())) == 0 )
  {
    v5 = (_DWORD **)&PspHostSiloGlobals;
  }
  else
  {
    v5 = *(_DWORD ***)(ThreadServerSilo + 1256);
  }
  result = 1;
  if ( v3 != *v5[140] || IopSessionZeroAccessCheckEnabled )
  {
    SessionIdFromPDO = IopGetSessionIdFromPDO(a1);
    if ( SessionIdFromPDO != -1 && v3 != SessionIdFromPDO )
      return 0;
  }
  return result;
}
