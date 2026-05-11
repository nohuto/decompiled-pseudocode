/*
 * XREFs of USBMidiInPipePrimer @ 0x1C003086C
 * Callers:
 *     USBHwSelectStreamingMIDIInterface @ 0x1C002B374 (USBHwSelectStreamingMIDIInterface.c)
 * Callees:
 *     USBHwAllocateAndBag @ 0x1C0029C8C (USBHwAllocateAndBag.c)
 *     USBParseGetMIDIStreamingEndpointDescriptor @ 0x1C002C800 (USBParseGetMIDIStreamingEndpointDescriptor.c)
 *     USBMidiInInitializeUrbAndIrp @ 0x1C0030778 (USBMidiInInitializeUrbAndIrp.c)
 */

__int64 __fastcall USBMidiInPipePrimer(__int64 a1, __int64 a2, unsigned int a3, char a4)
{
  unsigned int v6; // edx
  __int64 v7; // r13
  int bDescriptorType; // r14d
  NTSTATUS v9; // edi
  unsigned __int16 *v10; // r12
  unsigned int v12; // ebp
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // rbx
  _QWORD *v16; // rcx
  void *v17; // rdx
  NTSTATUS v18; // eax
  __int64 v19; // r15
  PUSB_COMMON_DESCRIPTOR MIDIStreamingEndpointDescriptor; // rax
  void *v21; // rbp
  unsigned __int16 *v22; // rdi
  PVOID PoolWithTag; // rax
  unsigned int v24; // r12d
  __int64 v25; // rbp
  __int64 v26; // r13
  __int64 v27; // rdx
  unsigned int v28; // r15d
  __int64 v29; // r14
  PIRP Irp; // rax
  unsigned int v31; // r14d
  PIRP *v32; // rbp
  NTSTATUS v33; // eax
  __int64 v34; // rax
  __int64 v35; // rdi
  _BYTE *v36; // r14
  __int64 v37; // r12
  __int64 v39; // [rsp+68h] [rbp+10h]

  v6 = *(_DWORD *)(a2 + 32);
  v7 = a1;
  bDescriptorType = 0;
  v9 = -1073741438;
  v10 = *(unsigned __int16 **)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 40LL);
  if ( a3 >= v6 )
    return 3221225485LL;
  v12 = 0;
  if ( v6 )
  {
    v13 = a3;
    v14 = *(_QWORD *)(a2 + 40);
    v15 = 168 * v13;
    while ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v12) + 2LL) != *(_BYTE *)(v14 + 168 * v13 + 2) )
    {
      if ( ++v12 >= v6 )
        return (unsigned int)v9;
    }
    *(_BYTE *)(v14 + v15 + 41) = 0;
    v9 = -1073741670;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v15 + 72) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 64) = 0;
    *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 68) = 0;
    *(_BYTE *)(*(_QWORD *)(a2 + 40) + v15 + 40) = 0;
    KeInitializeEvent((PRKEVENT)(v15 + *(_QWORD *)(a2 + 40) + 136LL), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v15 + *(_QWORD *)(a2 + 40) + 112LL), NotificationEvent, 0);
    KeInitializeSpinLock((PKSPIN_LOCK)(v15 + *(_QWORD *)(a2 + 40) + 104LL));
    v16 = (_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 80);
    v16[1] = v16;
    *v16 = v16;
    if ( a4 )
    {
      *(_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 96) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(v7 + 40));
      v17 = *(void **)(*(_QWORD *)(a2 + 40) + v15 + 96);
      if ( !v17 )
        return (unsigned int)v9;
      v18 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(v7 + 8), v17, (PFNKSFREE)IoFreeWorkItem);
      v19 = *(_QWORD *)(a2 + 40);
      v9 = v18;
      if ( v18 < 0 )
      {
        ExFreePool(*(PVOID *)(v15 + v19 + 96));
      }
      else
      {
        v9 = -1073741438;
        MIDIStreamingEndpointDescriptor = USBParseGetMIDIStreamingEndpointDescriptor(v10, a2, v12);
        if ( MIDIStreamingEndpointDescriptor )
        {
          *(_QWORD *)(v15 + v19 + 32) = MIDIStreamingEndpointDescriptor + 2;
          bDescriptorType = MIDIStreamingEndpointDescriptor[1].bDescriptorType;
        }
        else
        {
          *(_QWORD *)(v15 + v19 + 32) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(a2 + 40) + v15 + 24) = bDescriptorType;
      }
      if ( !bDescriptorType )
        return (unsigned int)v9;
      v21 = *(void **)(v7 + 8);
      v22 = (unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v15);
      PoolWithTag = ExAllocatePoolWithTag(
                      (POOL_TYPE)512,
                      16 * bDescriptorType * ((unsigned int)*v22 + 192),
                      0x41627845u);
      *((_QWORD *)v22 + 20) = PoolWithTag;
      v9 = PoolWithTag ? USBHwAllocateAndBag((PVOID *)v22 + 20, v21) : -1073741670;
      if ( v9 < 0 )
        return (unsigned int)v9;
      _mm_lfence();
      v24 = 0;
      v25 = *(_QWORD *)(*(_QWORD *)(a2 + 40) + v15 + 160);
      v26 = v25 + ((unsigned __int64)(unsigned int)(16 * bDescriptorType) << 6);
      v27 = v26 + (unsigned int)(bDescriptorType << 11);
      v28 = 16 * bDescriptorType;
      v39 = v27;
      if ( 16 * bDescriptorType )
      {
        v29 = v25 + 48;
        do
        {
          if ( v9 < 0 )
            break;
          *(_QWORD *)(v29 - 32) = a1;
          *(_BYTE *)v29 = 0;
          *(_QWORD *)(v29 + 8) = v15 + *(_QWORD *)(a2 + 40);
          *(_QWORD *)(v29 - 16) = v26 + (v24 << 7);
          *(_QWORD *)(v29 - 8) = v27 + v24 * *(unsigned __int16 *)(*(_QWORD *)(a2 + 40) + v15);
          Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 40) + 76LL), 0);
          *(_QWORD *)(v29 - 24) = Irp;
          if ( Irp )
          {
            v9 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Irp, (PFNKSFREE)IoFreeIrp);
            if ( v9 < 0 )
              IoFreeIrp(*(PIRP *)(v29 - 24));
            else
              USBMidiInInitializeUrbAndIrp(v25 + ((unsigned __int64)v24 << 6));
          }
          else
          {
            v9 = -1073741670;
          }
          v27 = v39;
          ++v24;
          v29 += 64LL;
        }
        while ( v24 < v28 );
      }
      v7 = a1;
    }
    else
    {
      _mm_lfence();
      v34 = *(_QWORD *)(a2 + 40);
      v25 = *(_QWORD *)(v34 + v15 + 160);
      v28 = 16 * *(_DWORD *)(v34 + v15 + 24);
      if ( v28 )
      {
        v35 = *(_QWORD *)(v34 + v15 + 160);
        v36 = (_BYTE *)(v25 + 48);
        v37 = v28;
        do
        {
          *v36 = 0;
          USBMidiInInitializeUrbAndIrp(v35);
          v35 += 64LL;
          v36 += 64;
          --v37;
        }
        while ( v37 );
      }
      v9 = 0;
    }
    if ( v25 )
    {
      v31 = 0;
      if ( v28 )
      {
        v32 = (PIRP *)(v25 + 24);
        do
        {
          if ( v9 < 0 )
            break;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a2 + 40) + v15 + 64));
          v33 = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 40), *v32);
          ++v31;
          v32 += 8;
          v9 = v33;
        }
        while ( v31 < v28 );
      }
    }
  }
  return (unsigned int)v9;
}
