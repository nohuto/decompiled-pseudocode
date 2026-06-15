/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x140031754
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$15 @ 0x14001F8F0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$15.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x14001F910 (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x1400203B0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$14 @ 0x1400203D0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$14.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$9 @ 0x1400203F0 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$9.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x140020410 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    CoTaskMemFree(v1);
}
