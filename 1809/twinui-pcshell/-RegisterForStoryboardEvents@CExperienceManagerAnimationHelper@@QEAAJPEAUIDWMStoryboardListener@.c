/*
 * XREFs of ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x1803B0878
 * Callers:
 *     ??0CStartExperienceManager@@QEAA@XZ @ 0x180169894 (--0CStartExperienceManager@@QEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ @ 0x18007B4F4 (-InternalRelease@-$ComPtr@VCVirtualDesktopDefaultForegroundHandler@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x1803B0568 (--$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardLi.c)
 */

__int64 __fastcall CExperienceManagerAnimationHelper::RegisterForStoryboardEvents(
        CExperienceManagerAnimationHelper *this,
        struct IDWMStoryboardListener *a2)
{
  CExperienceManagerAnimationHelper::DummyWindow **v2; // rbx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct IDWMStoryboardListener *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v2 = (CExperienceManagerAnimationHelper::DummyWindow **)((char *)this + 24);
  if ( *((_QWORD *)this + 3) )
    return 0LL;
  Microsoft::WRL::ComPtr<CVirtualDesktopDefaultForegroundHandler>::InternalRelease((__int64 *)this + 3);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
         v2,
         &v7);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xAA,
    (__int64)"shell\\twinui\\experiencemanagers\\corelib\\experiencemanageranimationhelper.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
