/*
 * XREFs of ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEBT_NET_LUID_LH@@PEBU_GUID@@PEBUNdisNetworkInterfacePersistedState@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00C3AC8
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C001C89C (ndisIfCreateFilterInterface.c)
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001E9DC (-ndisInitializeNsiHelper@@YAJXZ.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@@W4NdisIfBlockSource@@@Z @ 0x1C0023FDC (-ndisIfCreateInterfaceFromPersistentStore@@YAHAEBU_GUID@@AEAUNdisNetworkInterfacePersistedState@.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003E7A0 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 * Callees:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@KPEAK@Z @ 0x1C001BD74 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ?ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z @ 0x1C0023F7C (-ndisIfUpdateLoopbackInterfaceOnNetwork@@YAXPEAU_NDIS_IF_NETWORK_BLOCK@@T_NET_LUID_LH@@@Z.c)
 *     ?ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z @ 0x1C0025DCC (-ndisIsValidIfString@@YAEPEBU_IF_COUNTED_STRING_LH@@@Z.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qqqq @ 0x1C00420DC (WPP_SF_qqqq.c)
 *     WPP_SF_qqqqL @ 0x1C0042138 (WPP_SF_qqqqL.c)
 *     NdisIfAllocateNetLuidIndexEx @ 0x1C00E2E80 (NdisIfAllocateNetLuidIndexEx.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00E2ED0 (NdisIfFreeNetLuidIndex.c)
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
  struct _NDIS_IF_NETWORK_BLOCK *v8; // rsi
  const union _NET_LUID_LH *v9; // rdi
  char v11; // bl
  __int64 IfBlock; // rcx
  unsigned __int16 v13; // r12
  char *PoolWithTag; // rax
  char *v15; // rdi
  unsigned __int16 v16; // ax
  unsigned int v17; // eax
  size_t v18; // r8
  union _NET_LUID_LH v19; // rbx
  _GUID NetworkGuid; // xmm0
  unsigned int v21; // edx
  _QWORD *v22; // rcx
  int appended; // esi
  int v25; // eax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // ax
  size_t v29; // r8
  _GUID LoopbackIfInterfaceGuid; // xmm0
  _IF_COUNTED_STRING_LH *p_LoopbackIfAlias; // rsi
  _WORD *v32; // r8
  wchar_t *v33; // rdx
  wchar_t *v34; // rcx
  size_t Length; // r8
  __int64 v36; // [rsp+38h] [rbp-59h]
  char v37; // [rsp+48h] [rbp-49h]
  unsigned int v38; // [rsp+4Ch] [rbp-45h] BYREF
  UINT32 NetLuidIndex; // [rsp+50h] [rbp-41h]
  _UNICODE_STRING Destination; // [rsp+58h] [rbp-39h] BYREF
  _UNICODE_STRING String; // [rsp+68h] [rbp-29h] BYREF
  UNICODE_STRING Source; // [rsp+78h] [rbp-19h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-9h] BYREF
  char v45; // [rsp+E0h] [rbp+4Fh]

  v45 = a2;
  *(_DWORD *)&Source.Length = 262146;
  Source.Buffer = L" ";
  v37 = 0;
  v8 = a1;
  NetLuidIndex = 0;
  v38 = 0;
  v9 = a4;
  v11 = a2;
  IfBlock = 4LL;
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
    WPP_SF_qqqq(0x79u, &WPP_f666f9a69dac3f1d24f4d94726ea9246_Traceguids, v8, a3, a4, a7);
  if ( v8 && (!a6 || *((_WORD *)a6 + 32) <= 0x20u) )
  {
    if ( !a7 || (IfBlock = (__int64)a7->Miniport->IfBlock, *(_WORD *)(IfBlock + 1124) <= 0x20u) )
    {
      v13 = 512;
      *(_DWORD *)&String.Length = 0x2000000;
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x6F8uLL, 0x6669444Eu);
      v15 = PoolWithTag;
      if ( !PoolWithTag )
      {
        appended = -1073741670;
        goto LABEL_24;
      }
      memset(PoolWithTag, 0, 0x4F8uLL);
      *(_DWORD *)v15 = 6291840;
      String.Buffer = (wchar_t *)(v15 + 1272);
      if ( !a6 )
      {
        if ( !a7 )
        {
          if ( v11 )
          {
            appended = NdisIfAllocateNetLuidIndexEx(24LL, a3->Flags & 1, &v38);
            if ( appended )
            {
LABEL_23:
              ExFreePoolWithTag(v15, 0);
LABEL_24:
              v9 = a4;
              goto LABEL_25;
            }
            v37 = 1;
            *((_WORD *)&a3->LoopbackIfLuid.Info + 3) = 24;
            NetLuidIndex = v38;
            a3->LoopbackIfLuid.Value = a3->LoopbackIfLuid.Value & 0xFFFF000000000000uLL | ((unsigned __int64)(v38 & 0xFFFFFF) << 24);
            appended = ExUuidCreate(&a3->LoopbackIfInterfaceGuid);
            if ( appended < 0 )
            {
LABEL_81:
              if ( v37 )
                NdisIfFreeNetLuidIndex(0x18u, NetLuidIndex);
              goto LABEL_23;
            }
          }
          v19.Value = (ULONG64)a3->LoopbackIfLuid;
          LoopbackIfInterfaceGuid = a3->LoopbackIfInterfaceGuid;
          *((_DWORD *)v15 + 2) = -1;
          *((_DWORD *)v15 + 3) = -1;
          *((_DWORD *)v15 + 4) = -1;
          *((_QWORD *)v15 + 90) = 0x40000000LL;
          *((_QWORD *)v15 + 91) = 0x40000000LL;
          *(_GUID *)(v15 + 52) = LoopbackIfInterfaceGuid;
          *(_QWORD *)(v15 + 28) = 1LL;
          *((_DWORD *)v15 + 9) = 1;
          v15[40] = 0;
          *((_QWORD *)v15 + 11) = 17LL;
          *((_DWORD *)v15 + 160) = 1500;
          *((_DWORD *)v15 + 185) = 1;
          *((_DWORD *)v15 + 186) = 2;
          *((_QWORD *)v15 + 79) = 1LL;
          if ( v45 )
          {
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00A0272);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v15 + 754);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_81;
            appended = RtlIntegerToUnicodeString(a1->Compartment->CompartmentId, 0xAu, &String);
            if ( appended < 0 )
              goto LABEL_81;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_81;
            *((_WORD *)v15 + 376) = Destination.Length;
            *((_WORD *)v15 + 24) = Destination.Length;
            RtlInitUnicodeString(&DestinationString, &xmmword_1C00A0482);
            *(_DWORD *)&Destination.Length = 0x2000000;
            Destination.Buffer = (wchar_t *)(v15 + 118);
            RtlCopyUnicodeString(&Destination, &DestinationString);
            appended = RtlAppendUnicodeStringToString(&Destination, &Source);
            if ( appended < 0 )
              goto LABEL_81;
            appended = RtlAppendUnicodeStringToString(&Destination, &String);
            if ( appended < 0 )
              goto LABEL_81;
            *((_WORD *)v15 + 58) = Destination.Length;
            a3->LoopbackIfDescr.Length = *((_WORD *)v15 + 24);
            memmove(a3->LoopbackIfDescr.String, v15 + 754, *((unsigned __int16 *)v15 + 376));
            v34 = a3->LoopbackIfAlias.String;
            a3->LoopbackIfAlias.Length = *((_WORD *)v15 + 58);
            v33 = (wchar_t *)(v15 + 118);
            Length = *((unsigned __int16 *)v15 + 58);
          }
          else
          {
            if ( !ndisIsValidIfString(&a3->LoopbackIfDescr)
              || (p_LoopbackIfAlias = &a3->LoopbackIfAlias, !ndisIsValidIfString(&a3->LoopbackIfAlias)) )
            {
              appended = -1073676267;
              goto LABEL_81;
            }
            *((_WORD *)v15 + 24) = *v32;
            memmove(v15 + 754, a3->LoopbackIfDescr.String, (unsigned __int16)*v32);
            v33 = a3->LoopbackIfAlias.String;
            *((_WORD *)v15 + 58) = p_LoopbackIfAlias->Length;
            v34 = (wchar_t *)(v15 + 118);
            Length = p_LoopbackIfAlias->Length;
          }
          memmove(v34, v33, Length);
          v8 = a1;
          *((_DWORD *)v15 + 178) = 1;
LABEL_16:
          *((_WORD *)v15 + 25) = 754;
          *(_GUID *)(v15 + 68) = v8->NetworkGuid;
          *((_DWORD *)v15 + 24) = v8->Compartment->CompartmentId;
          NetworkGuid = v8->NetworkGuid;
          *((_WORD *)v15 + 368) = 0;
          *(_GUID *)(v15 + 100) = NetworkGuid;
          if ( a6 )
            v21 = *((_DWORD *)a6 + 8);
          else
            v21 = 0;
          v22 = ndisIfProviderHandle;
          if ( a3 )
            v22 = ndisIfLoopbackProviderHandle;
          appended = ndisIfRegisterInterfaceEx(v22, v19, a7, (struct _NET_IF_INFORMATION *)v15, a8, v21, &v38);
          if ( !appended )
          {
            if ( a3 )
              ndisIfUpdateLoopbackInterfaceOnNetwork(a1, v19);
            goto LABEL_23;
          }
          goto LABEL_81;
        }
        *((_DWORD *)v15 + 1) |= 2u;
        *((_DWORD *)v15 + 2) = -1;
        *((_DWORD *)v15 + 3) = -1;
        *((_DWORD *)v15 + 4) = -1;
        *((_DWORD *)v15 + 5) = -1;
        *((_DWORD *)v15 + 7) = a7->Miniport->IfBlock->AccessType;
        *((_DWORD *)v15 + 8) = a7->Miniport->IfBlock->DirectionType;
        *((_DWORD *)v15 + 9) = a7->Miniport->IfBlock->ConnectionType;
        v15[40] = 0;
        if ( a7->FilterFriendlyName->Length <= 0x200u )
          v13 = a7->FilterFriendlyName->Length;
        *((_WORD *)v15 + 376) = v13;
        v16 = *((_WORD *)v15 + 376);
        *((_WORD *)v15 + 24) = v13;
        if ( v16 )
          memmove(v15 + 754, a7->FilterFriendlyName->Buffer, v16);
        v15[738] = a7->Miniport->IfBlock->ifHideInterfaceInUi;
        v17 = a7->Miniport->IfBlock->ifPhysAddress.Length;
        *((_WORD *)v15 + 21) = v17;
        *((_WORD *)v15 + 322) = v17;
        *((_DWORD *)v15 + 11) = 44565126;
        memmove(v15 + 646, a7->Miniport->IfBlock->ifPhysAddress.Address, v17);
        v18 = *((unsigned __int16 *)v15 + 21);
        *((_WORD *)v15 + 339) = v18;
        memmove(v15 + 680, a7->Miniport->IfBlock->PermanentPhysAddress.Address, v18);
        *(_GUID *)(v15 + 52) = a7->InterfaceGuid;
        *((_DWORD *)v15 + 21) = a7->Miniport->IfBlock->SupportedStatistics;
        *((_DWORD *)v15 + 22) = a7->MediaType;
        *((_DWORD *)v15 + 23) = a7->PhysicalMediaType;
        *((_DWORD *)v15 + 178) = a7->Miniport->IfBlock->ifAdminStatus;
        *((_QWORD *)v15 + 90) = a7->XmitLinkSpeed;
        *((_QWORD *)v15 + 91) = a7->RcvLinkSpeed;
        *((_DWORD *)v15 + 185) = a7->MediaConnectState;
        *((_DWORD *)v15 + 186) = a7->MediaDuplexState;
        *((_DWORD *)v15 + 158) = a7->Miniport->IfBlock->ifOperStatus;
        *((_DWORD *)v15 + 159) = a7->Miniport->IfBlock->ifOperStatusFlags;
        *((_DWORD *)v15 + 160) = a7->Miniport->IfBlock->ifMtu;
LABEL_15:
        v19.Value = a4->Value;
        goto LABEL_16;
      }
      *((_DWORD *)v15 + 9) = 1;
      *(_QWORD *)(v15 + 28) = 2LL;
      switch ( *((_WORD *)a6 + 8) )
      {
        case 1:
          if ( *((_DWORD *)a6 + 14) != 9 )
          {
            if ( *((_DWORD *)a6 + 14) == 10 )
              goto LABEL_54;
            if ( *((_DWORD *)a6 + 14) == 11 )
            {
              *((_DWORD *)v15 + 7) = 3;
              *((_DWORD *)v15 + 9) = 1;
              *((_DWORD *)v15 + 8) = 2;
              goto LABEL_34;
            }
            if ( *((_DWORD *)a6 + 14) != 12 )
            {
LABEL_34:
              *((_DWORD *)v15 + 1) = 28;
              *((_DWORD *)v15 + 5) = -1;
              *((_DWORD *)v15 + 2) = -1;
              *((_DWORD *)v15 + 3) = -1;
              *((_DWORD *)v15 + 4) = -1;
              v25 = *((_DWORD *)v15 + 1);
              if ( *((_BYTE *)a6 + 133) )
                v25 = 29;
              *((_DWORD *)v15 + 1) = v25;
              if ( *((_BYTE *)a6 + 132) )
                v15[738] = 1;
              *((_DWORD *)v15 + 6) = 0;
              v15[40] = 0;
              *(_DWORD *)(v15 + 42) = 0;
              *((_WORD *)v15 + 23) = 0;
              *((_DWORD *)v15 + 22) = *((_DWORD *)a6 + 14);
              *((_DWORD *)v15 + 23) = *((_DWORD *)a6 + 15);
              *(_QWORD *)(v15 + 636) = 0LL;
              *((_WORD *)v15 + 322) = 0;
              *((_WORD *)v15 + 339) = 0;
              *((_QWORD *)v15 + 90) = 0LL;
              *((_QWORD *)v15 + 91) = 0LL;
              *(_QWORD *)(v15 + 740) = 0LL;
              *((_DWORD *)v15 + 178) = 2;
              *((_DWORD *)v15 + 158) = 6;
              v26 = **(_WORD **)a6;
              if ( v26 > 0x200u )
                v26 = 512;
              *((_WORD *)v15 + 58) = v26;
              if ( v26 )
                memmove(v15 + 118, *(const void **)(*(_QWORD *)a6 + 8LL), v26);
              v27 = **((_WORD **)a6 + 1);
              if ( v27 )
              {
                if ( v27 <= 0x200u )
                  v13 = **((_WORD **)a6 + 1);
                *((_WORD *)v15 + 376) = v13;
                memmove(v15 + 754, *(const void **)(*((_QWORD *)a6 + 1) + 8LL), v13);
                *((_WORD *)v15 + 24) = *((_WORD *)v15 + 376);
              }
              *(struct _GUID *)(v15 + 52) = *a5;
              v28 = *((_WORD *)a6 + 32);
              if ( v28 )
              {
                *((_WORD *)v15 + 21) = v28;
                *((_WORD *)v15 + 322) = v28;
                *((_DWORD *)v15 + 11) = 44565126;
                memmove(v15 + 646, (char *)a6 + 66, v28);
                v29 = *((unsigned __int16 *)v15 + 21);
                *((_WORD *)v15 + 339) = v29;
                memmove(v15 + 680, (char *)a6 + 100, v29);
              }
              goto LABEL_15;
            }
          }
          break;
        case 6:
        case 9:
          goto LABEL_32;
        case 0x17:
          break;
        case 0x25:
          *(_QWORD *)(v15 + 28) = 4LL;
          goto LABEL_33;
        case 0x47:
LABEL_32:
          *(_QWORD *)(v15 + 28) = 2LL;
LABEL_33:
          *((_DWORD *)v15 + 9) = 1;
          goto LABEL_34;
        case 0x83:
LABEL_54:
          *((_DWORD *)v15 + 9) = 1;
LABEL_55:
          *(_QWORD *)(v15 + 28) = 3LL;
          goto LABEL_34;
        default:
          goto LABEL_34;
      }
      *((_DWORD *)v15 + 9) = 3;
      goto LABEL_55;
    }
  }
  appended = -1073741811;
LABEL_25:
  if ( (unsigned __int8)byte_1C00A0265 >= 4u )
  {
    LODWORD(v36) = appended;
    WPP_SF_qqqqL(IfBlock, a2, a1, a3, v9, a7, v36);
  }
  return (unsigned int)appended;
}
