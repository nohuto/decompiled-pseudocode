/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C0037860
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C0037C6C (WPP_RECORDER_SF_qZL.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D9C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FBC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ?ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C00380F4 (-ndisValidate60Protocol@@YAHPEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C00920BC (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C0102E84 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ?ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@@Z @ 0x1C0109310 (-ndisInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_PROTOCOL_BLOCK@@PEAU_NDIS_PROTOCOL_DRIVER_CHARACTERI.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0109420 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C0109614 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  struct _NDIS_PROTOCOL_BLOCK *v3; // rbx
  NDIS_STATUS v7; // edi
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // r15
  unsigned int v10; // edi
  struct _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 v12; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  __int64 v15; // rdx
  unsigned __int8 v16; // al
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned __int8 v19; // al
  __int64 ProtocolDriver; // rax
  unsigned int v21; // edx
  _QWORD *v22; // rdi
  unsigned int v23; // edx
  int v24; // r8d
  int v25; // edx
  void *v27; // rcx
  __int64 v28; // rdx
  _QWORD *v29; // rcx
  PVOID P; // [rsp+40h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+48h] [rbp-38h] BYREF
  UNICODE_STRING v32; // [rsp+58h] [rbp-28h] BYREF
  UNICODE_STRING v33; // [rsp+68h] [rbp-18h] BYREF
  int v34; // [rsp+C8h] [rbp+48h] BYREF

  *(_QWORD *)&String2.Length = 786442LL;
  String2.Buffer = L"TCPIP";
  LOBYTE(v3) = 0;
  v34 = 0;
  v32.Buffer = L"TCPIP6";
  *(_QWORD *)&v32.Length = 917516LL;
  v33.Buffer = L"NDISTEST6";
  *(_QWORD *)&v33.Length = 1310738LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xDu,
      0xAu,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      &ProtocolCharacteristics->Name.Length);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(ProtocolDriverContext);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v34);
  if ( !v7 )
  {
    v7 = -1073676283;
    if ( (unsigned int)ndisValidate60Protocol(ProtocolCharacteristics) != -1073676283 )
    {
      MajorNdisVersion = ProtocolCharacteristics->MajorNdisVersion;
      if ( (MajorNdisVersion > 6u || MajorNdisVersion == 6 && ProtocolCharacteristics->MinorNdisVersion >= 0x32u)
        && (ProtocolCharacteristics->Flags & 0xFFFFFF9) != 0 )
      {
        v7 = -1073741811;
        goto LABEL_27;
      }
      p_Name = &ProtocolCharacteristics->Name;
      v10 = ProtocolCharacteristics->Name.Length + 890;
      PoolWithTag = (struct _NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6270444Eu);
      v3 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v10);
        v3->Bind._p = 0LL;
        v3->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        v3->NotifyBindCompleteWorkItem.m_context = v3;
        v3->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        v3->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
        v3->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v3->NotifyBindCompleteWorkItem;
        v3->NotifyBindCompleteWorkItem.m_queued = 0;
        KeInitializeMutex(&v3->Mutex, 0xFFFFu);
        v3->Header.Size = v10;
        *(_WORD *)&v3->Header.Type = 259;
        v12 = ProtocolCharacteristics->MajorNdisVersion;
        v3->MajorNdisVersion = v12;
        MinorNdisVersion = ProtocolCharacteristics->MinorNdisVersion;
        v3->MinorNdisVersion = MinorNdisVersion;
        v3->MajorDriverVersion = ProtocolCharacteristics->MajorDriverVersion;
        v3->MinorDriverVersion = ProtocolCharacteristics->MinorDriverVersion;
        v3->Name.Buffer = (wchar_t *)&v3[1].Header.Type;
        v3->ProtocolDriverContext = ProtocolDriverContext;
        Flags = ProtocolCharacteristics->Flags;
        v3->Flags = Flags;
        if ( v12 <= 6u && (v12 != 6 || MinorNdisVersion < 0x32u) )
          v3->Flags = Flags & 0xF0000000;
        v3->Name.Length = p_Name->Length;
        v3->Name.MaximumLength = p_Name->Length;
        RtlUpcaseUnicodeString(&v3->Name, &ProtocolCharacteristics->Name, 0);
        v3->IsIPv4 = RtlCompareUnicodeString(&v3->Name, &String2, 0) == 0;
        v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v32, 0) == 0;
        v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v33, 0) == 0;
        v3->BindAdapterHandlerEx = ProtocolCharacteristics->BindAdapterHandlerEx;
        v3->UnbindAdapterHandlerEx = ProtocolCharacteristics->UnbindAdapterHandlerEx;
        v3->OpenAdapterCompleteHandlerEx = ProtocolCharacteristics->OpenAdapterCompleteHandlerEx;
        v3->CloseAdapterCompleteHandlerEx = ProtocolCharacteristics->CloseAdapterCompleteHandlerEx;
        v3->PnPEventHandler = (int (__fastcall *)(void *, _NET_PNP_EVENT *))ProtocolCharacteristics->NetPnPEventHandler;
        v3->UninstallHandler = ProtocolCharacteristics->UninstallHandler;
        v3->StatusHandlerEx = ProtocolCharacteristics->StatusHandlerEx;
        v3->ReceiveNetBufferListsHandler = ProtocolCharacteristics->ReceiveNetBufferListsHandler;
        v3->SendNetBufferListsCompleteHandler = ProtocolCharacteristics->SendNetBufferListsCompleteHandler;
        v3->OidRequestCompleteHandler = ProtocolCharacteristics->OidRequestCompleteHandler;
        v16 = ProtocolCharacteristics->MajorNdisVersion;
        if ( v16 > 6u || v16 == 6 && ProtocolCharacteristics->MinorNdisVersion )
          v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
        LOBYTE(v15) = 15;
        ndisInitializeRef(&v3->Ref, v15);
        v19 = v3->MajorNdisVersion;
        LOBYTE(v18) = v19 <= 6u && (v19 != 6 || v3->MinorNdisVersion < 0x52u);
        LOBYTE(v17) = 1;
        ProtocolDriver = ndisBindGetProtocolDriver(&P, &v3->Name, v17, v18);
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v3->Bind, ProtocolDriver);
        v22 = P;
        if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 && v22 )
        {
          v27 = (void *)v22[3];
          v22[3] = 0LL;
          if ( v27 )
            ExFreePoolWithTag(v27, 0x7274534Bu);
          v28 = v22[1];
          if ( *(_QWORD **)(v28 + 8) != v22 + 1 || (v29 = (_QWORD *)v22[2], (_QWORD *)*v29 != v22 + 1) )
            __fastfail(3u);
          *v29 = v28;
          *(_QWORD *)(v28 + 8) = v29;
          ExFreePoolWithTag(v22, 0x44745042u);
        }
        if ( v3->Bind._p )
        {
          *NdisProtocolHandle = v3;
          v7 = ndisInvokeSetOptions(v3, ProtocolCharacteristics);
          if ( v7 )
          {
            _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v23);
            ExFreePoolWithTag(v3, 0);
            LOBYTE(v3) = 0;
            *NdisProtocolHandle = 0LL;
          }
          else
          {
            LOBYTE(v24) = 1;
            ndisWriteDriverNDISVersionToServiceKey(
              v3->MajorNdisVersion,
              v3->MinorNdisVersion,
              v24,
              v3->MajorDriverVersion,
              v3->MinorDriverVersion,
              (__int64)&v3->Name);
            ndisRegisterProtocolDriverCommon(v3);
            v7 = 0;
          }
          goto LABEL_27;
        }
        _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3, v21);
        ExFreePoolWithTag(v3, 0);
      }
      v7 = -1073741670;
    }
  }
LABEL_27:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v25,
      13,
      11,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)v3,
      (__int64)&ProtocolCharacteristics->Name,
      v7);
  return v7;
}
