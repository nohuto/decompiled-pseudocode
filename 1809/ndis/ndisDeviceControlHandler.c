/*
 * XREFs of ndisDeviceControlHandler @ 0x1C00B5800
 * Callers:
 *     ndisDeviceControlIrpHandler @ 0x1C00B57E0 (ndisDeviceControlIrpHandler.c)
 *     NdisWdfDeviceControlIrpHandler @ 0x1C00F21E0 (NdisWdfDeviceControlIrpHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A9D0 (ndisDereferenceMiniportForNsi.c)
 *     ndisQuerySetMiniport @ 0x1C000AC20 (ndisQuerySetMiniport.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C000CB20 (ndisReferenceTopMiniportByNameForNsi.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisMGetLogData @ 0x1C005D968 (ndisMGetLogData.c)
 *     ndisGetPowerInfo @ 0x1C005FB2C (ndisGetPowerInfo.c)
 *     ndisIovIoctlInvalidate @ 0x1C0070494 (ndisIovIoctlInvalidate.c)
 *     ndisIovIoctlNotification @ 0x1C0070598 (ndisIovIoctlNotification.c)
 *     ?ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C007B478 (-ndisGetPdInfo@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisQueryStatisticsOids @ 0x1C00B46E4 (ndisQueryStatisticsOids.c)
 *     ndisGetAdapterRssInfo @ 0x1C00B99DC (ndisGetAdapterRssInfo.c)
 *     ndisGetAdapterHardwareInfo @ 0x1C00B9C54 (ndisGetAdapterHardwareInfo.c)
 *     NdisMSleep @ 0x1C00CF740 (NdisMSleep.c)
 *     ndisValidOid @ 0x1C00CFA68 (ndisValidOid.c)
 *     ndisGetHardwareInfo @ 0x1C00EE6DC (ndisGetHardwareInfo.c)
 *     ndisGetPerformanceCounters @ 0x1C00EEB68 (ndisGetPerformanceCounters.c)
 *     ndisMethodDeviceOid @ 0x1C00EED4C (ndisMethodDeviceOid.c)
 *     ndisSetPerfTrackParameters @ 0x1C00EEE54 (ndisSetPerfTrackParameters.c)
 *     ndisMiniportFatalError @ 0x1C00F434C (ndisMiniportFatalError.c)
 *     ndisGetRdmaCapabilities @ 0x1C00F7604 (ndisGetRdmaCapabilities.c)
 *     ndisIovIoctlDetach @ 0x1C00F9308 (ndisIovIoctlDetach.c)
 */

