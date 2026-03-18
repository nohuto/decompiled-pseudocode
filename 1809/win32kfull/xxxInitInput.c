/*
 * XREFs of xxxInitInput @ 0x1C00EBA8C
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C00EB7E0 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v6; // [rsp+30h] [rbp-1D8h] BYREF
  PVOID Object; // [rsp+38h] [rbp-1D0h]
  _BYTE v8[432]; // [rsp+40h] [rbp-1C8h] BYREF

  v6 = a1;
  v1 = 0;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v8, 2LL, &v6) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  if ( gdwInAtomicOperation )
  {
    v2 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v2, gdwInAtomicOperation, v3, v4);
  if ( (int)LpcRequestWaitReplyPort(CsrApiPort, v8, v8) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v1) = gptiRit != 0LL;
  return v1;
}
