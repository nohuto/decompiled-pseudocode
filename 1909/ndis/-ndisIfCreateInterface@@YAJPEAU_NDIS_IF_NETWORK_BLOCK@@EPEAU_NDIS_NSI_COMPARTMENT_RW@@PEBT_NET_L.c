/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C010301C
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C002A5AC (ndisIfCreateFilterInterface.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0035FA0 (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0039BE0 (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C0063100 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqqL @ 0x1C0024B9C (WPP_RECORDER_SF_qqqqL.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C0024C70 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     WPP_RECORDER_SF_qqqq @ 0x1C0025880 (WPP_RECORDER_SF_qqqq.c)
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0039B80 (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C003F51C (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     memmove @ 0x1C0041380 (memmove.c)
 *     memset @ 0x1C00416C0 (memset.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C0114910 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C0114960 (NdisIfFreeNetLuidIndex.c)
 */

__int64 __fastcall ndisIfCreateInterface(
        struct _NDIS_IF_NETWORK_BLOCK *a1,
        __int64 a2,
        struct _NDIS_NSI_COMPARTMENT_RW *a3,
        const union _NET_LUID_LH *a4,
        const struct _GUID *a5,
        const struct NdisNetworkInterfacePersistedState *a6,
        struct _NDIS_FILTER_BLOCK *a7,
        enum NdisIfBlockSource a8)
{
  char v9; // bl
  struct _NDIS_IF_NETWORK_BLOCK *v10; // rsi
  unsigned __int16 v11; // r12
  char *PoolWithTag; // rax
  char *v13; // rdi
  unsigned __int16 v14; // ax
  unsigned int v15; // eax
  size_t v16; // r8
  union _NET_LUID_LH v17; // rbx
  _GUID NetworkGuid; // xmm0
  int v19; // edx
  _QWORD *v20; // rcx
  int appended; // esi
  int v23; // eax
  unsigned __int16 v24; // cx
  unsigned __int16 v25; // cx
  unsigned __int16 v26; // ax
  size_t v27; // r8
  _GUID LoopbackIfInterfaceGuid; // xmm0
  _IF_COUNTED_STRING_LH *p_LoopbackIfAlias; // rsi
  _WORD *v30; // r8
  wchar_t *v31; // rdx
  wchar_t *v32; // rcx
  size_t Length; // r8
  int v34; // [rsp+28h] [rbp-79h]
  char v35; // [rsp+58h] [rbp-49h]
  unsigned int v36; // [rsp+5Ch] [rbp-45h] BYREF
  UINT32 NetLuidIndex; // [rsp+60h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-39h] BYREF
  _UNICODE_STRING String; // [rsp+78h] [rbp-29h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-19h] BYREF
  UNICODE_STRING Source; // [rsp+98h] [rbp-9h] BYREF
  char v43; // [rsp+F0h] [rbp+4Fh]

  v43 = a2;
  *(_QWORD *)&Source.Length = 262146LL;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v9 = a2;
  DestinationString.Buffer = 0LL;
  v10 = a1;
  Source.Buffer = L" ";
  *(_QWORD *)&String.Length = 0LL;
  v35 = 0;
  String.Buffer = 0LL;
  NetLuidIndex = 0;
  v36 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      0x16u,
      0x7Au,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      (char)a3,
      (char)a4,
      a7);
  if ( !v10 || a6 && *((_WORD *)a6 + 32) > 0x20u || a7 && a7->Miniport->IfBlock->ifPhysAddress.Length > 0x20u )
  {
    appended = -1073741811;
  }
  else
  {
    v11 = 512;
    String.MaximumLength = 512;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F8uLL, 0x6669444Eu);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag + 4, 0, 0x4F4uLL);
      *(_DWORD *)v13 = 6291840;
      String.Buffer = (wchar_t *)(v13 + 1272);
      if ( !a6 )
      {
        if ( !a7 )
        {
          if ( v9 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(24LL, a3->Flags & 1, &v36);
            if ( appended )
            {
LABEL_23:
              ExFreePoolWithTag(v13, 0);
              goto LABEL_24;
            }
            v35 = 1;
            *((_WORD *)&a3->LoopbackIfLuid.Info + 3) = 24;
            NetLuidIndex = v36;
            a3->LoopbackIfLuid.Value = a3->LoopbackIfLuid.Value & 0xFFFF000000000000uLL | ((unsigned __int64)(v36 & 0xFFFFFF) << 24);
            appended = ExUuidCreate(&a3->LoopbackIfInterfaceGuid);
            if ( appended < 0 )
            {
LABEL_76:
              if ( v35 )
                NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
              goto LABEL_23;
            }
          }
          v17.Value = (ULONG64)a3->LoopbackIfLuid;
          LoopbackIfInterfaceGuid = a3->LoopbackIfInterfaceGuid;
          *(_QWORD *)(v13 + 28) = 1LL;
          *((_DWORD *)v13 + 9) = 1;
          *(_GUID *)(v13 + 52) = LoopbackIfInterfaceGuid;
          v13[40] = 0;
          *((_QWORD *)v13 + 11) = 17LL;
          *((_DWORD *)v13 + 160) = 1500;
          *((_QWORD *)v13 + 90) = 0x40000000LL;
          *((_QWORD *)v13 + 91) = 0x40000000LL;
          *((_DWORD *)v13 + 185) = 1;
          *((_DWORD *)v13 + 186) = 2;
          *((_QWORD *)v13 + 79) = 1LL;
          if ( v43 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00E6262);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_76;
            appended = RtlIntegerToUnicodeString(a1->Compartment->CompartmentId, 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_76;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_76;
            *((_WORD *)v13 + 376) = Destination.Length;
            *((_WORD *)v13 + 24) = Destination.Length;
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00E6472);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v13 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_76;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_76;
            *((_WORD *)v13 + 58) = Destination.Length;
            a3->LoopbackIfDescr.Length = *((_WORD *)v13 + 24);
            memmove(a3->LoopbackIfDescr.String, v13 + 754, *((unsigned __int16 *)v13 + 376));
            v32 = a3->LoopbackIfAlias.String;
            a3->LoopbackIfAlias.Length = *((_WORD *)v13 + 58);
            v31 = (wchar_t *)(v13 + 118);
            Length = *((unsigned __int16 *)v13 + 58);
          }
          else
          {
            if ( !ndisIsValidIfString(&a3->LoopbackIfDescr)
              || (p_LoopbackIfAlias = &a3->LoopbackIfAlias, !ndisIsValidIfString(&a3->LoopbackIfAlias)) )
            {
              appended = -1073676267;
              goto LABEL_76;
            }
            *((_WORD *)v13 + 24) = *v30;
            memmove(v13 + 754, a3->LoopbackIfDescr.String, (unsigned __int16)*v30);
            v31 = a3->LoopbackIfAlias.String;
            *((_WORD *)v13 + 58) = p_LoopbackIfAlias->Length;
            v32 = (wchar_t *)(v13 + 118);
            Length = p_LoopbackIfAlias->Length;
          }
          memmove(v32, v31, Length);
          v10 = a1;
          *((_DWORD *)v13 + 178) = 1;
LABEL_16:
          *((_WORD *)v13 + 25) = 754;
          *(_GUID *)(v13 + 68) = v10->NetworkGuid;
          *((_DWORD *)v13 + 24) = v10->Compartment->CompartmentId;
          NetworkGuid = v10->NetworkGuid;
          *((_WORD *)v13 + 368) = 0;
          *(_GUID *)(v13 + 100) = NetworkGuid;
          if ( a6 )
            v19 = *((_DWORD *)a6 + 8);
          else
            LOBYTE(v19) = 0;
          v20 = ndisIfProviderHandle;
          if ( a3 )
            v20 = ndisIfLoopbackProviderHandle;
          appended = ndisIfRegisterInterfaceEx(v20, v17, a7, (struct _NET_IF_INFORMATION *)v13, a8, v19, &v36);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork(a1, v17);
            goto LABEL_23;
          }
          goto LABEL_76;
        }
        *((_DWORD *)v13 + 1) |= 2u;
        *((_DWORD *)v13 + 5) = -1;
        *((_DWORD *)v13 + 7) = a7->Miniport->IfBlock->AccessType;
        *((_DWORD *)v13 + 8) = a7->Miniport->IfBlock->DirectionType;
        *((_DWORD *)v13 + 9) = a7->Miniport->IfBlock->ConnectionType;
        v13[40] = 0;
        if ( a7->FilterFriendlyName->Length <= 0x200u )
          v11 = a7->FilterFriendlyName->Length;
        *((_WORD *)v13 + 376) = v11;
        v14 = *((_WORD *)v13 + 376);
        *((_WORD *)v13 + 24) = v11;
        if ( v14 )
          memmove(v13 + 754, a7->FilterFriendlyName->Buffer, v14);
        v13[738] = a7->Miniport->IfBlock->ifHideInterfaceInUi;
        v15 = a7->Miniport->IfBlock->ifPhysAddress.Length;
        *((_WORD *)v13 + 21) = v15;
        *((_WORD *)v13 + 322) = v15;
        *((_DWORD *)v13 + 11) = 44565126;
        memmove(v13 + 646, a7->Miniport->IfBlock->ifPhysAddress.Address, v15);
        v16 = *((unsigned __int16 *)v13 + 21);
        *((_WORD *)v13 + 339) = v16;
        memmove(v13 + 680, a7->Miniport->IfBlock->PermanentPhysAddress.Address, v16);
        *(_GUID *)(v13 + 52) = a7->InterfaceGuid;
        *((_DWORD *)v13 + 21) = a7->Miniport->IfBlock->SupportedStatistics;
        *((_DWORD *)v13 + 22) = a7->MediaType;
        *((_DWORD *)v13 + 23) = a7->PhysicalMediaType;
        *((_DWORD *)v13 + 178) = a7->Miniport->IfBlock->ifAdminStatus;
        *((_QWORD *)v13 + 90) = a7->XmitLinkSpeed;
        *((_QWORD *)v13 + 91) = a7->RcvLinkSpeed;
        *((_DWORD *)v13 + 185) = a7->MediaConnectState;
        *((_DWORD *)v13 + 186) = a7->MediaDuplexState;
        *((_DWORD *)v13 + 158) = a7->Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)v13 + 159) = a7->Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)v13 + 160) = a7->Miniport->IfBlock->ifMtu;
LABEL_15:
        v17.Value = a4->Value;
        goto LABEL_16;
      }
      *(_QWORD *)(v13 + 28) = 2LL;
      *((_DWORD *)v13 + 9) = 1;
      switch ( *((_WORD *)a6 + 8) )
      {
        case 1:
          if ( *((_DWORD *)a6 + 14) != 9 )
          {
            if ( *((_DWORD *)a6 + 14) == 10 )
              goto LABEL_50;
            if ( *((_DWORD *)a6 + 14) == 11 )
            {
              *((_DWORD *)v13 + 8) = 2;
              goto LABEL_50;
            }
            if ( *((_DWORD *)a6 + 14) != 12 )
              goto LABEL_31;
          }
          break;
        case 6:
        case 9:
          goto LABEL_31;
        case 0x17:
          break;
        case 0x25:
          *((_DWORD *)v13 + 7) = 4;
          goto LABEL_31;
        case 0x83:
LABEL_50:
          *((_DWORD *)v13 + 7) = 3;
          goto LABEL_31;
        default:
LABEL_31:
          *((_DWORD *)v13 + 5) = -1;
          *((_DWORD *)v13 + 1) = 28;
          v23 = *((_DWORD *)v13 + 1);
          if ( *((_BYTE *)a6 + 133) )
            v23 = 29;
          *((_DWORD *)v13 + 1) = v23;
          if ( *((_BYTE *)a6 + 132) )
            v13[738] = 1;
          *((_DWORD *)v13 + 6) = 0;
          v13[40] = 0;
          *(_DWORD *)(v13 + 42) = 0;
          *((_WORD *)v13 + 23) = 0;
          *((_DWORD *)v13 + 22) = *((_DWORD *)a6 + 14);
          *((_DWORD *)v13 + 23) = *((_DWORD *)a6 + 15);
          *(_QWORD *)(v13 + 636) = 0LL;
          *((_WORD *)v13 + 322) = 0;
          *((_WORD *)v13 + 339) = 0;
          *((_QWORD *)v13 + 90) = 0LL;
          *((_QWORD *)v13 + 91) = 0LL;
          *(_QWORD *)(v13 + 740) = 0LL;
          *((_DWORD *)v13 + 178) = 2;
          *((_DWORD *)v13 + 158) = 6;
          v24 = **(_WORD **)a6;
          if ( v24 > 0x200u )
            v24 = 512;
          *((_WORD *)v13 + 58) = v24;
          if ( v24 )
            memmove(v13 + 118, *(const void **)(*(_QWORD *)a6 + 8LL), v24);
          v25 = **((_WORD **)a6 + 1);
          if ( v25 )
          {
            if ( v25 <= 0x200u )
              v11 = **((_WORD **)a6 + 1);
            *((_WORD *)v13 + 376) = v11;
            memmove(v13 + 754, *(const void **)(*((_QWORD *)a6 + 1) + 8LL), v11);
            *((_WORD *)v13 + 24) = *((_WORD *)v13 + 376);
          }
          *(struct _GUID *)(v13 + 52) = *a5;
          v26 = *((_WORD *)a6 + 32);
          if ( v26 )
          {
            *((_WORD *)v13 + 21) = v26;
            *((_WORD *)v13 + 322) = v26;
            *((_DWORD *)v13 + 11) = 44565126;
            memmove(v13 + 646, (char *)a6 + 66, v26);
            v27 = *((unsigned __int16 *)v13 + 21);
            *((_WORD *)v13 + 339) = v27;
            memmove(v13 + 680, (char *)a6 + 100, v27);
          }
          goto LABEL_15;
      }
      *((_DWORD *)v13 + 9) = 3;
      goto LABEL_50;
    }
    appended = -1073741670;
  }
LABEL_24:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqqL(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, (__int64)a3, (__int64)a4, v34);
  return (unsigned int)appended;
}
