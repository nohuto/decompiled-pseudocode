/*
 * XREFs of ?Release@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1801A98C0
 * Callers:
 *     ?Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ @ 0x1800B54A0 (-Release@CVirtualTouchpadExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x1800B54B0 (-Release@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ @ 0x1800B54C0 (-Release@CVirtualTouchpadExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ @ 0x1800B54D0 (-Release@CVirtualTouchpadExperienceManager@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CVirtualTouchpadExperienceManager::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::Release(this);
}
