/*
 * XREFs of USBCaptureCreatePin @ 0x1C002EDA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall USBCaptureCreatePin(PKSPIN Pin)
{
  _QWORD *Context; // r15
  NTSTATUS v3; // esi
  __int64 v4; // rbx
  __int64 v5; // rbp
  __int64 v6; // rdi
  int v7; // r12d
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  unsigned int v10; // edi
  PIRP Irp; // rax
  PKSDATAFORMAT ConnectionFormat; // rdx
  _QWORD *v13; // rdi
  __int64 v14; // rbx
  const KSALLOCATOR_FRAMING_EX *AllocatorFraming; // rcx
  PKSGATE i; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v18; // rax
  int v20; // [rsp+70h] [rbp+8h]

  Context = Pin->Context;
  v3 = -1073741637;
  v4 = Context[18];
  v5 = Context[19];
  v20 = *(_DWORD *)(v4 + 220);
  v6 = *(_QWORD *)(*(_QWORD *)(Context[2] + 16LL) + 72LL);
  v7 = 12 * *(_DWORD *)(v6 + 208) + 152;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v5 + 960,
    8u,
    0x11u,
    (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
    Pin);
  *(_DWORD *)(v5 + 108) = *(_DWORD *)(v6 + 208);
  *(_BYTE *)(v5 + 112) = *(_BYTE *)(v6 + 212);
  if ( (*(_DWORD *)(v4 + 216) & 0xF000) == 0 )
  {
    v3 = 0;
    v9 = (_QWORD *)(v5 + 336);
    v10 = 0;
    while ( v3 >= 0 )
    {
      *(v9 - 1) = Pin;
      *v9 = v5 + 960 + (unsigned int)(12 * v7) + v20 * v10 * *(_DWORD *)(v5 + 108);
      *(v9 - 3) = v5 + 960 + v7 * v10;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v9 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(Pin->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v9 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      ++v10;
      v9 += 7;
      if ( v10 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          ConnectionFormat = Pin->ConnectionFormat;
          v13 = Pin->Context;
          v14 = v13[19];
          *((_DWORD *)v13 + 26) = ConnectionFormat[1].Flags;
          *(_DWORD *)(v14 + 100) = ConnectionFormat[1].SampleSize;
          *(_DWORD *)(v14 + 8) = WORD1(ConnectionFormat[1].Alignment)
                               * (*((unsigned __int16 *)&ConnectionFormat[1].Alignment + 7) >> 3);
          v3 = _KsEdit(Pin->Bag, (PVOID *)Pin, 0x88u, 0x88u, 0x41627845u);
          if ( v3 >= 0 )
          {
            v3 = _KsEdit(Pin->Bag, (PVOID *)&Pin->Descriptor->AllocatorFraming, 0x70u, 0x70u, 0x41627845u);
            if ( v3 >= 0 )
            {
              AllocatorFraming = Pin->Descriptor->AllocatorFraming;
              AllocatorFraming->FramingItem[0].FramingRange.Range.MinFrameSize = *(_DWORD *)(v14 + 8)
                                                                               * (*((_DWORD *)v13 + 26)
                                                                                / 0x64u);
              v8 = *(_DWORD *)(v14 + 8) * (*((_DWORD *)v13 + 26) / 0x64u);
              AllocatorFraming->FramingItem[0].FramingRange.Range.MaxFrameSize = v8;
              AllocatorFraming->FramingItem[0].FramingRange.Range.Stepping = *(_DWORD *)(v14 + 8);
            }
          }
          if ( v3 >= 0 )
          {
            *(_QWORD *)(v5 + 144) = v5 + 136;
            *(_QWORD *)(v5 + 136) = v5 + 136;
            *(_QWORD *)(v5 + 128) = v5 + 120;
            *(_QWORD *)(v5 + 120) = v5 + 120;
            KeInitializeMutex((PRKMUTEX)(v5 + 152), 0);
            KeInitializeEvent((PRKEVENT)(v5 + 256), NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)(v5 + 216), NotificationEvent, 0);
            for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
              ;
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v5 + 240) = WorkItem;
            if ( !WorkItem )
            {
              v3 = -1073741670;
              break;
            }
            v18 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v5 + 280) = v18;
            if ( !v18 )
            {
              IoFreeWorkItem(*(PIO_WORKITEM *)(v5 + 240));
              v3 = -1073741670;
            }
            if ( v3 >= 0 )
              return (unsigned int)v3;
          }
        }
        break;
      }
    }
  }
  WPP_RECORDER_SF_qd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v8,
    8u,
    0x12u,
    (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
    Pin,
    v3);
  return (unsigned int)v3;
}
