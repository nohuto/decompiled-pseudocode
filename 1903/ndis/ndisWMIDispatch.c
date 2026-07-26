/*
 * XREFs of ndisWMIDispatch @ 0x1C00191AC
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C0018780 (ndisWMIIrpDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ndisWmiQuerySingleInstance @ 0x1C0018CD0 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C001DEEC (ndisWmiExecuteMethod.c)
 *     ?ndisWmiEnableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C0027ACC (-ndisWmiEnableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0027E40 (-ndisWmiRegister@@YAJPEAU_NDIS_MINIPORT_BLOCK@@_KPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     ndisDummyHandler @ 0x1C0094DBC (ndisDummyHandler.c)
 *     ?ndisWmiDisableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z @ 0x1C00A73D4 (-ndisWmiDisableEvents@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00A834C (ndisWmiChangeSingleInstance.c)
 *     ndisWmiQueryAllData @ 0x1C00A8D0C (ndisWmiQueryAllData.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r13d
  struct _NDIS_MINIPORT_BLOCK *v6; // rdi
  struct _GUID *FileName; // r14
  unsigned int LowPart; // r12d
  struct WMIREGINFOW *Parameters; // r15
  unsigned int MinorFunction; // edx
  int AllData; // eax
  int v13; // ebx
  unsigned __int64 v14; // rax
  int v15; // edx
  int v17; // r9d
  char v18; // [rsp+28h] [rbp-40h]
  unsigned int v19; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  v19 = 0;
  v6 = a2;
  FileName = (struct _GUID *)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (struct WMIREGINFOW *)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v18 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      18,
      73,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      v18,
      (char)Irp);
  }
  if ( v6->Header.Type != 17 )
    return ndisDummyHandler(a1);
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
  {
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(v6->NextDeviceObject, Irp);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction > 5 )
  {
    switch ( MinorFunction )
    {
      case 6u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 82;
          goto LABEL_56;
        }
        break;
      case 7u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v17 = 83;
          goto LABEL_56;
        }
        break;
      case 8u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(MinorFunction) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            MinorFunction,
            18,
            74,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            (char)v6);
        }
        AllData = ndisWmiRegister(v6, (unsigned __int64)FileName, Parameters, LowPart, &v19);
        goto LABEL_12;
      case 9u:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(MinorFunction) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            MinorFunction,
            18,
            79,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            (char)v6);
        }
        AllData = ndisWmiExecuteMethod((char)v6, (__int64)&v19);
        goto LABEL_12;
      default:
        goto LABEL_33;
    }
LABEL_57:
    v13 = -1073741637;
    goto LABEL_13;
  }
  if ( MinorFunction == 5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(MinorFunction) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        MinorFunction,
        18,
        81,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)v6);
    }
    AllData = ndisWmiDisableEvents(v6, FileName);
    goto LABEL_12;
  }
  if ( !CurrentStackLocation->MinorFunction )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(MinorFunction) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        MinorFunction,
        18,
        75,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)v6);
    }
    AllData = ndisWmiQueryAllData(v6, 0LL, (struct _NDIS_CO_VC_PTR_BLOCK *)FileName, LowPart, (__int64)&v19);
    goto LABEL_12;
  }
  if ( MinorFunction != 1 )
  {
    if ( MinorFunction == 2 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(MinorFunction) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          MinorFunction,
          18,
          77,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)v6);
      }
      AllData = ndisWmiChangeSingleInstance((char)v6);
      goto LABEL_12;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(MinorFunction) = 4;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            MinorFunction,
            18,
            80,
            (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
            (char)v6);
        }
        AllData = ndisWmiEnableEvents(v6, FileName);
        goto LABEL_12;
      }
LABEL_33:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(MinorFunction) = 4;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          MinorFunction,
          18,
          84,
          (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
          (char)v6,
          CurrentStackLocation->MinorFunction);
      }
      v13 = -1073741808;
      goto LABEL_13;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v17 = 78;
LABEL_56:
      LOBYTE(MinorFunction) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        MinorFunction,
        18,
        v17,
        (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
        (char)v6);
      goto LABEL_57;
    }
    goto LABEL_57;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(MinorFunction) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      MinorFunction,
      18,
      76,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)v6);
  }
  AllData = ndisWmiQuerySingleInstance(v6, 0LL, (__int64)Parameters, LowPart, &v19);
LABEL_12:
  v13 = AllData;
LABEL_13:
  Irp->IoStatus.Status = v13;
  if ( v13 == -1073741789 )
  {
    v14 = v19;
  }
  else
  {
    if ( v13 >= 0 )
      v4 = v19;
    v14 = v4;
  }
  Irp->IoStatus.Information = v14;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v15,
      18,
      85,
      (struct _GUID *)&WPP_2fa07f5a7b83311c1860bef7c182ade8_Traceguids,
      (char)v6,
      v13);
  }
  return v13;
}
