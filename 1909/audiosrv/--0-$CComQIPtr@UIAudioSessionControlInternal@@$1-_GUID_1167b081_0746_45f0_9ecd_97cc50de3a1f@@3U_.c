/*
 * XREFs of ??0?$CComQIPtr@UIAudioSessionControlInternal@@$1?_GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x18010D690
 * Callers:
 *     ?Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z @ 0x18010E0A0 (-Initialize@CMonitor@@QEAAJPEAUIMMDevice@@0KAEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall ATL::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>::CComQIPtr<IAudioSessionControlInternal,&__s_GUID const _GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f>(
        _QWORD *a1,
        void (__fastcall ***a2)(_QWORD, GUID *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &GUID_1167b081_0746_45f0_9ecd_97cc50de3a1f, a1);
  return a1;
}
