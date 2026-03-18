/*
 * XREFs of BgkNotifyDisplayOwnershipChange @ 0x140178970
 * Callers:
 *     BgkSetDisplayOwnership @ 0x14019EDC0 (BgkSetDisplayOwnership.c)
 *     BgkNotifyDisplayOwnershipLost @ 0x1402923F0 (BgkNotifyDisplayOwnershipLost.c)
 *     BvgaNotifyDisplayOwnershipChange @ 0x1402928C0 (BvgaNotifyDisplayOwnershipChange.c)
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x140082C50 (ExWaitForRundownProtectionRelease.c)
 *     ExRundownCompleted @ 0x1400EA950 (ExRundownCompleted.c)
 *     BgLibraryEnable @ 0x140169A28 (BgLibraryEnable.c)
 *     BgkpTryEnableConsole @ 0x140179864 (BgkpTryEnableConsole.c)
 *     InbvSetFunction @ 0x140198C08 (InbvSetFunction.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     BgkResumeFinished @ 0x14059D98C (BgkResumeFinished.c)
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
  if ( byte_140467D68 && !a1 )
  {
    BgkResumeFinished();
    qword_140467F98 = 0LL;
    byte_140467FA5 = 0;
    return 0LL;
  }
  if ( a1 == byte_140467FA5 )
    return 0LL;
  if ( !a1 )
  {
    if ( a2 )
    {
      qword_140467F88 = a2;
    }
    else if ( !qword_140467F88 )
    {
      return 3221225712LL;
    }
    BgDisplayFade();
    byte_140467E3D = 0;
    byte_140467E3C = 0;
    ExWaitForRundownProtectionRelease(&stru_14042A688);
    ExRundownCompleted(&stru_14042A688);
    v4 = BgLibraryDisable();
    if ( v4 < 0 )
    {
      BgkDestroy();
      InbvSetFunction(3LL);
      v4 = 0;
    }
    else
    {
      byte_140467FA5 = 0;
      byte_140467F90 = 0;
      if ( qword_140467F80 )
      {
        BgConsoleDestroyInterface();
        qword_140467F80 = 0LL;
      }
    }
    BgSetFrameBufferAccess(0LL, 0LL, 0LL);
    BgkpUnlockBgfxCodeSection();
    if ( qword_140467F98 )
    {
      qword_140467F98();
      qword_140467F98 = 0LL;
    }
    return (unsigned int)v4;
  }
  if ( !qword_140467F88 )
    return 3221225473LL;
  v9 = 0LL;
  result = qword_140467F88(0LL, v10, &v9);
  if ( (int)result >= 0 )
  {
    qword_140467F98 = v9;
    BgkpLockBgfxCodeSection();
    v6 = BgLibraryEnable((__int64)v10, 0);
    v7 = byte_140467FA5;
    v4 = v6;
    if ( v6 >= 0 )
      v7 = 1;
    byte_140467FA5 = v7;
    Interface = (void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))BgConsoleGetInterface();
    qword_140467F80 = (__int64)Interface;
    if ( Interface )
      (*Interface)(0LL, 4291217094LL, (unsigned int)dword_140509DF0, 0LL);
    BgkpTryEnableConsole();
    return (unsigned int)v4;
  }
  return result;
}
