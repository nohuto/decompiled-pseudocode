/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x14016EAE0
 * Callers:
 *     BgkSetDisplayOwnership @ 0x140193FC0 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x14027DC00 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x14027E0D0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140089890 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x14008F8D0 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x140159828 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x14016F988 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x14018E3E4 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     BgkResumeFinished @ 0x14056C684 (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x14094E008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14094E3E0 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x14094E608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14094E7DC (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x140950680 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140950E10 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140950E9C (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x140951A04 (BgkDestroy.c)
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

  if ( byte_14043C508 && !a1 )
  {
    BgkResumeFinished();
    qword_14043C728 = 0LL;
    byte_14043C735 = 0;
    return 0LL;
  }
  if ( a1 == byte_14043C735 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_14043C718 = a2;
    }
    else if ( !qword_14043C718 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_14043C5F1 = 0;
    byte_14043C5F0 = 0;
    ExWaitForRundownProtectionRelease(&stru_140404088);
    ExRundownCompleted(&stru_140404088);
    v2 = BgLibraryDisable();
    if ( v2 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v2 = 0;
    }
    else
    {
      byte_14043C735 = 0;
      byte_14043C720 = 0;
      if ( qword_14043C710 )
      {
        BgConsoleDestroyInterface();
        qword_14043C710 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_14043C728 )
    {
      qword_14043C728();
      qword_14043C728 = 0LL;
    }
    return (unsigned int)v2;
  }
  if ( !qword_14043C718 )
    return 3221225473LL;
  v7 = 0LL;
  result = qword_14043C718(0LL, v8, &v7);
  if ( (int)result >= 0 )
  {
    qword_14043C728 = v7;
    BgkpLockBgfxCodeSection();
    v4 = BgLibraryEnable((__int64)v8, 0);
    v5 = byte_14043C735;
    v2 = v4;
    if ( v4 >= 0 )
      v5 = 1;
    byte_14043C735 = v5;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_14043C710 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_1404DC910, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v2;
  }
  return result;
}
