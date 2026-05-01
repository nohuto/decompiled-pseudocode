/*
 * XREFs of ?Release@CScreenClippingExperienceManager@@UEAAKXZ @ 0x1801D0F10
 * Callers:
 *     ?Release@?$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@W7EAAKXZ @ 0x1800D8210 (-Release@-$CBuffer@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows.c)
 *     ?Release@CScreenClippingExperienceManager@@WBA@EAAKXZ @ 0x1800D8220 (-Release@CScreenClippingExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WBI@EAAKXZ @ 0x1800D8230 (-Release@CScreenClippingExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WCA@EAAKXZ @ 0x1800D8240 (-Release@CScreenClippingExperienceManager@@WCA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WCI@EAAKXZ @ 0x1800D8250 (-Release@CScreenClippingExperienceManager@@WCI@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WDA@EAAKXZ @ 0x1800D8260 (-Release@CScreenClippingExperienceManager@@WDA@EAAKXZ.c)
 *     ?Release@CScreenClippingExperienceManager@@WDI@EAAKXZ @ 0x1800D8270 (-Release@CScreenClippingExperienceManager@@WDI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CScreenClippingExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::Release(this);
}
