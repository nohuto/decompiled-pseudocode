/*
 * XREFs of ndisPowerDispatch @ 0x1C0024CD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisQueuePowerIrp @ 0x1C0069BBC (ndisQueuePowerIrp.c)
 *     ndisSetPower @ 0x1C00B887C (ndisSetPower.c)
 *     ndisQueryPower @ 0x1C010A6B4 (ndisQueryPower.c)
 */

__int64 __fastcall ndisPowerDispatch(__int64 a1, _IRP *a2)
{
  _BYTE *v2; // rdi
  _DEVICE_OBJECT *v5; // rbp
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  NTSTATUS Power; // eax
  unsigned int v8; // esi
  _IO_STACK_LOCATION *v10; // rax
  _IO_STACK_LOCATION *v11; // rax

  v2 = *(_BYTE **)(a1 + 64);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qq(107LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, a2);
  if ( *v2 != 17 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_qq(108LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, a1, a2);
    v8 = -1073741808;
    a2->IoStatus.Status = -1073741808;
    goto LABEL_30;
  }
  v5 = (_DEVICE_OBJECT *)*((_QWORD *)v2 + 484);
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_q(109LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 0u:
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
        WPP_SF_q(111LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
      CurrentStackLocation->Parameters.Read.Length = *((_DWORD *)v2 + 333);
      v10 = a2->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v10[-1].MajorFunction = *(_OWORD *)&v10->MajorFunction;
      *(_OWORD *)&v10[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v10->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&v10[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v10->Parameters.ReadWriteConfig.Length;
      v10[-1].FileObject = v10->FileObject;
      v10[-1].Control = 0;
      v11 = a2->Tail.Overlay.CurrentStackLocation;
      v11[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisWaitWakeIoCompletion;
      v11[-1].Context = v2;
      v11[-1].Control = -32;
      goto LABEL_25;
    case 1u:
      if ( (unsigned __int8)byte_1C00A025D >= 4u )
      {
        WPP_SF_q(110LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
        CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
      }
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v8 = IoSynchronousCallDriver(v5, a2);
      a2->IoStatus.Status = v8;
LABEL_30:
      IofCompleteRequest(a2, 0);
      goto LABEL_14;
    case 2u:
      if ( !KeGetCurrentIrql() )
      {
        if ( (unsigned __int8)byte_1C00A025D >= 4u )
          WPP_SF_q(113LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
        Power = ndisSetPower(a2);
        goto LABEL_13;
      }
      goto LABEL_34;
  }
  if ( CurrentStackLocation->MinorFunction != 3 )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
    {
      WPP_SF_qD(114LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, CurrentStackLocation->MinorFunction);
      CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
    }
    ++a2->CurrentLocation;
    a2->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
LABEL_25:
    Power = IofCallDriver(v5, a2);
LABEL_13:
    v8 = Power;
    goto LABEL_14;
  }
  if ( !KeGetCurrentIrql() )
  {
    if ( (unsigned __int8)byte_1C00A025D >= 4u )
      WPP_SF_q(112LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2);
    Power = ndisQueryPower(a2);
    goto LABEL_13;
  }
LABEL_34:
  ndisQueuePowerIrp(v2, a2);
  v8 = 259;
LABEL_14:
  if ( (unsigned __int8)byte_1C00A025D >= 4u )
    WPP_SF_qD(115LL, &WPP_42361dd9a74b3d276ab6054e0e6a2aa7_Traceguids, v2, v8);
  return v8;
}
