/*
 * XREFs of NdisFRegisterFilterDriver @ 0x1C00373A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     ndisQueryDriverImageName @ 0x1C0037E3C (ndisQueryDriverImageName.c)
 *     ndisWriteDriverNDISVersionToServiceKey @ 0x1C0037FBC (ndisWriteDriverNDISVersionToServiceKey.c)
 *     ndisCreateFilterDriverRegistry @ 0x1C00382C0 (ndisCreateFilterDriverRegistry.c)
 *     WPP_RECORDER_SF__guid_ @ 0x1C003EE34 (WPP_RECORDER_SF__guid_.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C008CA9C (--_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z.c)
 *     McTemplateK0zq @ 0x1C008CC60 (McTemplateK0zq.c)
 *     ?ndisBindGetFilterDriver@@YA?AV?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z @ 0x1C01028F4 (-ndisBindGetFilterDriver@@YA-AV-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@PEBU_GUID@@_N@Z.c)
 *     ndisInitializeRef @ 0x1C010372C (ndisInitializeRef.c)
 *     ?SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z @ 0x1C0109218 (-SetRunningDriver@NDIS_BIND_FILTER_DRIVER@@QEAAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisValidateFilterDriverCharacteristicsHeader @ 0x1C0109554 (ndisValidateFilterDriverCharacteristicsHeader.c)
 *     ?ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z @ 0x1C0109840 (-ndisFInvokeSetOptions@@_Y2PAGE@@AHPEAU_NDIS_FILTER_DRIVER_BLOCK@@@Z.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116B30 (--_GKRefHolder@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@QEAAPEAXI@Z.c)
 */

