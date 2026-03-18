/*
 * XREFs of xxxActivateDebugger @ 0x1C024465C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E8300 (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0020CE8 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

_BOOL8 __fastcall xxxActivateDebugger(char a1)
{
  int v2; // edi
  __int64 v3; // rcx
  PETHREAD *v4; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v8[54]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( (a1 & 2) != 0 )
    return 0LL;
  v2 = a1 & 4;
  if ( v2 )
  {
    if ( !PsGetProcessDebugPort(gpepCSRSS) )
      return 0LL;
    v8[8] = PsGetProcessId(gpepCSRSS);
  }
  else
  {
    if ( !gpqForeground )
      return 0LL;
    v4 = *(PETHREAD **)(gpqForeground + 104LL);
    if ( !v4 )
      return 0LL;
    v8[8] = PsGetThreadProcessId(*v4);
    v8[9] = PsGetThreadId(**(PETHREAD **)(gpqForeground + 104LL));
    if ( (int)LockProcessByClientId((void *)v8[8], (PEPROCESS *)&Object) < 0 )
      return 0LL;
    ProcessDebugPort = PsGetProcessDebugPort(Object);
    ObfDereferenceObject(Object);
    if ( !ProcessDebugPort )
      return 0LL;
  }
  if ( CsrApiPort )
  {
    v8[5] = 0LL;
    v8[0] = 5242920LL;
    LODWORD(v8[6]) = 197635;
    if ( gdwInAtomicOperation )
    {
      v3 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v3);
    LpcRequestPort(CsrApiPort, v8);
    EnterCrit(0LL, 1LL);
  }
  return v2 != 0;
}
