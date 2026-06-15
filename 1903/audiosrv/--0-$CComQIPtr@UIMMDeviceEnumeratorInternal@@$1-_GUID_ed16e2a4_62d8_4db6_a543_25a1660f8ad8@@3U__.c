/*
 * XREFs of ??0?$CComQIPtr@UIMMDeviceEnumeratorInternal@@$1?_GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18010DBD0
 * Callers:
 *     ?Start@CMonitor@@QEAAJXZ @ 0x1801112A0 (-Start@CMonitor@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8>::CComQIPtr<IMMDeviceEnumeratorInternal,&__s_GUID const _GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_ed16e2a4_62d8_4db6_a543_25a1660f8ad8, a1);
  return a1;
}
