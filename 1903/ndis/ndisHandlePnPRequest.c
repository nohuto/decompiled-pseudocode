/*
 * XREFs of ndisHandlePnPRequest @ 0x1C012B4E8
 * Callers:
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ?ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@@EW4_NDIS_MP_REFTAG@@PEAJPEAPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019B0C (-ndisAoAcRefMiniportForIoctl@@YAEPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_PM_NIC_ACTIVE@.c)
 *     ?ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C0019BA0 (-ndisHandleLegacyTransport@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ndisHandleUModePnPOp @ 0x1C001CB74 (ndisHandleUModePnPOp.c)
 *     ndisIfReferenceCompartmentForUser @ 0x1C0020380 (ndisIfReferenceCompartmentForUser.c)
 *     ?ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z @ 0x1C0031BA4 (-ndisConfigurePeriodicReceives@@YAXPEAU_NDIS_SET_RECEIVE_RATE@@@Z.c)
 *     NdisGetVersion @ 0x1C00320B0 (NdisGetVersion.c)
 *     memmove @ 0x1C0041100 (memmove.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ndisIfSetIfDescr @ 0x1C0067E28 (ndisIfSetIfDescr.c)
 *     ?ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C007C108 (-ndisInvokeDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KPEAU_NDIS_INVOKE_DEVICE_RESET@.c)
 *     ?ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@@Z @ 0x1C007CC40 (-ndisQueryDeviceReset@@YAJPEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@KKPEAU_NDIS_QUERY_DEVICE_RESET@@.c)
 *     ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C00BAB98 (-ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C00BBFB4 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C00BC2FC (-ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C00C3654 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 *     ?ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z @ 0x1C00FD104 (-ndisValidateNdisVarDataDescInputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z @ 0x1C00FD1E4 (-ndisValidateEmbeddedBufferBounds@@YA_N_KK0KKKKPEAPEAX@Z.c)
 *     NdisIfAllocateNetLuidIndex @ 0x1C01148F0 (NdisIfAllocateNetLuidIndex.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 *     ndisIfEnumerateNsiObjects @ 0x1C0114A98 (ndisIfEnumerateNsiObjects.c)
 *     ?ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_DESC@@@Z @ 0x1C0115D88 (-ndisMoveUnicodeStringToNdisVarDataDesc@@YAXPEAU_UNICODE_STRING@@PEAEPEAPEAEPEAU_NDIS_VAR_DATA_D.c)
 *     ?ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z @ 0x1C0115DE4 (-ndisPnpInvokeTdi@@YAJW4_NDIS_TDI_VERB@@PEBU_UNICODE_STRING@@1PEAXK@Z.c)
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C0115E70 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 *     ?ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAPEAX@Z @ 0x1C0115ECC (-ndisValidateNdisOffsetAndLengthInputBufferBounds@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PE.c)
 *     ?ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNICODE_STRING@@@Z @ 0x1C0115F30 (-ndisValidateNdisOffsetAndLengthInputString@@YA_NPEAU_IRP@@PEBU_NDIS_OFFSET_AND_LENGTH@@PEAU_UNI.c)
 *     ?ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING@@@Z @ 0x1C0115F74 (-ndisValidateNdisVarDataDesc32InputString@@YA_N_KKPEBU_NDIS_VAR_DATA_DESC32@@PEAU_UNICODE_STRING.c)
 *     ?ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z @ 0x1C012FB08 (-ndisEnumerateInterfaces@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF@@IPEAI@Z.c)
 *     ?ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z @ 0x1C0135A98 (-ndisEnumerateInterfaces32@@_Y2PAGENPNP@@AJPEAU_NDIS_ENUM_INTF32@@IPEAI@Z.c)
 */

