/*
 * XREFs of ?NotifyInvalidResource@CCompositionSurfaceInfo@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801CD890
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceInfo::NotifyInvalidResource(
        CCompositionSurfaceInfo *this,
        const struct IDeviceResource *a2)
{
  __int64 i; // rbx
  __int64 v5; // rcx

  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 2) + 312LL))((char *)this - 16);
  for ( i = (__int64)(*((_QWORD *)this + 5) - *((_QWORD *)this + 4)) >> 3; i; --i )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 8 * i - 8);
    (*(void (__fastcall **)(__int64, const struct IDeviceResource *))(*(_QWORD *)v5 + 24LL))(v5, a2);
  }
}
