/*
 * XREFs of USBParseGetMIDIStreamingDatarange @ 0x1C002E4AC
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x1C002E7B0 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x1C0012840 (memset.c)
 *     USBHwAllocateAndBag @ 0x1C0029C8C (USBHwAllocateAndBag.c)
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B374 (USBHwSelectStreamingMIDIInterface.c)
 *     USBParseGetFirstStreamingAudioInterface @ 0x1C002BC34 (USBParseGetFirstStreamingAudioInterface.c)
 *     USBParseFindDescriptorInConfiguration @ 0x1C002BCB8 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002C800 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 */

__int64 __fastcall USBParseGetMIDIStreamingDatarange(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        int a3,
        LONG a4,
        _QWORD *a5,
        _QWORD *PoolWithTag)
{
  unsigned int v7; // r15d
  int v8; // ebx
  __int64 v9; // r14
  PUSB_INTERFACE_DESCRIPTOR FirstStreamingAudioInterface; // rsi
  _QWORD *v11; // r13
  _QWORD *v12; // r14
  _QWORD *i; // rdi
  void *v14; // rbx
  SIZE_T v15; // rbp
  _QWORD *v16; // rax
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rcx
  __int64 j; // rbp
  unsigned __int8 *v19; // rdx
  bool v20; // r14
  __int64 v21; // rbp
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  unsigned int bDescriptorType; // ecx
  struct _USB_COMMON_DESCRIPTOR *v24; // rdx
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  __int64 (__fastcall **v29)(); // rax

  v7 = 0;
  v8 = -1073741438;
  v9 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  FirstStreamingAudioInterface = USBParseGetFirstStreamingAudioInterface(a2, a4, 3);
  if ( !FirstStreamingAudioInterface )
    return (unsigned int)v8;
  v11 = PoolWithTag;
  v12 = (_QWORD *)(v9 + 192);
  for ( i = (_QWORD *)*v12; i != v12; i = (_QWORD *)*i )
  {
    if ( FirstStreamingAudioInterface == (PUSB_INTERFACE_DESCRIPTOR)i[3] )
    {
      PoolWithTag[25] = i;
      v8 = 0;
      break;
    }
  }
  if ( i == v12 )
  {
    v14 = *(void **)(a1 + 8);
    v15 = 8LL * FirstStreamingAudioInterface->bNumEndpoints + 56;
    PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, v15, 0x41627845u);
    i = PoolWithTag;
    if ( PoolWithTag )
      v8 = USBHwAllocateAndBag((PVOID *)&PoolWithTag, v14);
    else
      v8 = -1073741670;
    if ( v8 < 0 )
      return (unsigned int)v8;
    memset(i, 0, v15);
    v16 = (_QWORD *)*v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 )
      __fastfail(3u);
    *i = v16;
    i[1] = v12;
    v16[1] = i;
    *v12 = i;
    i[3] = FirstStreamingAudioInterface;
    i[6] = i + 7;
    DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(
                                  (unsigned __int16 *)&a2->bLength,
                                  (char *)FirstStreamingAudioInterface,
                                  36,
                                  7uLL);
    if ( DescriptorInConfiguration )
    {
      for ( j = 0LL;
            (unsigned int)j < FirstStreamingAudioInterface->bNumEndpoints;
            DescriptorInConfiguration = (PUSB_COMMON_DESCRIPTOR)&v19[*v19] )
      {
        *(_QWORD *)(i[6] + 8 * j) = USBParseFindDescriptorInConfiguration(
                                      (unsigned __int16 *)&a2->bLength,
                                      (char *)DescriptorInConfiguration,
                                      5,
                                      7uLL);
        v19 = *(unsigned __int8 **)(i[6] + 8 * j);
        if ( !v19 )
          break;
        j = (unsigned int)(j + 1);
      }
      if ( (_DWORD)j == FirstStreamingAudioInterface->bNumEndpoints )
        v8 = USBHwSelectStreamingMIDIInterface(a1, (__int64)i, 1);
      else
        v8 = -1073741438;
    }
  }
  if ( v8 >= 0 )
  {
    v20 = 0;
    v21 = 0LL;
    if ( !FirstStreamingAudioInterface->bNumEndpoints )
      return (unsigned int)-1073741438;
    do
    {
      MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(
                                          (unsigned __int16 *)&a2->bLength,
                                          (__int64)i,
                                          v21);
      if ( MIDIStreamingEndpointDescriptor )
      {
        bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        v7 = 0;
        if ( MIDIStreamingEndpointDescriptor[1].bDescriptorType )
        {
          v24 = MIDIStreamingEndpointDescriptor + 2;
          do
          {
            if ( a3 == v24->bLength )
              break;
            ++v7;
            v24 = (struct _USB_COMMON_DESCRIPTOR *)((char *)v24 + 1);
          }
          while ( v7 < bDescriptorType );
        }
        v20 = v7 < bDescriptorType;
        if ( v7 < bDescriptorType )
          break;
      }
      v21 = (unsigned int)(v21 + 1);
    }
    while ( (unsigned int)v21 < FirstStreamingAudioInterface->bNumEndpoints );
    if ( v20 )
    {
      *((_DWORD *)v11 + 52) = a3;
      *((_DWORD *)v11 + 53) = v7;
      v11[17] = FirstStreamingAudioInterface;
      v25 = *(_QWORD *)(i[6] + 8 * v21);
      v11[21] = v25;
      v11[25] = i;
      v26 = *(char *)(v25 + 2);
      *(_OWORD *)v11 = MIDIStreamingPinDataFormat;
      *((_OWORD *)v11 + 1) = xmmword_1C0015250;
      *((_DWORD *)v11 + 24) = ((v26 >> 31) & 8) + 8;
      *((_OWORD *)v11 + 2) = xmmword_1C0015260;
      *((_OWORD *)v11 + 3) = xmmword_1C0015270;
      *((_OWORD *)v11 + 4) = xmmword_1C0015280;
      *((_OWORD *)v11 + 5) = xmmword_1C0015290;
      *a5 = v11;
      v27 = 88;
      v28 = *((_DWORD *)v11 + 24) == 16;
      if ( *((_DWORD *)v11 + 24) == 16 )
        v27 = 32864;
      *((_DWORD *)v11 + 28) = v27;
      v29 = USBMidiOutPinDispatch;
      if ( v28 )
        v29 = USBMidiInPinDispatch;
      v11[16] = v29;
    }
    else
    {
      return (unsigned int)-1073741438;
    }
  }
  return (unsigned int)v8;
}
