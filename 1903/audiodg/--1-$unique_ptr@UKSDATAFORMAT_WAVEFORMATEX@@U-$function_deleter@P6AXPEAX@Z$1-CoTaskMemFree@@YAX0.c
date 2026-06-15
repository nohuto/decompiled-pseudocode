/*
 * XREFs of ??1?$unique_ptr@UKSDATAFORMAT_WAVEFORMATEX@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x140029D24
 * Callers:
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$6 @ 0x14001A730 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$6.c)
 *     _FillAPOInitSystemEffectsStructure_::_1_::dtor$10 @ 0x14001A790 (_FillAPOInitSystemEffectsStructure_--_1_--dtor$10.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$7 @ 0x14001B18D (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$7.c)
 *     _CEndpointInstance::CreateDeviceEndpointInstance_::_1_::dtor$8 @ 0x14001B19F (_CEndpointInstance--CreateDeviceEndpointInstance_--_1_--dtor$8.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<KSDATAFORMAT_WAVEFORMATEX,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(
        void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    CoTaskMemFree(v1);
}