NDIS_STATUS __stdcall NdisFRegisterFilterDriver(
        PDRIVER_OBJECT DriverObject,
        NDIS_HANDLE FilterDriverContext,
        PNDIS_FILTER_DRIVER_CHARACTERISTICS FilterDriverCharacteristics,
        PNDIS_HANDLE NdisFilterDriverHandle)
{
  struct _NDIS_FILTER_DRIVER_BLOCK *v7; // rsi
  int (__fastcall *OidRequestHandler)(void *, _NDIS_OID_REQUEST *); // rdx
  int v9; // ecx
  NDIS_STATUS FilterDriverRegistry; // ebx
  int (__fastcall *DirectOidRequestHandler)(void *, _NDIS_OID_REQUEST *); // r8
  _BOOL8 v12; // rcx
  unsigned __int8 MajorNdisVersion; // dl
  _UNICODE_STRING *p_ServiceName; // r12
  int v15; // r8d
  int v16; // eax
  int v17; // ecx
  unsigned int v18; // r15d
  struct _NDIS_FILTER_DRIVER_BLOCK *PoolWithTag; // rax
  NDIS_BIND_FILTER_DRIVER **p_Bind; // r14
  __int64 v21; // rdx
  size_t v22; // r8
  unsigned __int8 v23; // al
  unsigned int Flags; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  NDIS_BIND_FILTER_DRIVER **FilterDriver; // rax
  NDIS_BIND_FILTER_DRIVER *v28; // rbx
  NDIS_BIND_FILTER_DRIVER *v29; // rcx
  _QWORD *v30; // rbx
  _QWORD *v31; // r15
  KIRQL v32; // al
  int v33; // r8d
  enum CallRunMode v34; // r8d
  NDIS_STATUS v36; // eax
  void *v37; // rcx
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  size_t Size; // [rsp+40h] [rbp-68h] BYREF
  PVOID P; // [rsp+48h] [rbp-60h] BYREF
  PNDIS_HANDLE v42; // [rsp+50h] [rbp-58h]
  GUID Guid; // [rsp+58h] [rbp-50h] BYREF

  v42 = NdisFilterDriverHandle;
  v7 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)FilterDriverContext,
      1u,
      0xAu,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      (char)DriverObject,
      &FilterDriverCharacteristics->FriendlyName.Length);
  KeWaitForSingleObject(&ndisPnPMutex, Executive, 0, 0, 0LL);
  FilterDriverRegistry = ndisValidateFilterDriverCharacteristicsHeader(FilterDriverCharacteristics, &Size);
  if ( FilterDriverRegistry )
  {
    if ( (byte_1C00E8042 & 4) != 0 )
      McTemplateK0zq(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        0);
    goto LABEL_46;
  }
  if ( FilterDriverCharacteristics->AttachHandler
    && FilterDriverCharacteristics->DetachHandler
    && FilterDriverCharacteristics->RestartHandler
    && FilterDriverCharacteristics->PauseHandler )
  {
    OidRequestHandler = FilterDriverCharacteristics->OidRequestHandler;
    v12 = FilterDriverCharacteristics->OidRequestCompleteHandler == 0LL;
    if ( v12 == (OidRequestHandler == 0LL) )
    {
      if ( !OidRequestHandler && FilterDriverCharacteristics->CancelOidRequestHandler )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            13,
            (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00E8042 & 4) != 0 )
          McTemplateK0zq(
            v12,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            3);
        goto LABEL_36;
      }
      MajorNdisVersion = FilterDriverCharacteristics->MajorNdisVersion;
      if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && FilterDriverCharacteristics->MinorNdisVersion )
      {
        DirectOidRequestHandler = FilterDriverCharacteristics->DirectOidRequestHandler;
        v12 = FilterDriverCharacteristics->DirectOidRequestCompleteHandler == 0LL;
        if ( v12 != (DirectOidRequestHandler == 0LL) )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(OidRequestHandler) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)OidRequestHandler,
              1,
              14,
              (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
              (char)DriverObject);
          }
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00E8042 & 4) != 0 )
            McTemplateK0zq(
              v12,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              4);
          goto LABEL_36;
        }
        if ( !DirectOidRequestHandler && FilterDriverCharacteristics->CancelDirectOidRequestHandler )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(OidRequestHandler) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)OidRequestHandler,
              1,
              15,
              (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
              (char)DriverObject);
          }
          FilterDriverRegistry = -1073676283;
          if ( (byte_1C00E8042 & 4) != 0 )
            McTemplateK0zq(
              v12,
              (unsigned int)&FilterRegistrationFailed,
              (_DWORD)DirectOidRequestHandler,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              5);
          goto LABEL_36;
        }
      }
      if ( !FilterDriverCharacteristics->SendNetBufferListsHandler
        && FilterDriverCharacteristics->CancelSendNetBufferListsHandler )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(OidRequestHandler) = 2;
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)OidRequestHandler,
            1,
            16,
            (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
            (char)DriverObject);
        }
        FilterDriverRegistry = -1073676283;
        if ( (byte_1C00E8042 & 4) != 0 )
          McTemplateK0zq(
            v12,
            (unsigned int)&FilterRegistrationFailed,
            (_DWORD)DirectOidRequestHandler,
            FilterDriverCharacteristics->FriendlyName.Buffer,
            6);
      }
      else
      {
        p_ServiceName = &FilterDriverCharacteristics->ServiceName;
        FilterDriverRegistry = ndisCreateFilterDriverRegistry((unsigned __int8)FilterDriverCharacteristics + 48);
        if ( FilterDriverRegistry )
          goto LABEL_36;
        v16 = FilterDriverCharacteristics->MajorNdisVersion;
        if ( ((unsigned __int8)v16 > 6u || (_BYTE)v16 == 6 && FilterDriverCharacteristics->MinorNdisVersion >= 0x32u)
          && (FilterDriverCharacteristics->Flags & 0xFFFFFFF8) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(OidRequestHandler) = 2;
            WPP_RECORDER_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)OidRequestHandler,
              1,
              17,
              (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
              FilterDriverCharacteristics->Flags);
          }
          FilterDriverRegistry = -1073741811;
        }
        else
        {
          v17 = p_ServiceName->Length + FilterDriverCharacteristics->UniqueName.Length;
          v18 = v17 + FilterDriverCharacteristics->FriendlyName.Length + 368;
          if ( v18 <= 0xFFFF )
          {
            PoolWithTag = (struct _NDIS_FILTER_DRIVER_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v18, 0x7666444Eu);
            v7 = PoolWithTag;
            if ( !PoolWithTag )
            {
              FilterDriverRegistry = -1073741670;
              goto LABEL_36;
            }
            memset(PoolWithTag, 0, v18);
            p_Bind = (NDIS_BIND_FILTER_DRIVER **)&v7->Bind;
            v7->Bind._p = 0LL;
            *(_WORD *)&v7->Header.Type = 260;
            v7->Header.Size = v18;
            v7->DriverObject = DriverObject;
            v7->FilterDriverContext = FilterDriverContext;
            KeInitializeSpinLock(&v7->Lock);
            LOBYTE(v21) = 5;
            ndisInitializeRef(&v7->Ref, v21);
            v22 = (unsigned int)Size;
            v7->DeviceList.Blink = &v7->DeviceList;
            v7->DeviceList.Flink = &v7->DeviceList;
            memmove(&v7->DefaultFilterCharacteristics, FilterDriverCharacteristics, v22);
            v23 = v7->DefaultFilterCharacteristics.MajorNdisVersion;
            if ( v23 <= 6u && (v23 != 6 || v7->DefaultFilterCharacteristics.MinorNdisVersion < 0x32u) )
              v7->DefaultFilterCharacteristics.Flags &= ~1u;
            Flags = v7->DefaultFilterCharacteristics.Flags;
            v7->DefaultFilterCharacteristics.FriendlyName.Buffer = (wchar_t *)&v7[1].Header.Type;
            v7->Flags = Flags;
            v25 = (__int64)&v7[1] + FilterDriverCharacteristics->FriendlyName.Length;
            v7->DefaultFilterCharacteristics.UniqueName.Buffer = (wchar_t *)v25;
            v7->DefaultFilterCharacteristics.ServiceName.Buffer = (wchar_t *)(v25
                                                                            + FilterDriverCharacteristics->UniqueName.Length);
            memmove(
              &v7[1],
              FilterDriverCharacteristics->FriendlyName.Buffer,
              FilterDriverCharacteristics->FriendlyName.Length);
            RtlUpcaseUnicodeString(
              &v7->DefaultFilterCharacteristics.UniqueName,
              &FilterDriverCharacteristics->UniqueName,
              0);
            memmove(
              v7->DefaultFilterCharacteristics.ServiceName.Buffer,
              FilterDriverCharacteristics->ServiceName.Buffer,
              p_ServiceName->Length);
            *(_QWORD *)&Guid.Data1 = 0LL;
            *(_QWORD *)Guid.Data4 = 0LL;
            if ( RtlGUIDFromString(&FilterDriverCharacteristics->UniqueName, &Guid) < 0 )
            {
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_Z(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  2u,
                  1u,
                  0x13u,
                  (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                  &FilterDriverCharacteristics->UniqueName.Length);
            }
            else
            {
              LOBYTE(v26) = 1;
              FilterDriver = (NDIS_BIND_FILTER_DRIVER **)ndisBindGetFilterDriver(&P, &Guid, v26);
              if ( p_Bind != FilterDriver )
              {
                v28 = *FilterDriver;
                *FilterDriver = 0LL;
                v29 = *p_Bind;
                if ( *p_Bind
                  && _InterlockedExchangeAdd((volatile signed __int32 *)&v29[1].DriverReady, 0xFFFFFFFF) == 1
                  && v29 )
                {
                  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder::`scalar deleting destructor'(v29);
                }
                *p_Bind = v28;
              }
              v30 = P;
              if ( P && _InterlockedExchangeAdd((volatile signed __int32 *)P + 16, 0xFFFFFFFF) == 1 && v30 )
              {
                v37 = (void *)v30[6];
                v30[6] = 0LL;
                if ( v37 )
                  ExFreePoolWithTag(v37, 0x7274534Bu);
                v38 = v30[1];
                if ( *(_QWORD **)(v38 + 8) != v30 + 1 || (v39 = (_QWORD *)v30[2], (_QWORD *)*v39 != v30 + 1) )
                  __fastfail(3u);
                *v39 = v38;
                *(_QWORD *)(v38 + 8) = v39;
                ExFreePoolWithTag(v30, 0x446C4642u);
              }
              if ( *p_Bind )
              {
                v31 = v42;
                *v42 = v7;
                if ( !FilterDriverCharacteristics->SetOptionsHandler
                  || (v36 = ndisFInvokeSetOptions(v7), (FilterDriverRegistry = v36) == 0) )
                {
                  v32 = KeAcquireSpinLockRaiseToDpc(&ndisFilterDriverListLock);
                  v7->NextFilterDriver = ndisFilterDriverList;
                  ndisFilterDriverList = v7;
                  KeReleaseSpinLock(&ndisFilterDriverListLock, v32);
                  ObfReferenceObject(ndisDriverObject);
                  ndisQueryDriverImageName(&FilterDriverCharacteristics->ServiceName, &v7->ImageName);
                  LOBYTE(v33) = 1;
                  ndisWriteDriverNDISVersionToServiceKey(
                    FilterDriverCharacteristics->MajorNdisVersion,
                    FilterDriverCharacteristics->MinorNdisVersion,
                    v33,
                    FilterDriverCharacteristics->MajorDriverVersion,
                    FilterDriverCharacteristics->MinorDriverVersion,
                    (__int64)&FilterDriverCharacteristics->ServiceName);
                  FilterDriverRegistry = 0;
                  NDIS_BIND_FILTER_DRIVER::SetRunningDriver(*p_Bind, v7, v34);
                  goto LABEL_36;
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(OidRequestHandler) = 2;
                  WPP_RECORDER_SF_D(
                    *((_QWORD *)WPP_GLOBAL_Control + 8),
                    (int)OidRequestHandler,
                    1,
                    21,
                    (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                    v36);
                }
                *v31 = 0LL;
LABEL_46:
                if ( !FilterDriverRegistry )
                  goto LABEL_36;
                goto LABEL_47;
              }
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              {
                LOBYTE(OidRequestHandler) = 2;
                WPP_RECORDER_SF__guid_(
                  *((_QWORD *)WPP_GLOBAL_Control + 8),
                  (int)OidRequestHandler,
                  1,
                  20,
                  (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
                  (__int64)&Guid);
              }
            }
            FilterDriverRegistry = -1073741823;
LABEL_47:
            if ( v7 )
            {
              _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(v7, (unsigned int)OidRequestHandler);
              ExFreePoolWithTag(v7, 0);
            }
            goto LABEL_36;
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(OidRequestHandler) = 2;
            WPP_RECORDER_SF_q(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              (int)OidRequestHandler,
              1,
              18,
              (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
              (char)DriverObject);
          }
          FilterDriverRegistry = -1073741811;
          if ( (byte_1C00E8042 & 4) != 0 )
            McTemplateK0zq(
              v17,
              (unsigned int)&FilterRegistrationFailed,
              v15,
              FilterDriverCharacteristics->FriendlyName.Buffer,
              7);
        }
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(OidRequestHandler) = 2;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (int)OidRequestHandler,
          1,
          12,
          (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
          (char)DriverObject);
      }
      FilterDriverRegistry = -1073676283;
      if ( (byte_1C00E8042 & 4) != 0 )
        McTemplateK0zq(
          v12,
          (unsigned int)&FilterRegistrationFailed,
          (_DWORD)DirectOidRequestHandler,
          FilterDriverCharacteristics->FriendlyName.Buffer,
          2);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(OidRequestHandler) = 2;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)OidRequestHandler,
        1,
        11,
        (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
        (char)DriverObject);
    }
    FilterDriverRegistry = -1073676283;
    if ( (byte_1C00E8042 & 4) != 0 )
    {
      McTemplateK0zq(
        v9,
        (unsigned int)&FilterRegistrationFailed,
        (_DWORD)DirectOidRequestHandler,
        FilterDriverCharacteristics->FriendlyName.Buffer,
        1);
      goto LABEL_46;
    }
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(OidRequestHandler) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)OidRequestHandler,
      1,
      22,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      FilterDriverRegistry);
  }
  KeReleaseMutex(&ndisPnPMutex, 0);
  return FilterDriverRegistry;
}
