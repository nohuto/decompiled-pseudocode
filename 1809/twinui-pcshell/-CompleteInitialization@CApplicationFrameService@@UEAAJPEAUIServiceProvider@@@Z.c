/*
 * XREFs of ?CompleteInitialization@CApplicationFrameService@@UEAAJPEAUIServiceProvider@@@Z @ 0x180114AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameService::CompleteInitialization(
        CApplicationFrameService *this,
        struct IServiceProvider *a2)
{
  char *v2; // rbx

  v2 = (char *)this + 144;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 18);
  return ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))a2->lpVtbl->QueryService)(
           a2,
           &GUID_d6f29401_6ea3_4757_a73c_b30abb699dc3,
           &GUID_d6f29401_6ea3_4757_a73c_b30abb699dc3,
           v2);
}
