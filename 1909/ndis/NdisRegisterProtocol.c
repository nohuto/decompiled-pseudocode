/*
 * XREFs of NdisRegisterProtocol @ 0x1C00930F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_qZL @ 0x1C0037C5C (WPP_RECORDER_SF_qZL.c)
 *     ?ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0037D8C (-ndisRegisterProtocolDriverCommon@@YAXPEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FAC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     ?ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z @ 0x1C0092758 (-ndisValidateLegacyProtocols@@YAEPEAU_NDIS50_PROTOCOL_CHARACTERISTICS@@@Z.c)
 *     ?reset@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z @ 0x1C0102CA8 (-reset@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXPEAVKRefHolder@1@@Z.c)
 *     ?ndisBindGetProtocolDriver@@YA?AV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z @ 0x1C0102E84 (-ndisBindGetProtocolDriver@@YA-AV-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@PEAU_UNICODE_STRING@@_N1@Z.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ??4?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0109420 (--4-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ndisInitializeNsi @ 0x1C010A8C4 (ndisInitializeNsi.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116DC8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

PVOID __fastcall NdisRegisterProtocol(
        int *a1,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        struct _NDIS50_PROTOCOL_CHARACTERISTICS *a3,
        unsigned int a4)
{
  struct _NDIS_PROTOCOL_BLOCK *v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // edx
  PVOID result; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  _UNICODE_STRING *p_Name; // r15
  __int64 ProtocolDriver; // rax
  _QWORD *v19; // rbx
  void *v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  PVOID v23; // rbx
  USHORT v24; // bp
  struct _NDIS_PROTOCOL_BLOCK *PoolWithTag; // rax
  __int64 v26; // rdx
  unsigned __int8 MajorNdisVersion; // al
  PVOID P[2]; // [rsp+40h] [rbp-38h] BYREF
  PVOID v29; // [rsp+90h] [rbp+18h] BYREF

  v29 = 0LL;
  LOBYTE(v8) = 0;
  if ( !ndisNsiInitialized )
    ndisInitializeNsi(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0xEu,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      &a3->Ndis40Chars.Name.Length);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( a3->Ndis40Chars.MajorNdisVersion < 4u )
  {
    DbgPrint("Ndis: NdisRegisterProtocol Ndis 3.0 protocols are not supported.\n");
LABEL_7:
    v11 = -1073676284;
    goto LABEL_8;
  }
  if ( a3->Ndis40Chars.MajorNdisVersion == 4 )
  {
    if ( a3->Ndis40Chars.MinorNdisVersion )
      goto LABEL_7;
    v14 = 144;
  }
  else
  {
    if ( a3->Ndis40Chars.MajorNdisVersion != 5 || a3->Ndis40Chars.MinorNdisVersion > 1u )
      goto LABEL_7;
    v14 = 208;
  }
  if ( a4 >= v14 && ndisValidateLegacyProtocols(a3, v9, v10) )
  {
    LOBYTE(v16) = 1;
    p_Name = &a3->Ndis40Chars.Name;
    LOBYTE(v15) = 1;
    ProtocolDriver = ndisBindGetProtocolDriver(P, (char *)&a3->2 + 88, v15, v16);
    KRef<NDIS_BIND_PROTOCOL_DRIVER>::operator=(&v29, ProtocolDriver);
    v19 = P[0];
    if ( P[0] && _InterlockedExchangeAdd((volatile signed __int32 *)P[0] + 12, 0xFFFFFFFF) == 1 && v19 )
    {
      v20 = (void *)v19[3];
      v19[3] = 0LL;
      if ( v20 )
        ExFreePoolWithTag(v20, 0x7274534Bu);
      v21 = v19[1];
      if ( *(_QWORD **)(v21 + 8) != v19 + 1 || (v22 = (_QWORD *)v19[2], (_QWORD *)*v22 != v19 + 1) )
        __fastfail(3u);
      *v22 = v21;
      *(_QWORD *)(v21 + 8) = v22;
      ExFreePoolWithTag(v19, 0x44745042u);
    }
    v23 = v29;
    if ( v29 )
    {
      v24 = p_Name->Length + 890;
      PoolWithTag = (struct _NDIS_PROTOCOL_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x6270444Eu);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, v24);
        v8->Bind._p = 0LL;
        v8->NotifyBindCompleteWorkItem.m_callback = _NDIS_PROTOCOL_BLOCK::NotifyBindComplete;
        v8->NotifyBindCompleteWorkItem.m_context = v8;
        v8->NotifyBindCompleteWorkItem.m_workitem.WorkerRoutine = (void (__fastcall *)(void *))KWorkItemBase<MINIPORT_HOOK_DRIVER,KCoalescingWorkItem<MINIPORT_HOOK_DRIVER>>::CallbackThunk;
        v8->NotifyBindCompleteWorkItem.m_workitem.Parameter = &v8->NotifyBindCompleteWorkItem;
        v8->NotifyBindCompleteWorkItem.m_workitem.List.Flink = 0LL;
        v8->NotifyBindCompleteWorkItem.m_queued = 0;
        if ( &v8->Bind != (KRef<NDIS_BIND_PROTOCOL_DRIVER> *)&v29 )
          KRef<NDIS_BIND_PROTOCOL_DRIVER>::reset(&v8->Bind, v23);
        KeInitializeMutex(&v8->Mutex, 0xFFFFu);
        *(_WORD *)&v8->Header.Type = 259;
        v8->Header.Size = v24;
        v8->MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        v8->MinorNdisVersion = a3->Ndis40Chars.MinorNdisVersion;
        v8->Name.Buffer = (wchar_t *)&v8[1].Header.Type;
        v8->Reserved = a3->Ndis40Chars.Reserved;
        v8->Flags = a3->Ndis40Chars.Reserved & 0xF0000000;
        v8->Name.Length = p_Name->Length;
        v8->Name.MaximumLength = p_Name->Length;
        RtlUpcaseUnicodeString(&v8->Name, &a3->Ndis40Chars.Name, 0);
        v8->OpenAdapterCompleteHandler = a3->Ndis40Chars.OpenAdapterCompleteHandler;
        v8->CloseAdapterCompleteHandler = a3->Ndis40Chars.CloseAdapterCompleteHandler;
        v8->SendCompleteHandler = a3->Ndis40Chars.SendCompleteHandler;
        v8->TransferDataCompleteHandler = a3->Ndis40Chars.TransferDataCompleteHandler;
        v8->ResetCompleteHandler = a3->Ndis40Chars.ResetCompleteHandler;
        v8->RequestCompleteHandler = a3->Ndis40Chars.RequestCompleteHandler;
        v8->ReceiveHandler = a3->Ndis40Chars.ReceiveHandler;
        v8->ReceiveCompleteHandler = a3->Ndis40Chars.ReceiveCompleteHandler;
        v8->StatusHandlerEx = (void (__fastcall *)(void *, _NDIS_STATUS_INDICATION *))a3->Ndis40Chars.StatusHandler;
        v8->StatusCompleteHandler = a3->Ndis40Chars.StatusCompleteHandler;
        MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        if ( a3->Ndis40Chars.MajorNdisVersion >= 4u )
        {
          v8->ReceivePacketHandler = a3->Ndis40Chars.ReceivePacketHandler;
          v8->BindAdapterHandler = a3->Ndis40Chars.BindAdapterHandler;
          v8->UnbindAdapterHandler = a3->Ndis40Chars.UnbindAdapterHandler;
          v8->PnPEventHandler = a3->Ndis40Chars.PnPEventHandler;
          v8->UnloadHandler = a3->Ndis40Chars.UnloadHandler;
          MajorNdisVersion = a3->Ndis40Chars.MajorNdisVersion;
        }
        if ( MajorNdisVersion == 5 )
        {
          v8->CoSendCompleteHandler = a3->CoSendCompleteHandler;
          v8->CoStatusHandlerEx = (void (__fastcall *)(void *, void *, _NDIS_STATUS_INDICATION *))a3->CoStatusHandler;
          v8->CoReceivePacketHandler = a3->CoReceivePacketHandler;
          v8->CoAfRegisterNotifyHandler = a3->CoAfRegisterNotifyHandler;
        }
        *a2 = v8;
        LOBYTE(v26) = 15;
        ndisInitializeRef(&v8->Ref, v26);
        ndisRegisterProtocolDriverCommon(v8);
        ndisWriteDriverNDISVersionToServiceKey(v8->MajorNdisVersion, v8->MinorNdisVersion, 0, 0, 0, (__int64)&v8->Name);
        v11 = 0;
      }
      else
      {
        v11 = -1073741670;
      }
    }
    else
    {
      v11 = -1073741670;
    }
  }
  else
  {
    v11 = -1073676283;
  }
LABEL_8:
  *a1 = v11;
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      5u,
      0xFu,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)v8,
      &a3->Ndis40Chars.Name.Length,
      v11);
  result = v29;
  if ( v29 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29 + 12, 0xFFFFFFFF) == 1 )
      return (PVOID)KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'(v29);
  }
  return result;
}
