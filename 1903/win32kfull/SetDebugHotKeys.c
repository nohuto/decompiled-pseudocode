/*
 * XREFs of SetDebugHotKeys @ 0x1C00D6CEC
 * Callers:
 *     RawInputThread @ 0x1C00D7680 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C00882EC (_RegisterHotKey.c)
 */

_BOOL8 SetDebugHotKeys()
{
  unsigned int v0; // ecx
  int v1; // eax
  int v2; // eax
  unsigned __int8 v3; // cf
  ULONG_PTR *BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR v7; // [rsp+40h] [rbp+8h] BYREF

  BugCheckParameter2 = &v7;
  FastGetProfileDword(0LL, 21LL, L"UserDebuggerHotkey");
  v1 = v7;
  if ( !(_DWORD)v7 )
  {
    LOBYTE(v0) = gKeyboardInfo;
    if ( gKeyboardInfo > 8u || (v2 = 404, v3 = _bittest(&v2, v0), v1 = 123, !v3) )
      v1 = 109;
    LODWORD(v7) = v1;
  }
  LODWORD(BugCheckParameter2) = v1;
  RegisterHotKey((struct tagWND *)1, 0LL, 4294967291LL, 0LL, (ULONG_PTR)BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v7;
  return RegisterHotKey((struct tagWND *)1, 0LL, 4294967290LL, 4LL, BugCheckParameter2a);
}
