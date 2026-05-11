/*
 * XREFs of USBParseConvertControlUnits @ 0x1C002C7EC
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x1C002C9E0 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 *     USBParseFindDescriptor @ 0x1C002A994 (USBParseFindDescriptor.c)
 *     USBParseGetAudioSpecificInterface @ 0x1C002AA10 (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBParseConvertControlUnits(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  __int64 v5; // rdx
  struct _USB_CONFIGURATION_DESCRIPTOR *v6; // rbp
  PUSB_COMMON_DESCRIPTOR AudioSpecificInterface; // rax
  PUSB_COMMON_DESCRIPTOR v8; // rsi
  PUSB_COMMON_DESCRIPTOR Descriptor; // rdi
  UCHAR bLength; // cl

  v4 = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v6 = *(struct _USB_CONFIGURATION_DESCRIPTOR **)(v5 + 40);
  AudioSpecificInterface = USBParseGetAudioSpecificInterface(v6, *(unsigned __int8 **)(v5 + 48), a3, 8uLL);
  v8 = AudioSpecificInterface;
  if ( AudioSpecificInterface )
  {
    Descriptor = USBParseFindDescriptor(
                   (__int64)v6,
                   AudioSpecificInterface,
                   *(unsigned __int16 *)&AudioSpecificInterface[2].bDescriptorType,
                   &AudioSpecificInterface->bLength + AudioSpecificInterface->bLength);
    while ( Descriptor )
    {
      if ( v4 < 0 )
        break;
      bLength = Descriptor[1].bLength;
      if ( (unsigned __int8)(bLength - 2) <= 6u )
      {
        v4 = USBParseUnitMap[bLength](a1, Descriptor);
        if ( v4 >= 0 )
          Descriptor = USBParseFindDescriptor(
                         (__int64)v6,
                         v8,
                         *(unsigned __int16 *)&v8[2].bDescriptorType,
                         &Descriptor->bLength + Descriptor->bLength);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741438;
  }
  return (unsigned int)v4;
}
