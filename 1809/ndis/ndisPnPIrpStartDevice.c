/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C00CA074
 * Callers:
 *     ndisPnPDispatch @ 0x1C00C8490 (ndisPnPDispatch.c)
 * Callees:
 *     ndisLogMiniportEvent @ 0x1C0016888 (ndisLogMiniportEvent.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C001CEF0 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qZ @ 0x1C0049D60 (WPP_SF_qZ.c)
 *     ndisStartDeviceSynchronous @ 0x1C00BC0B8 (ndisStartDeviceSynchronous.c)
 *     ndisScheduleStartDeviceWorkItem @ 0x1C00CA1EC (ndisScheduleStartDeviceWorkItem.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(__int64 a1, __int64 a2, _IRP *a3, _BYTE *a4, _BYTE *a5)
{
  int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // rax
  int v11; // eax
  int v12; // edi
  int started; // edi
  unsigned __int8 v14; // al
  _IO_STACK_LOCATION *v15; // rax
  int v16; // eax

  if ( (unsigned __int8)byte_1C00A0258 >= 4u )
    WPP_SF_qZ(0x1Fu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, *(const wchar_t **)(a2 + 3888));
  ndisLogMiniportEvent(a2, 0x20u);
  v8 = 4;
  *(_DWORD *)(a2 + 124) = *(_DWORD *)(a2 + 124) & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v10 = *(_QWORD *)(a2 + 3792);
  if ( *(_QWORD *)(v10 + 808) )
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    {
      WPP_SF_q(0xDFu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
      v10 = *(_QWORD *)(a2 + 3792);
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, _IRP *))(v10 + 808))(*(_QWORD *)(a2 + 4144), a3);
    v12 = v11;
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_qD(0xE0u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2, v11);
  }
  else
  {
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
      WPP_SF_q(0xE1u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a2);
    v12 = 0;
  }
  if ( v12 )
  {
    started = -1073741823;
  }
  else
  {
    v8 = 9;
    started = IoSynchronousCallDriver(*(_QWORD *)(a2 + 3872), a3);
  }
  if ( started >= 0 )
  {
    v14 = *(_BYTE *)(a2 + 32);
    if ( v14 <= 6u && (v14 != 6 || *(_BYTE *)(a2 + 33) < 0x1Eu) || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous((int *)a2);
    }
    else
    {
      v15 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v15->Control |= 1u;
      v16 = ndisScheduleStartDeviceWorkItem(a2, a3);
      if ( !v16 )
        goto LABEL_16;
      if ( (unsigned __int8)byte_1C00A025C >= 2u )
        WPP_SF_qD(0x20u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a2, v16);
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_16:
  NdisTraceLoggingDeviceStarted(a2, v8, started);
  *a5 = 0;
  return (unsigned int)started;
}
