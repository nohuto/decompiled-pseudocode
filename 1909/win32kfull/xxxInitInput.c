/*
 * XREFs of xxxInitInput @ 0x1C0080A40
 * Callers:
 *     ?xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z @ 0x1C0080774 (-xxxInitTerminal@@YAJPEAUtagTERMINAL@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxInitInput(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v5; // [rsp+30h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+38h] [rbp-C8h]
  _BYTE v7[432]; // [rsp+40h] [rbp-C0h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = 0;
  v5 = a1;
  Object = (PVOID)CreateKernelEvent(1LL, 0LL);
  if ( !Object )
    return 0LL;
  if ( !(unsigned int)InitCreateSystemThreadsMsg(v7, 2LL, &v5) )
  {
    Win32FreePool(Object);
    return 0LL;
  }
  if ( gdwInAtomicOperation )
  {
    v3 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v3);
  if ( (int)LpcRequestWaitReplyPort(CsrApiPort, v7, v7) >= 0 )
    KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  Win32FreePool(Object);
  Object = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = gptiRit != 0LL;
  return v2;
}
