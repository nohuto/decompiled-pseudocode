/*
 * XREFs of ndisQueryPowerCapabilities @ 0x1C0032FA4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C012D618 (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     NdisWriteErrorLogEntry @ 0x1C0022460 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

__int64 __fastcall ndisQueryPowerCapabilities(__int64 a1)
{
  unsigned int v1; // ebx
  int v3; // edx
  PIRP Irp; // rsi
  _IO_STACK_LOCATION *v5; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v7; // edx
  int v8; // eax
  int v9; // ecx
  __int128 v10; // xmm3
  __int128 v11; // xmm2
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  _BYTE Data[4]; // [rsp+40h] [rbp-49h] BYREF
  ULONG Type; // [rsp+44h] [rbp-45h] BYREF
  ULONG RequiredSize; // [rsp+48h] [rbp-41h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-39h] BYREF
  char v20[4]; // [rsp+68h] [rbp-21h]
  _OWORD v21[4]; // [rsp+70h] [rbp-19h] BYREF

  v1 = 0;
  memset(v21, 0, sizeof(v21));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      13,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1);
  }
  *(_DWORD *)(a1 + 124) &= ~1u;
  if ( *(_QWORD *)(a1 + 3840) )
  {
    if ( IoGetDevicePropertyData(
           *(PDEVICE_OBJECT *)(a1 + 3832),
           &DEVPKEY_PciDevice_S0WakeupSupported,
           0,
           0,
           1u,
           Data,
           &RequiredSize,
           &Type) >= 0
      && Type == 17 )
    {
      *(_BYTE *)(a1 + 1288) = Data[0] != 0;
    }
    Irp = IoAllocateIrp(*(_BYTE *)(*(_QWORD *)(a1 + 3840) + 76LL) + 1, 0);
    if ( Irp )
    {
      LODWORD(v21[0]) = 65600;
      *((_QWORD *)&v21[0] + 1) = -1LL;
      v5 = Irp->Tail.Overlay.CurrentStackLocation - 1;
      memset(v5, 0, sizeof(_IO_STACK_LOCATION));
      *(_WORD *)&v5->MajorFunction = 2331;
      v5->Parameters.WMI.ProviderId = (unsigned __int64)v21;
      Irp->IoStatus.Status = -1073741637;
      KeInitializeEvent(&Event, NotificationEvent, 0);
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      CurrentStackLocation[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))&ndisCompletionRoutine;
      CurrentStackLocation[-1].Context = &Event;
      CurrentStackLocation[-1].Control = -32;
      v1 = IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 3840), Irp);
      if ( v1 == 259 )
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      if ( *(int *)v20 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = 4;
          WPP_RECORDER_SF_qL(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v7,
            14,
            15,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            a1,
            v20[0]);
        }
        goto LABEL_19;
      }
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 3760) + 120LL) & 8) != 0 )
      {
        DWORD1(v21[0]) |= 0x3C00u;
        v8 = 4;
        *((_QWORD *)&v21[1] + 1) = 0x400000004LL;
        LODWORD(v21[3]) = 4;
        *(_QWORD *)&v21[2] = 0x400000004LL;
        *((_QWORD *)&v21[2] + 1) = 0x600000004LL;
        v9 = 6;
      }
      else
      {
        v8 = v21[3];
        v9 = HIDWORD(v21[2]);
      }
      v10 = v21[0];
      v11 = v21[1];
      v12 = v21[2];
      v13 = v21[3];
      *(_OWORD *)(a1 + 1224) = v21[0];
      *(_OWORD *)(a1 + 1160) = v10;
      *(_OWORD *)(a1 + 1240) = v11;
      *(_OWORD *)(a1 + 1176) = v11;
      *(_OWORD *)(a1 + 1256) = v12;
      *(_OWORD *)(a1 + 1192) = v12;
      *(_OWORD *)(a1 + 1272) = v13;
      *(_OWORD *)(a1 + 1208) = v13;
      if ( *(_DWORD *)(a1 + 3720) == 1 )
      {
        if ( !v8 || !v9 )
          goto LABEL_19;
      }
      else
      {
        v14 = 2LL;
        while ( !*((_DWORD *)&v21[1] + v14) )
        {
          if ( ++v14 >= 7 )
            goto LABEL_19;
        }
      }
      *(_DWORD *)(a1 + 124) |= 1u;
LABEL_19:
      IoFreeIrp(Irp);
      goto LABEL_20;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        14,
        14,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        a1);
    NdisWriteErrorLogEntry((NDIS_HANDLE)a1, 0xC0001389, 0);
    v1 = -1073741670;
  }
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v3,
      14,
      16,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      a1,
      v1);
  }
  return v1;
}
