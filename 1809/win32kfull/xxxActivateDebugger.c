/*
 * XREFs of xxxActivateDebugger @ 0x1C022C218
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00DFB30 (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C00B2D44 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  int v1; // edi
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  PETHREAD *v5; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v9[10]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+68h] [rbp-98h]
  int v11; // [rsp+70h] [rbp-90h]
  HANDLE ProcessId; // [rsp+80h] [rbp-80h]
  HANDLE ThreadId; // [rsp+88h] [rbp-78h]

  if ( (a1 & 2) != 0 )
    return 0LL;
  v1 = a1 & 4;
  if ( (a1 & 4) != 0 )
  {
    if ( !PsGetProcessDebugPort(gpepCSRSS) )
      return 0LL;
    ProcessId = PsGetProcessId(gpepCSRSS);
  }
  else
  {
    if ( !gpqForeground )
      return 0LL;
    v5 = *(PETHREAD **)(gpqForeground + 96LL);
    if ( !v5 )
      return 0LL;
    ProcessId = PsGetThreadProcessId(*v5);
    ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 96LL));
    if ( (int)LockProcessByClientId(ProcessId, (PEPROCESS *)&Object) < 0 )
      return 0LL;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( CsrApiPort )
  {
    v9[1] = 0;
    v10 = 0LL;
    v9[0] = 5242920;
    v11 = 197635;
    if ( gdwInAtomicOperation )
    {
      v2 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v2, gdwInAtomicOperation, v3, v4);
    LpcRequestPort(CsrApiPort, v9);
    EnterCrit(0LL, 1LL);
  }
  return v1 != 0;
}
