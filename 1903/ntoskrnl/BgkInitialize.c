/*
 * XREFs of BgkInitialize @ 0x140A4158C
 * Callers:
 *     InbvDriverInitialize @ 0x140A1A02C (InbvDriverInitialize.c)
 * Callees:
 *     BgkpTryEnableConsole @ 0x140179174 (BgkpTryEnableConsole.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     BgConsoleGetInterface @ 0x14098E7EC (BgConsoleGetInterface.c)
 *     BgLibraryInitialize @ 0x14098E830 (BgLibraryInitialize.c)
 *     BgkpLockBgfxCodeSection @ 0x1409906D0 (BgkpLockBgfxCodeSection.c)
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
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
    if ( byte_140468264 )
      return 0LL;
    return 3221225473LL;
  }
  if ( !a2 )
  {
    BgkDestroy();
    qword_14046BA40 = 0LL;
    BgkpLockBgfxCodeSection();
  }
  result = BgLibraryInitialize(*(_QWORD *)(*(_QWORD *)(a1 + 240) + 272LL), a2);
  if ( (int)result >= 0 )
  {
    if ( !a2 )
    {
      Interface = BgConsoleGetInterface();
      qword_140468240 = (__int64)Interface;
      if ( Interface )
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))*Interface)(
          (unsigned int)InitConsoleFlags,
          4291217094LL,
          (unsigned int)dword_14050A0B0,
          0LL);
      v6 = ((__int64 (__fastcall *)(__int64, __int64, int *, char *))off_140426798[0])(9LL, 4LL, &dword_1405087D0, &v8);
      v7 = dword_1405087D0;
      if ( v6 < 0 )
        v7 = 2;
      dword_1405087D0 = v7;
    }
    byte_140468264 = 1;
    byte_140468265 = 1;
    BgkpTryEnableConsole();
    return 0LL;
  }
  return result;
}
