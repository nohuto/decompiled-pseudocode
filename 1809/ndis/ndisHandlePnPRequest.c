/*
 * XREFs of ndisHandlePnPRequest @ 0x1C010ECF4
 * Callers:
 *     ndisDispatchRequest @ 0x1C00CB980 (ndisDispatchRequest.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0013E38 (ndisIfReferenceCompartmentForUser.c)
 *     ndisConfigurePeriodicReceives @ 0x1C001E5FC (ndisConfigurePeriodicReceives.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001F920 (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     NdisGetVersion @ 0x1C0025CD0 (NdisGetVersion.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisIfSetIfDescr @ 0x1C0042C40 (ndisIfSetIfDescr.c)
 *     ndisInvokeDeviceReset @ 0x1C00500CC (ndisInvokeDeviceReset.c)
 *     ndisQueryDeviceReset @ 0x1C0050914 (ndisQueryDeviceReset.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C0076F70 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C007822C (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00784EC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C007E440 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z @ 0x1C00B3008 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKKPEAPEAX@Z.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B3094 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@KPEAU_UNICODE_STRIN.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@KPEAU_UNICODE_STRING@@@Z @ 0x1C00B311C (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@KPEAU_UNICODE_STRING@@@.c)
 *     ndisHandleLegacyTransport @ 0x1C00CBB34 (ndisHandleLegacyTransport.c)
 *     ndisHandleUModePnPOp @ 0x1C00CBC50 (ndisHandleUModePnPOp.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C00E2E60 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00E2ED0 (NdisIfFreeNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C00E2FDC (ndisIfEnumerateNsiObjects.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C00EA158 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C00EA1B4 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00EA23C (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C00EA298 (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C00EA300 (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ndisEnumerateInterfaces @ 0x1C010F034 (ndisEnumerateInterfaces.c)
 *     ndisEnumerateInterfaces32 @ 0x1C0114D80 (ndisEnumerateInterfaces32.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int DeviceReset; // ebx
  unsigned int v4; // r15d
  _FILE_OBJECT *FileObject; // rax
  char *FsContext; // r12
  char v7; // cl
  unsigned int LowPart; // eax
  unsigned __int64 Options; // r14
  unsigned __int64 Length; // r13
  _IRP::<unnamed_type_AssociatedIrp> v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  const WCHAR *p_Type; // rdx
  unsigned int v21; // eax
  __int64 v22; // r9
  unsigned int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r9
  __int64 v26; // r9
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned __int64 MasterIrp; // rsi
  unsigned int v30; // r12d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  char *PoolWithTag; // rax
  char *v34; // rbx
  __int64 v35; // r9
  __int64 v36; // r9
  __int64 v37; // r9
  unsigned int v38; // r13d
  void *v39; // rdx
  char *v40; // rcx
  int v41; // eax
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int active; // eax
  unsigned __int8 v47; // dl
  unsigned int v48; // eax
  unsigned int v49; // eax
  unsigned int v50; // eax
  struct _UNICODE_STRING v51; // [rsp+50h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _UNICODE_STRING v53; // [rsp+70h] [rbp+7h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+D0h] [rbp+67h] BYREF
  void *Src; // [rsp+D8h] [rbp+6Fh] BYREF
  int v56; // [rsp+E0h] [rbp+77h] BYREF
  PVOID P; // [rsp+E8h] [rbp+7Fh]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  DeviceReset = 0;
  LODWORD(Src) = 0;
  v56 = 0;
  v4 = 0;
  P = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  *(_QWORD *)&v51.Length = CurrentStackLocation;
  FsContext = (char *)FileObject->FsContext;
  if ( !FsContext )
    return 3221225487LL;
  v7 = *FsContext;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  LOBYTE(pNetLuidIndex) = *FsContext;
  if ( (LowPart & 3) == 0 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    Length = CurrentStackLocation->Parameters.Read.Length;
    v11.MasterIrp = (_IRP *)a1->AssociatedIrp;
    if ( LowPart > 0x17005C )
    {
      if ( LowPart <= 0x1700AC )
      {
        if ( LowPart != 1507500 )
        {
          v12 = LowPart - 1507424;
          if ( v12 )
          {
            v13 = v12 - 40;
            if ( v13 )
            {
              v14 = v13 - 4;
              if ( v14 )
              {
                v27 = v14 - 20;
                if ( v27 )
                {
                  if ( v27 != 4 )
                    return DeviceReset;
                  if ( !ndisAoAcRefMiniportForIoctl(
                          (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                          Options,
                          (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                          1,
                          MPREF_AOAC_WAKE_DISABLE,
                          &v56,
                          &pNetLuidIndex) )
                    return (unsigned int)v56;
                  active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 0);
                  v47 = 6;
                }
                else
                {
                  if ( !ndisAoAcRefMiniportForIoctl(
                          (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                          Options,
                          (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                          1,
                          MPREF_AOAC_WAKE_ENABLE,
                          &v56,
                          &pNetLuidIndex) )
                    return (unsigned int)v56;
                  active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 1u);
                  v47 = 5;
                }
              }
              else
              {
                if ( !ndisAoAcRefMiniportForIoctl(
                        (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                        Options,
                        (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                        0,
                        MPREF_AOAC_NA_RELEASE,
                        &v56,
                        &pNetLuidIndex) )
                  return (unsigned int)v56;
                active = ndisNicActiveRelease(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp);
                v47 = 1;
              }
            }
            else
            {
              if ( !ndisAoAcRefMiniportForIoctl(
                      (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                      Options,
                      (struct _NDIS_PM_NIC_ACTIVE *)a1->AssociatedIrp.MasterIrp,
                      1,
                      MPREF_AOAC_NA_ACQUIRE,
                      &v56,
                      &pNetLuidIndex) )
                return (unsigned int)v56;
              active = ndisNicActiveAcquire(
                         pNetLuidIndex,
                         (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                         (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                         a1);
              v47 = 0;
            }
            DeviceReset = active;
            ndisDereferenceMiniport((__int64)pNetLuidIndex, v47);
            return DeviceReset;
          }
          return (unsigned int)-1073741637;
        }
        if ( v7 )
        {
          if ( (unsigned int)Options >= 0x18 )
          {
            if ( *((_QWORD *)FsContext + 6) )
              return (unsigned int)-1073740024;
            return (unsigned int)ndisIfReferenceCompartmentForUser(
                                   (struct _GUID *)&v11.MasterIrp->AllocationProcessorNumber,
                                   *(&v11.MasterIrp->Flags + 1),
                                   (struct _NDIS_IF_COMPARTMENT_BLOCK **)FsContext + 6);
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741790;
      }
      v48 = LowPart - 1509380;
      if ( v48 )
      {
        v49 = v48 - 4;
        if ( v49 )
        {
          v50 = v49 - 4;
          if ( !v50 )
          {
            DeviceReset = ndisQueryDeviceReset(FsContext, Options, Length, (__int64)a1->AssociatedIrp.MasterIrp);
            if ( !DeviceReset )
              a1->IoStatus.Information = Length;
            return DeviceReset;
          }
          if ( v50 != 4 )
            return DeviceReset;
          return (unsigned int)ndisInvokeDeviceReset(FsContext, Options, (__int64)a1->AssociatedIrp.MasterIrp);
        }
        if ( !FsContext[1] )
          return (unsigned int)-1073741790;
        if ( (unsigned int)Options < 0x1C )
          return (unsigned int)-1073741789;
        pNetLuidIndex = 0LL;
        if ( ndisValidateNdisOffsetAndLengthInputString(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)&v11.MasterIrp->AllocationProcessorNumber,
               &v53)
          && ndisValidateNdisOffsetAndLengthInputString(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)&v11.MasterIrp->MdlAddress + 4),
               &v51)
          && ndisValidateNdisOffsetAndLengthInputBufferBounds(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)(&v11.MasterIrp->Flags + 1),
               (void **)&pNetLuidIndex) )
        {
          return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v11.MasterIrp, (__int64)&v53, (__int64)&v51);
        }
        return (unsigned int)-1073741811;
      }
      if ( !FsContext[1] )
        return (unsigned int)-1073741790;
      if ( (unsigned int)Options < 0x10 )
        return (unsigned int)-1073741789;
      ndisPnpRefresh((struct _GUID *)a1->AssociatedIrp.MasterIrp);
LABEL_41:
      if ( P )
        ExFreePoolWithTag(P, 0);
      return DeviceReset;
    }
    if ( LowPart == 1507420 )
      return (unsigned int)-1073741637;
    if ( LowPart <= 0x170040 )
    {
      if ( LowPart == 1507392 )
      {
        if ( v7 )
        {
          if ( !IoIs32bitProcess(a1) )
          {
            if ( (unsigned int)Options >= 0x10 )
            {
              if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
              {
                if ( v11.MasterIrp->Type == 1 && v11.MasterIrp->Size == 16 )
                {
                  v41 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
                  if ( v41 && (v41 == -1 || v11.MasterIrp->MdlAddress) )
                    ndisConfigurePeriodicReceives((__int64)v11.MasterIrp);
                  else
                    DeviceReset = -1073741811;
                }
                else
                {
                  DeviceReset = -1073741735;
                }
              }
              else
              {
                DeviceReset = -1073741823;
              }
            }
            else
            {
              DeviceReset = -1073741789;
            }
            a1->IoStatus.Information = 0LL;
            return DeviceReset;
          }
          return (unsigned int)-1073741637;
        }
        return 3221225506LL;
      }
      v16 = LowPart - 1507336;
      if ( v16 )
      {
        v17 = v16 - 8;
        if ( !v17 )
        {
          if ( IoIs32bitProcess(a1) )
          {
            if ( (unsigned int)Length >= 0x20 )
            {
              v21 = ndisEnumerateInterfaces32(v11.SystemBuffer, (unsigned int)Length);
              a1->IoStatus.Information = Length;
              goto LABEL_28;
            }
          }
          else if ( (unsigned int)Length >= 0x30 )
          {
            v21 = ndisEnumerateInterfaces(v11.SystemBuffer, (unsigned int)Length);
LABEL_28:
            v4 = (unsigned int)Src;
            DeviceReset = v21;
LABEL_29:
            a1->IoStatus.Information = v4;
            return DeviceReset;
          }
LABEL_54:
          DeviceReset = -1073741789;
          goto LABEL_29;
        }
        v18 = v17 - 4;
        if ( !v18 )
        {
          if ( v7 )
          {
            DeviceReset = -1073741811;
            if ( !(_DWORD)Options || (Options & 1) != 0 )
              return DeviceReset;
            p_Type = &a1->AssociatedIrp.MasterIrp->Type;
            *((_WORD *)v11.MasterIrp + (Options >> 1) - 1) = 0;
            RtlInitUnicodeString(&DestinationString, p_Type);
            return (unsigned int)ndisHandleLegacyTransport((__int64)&DestinationString);
          }
          return 3221225506LL;
        }
        v28 = v18 - 12;
        if ( !v28 )
        {
          if ( (unsigned int)Length >= 4 )
          {
            *(_DWORD *)&v11.MasterIrp->Type = NdisGetVersion();
            v4 = 4;
            if ( (unsigned int)Length >= 8 )
            {
              v4 = 8;
              *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = ndisChecked;
            }
            goto LABEL_29;
          }
          goto LABEL_54;
        }
        if ( v28 != 20 )
          return DeviceReset;
        NdisTraceLoggingRareFeaturePath();
        if ( (_BYTE)pNetLuidIndex )
        {
          if ( (unsigned int)Options >= 0x30 && (unsigned int)Length >= 0x30 )
          {
            v21 = ndisIfEnumerateNsiObjects((NET_LUID *)v11.MasterIrp, Length, &Src);
            goto LABEL_28;
          }
          goto LABEL_54;
        }
        return 3221225506LL;
      }
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
      {
        MasterIrp = (unsigned __int64)a1->AssociatedIrp.MasterIrp;
        v30 = *(_DWORD *)(*(_QWORD *)&v51.Length + 16LL);
        if ( (unsigned int)Options < 0x28 )
          return (unsigned int)-1073741789;
        v31 = *(unsigned __int16 *)(MasterIrp + 18)
            + *(unsigned __int16 *)(MasterIrp + 26)
            + *(unsigned __int16 *)(MasterIrp + 34);
        v32 = v31 + *(_DWORD *)(MasterIrp + 12);
        if ( v32 < v31 || v32 >= 0xFFFFFFD8 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)Options < v32 + 40 )
          return (unsigned int)-1073741789;
        if ( v32 >= 0xFFFFFFB8 || v32 + 72 >= 0xFFFFFFF8 )
          return (unsigned int)-1073741811;
        LODWORD(Options) = v32 + 80;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v32 + 80, 0x2020444Eu);
        P = PoolWithTag;
        v34 = PoolWithTag;
        if ( !PoolWithTag )
          return (unsigned int)-1073741670;
        memset(PoolWithTag, 0, (unsigned int)Options);
        *(_DWORD *)v34 = *(_DWORD *)MasterIrp;
        *((_DWORD *)v34 + 1) = *(_DWORD *)(MasterIrp + 4);
        v11.MasterIrp = (_IRP *)v34;
        pNetLuidIndex = (struct _NDIS_MINIPORT_BLOCK *)(v34 + 72);
        if ( !ndisValidateNdisVarDataDesc32InputString(
                MasterIrp,
                v30,
                (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 16),
                v35,
                &v51) )
          goto LABEL_46;
        ndisMoveUnicodeStringToNdisVarDataDesc(
          &v51,
          (unsigned __int8 *)v34,
          (unsigned __int8 **)&pNetLuidIndex,
          (struct _NDIS_VAR_DATA_DESC *)(v34 + 24));
        if ( !ndisValidateNdisVarDataDesc32InputString(
                MasterIrp,
                v30,
                (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 24),
                v36,
                &v51) )
          goto LABEL_46;
        ndisMoveUnicodeStringToNdisVarDataDesc(
          &v51,
          (unsigned __int8 *)v34,
          (unsigned __int8 **)&pNetLuidIndex,
          (struct _NDIS_VAR_DATA_DESC *)(v34 + 40));
        if ( !ndisValidateNdisVarDataDesc32InputString(
                MasterIrp,
                v30,
                (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 32),
                v37,
                &v51) )
          goto LABEL_46;
        ndisMoveUnicodeStringToNdisVarDataDesc(
          &v51,
          (unsigned __int8 *)v34,
          (unsigned __int8 **)&pNetLuidIndex,
          (struct _NDIS_VAR_DATA_DESC *)(v34 + 56));
        v38 = *(_DWORD *)(MasterIrp + 12);
        if ( !ndisValidateEmbeddedBufferBounds(
                MasterIrp,
                v30,
                MasterIrp + 8,
                8u,
                0,
                *(_DWORD *)(MasterIrp + 8),
                v38,
                4u,
                &Src) )
          goto LABEL_46;
        v39 = Src;
        v40 = (char *)(((unsigned __int64)&pNetLuidIndex->Header + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        *((_DWORD *)v34 + 4) = v38;
        *((_QWORD *)v34 + 1) = v40 - v34;
        memmove(v40, v39, v38);
      }
      if ( (unsigned int)Options < 0x48 )
        goto LABEL_74;
      v23 = HIWORD(v11.MasterIrp->AssociatedIrp.IrpCount)
          + WORD1(v11.MasterIrp->ThreadListEntry.Blink)
          + WORD1(v11.MasterIrp->IoStatus.Information);
      v24 = v23 + v11.MasterIrp->Flags;
      if ( v24 >= v23 && v24 + 72 >= 0x48 )
      {
        if ( (unsigned int)Options >= v24 + 72 )
        {
          if ( ndisValidateNdisVarDataDescInputString(
                 (unsigned __int64)v11.MasterIrp,
                 Options,
                 (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->AssociatedIrp,
                 v22,
                 (struct _UNICODE_STRING *)&v11.MasterIrp->AssociatedIrp)
            && ndisValidateNdisVarDataDescInputString(
                 (unsigned __int64)v11.MasterIrp,
                 Options,
                 (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->ThreadListEntry.Blink,
                 v25,
                 (struct _UNICODE_STRING *)&v11.MasterIrp->ThreadListEntry.Blink)
            && ndisValidateNdisVarDataDescInputString(
                 (unsigned __int64)v11.MasterIrp,
                 Options,
                 (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->IoStatus.Information,
                 v26,
                 (struct _UNICODE_STRING *)&v11.MasterIrp->IoStatus.Information)
            && ndisValidateEmbeddedBufferBounds(
                 (unsigned __int64)v11.MasterIrp,
                 Options,
                 (unsigned __int64)&v11.MasterIrp->MdlAddress,
                 0xCu,
                 0,
                 (unsigned int)v11.MasterIrp->MdlAddress,
                 v11.MasterIrp->Flags,
                 8u,
                 (void **)&v11.MasterIrp->MdlAddress) )
          {
            DeviceReset = ndisHandleUModePnPOp((__int64)v11.MasterIrp);
            goto LABEL_41;
          }
          goto LABEL_46;
        }
LABEL_74:
        DeviceReset = -1073741789;
        goto LABEL_41;
      }
LABEL_46:
      DeviceReset = -1073741811;
      goto LABEL_41;
    }
    v42 = LowPart - 1507396;
    if ( !v42 )
    {
      if ( v7 )
      {
        if ( IoIs32bitProcess(a1) )
          return (unsigned int)-1073741637;
        if ( (unsigned int)Options >= 2 && (unsigned int)Length >= 4 )
        {
          DeviceReset = NdisIfAllocateNetLuidIndex(v11.MasterIrp->Type, (PUINT32)&pNetLuidIndex);
          if ( !DeviceReset )
          {
            v4 = 4;
            *(_DWORD *)&v11.MasterIrp->Type = (_DWORD)pNetLuidIndex;
          }
          goto LABEL_29;
        }
        goto LABEL_54;
      }
      return 3221225506LL;
    }
    v43 = v42 - 4;
    if ( v43 )
    {
      v44 = v43 - 12;
      if ( v44 )
      {
        if ( v44 != 4 )
          return DeviceReset;
        return (unsigned int)-1073741637;
      }
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x20C )
      {
        v45 = ndisIfSetIfDescr((__int64)v11.MasterIrp);
LABEL_100:
        DeviceReset = v45;
        goto LABEL_101;
      }
    }
    else
    {
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 8 )
      {
        v45 = NdisIfFreeNetLuidIndex(v11.MasterIrp->AllocationProcessorNumber, *(_DWORD *)v11.MasterIrp);
        goto LABEL_100;
      }
    }
    DeviceReset = -1073741789;
LABEL_101:
    a1->IoStatus.Information = 0LL;
    return DeviceReset;
  }
  return 3221225485LL;
}
