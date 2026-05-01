/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VFtmBase@23@UIScreenClippingBroker@@U?$CloakedIid@UIScreenClippingBrokerPrivate@@@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1803E1310
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18008755C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClippingBroker@@U?$CloakedIid@UIScreenClippingBrokerPrivate@@@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1803E1208 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UIScreenClip.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::`vector deleting destructor'(
        void *a1,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,IScreenClippingBroker,Microsoft::WRL::CloakedIid<IScreenClippingBrokerPrivate>>((__int64)a1);
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
