/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14016EBE0
 * Callers:
 *     BgkSetDisplayOwnership @ 0x140194100 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14027DDF0 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x14027E2C0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089880 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F7F0 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x140159928 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x14016FA88 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x14018E524 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x14056D684 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x14094F008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094F3E0 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x14094F608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14094F7DC (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x140951680 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140951E10 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140951E9C (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x140952A04 (BgkDestroy.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  int v2; // ebx
  __int64 result; // rax
  int v4; // eax
  char v5; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v7)(void); // [rsp+30h] [rbp-48h] BYREF
  _BYTE v8[40]; // [rsp+38h] [rbp-40h] BYREF

  if ( byte_14043D5C8 && !a1 )
  {
    BgkResumeFinished();
    qword_14043D7E8 = 0LL;
    byte_14043D7F5 = 0;
    return 0LL;
  }
  if ( a1 == byte_14043D7F5 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_14043D7D8 = a2;
    }
    else if ( !qword_14043D7D8 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_14043D6B1 = 0;
    byte_14043D6B0 = 0;
    ExWaitForRundownProtectionRelease(&stru_140405088);
    ExRundownCompleted(&stru_140405088);
    v2 = BgLibraryDisable();
    if ( v2 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v2 = 0;
    }
    else
    {
      byte_14043D7F5 = 0;
      byte_14043D7E0 = 0;
      if ( qword_14043D7D0 )
      {
        BgConsoleDestroyInterface();
        qword_14043D7D0 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_14043D7E8 )
    {
      qword_14043D7E8();
      qword_14043D7E8 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_14043D7D8 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_14043D7D8(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_14043D7E8 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_14043D7F5;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_14043D7F5 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_14043D7D0 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1404DDA10, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
