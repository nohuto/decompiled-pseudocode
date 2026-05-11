/*
 * XREFs of USBParseConvertMIDIJacksAndElements @ 0x1C002DC54
 * Callers:
 *     USBParseConvertUnitsToFunctionUnits @ 0x1C002DD70 (USBParseConvertUnitsToFunctionUnits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00118E0 (_guard_dispatch_icall_nop.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002BCB8 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseFindDescriptor @ 0x1C002BD14 (USBParseFindDescriptor.c)
 */

__int64 __fastcall USBParseConvertMIDIJacksAndElements(__int64 a1)
{
  int v1; // ebp
  __int64 v2; // r13
  __int64 v3; // r14
  unsigned __int8 v4; // al
  __int64 v5; // rsi
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // r15
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  PUSB_COMMON_DESCRIPTOR v10; // rdi
  PUSB_COMMON_DESCRIPTOR Descriptor; // rbx
  UCHAR bLength; // cl
  __int64 v15; // [rsp+78h] [rbp+10h]

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v15 = v2;
  v3 = *(_QWORD *)(v2 + 40);
  v4 = *(_BYTE *)(v3 + 4);
  if ( v4 )
  {
    v5 = 0LL;
    v6 = v4;
    do
    {
      v7 = *(_QWORD *)(v2 + 16);
      v8 = *(_QWORD *)(v5 + v7);
      if ( *(_BYTE *)(v8 + 6) == 3 )
      {
        DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                      (unsigned __int16 *)v3,
                                      *(char **)(v5 + v7),
                                      36,
                                      7uLL);
        v10 = DescriptorInConfiguration;
        if ( DescriptorInConfiguration )
        {
          Descriptor = USBParseFindDescriptor(
                         v3,
                         DescriptorInConfiguration,
                         *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType,
                         &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength);
          if ( Descriptor )
          {
            do
            {
              if ( v1 < 0 )
                break;
              bLength = Descriptor[1].bLength;
              if ( (unsigned __int8)(bLength - 2) <= 2u )
              {
                v1 = USBParseMidiUnitMap[bLength](a1, v8, Descriptor);
                if ( v1 >= 0 )
                  Descriptor = USBParseFindDescriptor(
                                 v3,
                                 v10,
                                 *(unsigned __int16 *)&v10[2].bDescriptorType,
                                 &Descriptor->bLength + Descriptor->bLength);
              }
            }
            while ( Descriptor );
            v2 = v15;
          }
        }
      }
      v5 += 16LL;
      --v6;
    }
    while ( v6 );
  }
  return (unsigned int)v1;
}
