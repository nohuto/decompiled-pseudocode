/*
 * XREFs of ?Initialize@CImmersiveApplicationTransitionHelper@@UEAAJPEAUIServiceProvider@@@Z @ 0x180105B10
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180060730 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_SubscribeToWNF@CImmersiveApplicationTransitionHelper@@AEAAJXZ @ 0x180106044 (-_SubscribeToWNF@CImmersiveApplicationTransitionHelper@@AEAAJXZ.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::Initialize(
        CImmersiveApplicationTransitionHelper *this,
        struct IServiceProvider *a2)
{
  int v4; // edx

  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 5);
  v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
         a2,
         &IID_IImmersiveCharmsWindowManager,
         &GUID_abda261c_6cda_4269_9160_4a16fbc0ffee,
         (char *)this + 40);
  if ( v4 >= 0 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 6);
    v4 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &SID_IImmersiveMonitorService,
           &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
           (char *)this + 48);
    if ( v4 >= 0 )
      v4 = CImmersiveApplicationTransitionHelper::_SubscribeToWNF((CImmersiveApplicationTransitionHelper *)((char *)this - 32));
  }
  *((_BYTE *)this + 16) = v4 >= 0;
  return (unsigned int)v4;
}