__int64 __fastcall ndisHandlePnPRequest(struct _IRP *a1)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int DeviceReset; // ebx
  _FILE_OBJECT *FileObject; // rax
  unsigned int v5; // r15d
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
  unsigned int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  unsigned int v26; // eax
  unsigned __int64 MasterIrp; // rsi
  unsigned int v28; // r15d
  unsigned int v29; // ecx
  unsigned int v30; // edx
  char *PoolWithTag; // rax
  char *v32; // rbx
  unsigned int v33; // r12d
  void *v34; // rdx
  char *v35; // rcx
  unsigned int v36; // eax
  int v37; // eax
  unsigned int v38; // eax
  unsigned int v39; // eax
  unsigned int v40; // eax
  unsigned int active; // eax
  unsigned __int8 v42; // dl
  unsigned int v43; // eax
  unsigned int v44; // eax
  unsigned int v45; // eax
  struct _UNICODE_STRING v46; // [rsp+40h] [rbp-38h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-28h] BYREF
  struct _UNICODE_STRING v48; // [rsp+60h] [rbp-18h] BYREF
  struct _NDIS_MINIPORT_BLOCK *pNetLuidIndex; // [rsp+C0h] [rbp+48h] BYREF
  void *Src; // [rsp+C8h] [rbp+50h] BYREF
  int v51; // [rsp+D0h] [rbp+58h] BYREF
  PVOID P; // [rsp+D8h] [rbp+60h]

  CurrentStackLocation = a1->Tail.Overlay.CurrentStackLocation;
  LODWORD(Src) = 0;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DeviceReset = 0;
  DestinationString.Buffer = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  v5 = 0;
  v51 = 0;
  P = 0LL;
  *(_QWORD *)&v46.Length = CurrentStackLocation;
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
                v25 = v14 - 20;
                if ( v25 )
                {
                  if ( v25 != 4 )
                    return DeviceReset;
                  if ( !ndisAoAcRefMiniportForIoctl(
                          (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                          Options,
                          (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                          1,
                          MPREF_AOAC_WAKE_DISABLE,
                          &v51,
                          &pNetLuidIndex) )
                    return (unsigned int)v51;
                  active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 0);
                  v42 = 6;
                }
                else
                {
                  if ( !ndisAoAcRefMiniportForIoctl(
                          (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                          Options,
                          (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp,
                          1,
                          MPREF_AOAC_WAKE_ENABLE,
                          &v51,
                          &pNetLuidIndex) )
                    return (unsigned int)v51;
                  active = ndisAoAcEnableRemoteWake(pNetLuidIndex, (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp, 1u);
                  v42 = 5;
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
                        &v51,
                        &pNetLuidIndex) )
                  return (unsigned int)v51;
                active = ndisNicActiveRelease(
                           pNetLuidIndex,
                           (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                           (struct _NDIS_PM_NIC_ACTIVE *)v11.MasterIrp);
                v42 = 1;
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
                      &v51,
                      &pNetLuidIndex) )
                return (unsigned int)v51;
              active = ndisNicActiveAcquire(
                         pNetLuidIndex,
                         (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                         (enum _NDIS_PM_COMPONENT_ID *)v11.MasterIrp,
                         a1);
              v42 = 0;
            }
            DeviceReset = active;
            ndisDereferenceMiniport((__int64)pNetLuidIndex, v42);
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
      v43 = LowPart - 1509380;
      if ( v43 )
      {
        v44 = v43 - 4;
        if ( v44 )
        {
          v45 = v44 - 4;
          if ( !v45 )
          {
            DeviceReset = ndisQueryDeviceReset(
                            (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                            Options,
                            Length,
                            (_LIST_ENTRY **)a1->AssociatedIrp.MasterIrp);
            if ( !DeviceReset )
              a1->IoStatus.Information = Length;
            return DeviceReset;
          }
          if ( v45 != 4 )
            return DeviceReset;
          return (unsigned int)ndisInvokeDeviceReset(
                                 (struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *)FsContext,
                                 Options,
                                 (_LIST_ENTRY **)a1->AssociatedIrp.MasterIrp,
                                 MPREF_AOAC_NA_ACQUIRE);
        }
        if ( !FsContext[1] )
          return (unsigned int)-1073741790;
        if ( (unsigned int)Options < 0x1C )
          return (unsigned int)-1073741789;
        pNetLuidIndex = 0LL;
        *(_QWORD *)&v48.Length = 0LL;
        v48.Buffer = 0LL;
        *(_QWORD *)&v46.Length = 0LL;
        v46.Buffer = 0LL;
        if ( ndisValidateNdisOffsetAndLengthInputString(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)&v11.MasterIrp->AllocationProcessorNumber,
               &v48)
          && ndisValidateNdisOffsetAndLengthInputString(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)((char *)&v11.MasterIrp->MdlAddress + 4),
               &v46)
          && ndisValidateNdisOffsetAndLengthInputBufferBounds(
               a1,
               (const struct _NDIS_OFFSET_AND_LENGTH *)(&v11.MasterIrp->Flags + 1),
               (void **)&pNetLuidIndex) )
        {
          return (unsigned int)ndisPnpInvokeTdi(*(_DWORD *)v11.MasterIrp, (__int64)&v48, (__int64)&v46);
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
      if ( LowPart != 1507392 )
      {
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
                v21 = ndisEnumerateInterfaces32(
                        (struct _NDIS_ENUM_INTF32 *)v11.MasterIrp,
                        (unsigned int)Length,
                        (unsigned int *)&Src);
                goto LABEL_28;
              }
            }
            else if ( (unsigned int)Length >= 0x30 )
            {
              v21 = ndisEnumerateInterfaces(
                      (struct _NDIS_ENUM_INTF *)v11.MasterIrp,
                      (unsigned int)Length,
                      (unsigned int *)&Src);
LABEL_28:
              v5 = (unsigned int)Src;
              DeviceReset = v21;
LABEL_29:
              a1->IoStatus.Information = v5;
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
              return (unsigned int)ndisHandleLegacyTransport(&DestinationString);
            }
            return 3221225506LL;
          }
          v26 = v18 - 12;
          if ( !v26 )
          {
            if ( (unsigned int)Length >= 4 )
            {
              *(_DWORD *)&v11.MasterIrp->Type = NdisGetVersion();
              v5 = 4;
              if ( (unsigned int)Length >= 8 )
              {
                v5 = 8;
                *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber = ndisChecked;
              }
              goto LABEL_29;
            }
            goto LABEL_54;
          }
          if ( v26 != 20 )
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
          v28 = *(_DWORD *)(*(_QWORD *)&v46.Length + 16LL);
          *(_QWORD *)&v46.Length = 0LL;
          v46.Buffer = 0LL;
          if ( (unsigned int)Options < 0x28 )
            return (unsigned int)-1073741789;
          v29 = *(unsigned __int16 *)(MasterIrp + 18)
              + *(unsigned __int16 *)(MasterIrp + 26)
              + *(unsigned __int16 *)(MasterIrp + 34);
          v30 = v29 + *(_DWORD *)(MasterIrp + 12);
          if ( v30 < v29 || v30 >= 0xFFFFFFD8 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)Options < v30 + 40 )
            return (unsigned int)-1073741789;
          if ( v30 >= 0xFFFFFFB8 )
            return (unsigned int)-1073741811;
          LODWORD(Options) = v30 + 80;
          if ( v30 + 80 < 8 )
            return (unsigned int)-1073741811;
          PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)Options, 0x2020444Eu);
          P = PoolWithTag;
          v32 = PoolWithTag;
          if ( !PoolWithTag )
            return (unsigned int)-1073741670;
          memset(PoolWithTag, 0, (unsigned int)Options);
          *(_DWORD *)v32 = *(_DWORD *)MasterIrp;
          *((_DWORD *)v32 + 1) = *(_DWORD *)(MasterIrp + 4);
          v11.MasterIrp = (_IRP *)v32;
          pNetLuidIndex = (struct _NDIS_MINIPORT_BLOCK *)(v32 + 72);
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v28,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 16),
                  &v46) )
            goto LABEL_46;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v46,
            (unsigned __int8 *)v32,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v32 + 24));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v28,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 24),
                  &v46) )
            goto LABEL_46;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v46,
            (unsigned __int8 *)v32,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v32 + 40));
          if ( !ndisValidateNdisVarDataDesc32InputString(
                  MasterIrp,
                  v28,
                  (const struct _NDIS_VAR_DATA_DESC32 *)(MasterIrp + 32),
                  &v46) )
            goto LABEL_46;
          ndisMoveUnicodeStringToNdisVarDataDesc(
            &v46,
            (unsigned __int8 *)v32,
            (unsigned __int8 **)&pNetLuidIndex,
            (struct _NDIS_VAR_DATA_DESC *)(v32 + 56));
          v33 = *(_DWORD *)(MasterIrp + 12);
          if ( !ndisValidateEmbeddedBufferBounds(
                  MasterIrp,
                  v28,
                  MasterIrp + 8,
                  8u,
                  *(_DWORD *)(MasterIrp + 8),
                  v33,
                  4u,
                  &Src) )
            goto LABEL_46;
          v34 = Src;
          v35 = (char *)(((unsigned __int64)&pNetLuidIndex->Header + 7) & 0xFFFFFFFFFFFFFFF8uLL);
          *((_DWORD *)v32 + 4) = v33;
          *((_QWORD *)v32 + 1) = v35 - v32;
          memmove(v35, v34, v33);
        }
        if ( (unsigned int)Options < 0x48 )
          goto LABEL_74;
        v22 = HIWORD(v11.MasterIrp->AssociatedIrp.IrpCount)
            + WORD1(v11.MasterIrp->ThreadListEntry.Blink)
            + WORD1(v11.MasterIrp->IoStatus.Information);
        v23 = v22 + v11.MasterIrp->Flags;
        if ( v23 >= v22 )
        {
          v24 = v23 + 72;
          if ( v24 >= 0x48 )
          {
            if ( (unsigned int)Options >= v24 )
            {
              if ( ndisValidateNdisVarDataDescInputString(
                     (unsigned __int64)v11.MasterIrp,
                     Options,
                     (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->AssociatedIrp,
                     (struct _UNICODE_STRING *)&v11.MasterIrp->AssociatedIrp)
                && ndisValidateNdisVarDataDescInputString(
                     (unsigned __int64)v11.MasterIrp,
                     Options,
                     (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->ThreadListEntry.Blink,
                     (struct _UNICODE_STRING *)&v11.MasterIrp->ThreadListEntry.Blink)
                && ndisValidateNdisVarDataDescInputString(
                     (unsigned __int64)v11.MasterIrp,
                     Options,
                     (const struct _NDIS_VAR_DATA_DESC *)&v11.MasterIrp->IoStatus.Information,
                     (struct _UNICODE_STRING *)&v11.MasterIrp->IoStatus.Information)
                && ndisValidateEmbeddedBufferBounds(
                     (unsigned __int64)v11.MasterIrp,
                     Options,
                     (unsigned __int64)&v11.MasterIrp->MdlAddress,
                     0xCu,
                     (unsigned int)v11.MasterIrp->MdlAddress,
                     v11.MasterIrp->Flags,
                     8u,
                     (void **)&v11.MasterIrp->MdlAddress) )
              {
                DeviceReset = ndisHandleUModePnPOp((unsigned int *)v11.MasterIrp);
                goto LABEL_41;
              }
              goto LABEL_46;
            }
LABEL_74:
            DeviceReset = -1073741789;
            goto LABEL_41;
          }
        }
LABEL_46:
        DeviceReset = -1073741811;
        goto LABEL_41;
      }
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x10 )
      {
        if ( LOBYTE(WPP_MAIN_CB.DeviceQueue.Type) )
        {
          if ( v11.MasterIrp->Type == 1 && v11.MasterIrp->Size == 16 )
          {
            v37 = *(_DWORD *)&v11.MasterIrp->AllocationProcessorNumber;
            if ( v37 && (v37 == -1 || v11.MasterIrp->MdlAddress) )
              ndisConfigurePeriodicReceives((struct _NDIS_SET_RECEIVE_RATE *)v11.MasterIrp);
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
        goto LABEL_82;
      }
      goto LABEL_80;
    }
    v38 = LowPart - 1507396;
    if ( !v38 )
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
            v5 = 4;
            *(_DWORD *)&v11.MasterIrp->Type = (_DWORD)pNetLuidIndex;
          }
          goto LABEL_29;
        }
        goto LABEL_54;
      }
      return 3221225506LL;
    }
    v39 = v38 - 4;
    if ( v39 )
    {
      v40 = v39 - 12;
      if ( v40 )
      {
        if ( v40 != 4 )
          return DeviceReset;
        return (unsigned int)-1073741637;
      }
      if ( !v7 )
        return 3221225506LL;
      if ( IoIs32bitProcess(a1) )
        return (unsigned int)-1073741637;
      if ( (unsigned int)Options >= 0x20C )
      {
        v36 = ndisIfSetIfDescr((__int64)v11.MasterIrp);
LABEL_81:
        DeviceReset = v36;
        goto LABEL_82;
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
        v36 = NdisIfFreeNetLuidIndex(v11.MasterIrp->AllocationProcessorNumber, *(_DWORD *)v11.MasterIrp);
        goto LABEL_81;
      }
    }
LABEL_80:
    DeviceReset = -1073741789;
LABEL_82:
    a1->IoStatus.Information = 0LL;
    return DeviceReset;
  }
  return 3221225485LL;
}
