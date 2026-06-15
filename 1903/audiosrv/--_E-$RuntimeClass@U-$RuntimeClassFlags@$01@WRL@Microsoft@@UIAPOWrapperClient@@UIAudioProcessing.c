/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@UIAPOPreferredFormatSupport@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18013AEC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180019940 (--3@YAXPEAX@Z.c)
 */

_DWORD *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal,IAPOPreferredFormatSupport>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[13] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
