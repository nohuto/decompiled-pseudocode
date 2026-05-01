/*
 * XREFs of ??_EDummyWindow@CExperienceManagerAnimationHelper@@UEAAPEAXI@Z @ 0x1803B06B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800848CC (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

CExperienceManagerAnimationHelper::DummyWindow *__fastcall CExperienceManagerAnimationHelper::DummyWindow::`vector deleting destructor'(
        CExperienceManagerAnimationHelper::DummyWindow *this,
        char a2)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 4);
  *((_DWORD *)this + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x28);
  return this;
}
