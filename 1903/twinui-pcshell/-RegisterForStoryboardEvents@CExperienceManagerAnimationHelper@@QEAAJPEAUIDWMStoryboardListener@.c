/*
 * XREFs of ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180412CF8
 * Callers:
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x180196800 (--0CStartExperienceManager@@QEAA@XZ.c)
 *     ??0CStartExperienceManager@@QEAA@_N@Z @ 0x180196B24 (--0CStartExperienceManager@@QEAA@_N@Z.c)
 *     ??0TouchKeyboardExperienceManager@@QEAA@XZ @ 0x18030CBC0 (--0TouchKeyboardExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18008070C (-InternalRelease@-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKX.c)
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x1804129DC (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
        CExperienceManagerAnimationHelper *this,
        struct IDWMStoryboardListener *a2)
{
  volatile signed __int32 **v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDWMStoryboardListener *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (volatile signed __int32 **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease((volatile signed __int32 **)this + 3);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
         v2,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAC,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
