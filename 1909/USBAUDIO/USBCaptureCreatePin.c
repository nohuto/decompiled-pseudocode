/*
 * XREFs of USBCaptureCreatePin @ 0x1C00300F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C00011B4 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0001404 (WPP_RECORDER_SF_qd.c)
 */

__int64 __fastcall USBCaptureCreatePin(PKSPIN Pin)
{
  _QWORD *Context; // r15
  NTSTATUS v3; // ebx
  __int64 v4; // rdi
  __int64 v5; // r14
  int v6; // r8d
  __int64 v7; // rbp
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r12d
  _QWORD *v11; // r14
  unsigned int v12; // ebp
  __int64 v13; // rax
  PIRP Irp; // rax
  PKSDATAFORMAT ConnectionFormat; // rdx
  _QWORD *v16; // r14
  __int64 v17; // rbp
  const KSALLOCATOR_FRAMING_EX *AllocatorFraming; // rcx
  PKSGATE i; // rax
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v21; // rax
  int v23; // [rsp+70h] [rbp+8h]

  Context = Pin->Context;
  v3 = -1073741637;
  v4 = Context[19];
  v5 = Context[18];
  v6 = *(_DWORD *)(v5 + 220);
  v23 = v6;
  v7 = *(_QWORD *)(*(_QWORD *)(Context[2] + 16LL) + 72LL);
  v8 = v4 + 960;
  v9 = *(_DWORD *)(v7 + 208);
  v10 = 12 * v9 + 152;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      8u,
      0x11u,
      (__int64)&WPP_4029ef4524b336006ce277c7fdb8c744_Traceguids,
      Pin);
    v9 = *(_DWORD *)(v7 + 208);
    v8 = v4 + 960;
    v6 = v23;
  }
  *(_DWORD *)(v4 + 108) = v9;
  *(_BYTE *)(v4 + 112) = *(_BYTE *)(v7 + 212);
  if ( (*(_DWORD *)(v5 + 216) & 0xF000) == 0 )
  {
    v3 = 0;
    v11 = (_QWORD *)(v4 + 336);
    v12 = 0;
    while ( v3 >= 0 )
    {
      *(v11 - 1) = Pin;
      v13 = v6 * v12 * *(_DWORD *)(v4 + 108);
      *(v11 - 3) = v8 + v10 * v12;
      *v11 = v4 + 960 + (unsigned int)(12 * v10) + v13;
      Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(Context[2] + 40LL) + 76LL), 0);
      *(v11 - 4) = Irp;
      if ( Irp )
      {
        v3 = KsAddItemToObjectBag(Pin->Bag, Irp, (PFNKSFREE)IoFreeIrp);
        if ( v3 < 0 )
          IoFreeIrp((PIRP)*(v11 - 4));
      }
      else
      {
        v3 = -1073741670;
      }
      v6 = v23;
      v8 = v4 + 960;
      ++v12;
      v11 += 7;
      if ( v12 >= 0xC )
      {
        if ( v3 >= 0 )
        {
          ConnectionFormat = Pin->ConnectionFormat;
          v16 = Pin->Context;
          v17 = v16[19];
          *((_DWORD *)v16 + 26) = ConnectionFormat[1].Flags;
          *(_DWORD *)(v17 + 100) = ConnectionFormat[1].SampleSize;
          *(_DWORD *)(v17 + 8) = WORD1(ConnectionFormat[1].Alignment)
                               * (*((unsigned __int16 *)&ConnectionFormat[1].Alignment + 7) >> 3);
          v3 = _KsEdit(Pin->Bag, (PVOID *)Pin, 0x88u, 0x88u, 0x41627845u);
          if ( v3 >= 0 )
          {
            v3 = _KsEdit(Pin->Bag, (PVOID *)&Pin->Descriptor->AllocatorFraming, 0x70u, 0x70u, 0x41627845u);
            if ( v3 >= 0 )
            {
              AllocatorFraming = Pin->Descriptor->AllocatorFraming;
              AllocatorFraming->FramingItem[0].FramingRange.Range.MinFrameSize = *(_DWORD *)(v17 + 8)
                                                                               * (*((_DWORD *)v16 + 26)
                                                                                / 0x64u);
              v8 = *(_DWORD *)(v17 + 8) * (*((_DWORD *)v16 + 26) / 0x64u);
              AllocatorFraming->FramingItem[0].FramingRange.Range.MaxFrameSize = v8;
              AllocatorFraming->FramingItem[0].FramingRange.Range.Stepping = *(_DWORD *)(v17 + 8);
            }
          }
          if ( v3 >= 0 )
          {
            *(_QWORD *)(v4 + 144) = v4 + 136;
            *(_QWORD *)(v4 + 136) = v4 + 136;
            *(_QWORD *)(v4 + 128) = v4 + 120;
            *(_QWORD *)(v4 + 120) = v4 + 120;
            KeInitializeMutex((PRKMUTEX)(v4 + 152), 0);
            KeInitializeEvent((PRKEVENT)(v4 + 256), NotificationEvent, 0);
            KeInitializeEvent((PRKEVENT)(v4 + 216), NotificationEvent, 0);
            for ( i = KsPinGetAndGate(Pin); i && _InterlockedExchangeAdd(&i->Count, 0xFFFFFFFF) == 1; i = i->NextGate )
              ;
            WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v4 + 240) = WorkItem;
            if ( !WorkItem )
            {
              v3 = -1073741670;
              break;
            }
            v21 = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context[2] + 40LL));
            *(_QWORD *)(v4 + 280) = v21;
            if ( !v21 )
            {
              IoFreeWorkItem(*(PIO_WORKITEM *)(v4 + 240));
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
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
