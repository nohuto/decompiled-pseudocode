/*
 * XREFs of BgkInitialize @ 0x1409FC8E0
 * Callers:
 *     InbvDriverInitialize @ 0x1409D7F70 (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x14016FA88 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x14094F7DC (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x14094F81C (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x140951680 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x140952A04 (BgkDestroy.c)
 */

__int64 __fastcall BgkInitialize(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 (__fastcall **Interface)(); // rax
  int v6; // eax
  int v7; // ecx
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  if ( a2 == 1 )
  {
    if ( byte_14043D7F4 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    BgkDestroy();
    qword_140440CC0 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 248LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_14043D7D0 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_1404DDA10,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))off_140401458[0])(9LL, 4LL, &dword_1404DC240, &v8);
      v7 = dword_1404DC240;
      if ( v6 < 0 )
        v7 = 2;
      dword_1404DC240 = v7;
    }
    byte_14043D7F4 = 1;
    byte_14043D7F5 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
