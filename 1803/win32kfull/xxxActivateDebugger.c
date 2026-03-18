/*
 * XREFs of xxxActivateDebugger @ 0x1C020334C
 * Callers:
 *     xxxDoHotKeyStuff @ 0x1C00E9CA0 (xxxDoHotKeyStuff.c)
 * Callees:
 *     LockProcessByClientId @ 0x1C0012364 (LockProcessByClientId.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall xxxActivateDebugger(char a1)
{
  int v1; // esi
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  PETHREAD *v6; // rcx
  __int64 ProcessDebugPort; // rbx
  PVOID Object; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v10[6]; // [rsp+48h] [rbp-C0h] BYREF
  int v11; // [rsp+78h] [rbp-90h]
  HANDLE ThreadProcessId; // [rsp+88h] [rbp-80h]
  HANDLE ThreadId; // [rsp+90h] [rbp-78h]

  if ( (a1 & 2) != 0 )
    return 0LL;
  v1 = a1 & 4;
  if ( (a1 & 4) == 0 )
  {
    v2 = 0;
    if ( gpqForeground )
    {
      v6 = *(PETHREAD **)(gpqForeground + 96LL);
      if ( v6 )
      {
        ThreadProcessId = PsGetThreadProcessId(*v6);
        ThreadId = PsGetThreadId(**(PETHREAD **)(gpqForeground + 96LL));
        if ( (int)LockProcessByClientId(ThreadProcessId, (PEPROCESS *)&Object) >= 0 )
        {
          ProcessDebugPort = PsGetProcessDebugPort(Object);
          ObfDereferenceObject(Object);
          if ( ProcessDebugPort )
            goto LABEL_9;
        }
      }
    }
    return 0LL;
  }
  v2 = 0;
  if ( !PsGetProcessDebugPort(gpepCSRSS) )
    return 0LL;
  ThreadProcessId = PsGetProcessId(gpepCSRSS);
LABEL_9:
  if ( CsrApiPort )
  {
    v10[0] = 5242920LL;
    v10[5] = 0LL;
    v11 = 197635;
    if ( gdwInAtomicOperation )
    {
      v3 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v3, gdwInAtomicOperation, v4, v5);
    LpcRequestPort(CsrApiPort, v10);
    EnterCrit(0LL, 1LL);
  }
  LOBYTE(v2) = v1 != 0;
  return v2;
}