__int64 __fastcall ndisDeviceControlHandler(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, struct _IRP *a3)
{
  unsigned int RdmaCapabilities; // r12d
  struct _NDIS_MINIPORT_BLOCK *v5; // rsi
  signed __int32 v7; // eax
  __int64 v8; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _FILE_OBJECT *FileObject; // rax
  UCHAR Type; // cl
  _QWORD *FsContext; // r15
  __int64 v13; // rax
  __int64 v14; // r13
  __int64 v15; // rax
  unsigned int LowPart; // edx
  unsigned int Options; // eax
  unsigned __int64 Length; // rsi
  _IRP::<unnamed_type_AssociatedIrp> v19; // rbx
  unsigned __int16 Blink; // dx
  unsigned int v21; // ecx
  __int64 v22; // rcx
  int MdlAddress_high; // r10d
  __int64 v24; // rax
  unsigned int v25; // r8d
  unsigned int i; // ecx
  char *v27; // rdi
  unsigned int v28; // edx
  int v29; // ecx
  int v30; // eax
  bool v31; // cl
  bool v32; // r15
  void *v33; // r9
  __int64 v35; // rcx
  int v36; // edi
  __int64 v37; // r8
  unsigned int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r8
  _MDL *v41; // rcx
  SIZE_T v42; // rdx
  PVOID v43; // rax
  unsigned int v44; // ebx
  PVOID v45; // rax
  void *v46; // rsi
  void *v47; // rbx
  unsigned int v48; // eax
  __int64 (__fastcall *v49)(__int64, struct _IRP *); // rax
  unsigned int v50; // ebx
  const void *v51; // rsi
  unsigned int v52; // ebx
  PVOID v53; // rax
  __int64 v54; // rsi
  _MDL *MdlAddress; // rcx
  ULONG ByteCount; // edi
  _DWORD *MappedSystemVa; // rax
  __int64 v58; // r8
  unsigned int AdapterRssInfo; // eax
  unsigned int AdapterHardwareInfo; // eax
  const void *MasterIrp; // rsi
  unsigned int v62; // ebx
  PVOID PoolWithTag; // rax
  __int64 v64; // rax
  __int64 v65; // rsi
  unsigned int v66; // esi
  unsigned int *v67; // rdi
  unsigned int v68; // ebx
  unsigned int v69; // eax
  unsigned int HardwareInfo; // eax
  unsigned int v71; // eax
  unsigned int PerformanceCounters; // eax
  unsigned int PowerInfo; // eax
  char v74; // bl
  unsigned int v75; // eax
  int v76; // ecx
  int v77; // ecx
  _DWORD *BugCheckOnFailure; // [rsp+20h] [rbp-E0h]
  SIZE_T Priority; // [rsp+28h] [rbp-D8h]
  char v80; // [rsp+38h] [rbp-C8h]
  unsigned int SetMiniport; // [rsp+50h] [rbp-B0h] BYREF
  int v82[2]; // [rsp+58h] [rbp-A8h]
  char v83; // [rsp+60h] [rbp-A0h] BYREF
  char v84; // [rsp+61h] [rbp-9Fh]
  int v85[2]; // [rsp+68h] [rbp-98h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-90h]
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-8Ch] BYREF
  void *Src; // [rsp+78h] [rbp-88h]
  _QWORD v89[4]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v90[248]; // [rsp+A0h] [rbp-60h] BYREF

  *(_QWORD *)v85 = a2;
  RdmaCapabilities = 0;
  SetMiniport = -1073741823;
  v83 = 0;
  v5 = a2;
  *(_QWORD *)v82 = 0LL;
  NumberOfBytes_4 = 0;
  Src = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x17u, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a2, a3);
  v7 = _InterlockedIncrement((volatile signed __int32 *)&ndisPkgs);
  if ( !ImageSectionHandle )
  {
    if ( v7 == 1 )
    {
      ImageSectionHandle = MmLockPagableDataSection(AddressWithinSection);
      MmUnlockPagableImageSection(ImageSectionHandle);
    }
    else
    {
      do
        NdisMSleep(0x32u);
      while ( !ImageSectionHandle );
    }
  }
  MmLockPagableSectionByHandle(ImageSectionHandle);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  a3->IoStatus.Status = 259;
  a3->IoStatus.Information = 0LL;
  FileObject = CurrentStackLocation->FileObject;
  if ( !FileObject )
  {
    RdmaCapabilities = -1073741823;
    v32 = 1;
    goto LABEL_47;
  }
  Type = v5->Header.Type;
  if ( v5->Header.Type == 17 )
  {
    FsContext = FileObject->FsContext;
    v13 = ndisReferenceTopMiniportByNameForNsi((__int64)v5, 0, v8, 0, 0, 0x57u);
    v14 = v13;
    if ( v13 )
    {
      *(_QWORD *)v85 = v13;
      v5 = (struct _NDIS_MINIPORT_BLOCK *)v13;
      memset(v89, 0, sizeof(v89));
      v89[2] = v5->OidList;
      LOBYTE(v89[3]) = *((_BYTE *)FsContext + 24);
      v15 = *FsContext;
      FsContext = v89;
      v89[0] = v15;
      v89[1] = v5;
    }
    if ( (v5->PnPFlags & 0x4010) != 0 )
    {
      RdmaCapabilities = -1073741436;
      v32 = 1;
LABEL_45:
      if ( v14 )
        ndisDereferenceMiniportForNsi(v14, 0LL, 0x57u);
      goto LABEL_47;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 1507484 )
    {
      Options = CurrentStackLocation->Parameters.Create.Options;
      Length = CurrentStackLocation->Parameters.Read.Length;
      v19.MasterIrp = (_IRP *)a3->AssociatedIrp;
      NumberOfBytes = Options;
      if ( Options >= 0x2C
        && (unsigned int)Length >= 0x2C
        && LOBYTE(v19.MasterIrp->Type) == 0xB9
        && v19.MasterIrp->Size >= 0x2Cu )
      {
        Blink = (unsigned __int16)v19.MasterIrp->ThreadListEntry.Blink;
        if ( Blink >= 0x2Cu )
        {
          v21 = Options < (unsigned int)Length ? Options : Length;
          if ( Blink <= v21 )
          {
            if ( !HIBYTE(v19.MasterIrp->Type) )
            {
              RdmaCapabilities = -1071448060;
              goto LABEL_200;
            }
            v22 = FsContext[1];
            MdlAddress_high = HIDWORD(v19.MasterIrp->MdlAddress);
            if ( (*(_BYTE *)(v22 + 32) >= 6u || (MdlAddress_high & 0xFF000000) != 0xFF000000)
              && (*(_DWORD *)(v22 + 120) & 0x80u) == 0 )
            {
              v24 = FsContext[2];
              if ( !v24 )
                goto LABEL_187;
              v25 = *(_DWORD *)(v24 + 4);
              for ( i = 0; i < v25; ++i )
              {
                if ( *(_DWORD *)(*(_QWORD *)(v24 + 16) + 4LL * i) == MdlAddress_high )
                  break;
              }
              if ( i >= v25 )
              {
LABEL_187:
                v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
                RdmaCapabilities = -1073741637;
                v33 = *(void **)v82;
                v31 = 0;
                v32 = 1;
                goto LABEL_36;
              }
            }
            v27 = (char *)v19.MasterIrp + Blink;
            if ( ((unsigned __int8)v27 & 3) != 0 )
            {
              RdmaCapabilities = -2147483646;
              goto LABEL_200;
            }
            if ( !*((_BYTE *)FsContext + 24) && (*(_DWORD *)&v19.MasterIrp->AllocationProcessorNumber & 0xFFFFFFFD) != 0 )
            {
              RdmaCapabilities = -1073741790;
              goto LABEL_200;
            }
            memset(v90, 0, sizeof(v90));
            *(_DWORD *)&v90[88] |= 8u;
            v28 = NumberOfBytes;
            *(_QWORD *)&v90[104] = &ndisIntReqIoctl;
            *(_DWORD *)v90 = 15466902;
            *(_DWORD *)&v90[32] = HIDWORD(v19.MasterIrp->MdlAddress);
            *(_QWORD *)&v90[4] = *(_QWORD *)&v19.MasterIrp->AllocationProcessorNumber;
            *(_QWORD *)&v90[40] = v27;
            *(_DWORD *)&v90[48] = 0;
            if ( NumberOfBytes < (unsigned int)Length )
            {
              memset((char *)v19.MasterIrp + NumberOfBytes, 0, (unsigned int)Length - NumberOfBytes);
              v28 = NumberOfBytes;
            }
            v29 = *(_DWORD *)&v19.MasterIrp->AllocationProcessorNumber;
            if ( !v29 )
              goto LABEL_30;
            v76 = v29 - 1;
            if ( !v76 )
            {
              *(_DWORD *)&v90[48] = v28 - LOWORD(v19.MasterIrp->ThreadListEntry.Blink);
LABEL_31:
              *(_DWORD *)&v90[12] = *(&v19.MasterIrp->Flags + 1);
              HIDWORD(v19.MasterIrp->ThreadListEntry.Flink) = ndisQuerySetMiniport(
                                                                (void *)FsContext[1],
                                                                0LL,
                                                                (struct _NDIS_OID_REQUEST *)v90,
                                                                0LL,
                                                                0LL);
              if ( *(_DWORD *)&v90[4] )
              {
                if ( *(_DWORD *)&v90[4] == 1 )
                {
                  HIDWORD(v19.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v90[52];
                  goto LABEL_33;
                }
                if ( *(_DWORD *)&v90[4] != 2 )
                {
                  if ( *(_DWORD *)&v90[4] != 12 )
                    goto LABEL_35;
                  v19.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v90[60];
                  HIDWORD(v19.MasterIrp->AssociatedIrp.SystemBuffer) = *(_DWORD *)&v90[64];
                  v30 = *(_DWORD *)&v90[68];
LABEL_34:
                  LODWORD(v19.MasterIrp->ThreadListEntry.Flink) = v30;
LABEL_35:
                  v31 = 1;
                  a3->IoStatus.Information = Length;
                  v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
                  v32 = 1;
                  SetMiniport = 0;
                  v33 = 0LL;
LABEL_36:
                  if ( (RdmaCapabilities & 0xC0230000) == 0xC0230000 )
                    RdmaCapabilities = (unsigned __int16)RdmaCapabilities | 0xC0010000;
                  if ( v31 )
                  {
                    if ( SetMiniport == -1073676268 )
                    {
                      RdmaCapabilities = -2147483643;
                    }
                    else if ( SetMiniport == -1073741637 )
                    {
                      RdmaCapabilities = -1073741637;
                      if ( v83 )
                        RdmaCapabilities = 0;
                    }
                    else if ( SetMiniport )
                    {
                      RdmaCapabilities = -1073741823;
                    }
                  }
                  if ( v33 )
                    ExFreePoolWithTag(v33, 0);
                  goto LABEL_45;
                }
              }
              v19.MasterIrp->AssociatedIrp.IrpCount = *(_DWORD *)&v90[52];
LABEL_33:
              v30 = *(_DWORD *)&v90[56];
              goto LABEL_34;
            }
            v77 = v76 - 1;
            if ( !v77 )
            {
LABEL_30:
              *(_DWORD *)&v90[48] = Length - LOWORD(v19.MasterIrp->ThreadListEntry.Blink);
              memset(v27, 0, *(unsigned int *)&v90[48]);
              goto LABEL_31;
            }
            if ( v77 == 10 )
            {
              *(_DWORD *)&v90[48] = v28 - LOWORD(v19.MasterIrp->ThreadListEntry.Blink);
              *(_DWORD *)&v90[52] = Length - LOWORD(v19.MasterIrp->ThreadListEntry.Blink);
              *(_DWORD *)&v90[56] = v19.MasterIrp->Flags;
              goto LABEL_31;
            }
          }
        }
      }
LABEL_199:
      RdmaCapabilities = -1073741811;
LABEL_200:
      v33 = *(void **)v82;
LABEL_201:
      v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
      goto LABEL_202;
    }
    if ( LowPart != 1507330 )
    {
      if ( LowPart > 0x226044 )
      {
        if ( LowPart == 2252872 || LowPart == 2252876 || LowPart == 2252880 )
        {
          v75 = ndisIovIoctlDetach(v5, a3);
        }
        else
        {
          if ( LowPart != 2252884 )
          {
LABEL_168:
            v33 = *(void **)v82;
            RdmaCapabilities = -1073741822;
            goto LABEL_202;
          }
          v75 = ndisIovIoctlInvalidate((__int64)v5, (__int64)a3);
        }
      }
      else
      {
        if ( LowPart != 2252868 )
        {
          switch ( LowPart )
          {
            case 0x170006u:
              v65 = FsContext[2];
              if ( !v65 )
                goto LABEL_137;
              v52 = *(_DWORD *)v65;
              v33 = 0LL;
              v54 = *(_QWORD *)(v65 + 8);
              goto LABEL_98;
            case 0x17000Eu:
              goto LABEL_93;
            case 0x17001Eu:
              if ( !a3->MdlAddress )
              {
                v33 = *(void **)v82;
                RdmaCapabilities = -1073741811;
                goto LABEL_202;
              }
              SetMiniport = ndisMGetLogData((__int64)v5, (__int64)a3);
              RdmaCapabilities = SetMiniport;
              if ( SetMiniport != 259 )
              {
                v33 = *(void **)v82;
                v31 = 1;
                v32 = 1;
                goto LABEL_36;
              }
              v31 = 0;
              goto LABEL_182;
            case 0x170028u:
            case 0x17002Cu:
              MasterIrp = a3->AssociatedIrp.MasterIrp;
              NumberOfBytes = CurrentStackLocation->Parameters.Read.Length;
              if ( LowPart == 1507372 )
              {
                v62 = CurrentStackLocation->Parameters.Create.Options;
                if ( v62 < 4 || ((unsigned __int8)MasterIrp & 3) != 0 || (v62 & 3) != 0 )
                  goto LABEL_199;
                v52 = v62 >> 2;
                PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v52, 0x6D61444Eu);
                *(_QWORD *)v82 = PoolWithTag;
                v33 = PoolWithTag;
                if ( !PoolWithTag )
                {
                  SetMiniport = -1073741670;
                  goto LABEL_201;
                }
                memmove(PoolWithTag, MasterIrp, 4LL * v52);
                v58 = *(_QWORD *)v82;
              }
              else
              {
                v64 = FsContext[2];
                if ( !v64 )
                {
LABEL_137:
                  RdmaCapabilities = -1073741808;
                  goto LABEL_200;
                }
                v52 = *(_DWORD *)v64;
                v58 = *(_QWORD *)(v64 + 8);
              }
              v80 = 1;
              LODWORD(Priority) = NumberOfBytes;
              BugCheckOnFailure = MasterIrp;
              goto LABEL_104;
            case 0x170030u:
              v66 = CurrentStackLocation->Parameters.Create.Options;
              if ( v66 < 0xC )
                goto LABEL_199;
              v67 = (unsigned int *)a3->AssociatedIrp.MasterIrp;
              if ( ((unsigned __int8)v67 & 7) != 0 || !(unsigned __int8)ndisValidOid(FsContext, *v67) )
                goto LABEL_199;
              v68 = CurrentStackLocation->Parameters.Read.Length;
              memset(v90, 0, sizeof(v90));
              v69 = ndisMethodDeviceOid(FsContext, v90, v67, v66, v68);
              v33 = 0LL;
              v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
              a3->IoStatus.Information = (unsigned int)(*(_DWORD *)&v90[60] + 8);
              SetMiniport = v69;
              goto LABEL_106;
            case 0x17003Eu:
              v83 = 1;
LABEL_93:
              v50 = CurrentStackLocation->Parameters.Create.Options;
              if ( v50 < 4 || (v50 & 3) != 0 )
                goto LABEL_144;
              v51 = a3->AssociatedIrp.MasterIrp;
              if ( ((unsigned __int8)v51 & 3) != 0 )
              {
                v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
                goto LABEL_144;
              }
              v52 = v50 >> 2;
              v53 = ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * v52, 0x6D61444Eu);
              *(_QWORD *)v82 = v53;
              v33 = v53;
              if ( !v53 )
              {
                SetMiniport = -1073741670;
                goto LABEL_201;
              }
              memmove(v53, v51, 4LL * v52);
              v33 = *(void **)v82;
              v54 = *(_QWORD *)v82;
LABEL_98:
              MdlAddress = a3->MdlAddress;
              if ( MdlAddress )
              {
                ByteCount = MdlAddress->ByteCount;
                if ( ByteCount )
                {
                  if ( (MdlAddress->MdlFlags & 5) != 0 )
                  {
                    MappedSystemVa = MdlAddress->MappedSystemVa;
                  }
                  else
                  {
                    MappedSystemVa = MmMapLockedPagesSpecifyCache(MdlAddress, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
                    v33 = *(void **)v82;
                  }
LABEL_102:
                  if ( !MappedSystemVa )
                  {
                    SetMiniport = -1073741670;
                    goto LABEL_201;
                  }
                  v58 = v54;
                  v80 = 0;
                  LODWORD(Priority) = ByteCount;
                  BugCheckOnFailure = MappedSystemVa;
LABEL_104:
                  v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
                  SetMiniport = ndisQueryStatisticsOids(
                                  *(__int64 *)v85,
                                  (__int64)FsContext,
                                  v58,
                                  v52,
                                  BugCheckOnFailure,
                                  Priority,
                                  &NumberOfBytes_4,
                                  v80,
                                  &v83);
                  a3->IoStatus.Information = NumberOfBytes_4;
LABEL_105:
                  v33 = *(void **)v82;
LABEL_106:
                  v31 = 1;
                  v32 = 1;
                  goto LABEL_36;
                }
              }
              else
              {
                ByteCount = 0;
              }
              MappedSystemVa = 0LL;
              goto LABEL_102;
            case 0x170068u:
              SetMiniport = 0;
              v71 = ndisSetPerfTrackParameters(v5);
              v31 = 1;
              RdmaCapabilities = v71;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x17006Cu:
              SetMiniport = 0;
              PerformanceCounters = ndisGetPerformanceCounters(v5);
              v31 = 1;
              RdmaCapabilities = PerformanceCounters;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x170070u:
              SetMiniport = 0;
              HardwareInfo = ndisGetHardwareInfo(v5);
              v31 = 1;
              RdmaCapabilities = HardwareInfo;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x170078u:
              SetMiniport = 0;
              PowerInfo = ndisGetPowerInfo((__int64)v5, a3, &SetMiniport);
              v31 = 1;
              RdmaCapabilities = PowerInfo;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x170090u:
              RdmaCapabilities = ndisGetRdmaCapabilities(v5, a3);
              SetMiniport = RdmaCapabilities;
              goto LABEL_105;
            case 0x170094u:
              SetMiniport = 0;
              AdapterHardwareInfo = ndisGetAdapterHardwareInfo(v5, a3, &SetMiniport);
              v31 = 1;
              RdmaCapabilities = AdapterHardwareInfo;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x170098u:
              SetMiniport = 0;
              AdapterRssInfo = ndisGetAdapterRssInfo(v5);
              v31 = 1;
              RdmaCapabilities = AdapterRssInfo;
              v32 = 1;
              v33 = 0LL;
              goto LABEL_36;
            case 0x1700A8u:
              v74 = *((_BYTE *)FsContext + 24);
              if ( v74 )
                ndisMiniportFatalError(v5, 70LL);
              v31 = 1;
              v33 = 0LL;
              v32 = 1;
              if ( !v74 )
                RdmaCapabilities = -1073741790;
              SetMiniport = RdmaCapabilities;
              goto LABEL_36;
            case 0x1700B0u:
              RdmaCapabilities = ndisGetPdInfo(v5, a3);
              SetMiniport = RdmaCapabilities;
              goto LABEL_105;
            default:
              goto LABEL_168;
          }
        }
        v75 = ndisIovIoctlNotification((__int64)v5, (__int64)a3);
      }
      v33 = *(void **)v82;
      RdmaCapabilities = v75;
      SetMiniport = v75;
      v31 = v75 != 259;
      v32 = v75 != 259;
      goto LABEL_36;
    }
    if ( CurrentStackLocation->Parameters.Create.Options < 4 )
    {
      v33 = *(void **)v82;
      RdmaCapabilities = -1073741811;
      goto LABEL_202;
    }
    v35 = FsContext[1];
    v36 = *(_DWORD *)a3->AssociatedIrp.MasterIrp;
    if ( (*(_BYTE *)(v35 + 32) >= 6u || (v36 & 0xFF000000) != 0xFF000000) && (*(_DWORD *)(v35 + 120) & 0x80u) == 0 )
    {
      v37 = FsContext[2];
      if ( !v37 )
      {
LABEL_144:
        v33 = *(void **)v82;
        RdmaCapabilities = -1073741811;
        goto LABEL_202;
      }
      v38 = *(_DWORD *)(v37 + 4);
      v39 = 0LL;
      if ( v38 )
      {
        v40 = *(_QWORD *)(v37 + 16);
        do
        {
          if ( *(_DWORD *)(v40 + 4 * v39) == v36 )
            break;
          v39 = (unsigned int)(v39 + 1);
        }
        while ( (unsigned int)v39 < v38 );
      }
      if ( (unsigned int)v39 >= v38 )
      {
        v33 = *(void **)v82;
        RdmaCapabilities = -1073741811;
        goto LABEL_202;
      }
    }
    v41 = a3->MdlAddress;
    if ( v41 )
    {
      v42 = v41->ByteCount;
      NumberOfBytes = v42;
      if ( (_DWORD)v42 )
      {
        if ( (v41->MdlFlags & 5) != 0 )
        {
          v43 = v41->MappedSystemVa;
        }
        else
        {
          v43 = MmMapLockedPagesSpecifyCache(v41, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
          v42 = NumberOfBytes;
        }
        Src = v43;
        if ( v43 )
        {
          v44 = v42;
          v45 = ExAllocatePoolWithTag(NonPagedPoolNx, v42, 0x6D61444Eu);
          v46 = v45;
          if ( !v45 )
          {
            RdmaCapabilities = -1073741670;
            goto LABEL_200;
          }
          memmove(v45, Src, v44);
LABEL_72:
          v47 = (void *)FsContext[1];
          memset(v90, 0, sizeof(v90));
          *(_DWORD *)&v90[88] |= 8u;
          *(_QWORD *)&v90[104] = &ndisIntReqIoctl;
          *(_DWORD *)&v90[32] = v36;
          *(_QWORD *)&v90[52] = 0LL;
          *(_DWORD *)v90 = 15466902;
          *(_QWORD *)&v90[4] = 2LL;
          *(_QWORD *)&v90[40] = v46;
          *(_DWORD *)&v90[48] = NumberOfBytes;
          SetMiniport = ndisQuerySetMiniport(v47, 0LL, (struct _NDIS_OID_REQUEST *)v90, 0LL, 0LL);
          v48 = *(_DWORD *)&v90[52];
          NumberOfBytes_4 = *(_DWORD *)&v90[52];
          if ( *(_DWORD *)&v90[52] > NumberOfBytes )
          {
            SetMiniport = -1073676266;
            v48 = 0;
            NumberOfBytes_4 = 0;
          }
          v31 = 1;
          a3->IoStatus.Information = v48;
          v84 = 1;
          if ( !SetMiniport && v48 && Src )
          {
            if ( !v46 )
              goto LABEL_180;
            memmove(Src, v46, v48);
            v31 = v84;
          }
          if ( v46 )
          {
            ExFreePoolWithTag(v46, 0);
            v31 = v84;
            v33 = 0LL;
            v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
            v32 = v84;
            goto LABEL_36;
          }
LABEL_180:
          v5 = *(struct _NDIS_MINIPORT_BLOCK **)v85;
LABEL_182:
          v33 = *(void **)v82;
          v32 = 1;
          goto LABEL_36;
        }
        SetMiniport = -1073741670;
        v33 = 0LL;
LABEL_202:
        v31 = 0;
        v32 = 1;
        goto LABEL_36;
      }
    }
    else
    {
      NumberOfBytes = 0;
    }
    v46 = 0LL;
    goto LABEL_72;
  }
  v32 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    WPP_SF_qq(0x1Cu, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a3);
    Type = v5->Header.Type;
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  }
  if ( Type == 17 )
  {
    if ( CurrentStackLocation->MajorFunction != 18 )
      RdmaCapabilities = -1073741637;
  }
  else
  {
    if ( Type == 9 )
    {
      v49 = (__int64 (__fastcall *)(__int64, struct _IRP *))*((_QWORD *)&v5->Reserved28
                                                            + CurrentStackLocation->MajorFunction);
      if ( v49 )
      {
        RdmaCapabilities = v49(a1, a3);
        goto LABEL_87;
      }
    }
    RdmaCapabilities = -1073741637;
  }
  a3->IoStatus.Status = RdmaCapabilities;
  IofCompleteRequest(a3, 2);
LABEL_87:
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x1Du, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, a1, a3);
LABEL_47:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( v32 && RdmaCapabilities != 259 )
  {
    a3->IoStatus.Status = RdmaCapabilities;
    IofCompleteRequest(a3, 2);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qq(0x18u, &WPP_ba7b266a28b239be865c999b08df0b37_Traceguids, v5, a3);
  return RdmaCapabilities;
}
