/*
 * XREFs of PropertyAudioSignalProcessingPinValidation @ 0x1C0025C4C
 * Callers:
 *     PropertyAudioSignalProcessingBasicSupport @ 0x1C0025CF0 (PropertyAudioSignalProcessingBasicSupport.c)
 *     PropertyAudioSignalProcessing @ 0x1C0025DA0 (PropertyAudioSignalProcessing.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PropertyAudioSignalProcessingPinValidation(IRP *a1, _DWORD *a2)
{
  unsigned int Options; // ebx
  PKSFILTER FilterFromIrp; // rax
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  const KSPIN_DESCRIPTOR_EX *PinDescriptors; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx

  Options = a1->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
  FilterFromIrp = KsGetFilterFromIrp(a1);
  if ( Options < 0x20 || a2[7] || (a2[5] & 0x10000000) != 0 )
    return 3221225488LL;
  if ( !FilterFromIrp )
    return 3221225485LL;
  Descriptor = FilterFromIrp->Descriptor;
  if ( !Descriptor )
    return 3221225860LL;
  PinDescriptors = Descriptor->PinDescriptors;
  if ( !PinDescriptors )
    return 3221225860LL;
  v8 = (unsigned int)a2[6];
  if ( (unsigned int)v8 >= Descriptor->PinDescriptorsCount )
    return 3221225485LL;
  v9 = 176 * v8;
  if ( *(KSPIN_COMMUNICATION *)((char *)&PinDescriptors->PinDescriptor.Communication + v9) == KSPIN_COMMUNICATION_BRIDGE )
    return 3221225659LL;
  else
    return *(_DWORD *)((char *)&PinDescriptors[1].PinDescriptor.Interfaces + v9) == 0 ? 0xC00000BB : 0;
}
