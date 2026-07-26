/*
 * XREFs of ndisWMIDispatch @ 0x1C00B537C
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C00B5360 (ndisWMIIrpDispatch.c)
 *     NdisWdfDeviceWmiHandler @ 0x1C00F2210 (NdisWdfDeviceWmiHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisWmiQueryAllData @ 0x1C00B4384 (ndisWmiQueryAllData.c)
 *     ndisWmiExecuteMethod @ 0x1C00B4A84 (ndisWmiExecuteMethod.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00B5580 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiRegister @ 0x1C00CCD5C (ndisWmiRegister.c)
 *     ndisWmiEnableEvents @ 0x1C00CFBD0 (ndisWmiEnableEvents.c)
 *     ndisDummyHandler @ 0x1C00EE614 (ndisDummyHandler.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00F59FC (ndisWmiChangeSingleInstance.c)
 *     ndisWmiDisableEvents @ 0x1C00F61F8 (ndisWmiDisableEvents.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r13d
  __int64 FileName; // r15
  unsigned int LowPart; // r12d
  __int64 Parameters; // r14
  unsigned int MinorFunction; // r9d
  int AllData; // eax
  int v13; // ebx
  unsigned __int64 v14; // rax
  unsigned __int16 v16; // cx
  __int64 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+68h] [rbp+10h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LODWORD(v18) = 0;
  FileName = (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = (__int64)CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qq(0x49u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, a2, a3);
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, a2, a3);
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    return IofCallDriver(a2->NextDeviceObject, a3);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_q(0x51u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
      AllData = ndisWmiDisableEvents(a2, FileName);
      goto LABEL_12;
    }
    if ( !CurrentStackLocation->MinorFunction )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
      AllData = ndisWmiQueryAllData(a2, FileName, Parameters, LowPart, (unsigned int *)&v18);
      goto LABEL_12;
    }
    if ( MinorFunction == 1 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_q(0x4Cu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
      AllData = ndisWmiQuerySingleInstance(a2, v17);
LABEL_12:
      v13 = AllData;
      goto LABEL_13;
    }
    if ( MinorFunction == 2 )
    {
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_q(0x4Du, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
      AllData = ndisWmiChangeSingleInstance(a2);
      goto LABEL_12;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( (unsigned __int8)byte_1C00A0261 >= 4u )
          WPP_SF_q(0x50u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
        AllData = ndisWmiEnableEvents(a2, FileName);
        goto LABEL_12;
      }
LABEL_35:
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        WPP_SF_qD(0x54u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2, MinorFunction);
      v13 = -1073741808;
      goto LABEL_14;
    }
    if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    {
      WPP_SF_q(0x4Eu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
      if ( (unsigned __int8)byte_1C00A0261 >= 4u )
      {
        WPP_SF_q(0x41u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
        if ( (unsigned __int8)byte_1C00A0261 >= 4u )
        {
          v16 = 66;
LABEL_50:
          WPP_SF_q(v16, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
          goto LABEL_51;
        }
      }
    }
    goto LABEL_51;
  }
  if ( MinorFunction != 6 )
  {
    if ( MinorFunction != 7 )
    {
      if ( MinorFunction == 8 )
      {
        if ( (unsigned __int8)byte_1C00A0261 >= 4u )
          WPP_SF_q(0x4Au, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
        AllData = ndisWmiRegister((int)a2, (__int64)&v18);
        goto LABEL_12;
      }
      if ( MinorFunction == 9 )
      {
        if ( (unsigned __int8)byte_1C00A0261 >= 4u )
          WPP_SF_q(0x4Fu, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
        AllData = ndisWmiExecuteMethod((char *)a2, Parameters, LowPart, (int *)&v18);
        goto LABEL_12;
      }
      goto LABEL_35;
    }
    if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    {
      v16 = 83;
      goto LABEL_50;
    }
LABEL_51:
    v13 = -1073741637;
    goto LABEL_14;
  }
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_q(0x52u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2);
  v13 = -1073741637;
LABEL_13:
  if ( v13 != 259 )
  {
LABEL_14:
    a3->IoStatus.Status = v13;
    if ( v13 == -1073741789 )
    {
      v14 = (unsigned int)v18;
    }
    else
    {
      if ( v13 >= 0 )
        v4 = v18;
      v14 = v4;
    }
    a3->IoStatus.Information = v14;
    IofCompleteRequest(a3, 0);
    goto LABEL_19;
  }
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
LABEL_19:
  if ( (unsigned __int8)byte_1C00A0261 >= 4u )
    WPP_SF_qD(0x55u, &WPP_52f7bea8bd1d3ca14d06195c90839a85_Traceguids, (__int64)a2, v13);
  return v13;
}
