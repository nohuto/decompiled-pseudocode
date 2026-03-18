/*
 * XREFs of SetDebugHotKeys @ 0x1C007716C
 * Callers:
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C008817C (_RegisterHotKey.c)
 */

__int64 SetDebugHotKeys()
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
  RegisterHotKey((struct tagWND *)1, (ULONG_PTR)BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v7;
  return RegisterHotKey((struct tagWND *)1, BugCheckParameter2a);
}
