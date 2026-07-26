/*
 * XREFs of NdisRegisterProtocolDriver @ 0x1C00CDAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00224F0 (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_Z @ 0x1C0041A88 (WPP_SF_Z.c)
 *     WPP_SF_qZL @ 0x1C00519B0 (WPP_SF_qZL.c)
 *     ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005DCF0 (--_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C00C0670 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ndisInitializeRef @ 0x1C00C4264 (ndisInitializeRef.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C00CE0CC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C00CE204 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisValidate60Protocol @ 0x1C00CE240 (ndisValidate60Protocol.c)
 *     ndisValidateProtocolDriverCharacteristicsHeader @ 0x1C00CE384 (ndisValidateProtocolDriverCharacteristicsHeader.c)
 */

NDIS_STATUS __stdcall NdisRegisterProtocolDriver(
        NDIS_HANDLE ProtocolDriverContext,
        PNDIS_PROTOCOL_DRIVER_CHARACTERISTICS ProtocolCharacteristics,
        PNDIS_HANDLE NdisProtocolHandle)
{
  _NDIS_PROTOCOL_BLOCK *v3; // rbx
  NDIS_STATUS v7; // edi
  unsigned __int8 MajorNdisVersion; // al
  _UNICODE_STRING *p_Name; // r15
  unsigned int v10; // edi
  _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  unsigned __int8 v12; // cl
  unsigned __int8 MinorNdisVersion; // dl
  unsigned int Flags; // eax
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  bool v17; // r9
  _QWORD *ProtocolDriver; // rax
  int v19; // r8d
  _QWORD *v20; // rdi
  int (__fastcall *SetOptionsHandler)(void *, void *); // rax
  int v23; // eax
  void *v24; // rcx
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-50h]
  PVOID P; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING String2; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING v30; // [rsp+48h] [rbp-28h] BYREF
  UNICODE_STRING v31; // [rsp+58h] [rbp-18h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF

  *(_DWORD *)&String2.Length = 786442;
  String2.Buffer = L"TCPIP";
  v3 = 0LL;
  v32 = 0;
  v30.Buffer = L"TCPIP6";
  *(_DWORD *)&v30.Length = 917516;
  v31.Buffer = L"NDISTEST6";
  *(_DWORD *)&v31.Length = 1310738;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_Z(0xAu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, &ProtocolCharacteristics->Name.Length);
  if ( !ndisNsiInitialized )
    RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
  ndisReferencePackage((__int64)&ndisPkgs);
  v7 = ndisValidateProtocolDriverCharacteristicsHeader(ProtocolCharacteristics, &v32);
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
        goto LABEL_31;
      }
      p_Name = &ProtocolCharacteristics->Name;
      v10 = ProtocolCharacteristics->Name.Length + 890;
      PoolWithTag = (_NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x6270444Eu);
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
        v3->IsIPv6 = RtlCompareUnicodeString(&v3->Name, &v30, 0) == 0;
        v3->IsNdisTest6 = RtlCompareUnicodeString(&v3->Name, &v31, 0) == 0;
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
        v15 = ProtocolCharacteristics->MajorNdisVersion;
        if ( v15 > 6u || v15 == 6 && ProtocolCharacteristics->MinorNdisVersion )
          v3->DirectOidRequestCompleteHandler = ProtocolCharacteristics->DirectOidRequestCompleteHandler;
        ndisInitializeRef((__int64)&v3->Ref, 15);
        v16 = v3->MajorNdisVersion;
        v17 = v16 <= 6u && (v16 != 6 || v3->MinorNdisVersion < 0x52u);
        ProtocolDriver = ndisBindGetProtocolDriver(&P, &v3->Name, 1, v17);
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v3->Bind, ProtocolDriver);
        v20 = P;
        if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 12, 0xFFFFFFFF) == 1 && v20 )
        {
          v24 = (void *)v20[3];
          if ( v24 )
            ExFreePoolWithTag(v24, 0x7274534Bu);
          v25 = v20[1];
          if ( *(_QWORD **)(v25 + 8) != v20 + 1 || (v26 = (_QWORD *)v20[2], (_QWORD *)*v26 != v20 + 1) )
            __fastfail(3u);
          *v26 = v25;
          *(_QWORD *)(v25 + 8) = v26;
          ExFreePoolWithTag(v20, 0x44745042u);
        }
        if ( v3->Bind._p )
        {
          *NdisProtocolHandle = v3;
          SetOptionsHandler = ProtocolCharacteristics->SetOptionsHandler;
          if ( SetOptionsHandler )
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
            {
              WPP_SF_q(0x5Bu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)v3);
              v23 = ProtocolCharacteristics->SetOptionsHandler(v3, v3->ProtocolDriverContext);
            }
            else
            {
              v23 = SetOptionsHandler(v3, v3->ProtocolDriverContext);
            }
            v7 = v23;
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_qD(0x5Cu, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)v3, v23);
          }
          else
          {
            if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
              WPP_SF_q(0x5Du, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)v3);
            v7 = 0;
          }
          if ( v7 )
          {
            _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3);
            ExFreePoolWithTag(v3, 0);
            v3 = 0LL;
            *NdisProtocolHandle = 0LL;
          }
          else
          {
            LOBYTE(v19) = 1;
            ndisWriteDriverNDISVersionToServiceKey(
              v3->MajorNdisVersion,
              v3->MinorNdisVersion,
              v19,
              v3->MajorDriverVersion,
              v3->MinorDriverVersion,
              (__int64)&v3->Name);
            ndisRegisterProtocolDriverCommon(v3);
          }
          goto LABEL_31;
        }
        _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(v3);
        ExFreePoolWithTag(v3, 0);
      }
      v7 = -1073741670;
    }
  }
LABEL_31:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    LODWORD(v27) = v7;
    WPP_SF_qZL(
      0xBu,
      &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids,
      (__int64)v3,
      &ProtocolCharacteristics->Name.Length,
      v27);
  }
  return v7;
}
