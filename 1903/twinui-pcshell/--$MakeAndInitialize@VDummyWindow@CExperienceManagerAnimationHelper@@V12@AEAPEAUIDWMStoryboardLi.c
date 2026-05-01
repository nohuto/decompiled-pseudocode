/*
 * XREFs of ??$MakeAndInitialize@VDummyWindow@CExperienceManagerAnimationHelper@@V12@AEAPEAUIDWMStoryboardListener@@@Details@WRL@Microsoft@@YAJPEAPEAVDummyWindow@CExperienceManagerAnimationHelper@@AEAPEAUIDWMStoryboardListener@@@Z @ 0x1804129DC
 * Callers:
 *     ?RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180412CF8 (-RegisterForStoryboardEvents@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKXZ @ 0x18008070C (-InternalRelease@-$ComPtr@VDummyWindow@CExperienceManagerAnimationHelper@@@WRL@Microsoft@@IEAAKX.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ @ 0x180412A8C (--0DummyWindow@CExperienceManagerAnimationHelper@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180412D54 (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CExperienceManagerAnimationHelper::DummyWindow,CExperienceManagerAnimationHelper::DummyWindow,IDWMStoryboardListener * &>(
        volatile signed __int32 **a1,
        struct IDWMStoryboardListener **a2)
{
  CExperienceManagerAnimationHelper::DummyWindow *v4; // rax
  int v5; // edi
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CExperienceManagerAnimationHelper::DummyWindow *)operator new(
                                                           0x28uLL,
                                                           (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (volatile signed __int32 *)CExperienceManagerAnimationHelper::DummyWindow::DummyWindow(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = CExperienceManagerAnimationHelper::DummyWindow::RuntimeClassInitialize(
           (CExperienceManagerAnimationHelper::DummyWindow *)v6,
           *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        _InterlockedIncrement(v6 + 3);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<CExperienceManagerAnimationHelper::DummyWindow>::InternalRelease(&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
