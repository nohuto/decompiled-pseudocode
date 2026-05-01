/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VWindowWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1802C1DB0
 * Callers:
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@UEAA@XZ @ 0x1802C1DA4 (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrappe.c)
 *     ??_G?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapper@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1802C1FD0 (--_G-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@VWindowWrapperBase@@UILegacyViewWrapp.c)
 *     ??_ELegacyWindowWrapper@@UEAAPEAXI@Z @ 0x1802C2010 (--_ELegacyWindowWrapper@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$IAsyncOperationCompletedHandler@PEAVAppInstallItem@InstallControl@Preview@Store@ApplicationModel@Windows@@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180074FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$IAsyncOperatio.c)
 */

void __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,WindowWrapperBase,ILegacyViewWrapper>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 608);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::IAsyncOperationCompletedHandler<Windows::ApplicationModel::Store::Preview::InstallControl::AppInstallItem *>>::Release(
      2 * v3,
      a2);
  WindowWrapperBase::~WindowWrapperBase((WindowWrapperBase *)(a1 + 8));
}
