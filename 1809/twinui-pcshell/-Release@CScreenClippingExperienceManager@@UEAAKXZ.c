/*
 * XREFs of ?Release@CScreenClippingExperienceManager@@UEAAKXZ @ 0x180181FE0
 * Callers:
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAKXZ @ 0x18009F3C0 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 *     ?Release@CScreenClippingExperienceManager@@WBA@EAAKXZ @ 0x18009F3D0 (-Release@CScreenClippingExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBI@EAAKXZ @ 0x18009F3E0 (-Release@CScreenClippingExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WCA@EAAKXZ @ 0x18009F3F0 (-Release@CScreenClippingExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WCI@EAAKXZ @ 0x18009F400 (-Release@CScreenClippingExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WDA@EAAKXZ @ 0x18009F410 (-Release@CScreenClippingExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WDI@EAAKXZ @ 0x18009F420 (-Release@CScreenClippingExperienceManager@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CScreenClippingExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(this);
}
