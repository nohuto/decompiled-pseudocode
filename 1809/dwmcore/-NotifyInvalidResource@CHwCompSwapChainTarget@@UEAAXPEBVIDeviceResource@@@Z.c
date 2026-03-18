/*
 * XREFs of ?NotifyInvalidResource@CHwCompSwapChainTarget@@UEAAXPEBVIDeviceResource@@@Z @ 0x180200D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CHwCompSwapChainTarget::NotifyInvalidResource(
        CHwCompSwapChainTarget *this,
        const struct IDeviceResource *a2)
{
  char *v2; // rdi

  v2 = (char *)this - 264;
  (*(void (__fastcall **)(char *, const struct IDeviceResource *))(*((_QWORD *)this - 33) + 96LL))(
    (char *)this - 264,
    a2);
  CDeviceResource::NotifyInvalid(
    (CHwCompSwapChainTarget *)((char *)this - 56),
    (const struct IDeviceResource *)(((unsigned __int64)this - 56) & -(__int64)(v2 != 0LL)));
}
