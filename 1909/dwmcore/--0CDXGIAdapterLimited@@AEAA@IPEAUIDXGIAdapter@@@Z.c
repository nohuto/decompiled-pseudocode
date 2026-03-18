/*
 * XREFs of ??0CDXGIAdapterLimited@@AEAA@IPEAUIDXGIAdapter@@@Z @ 0x180027420
 * Callers:
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180026E4C (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

CDXGIAdapterLimited *__fastcall CDXGIAdapterLimited::CDXGIAdapterLimited(
        CDXGIAdapterLimited *this,
        int a2,
        struct IDXGIAdapter *a3)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CDXGIAdapterLimited::`vftable';
  *((_DWORD *)this + 4) = a2;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 172) = 0;
  *((_QWORD *)this + 3) = a3;
  ((void (__fastcall *)(struct IDXGIAdapter *))a3->lpVtbl->AddRef)(a3);
  return this;
}
