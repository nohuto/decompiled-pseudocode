/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@UIApplicationFrameEventHandler@@UIScaleChangeSink@@UIClosable@Foundation@8@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18009F130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager,IApplicationFrameEventHandler,IScaleChangeSink,Windows::Foundation::IClosable>::AddRef(
        __int64 a1)
{
  return CVirtualTouchpadExperienceManager::AddRef((CVirtualTouchpadExperienceManager *)(a1 - 24));
}
