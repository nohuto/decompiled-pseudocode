/*
 * XREFs of ?PublishFocusChange@@YAXPEAUtagWND@@@Z @ 0x1C00601E4
 * Callers:
 *     xxxSetForegroundThreadWithWindowHint @ 0x1C005F010 (xxxSetForegroundThreadWithWindowHint.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

void __fastcall PublishFocusChange(struct tagWND *a1)
{
  _QWORD v2[5]; // [rsp+20h] [rbp-38h] BYREF

  if ( gSessionId != gServiceSessionId && !gProtocolType )
  {
    memset(v2, 0, sizeof(v2));
    if ( gptiForeground )
    {
      LODWORD(v2[0]) = *(_DWORD *)(*(_QWORD *)(gptiForeground + 416LL) + 56LL);
      HIDWORD(v2[0]) = (unsigned int)PsGetThreadId((PETHREAD)*gptiForeground);
      if ( a1 )
        v2[2] = *(_QWORD *)a1;
      else
        v2[2] = 0LL;
    }
    SendMessageTo(3LL, v2);
  }
}
