/*
 * XREFs of ndisPowerDispatch @ 0x1C0019F10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisSetPower @ 0x1C0013948 (ndisSetPower.c)
 *     ?ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00A5614 (-ndisQueuePowerIrp@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryPower @ 0x1C012A4FC (ndisQueryPower.c)
 */

__int64 __fastcall ndisPowerDispatch(__int64 a1, PIRP Irp, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  PIRP v5; // rbx
  char v6; // si
  _DEVICE_OBJECT *v7; // rbp
  __int64 CurrentStackLocation; // rsi
  int v9; // edx
  unsigned int Power; // eax
  int v11; // edx
  unsigned int v12; // esi
  _IO_STACK_LOCATION *v14; // rax
  _IO_STACK_LOCATION *v15; // rax
  char v16; // [rsp+30h] [rbp-28h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = Irp;
  v6 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = (char)Irp;
    LOBYTE(Irp) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Irp,
      14,
      114,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v4,
      v16);
  }
  if ( *(_BYTE *)v4 != 17 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Irp) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Irp,
        14,
        115,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v6,
        (char)v5);
    }
    v12 = -1073741808;
    v5->IoStatus.Status = -1073741808;
    goto LABEL_30;
  }
  v7 = *(_DEVICE_OBJECT **)(v4 + 3840);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(Irp) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)Irp,
      14,
      116,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v4);
  }
  CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
  v9 = *(unsigned __int8 *)(CurrentStackLocation + 1);
  switch ( *(_BYTE *)(CurrentStackLocation + 1) )
  {
    case 0:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          118,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v4);
      }
      *(_DWORD *)(CurrentStackLocation + 8) = *(_DWORD *)(v4 + 1332);
      v14 = v5->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v14[-1].MajorFunction = *(_OWORD *)&v14->MajorFunction;
      *(_OWORD *)&v14[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v14->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v14[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v14->Parameters.ReadWriteConfig.Length;
      v14[-1].FileObject = v14->FileObject;
      v14[-1].Control = 0;
      v15 = v5->Tail.Overlay.CurrentStackLocation;
      v15[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v15[-1].Context = (void *)v4;
      v15[-1].Control = -32;
      goto LABEL_25;
    case 1:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          14,
          117,
          (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
          v4);
        CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
      }
      *(_OWORD *)(CurrentStackLocation - 72) = *(_OWORD *)CurrentStackLocation;
      *(_OWORD *)(CurrentStackLocation - 56) = *(_OWORD *)(CurrentStackLocation + 16);
      *(_OWORD *)(CurrentStackLocation - 40) = *(_OWORD *)(CurrentStackLocation + 32);
      *(_QWORD *)(CurrentStackLocation - 24) = *(_QWORD *)(CurrentStackLocation + 48);
      *(_BYTE *)(CurrentStackLocation - 69) = 0;
      v12 = IoSynchronousCallDriver(v7, v5, a3, a4);
      v5->IoStatus.Status = v12;
LABEL_30:
      IofCompleteRequest(v5, 0);
      goto LABEL_14;
    case 2:
      if ( !KeGetCurrentIrql() )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v9,
            14,
            120,
            (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
            v4);
        }
        Power = ndisSetPower(v5, CurrentStackLocation, v4);
        goto LABEL_13;
      }
      goto LABEL_34;
  }
  if ( *(_BYTE *)(CurrentStackLocation + 1) != 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        14,
        121,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v4,
        *(_BYTE *)(CurrentStackLocation + 1));
      CurrentStackLocation = (__int64)v5->Tail.Overlay.CurrentStackLocation;
    }
    ++v5->CurrentLocation;
    v5->Tail.Overlay.CurrentStackLocation = (_IO_STACK_LOCATION *)(CurrentStackLocation + 72);
LABEL_25:
    Power = IofCallDriver(v7, v5);
LABEL_13:
    v12 = Power;
    goto LABEL_14;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        14,
        119,
        (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
        v4);
    }
    Power = ndisQueryPower(v5);
    goto LABEL_13;
  }
LABEL_34:
  ndisQueuePowerIrp((struct _NDIS_MINIPORT_BLOCK *)v4, v5);
  v12 = 259;
LABEL_14:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      14,
      122,
      (struct _GUID *)&WPP_5bf3b773190d331e3fb83968fcc6c54c_Traceguids,
      v4,
      v12);
  }
  return v12;
}
