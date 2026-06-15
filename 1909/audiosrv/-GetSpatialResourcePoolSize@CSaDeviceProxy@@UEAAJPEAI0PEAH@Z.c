/*
 * XREFs of ?GetSpatialResourcePoolSize@CSaDeviceProxy@@UEAAJPEAI0PEAH@Z @ 0x1800EF100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetSpatialResourcePoolSize(
        CSaDeviceProxy *this,
        unsigned int *a2,
        unsigned int *a3,
        int *a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, unsigned int *, unsigned int *, int *))(**((_QWORD **)this + 9) + 160LL))(
           *((_QWORD *)this + 9),
           a2,
           a3,
           a4);
}
