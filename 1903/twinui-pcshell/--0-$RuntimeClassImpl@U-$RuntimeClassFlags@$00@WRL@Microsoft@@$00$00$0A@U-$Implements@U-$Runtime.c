/*
 * XREFs of ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIUnknown@@@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1803463C4
 * Callers:
 *     ??0CIconLoaderInternal@@QEAA@XZ @ 0x1803464B8 (--0CIconLoaderInternal@@QEAA@XZ.c)
 *     ??0AltEscHotkeyHandler@@QEAA@XZ @ 0x180358D90 (--0AltEscHotkeyHandler@@QEAA@XZ.c)
 * Callees:
 *     ??0IApplicationViewChangeListener@@QEAA@XZ @ 0x180086430 (--0IApplicationViewChangeListener@@QEAA@XZ.c)
 */

_QWORD *__fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>>(
        _QWORD *a1)
{
  _QWORD *result; // rax

  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)a1);
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 1));
  IApplicationViewChangeListener::IApplicationViewChangeListener((IApplicationViewChangeListener *)(a1 + 3));
  result = a1;
  a1[5] = 1LL;
  return result;
}
