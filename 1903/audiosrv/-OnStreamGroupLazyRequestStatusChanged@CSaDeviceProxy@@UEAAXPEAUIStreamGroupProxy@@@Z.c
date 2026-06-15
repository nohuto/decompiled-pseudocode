/*
 * XREFs of ?OnStreamGroupLazyRequestStatusChanged@CSaDeviceProxy@@UEAAXPEAUIStreamGroupProxy@@@Z @ 0x1800F0510
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSaDeviceProxy::OnStreamGroupLazyRequestStatusChanged(
        CSaDeviceProxy *this,
        struct IStreamGroupProxy *a2)
{
  *((_DWORD *)this + 23) += (*(unsigned __int8 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)a2 + 232LL))(a2) != 0
                          ? 1
                          : -1;
  *((_QWORD *)this + 12) = GetTickCount64();
}
