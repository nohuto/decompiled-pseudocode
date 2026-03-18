/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140178280
 * Callers:
 *     BgkSetDisplayOwnership @ 0x14019E6A0 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x140292690 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x140292B60 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082850 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400E59B0 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x140169F88 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140179174 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x1401985A8 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     BgkResumeFinished @ 0x14059BCCC (BgkResumeFinished.c)
 *     BgSetFrameBufferAccess @ 0x14098E008 (BgSetFrameBufferAccess.c)
 *     BgkpUnlockBgfxCodeSection @ 0x14098E3E0 (BgkpUnlockBgfxCodeSection.c)
 *     BgDisplayFade @ 0x14098E608 (BgDisplayFade.c)
 *     BgConsoleGetInterface @ 0x14098E7EC (BgConsoleGetInterface.c)
 *     BgkpLockBgfxCodeSection @ 0x1409906D0 (BgkpLockBgfxCodeSection.c)
 *     BgLibraryDisable @ 0x140990E70 (BgLibraryDisable.c)
 *     BgConsoleDestroyInterface @ 0x140990EFC (BgConsoleDestroyInterface.c)
 *     BgkDestroy @ 0x140991A80 (BgkDestroy.c)
 */

__int64 __fastcall BgkNotifyDisplayOwnershipChange(char a1, __int64 (__fastcall *a2)(_QWORD, _QWORD, _QWORD))
{
  int v4; // ebx
  __int64 result; // rax
  int v6; // eax
  char v7; // cl
  void (__fastcall **Interface)(_QWORD, __int64, _QWORD, _QWORD); // rax
  __int64 (*v9)(void); // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[40]; // [rsp+38h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( byte_140468030 && !a1 )
  {
    BgkResumeFinished();
    qword_140468258 = 0LL;
    byte_140468265 = 0;
    return 0LL;
  }
  if ( a1 == byte_140468265 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140468248 = a2;
    }
    else if ( !qword_140468248 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_140468109 = 0;
    byte_140468108 = 0;
    ExWaitForRundownProtectionRelease(&stru_14042A678);
    ExRundownCompleted(&stru_14042A678);
    v4 = BgLibraryDisable();
    if ( v4 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v4 = 0;
    }
    else
    {
      byte_140468265 = 0;
      byte_140468250 = 0;
      if ( qword_140468240 )
      {
        BgConsoleDestroyInterface();
        qword_140468240 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_140468258 )
    {
      qword_140468258();
      qword_140468258 = 0LL;
    }
    return (unsigned int)v4;
  }
  if ( !qword_140468248 )
    return 3221225473LL;
  v9 = 0LL;
  result = qword_140468248(0LL, v10, &v9);
  if ( (int)result >= 0 )
  {
    qword_140468258 = v9;
    BgkpLockBgfxCodeSection();
    v6 = BgLibraryEnable((__int64)v10, 0);
    v7 = byte_140468265;
    v4 = v6;
    if ( v6 >= 0 )
      v7 = 1;
    byte_140468265 = v7;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140468240 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_14050A0B0, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v4;
  }
  return result;
}
