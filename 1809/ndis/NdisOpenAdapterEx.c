/*
 * XREFs of NdisOpenAdapterEx @ 0x1C010D520
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisDereferenceProtocol @ 0x1C0017C5C (ndisDereferenceProtocol.c)
 *     ndisReferenceProtocol @ 0x1C001A488 (ndisReferenceProtocol.c)
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001B314 (ndisUpdateCheckForLoopbackFlag.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001BD00 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisMSwapOpenHandlers @ 0x1C001C6F8 (ndisMSwapOpenHandlers.c)
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003A960 (WPP_SF_qqq.c)
 *     WPP_SF_qqqL @ 0x1C004207C (WPP_SF_qqqL.c)
 *     WPP_SF_qZZ @ 0x1C005E828 (WPP_SF_qZZ.c)
 *     ndisRemoveOpenFromGlobalList @ 0x1C006439C (ndisRemoveOpenFromGlobalList.c)
 *     ?GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ @ 0x1C00B4308 (-GetCurrentLink@BindEngine@Ndis@@QEBAPEAUNDIS_BIND_LINK_BASE@@XZ.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ?BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BF650 (-BeginPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z @ 0x1C00BFE54 (-AddBindContext@BindState@Ndis@@QEAA_NPEAX@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00C1204 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ndisPktMonOpenRegister @ 0x1C00C37D0 (ndisPktMonOpenRegister.c)
 *     ndisAllocateOpenBlock @ 0x1C00C3978 (ndisAllocateOpenBlock.c)
 *     ndisMOpenAdapter @ 0x1C010D8F0 (ndisMOpenAdapter.c)
 *     ndisFindRootDevice @ 0x1C0114F94 (ndisFindRootDevice.c)
 */

NDIS_STATUS __stdcall NdisOpenAdapterEx(
        NDIS_HANDLE NdisProtocolHandle,
        NDIS_HANDLE ProtocolBindingContext,
        PNDIS_OPEN_PARAMETERS OpenParameters,
        NDIS_HANDLE BindContext,
        PNDIS_HANDLE NdisBindingHandle)
{
  BOOL v5; // r13d
  NDIS_HANDLE v7; // r15
  struct _NDIS_OPEN_BLOCK *OpenBlock; // r14
  char v9; // r12
  __int64 MediumArraySize; // rdx
  _UNICODE_STRING *v11; // rsi
  _UNICODE_STRING *v12; // r13
  __int64 v13; // rdi
  __int64 i; // rcx
  unsigned int FrameTypeArraySize; // eax
  __int64 v16; // r8
  KIRQL v17; // al
  KSPIN_LOCK *v18; // r13
  KIRQL v19; // al
  _QWORD *v20; // rbx
  int *v21; // rsi
  bool v22; // zf
  int v23; // r13d
  int v24; // ecx
  _DWORD *v25; // rax
  KSPIN_LOCK *v26; // rcx
  struct NDIS_BIND_LINK_BASE *CurrentLink; // rax
  struct _NDIS_MINIPORT_BLOCK *v28; // rdx
  NDIS_STATUS v29; // esi
  _QWORD *v30; // rbx
  _BYTE *v32; // rbx
  _QWORD *v33; // r15
  _DWORD *v34; // rsi
  _QWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // [rsp+30h] [rbp-49h]
  char v38; // [rsp+38h] [rbp-41h]
  KIRQL NewIrql; // [rsp+39h] [rbp-40h]
  __int64 v40; // [rsp+40h] [rbp-39h] BYREF
  unsigned int j; // [rsp+48h] [rbp-31h]
  int v42; // [rsp+4Ch] [rbp-2Dh] BYREF
  BOOL v43; // [rsp+50h] [rbp-29h]
  _QWORD *PoolWithTag; // [rsp+58h] [rbp-21h]
  _UNICODE_STRING *v45; // [rsp+60h] [rbp-19h]
  _UNICODE_STRING *v46; // [rsp+68h] [rbp-11h]
  _QWORD *v47; // [rsp+70h] [rbp-9h]
  _DWORD *v48; // [rsp+78h] [rbp-1h]
  int *v49; // [rsp+80h] [rbp+7h]
  PKSPIN_LOCK SpinLock; // [rsp+88h] [rbp+Fh]
  _DWORD *v51; // [rsp+90h] [rbp+17h]

  v40 = 0LL;
  PoolWithTag = 0LL;
  LOBYTE(v5) = 0;
  v38 = 0;
  *NdisBindingHandle = 0LL;
  v7 = NdisProtocolHandle;
  v42 = -1073741823;
  OpenBlock = 0LL;
  v43 = v5;
  v9 = 0;
  if ( NdisProtocolHandle )
  {
    if ( (unsigned __int8)byte_1C00A0255 >= 4u )
      WPP_SF_qZZ(
        0x41u,
        (__int64)ProtocolBindingContext,
        (__int64)NdisProtocolHandle,
        (const wchar_t *)NdisProtocolHandle + 36,
        &OpenParameters->AdapterName->Length);
    ndisReferencePackage((__int64)&ndisPkgs);
    if ( *((struct _KTHREAD **)v7 + 52) == KeGetCurrentThread() )
    {
      if ( ndisReferenceProtocol((__int64)v7, 9u) )
      {
        v11 = (_UNICODE_STRING *)*((_QWORD *)v7 + 54);
        v9 = 1;
        v45 = v11;
        if ( v11 )
        {
          v12 = (_UNICODE_STRING *)*((_QWORD *)v7 + 55);
          v13 = *((_QWORD *)v7 + 57);
          v46 = v12;
          v40 = v13;
        }
        else
        {
          ndisFindRootDevice(OpenParameters->AdapterName, (__int64)&v40, 45);
          v13 = v40;
          v11 = v45;
          v43 = v40 != 0;
          v12 = v46;
        }
        *((_QWORD *)v7 + 54) = 0LL;
        if ( v13 )
        {
          OpenBlock = (struct _NDIS_OPEN_BLOCK *)ndisAllocateOpenBlock(v13, (__int64)v7, 1);
          if ( !OpenBlock )
            goto LABEL_51;
          v51 = (_DWORD *)(v13 + 124);
          if ( (*(_DWORD *)(v13 + 124) & 0x100) == 0
            && (*(_BYTE *)(v13 + 2003) || *(_DWORD *)(v13 + 2264) == 6 || *(_BYTE *)(v13 + 32) < 6u) )
          {
            if ( !*(_BYTE *)(v13 + 2002) )
              *(_BYTE *)(v13 + 2002) = 1;
            OpenBlock->ProtocolBindingContext = ProtocolBindingContext;
            OpenBlock->BindDeviceName = v11;
            OpenBlock->RootDeviceName = v12;
            OpenBlock->MiniportHandle = (_NDIS_MINIPORT_BLOCK *)v13;
            OpenBlock->ProtocolHandle = (_NDIS_PROTOCOL_BLOCK *)v7;
            *NdisBindingHandle = OpenBlock;
            MediumArraySize = OpenParameters->MediumArraySize;
            if ( (*(_DWORD *)(v13 + 568) & 0x80000001) == 0x80000001 )
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
              {
                if ( OpenParameters->MediumArray[i] == NdisMediumWan )
                  break;
              }
            }
            else
            {
              for ( i = 0LL; (unsigned int)i < (unsigned int)MediumArraySize; i = (unsigned int)(i + 1) )
              {
                if ( OpenParameters->MediumArray[i] == *(_DWORD *)(v13 + 464) )
                  break;
              }
            }
            if ( (_DWORD)i == (_DWORD)MediumArraySize )
            {
              v29 = -1073676263;
              goto LABEL_82;
            }
            *OpenParameters->SelectedMediumIndex = i;
            FrameTypeArraySize = OpenParameters->FrameTypeArraySize;
            if ( FrameTypeArraySize <= 4 )
            {
              v16 = 0LL;
              for ( OpenBlock->FrameTypeArraySize = FrameTypeArraySize;
                    (unsigned int)v16 < OpenParameters->FrameTypeArraySize;
                    v16 = (unsigned int)(v16 + 1) )
              {
                OpenBlock->FrameTypeArray[v16] = __ROL2__(OpenParameters->FrameTypeArray[v16], 8);
              }
              if ( ndisDatapathVerifierMode == 1 )
              {
                if ( !MmIsDriverVerifyingByAddress(*((PVOID *)v7 + 13)) )
                  goto LABEL_23;
              }
              else if ( ndisDatapathVerifierMode != 2 )
              {
                goto LABEL_23;
              }
              v13 = v40;
              OpenBlock->OpenFlags |= 1u;
LABEL_23:
              v17 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
              OpenBlock->NextGlobalOpen = ndisGlobalOpenList;
              ndisGlobalOpenList = OpenBlock;
              v38 = 1;
              KeReleaseSpinLock(&ndisGlobalOpenListLock, v17);
              v18 = (KSPIN_LOCK *)(v13 + 96);
              SpinLock = (PKSPIN_LOCK)(v13 + 96);
              v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v13 + 96));
              v20 = (_QWORD *)(v13 + 520);
              v13 = v40;
              *v20 = KeGetCurrentThread();
              NewIrql = v19;
              v47 = v20;
              v21 = (int *)(v13 + 120);
              *(_DWORD *)(v13 + 1864) = 986519;
              v22 = (*(_DWORD *)(v13 + 120) & 0x40000) == 0;
              v48 = (_DWORD *)(v13 + 1864);
              v49 = (int *)(v13 + 120);
              if ( v22 )
              {
                v32 = (_BYTE *)(v13 + 89);
                if ( *(_BYTE *)(v13 + 89) )
                {
                  v33 = v47;
                  v34 = (_DWORD *)(v13 + 1864);
                  do
                  {
                    *v33 = 0LL;
                    *v34 = 0;
                    KeReleaseSpinLockFromDpcLevel(v18);
                    for ( j = 0; j < 0x32; ++j )
                      ;
                    KeAcquireSpinLockAtDpcLevel(v18);
                    *v33 = KeGetCurrentThread();
                    *v34 = 986526;
                  }
                  while ( *v32 );
                  v13 = v40;
                  v7 = NdisProtocolHandle;
                  v21 = v49;
                }
                *v32 = 1;
                v20 = v47;
                *(_DWORD *)(v13 + 1868) = 986526;
                v13 = v40;
                *(_QWORD *)(v40 + 1872) = KeGetCurrentThread();
              }
              ndisMOpenAdapter(&v42, OpenBlock, v13);
              v23 = v42;
              if ( !v42 )
              {
                if ( (unsigned __int8)byte_1C00A0255 >= 4u )
                  WPP_SF_qqq(0x42u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, OpenBlock, v7, v13);
                v24 = *v21;
                if ( (*v21 & 0x20000000) == 0 && (*v21 & 0x20000) == 0 )
                {
                  ndisMSwapOpenHandlers(v13, 2u);
                  v24 = *v21;
                }
                if ( (v24 & 0x20000) != 0 && *((_QWORD *)v7 + 25) )
                {
                  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x28uLL, 0x6977444Eu);
                  if ( PoolWithTag )
                  {
                    ndisMReferenceOpen((__int64)OpenBlock, 0);
                    _InterlockedAdd(&OpenBlock->PendingAfNotifications, 1u);
                    v35 = PoolWithTag;
                    v13 = v40;
                    v23 = v42;
                    *PoolWithTag = OpenBlock;
                    v35[1] = 0LL;
                    v35[3] = ndisMFinishQueuedPendingOpen;
                    v35[4] = v35;
                  }
                  else if ( (unsigned __int8)byte_1C00A0262 >= 2u )
                  {
                    WPP_SF_q(0x43u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, (__int64)OpenBlock);
                  }
                }
              }
              if ( (*v21 & 0x40000) == 0 )
              {
                *(_BYTE *)(v13 + 89) = 0;
                *(_DWORD *)(v13 + 1868) = 0;
                *(_QWORD *)(v13 + 1872) = 0LL;
              }
              v25 = v48;
              *v20 = 0LL;
              v26 = SpinLock;
              *v25 = 0;
              KeReleaseSpinLock(v26, NewIrql);
              Ndis::BindEngine::BeginPolicyUpdates((Ndis::BindEngine *)(v13 + 5144));
              CurrentLink = Ndis::BindEngine::GetCurrentLink((Ndis::BindEngine *)(v13 + 5144));
              OpenBlock->Bind = (NDIS_BIND_PROTOCOL_LINK *)CurrentLink;
              if ( !Ndis::BindState::AddBindContext(&CurrentLink->BindState, OpenBlock) )
                v23 = -1073741670;
              v29 = v23;
              Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v13 + 5144), v28);
              if ( !v23 )
              {
                if ( (*v51 & 0x2000) != 0 )
                {
                  v36 = *(_QWORD *)(v13 + 4016);
                  if ( v36 )
                    (*(void (__fastcall **)(_QWORD))(v36 + 32))(*(_QWORD *)(v36 + 8));
                }
                ndisPktMonOpenRegister((__int64)OpenBlock);
                v30 = PoolWithTag;
                *((_QWORD *)BindContext + 2) = OpenBlock;
                if ( !v30 )
                  goto LABEL_38;
                (*((void (__fastcall **)(void *, _QWORD))v7 + 14))(OpenBlock->ProtocolBindingContext, 0LL);
                ndisUpdateCheckForLoopbackFlag(v13);
                ExQueueWorkItem((PWORK_QUEUE_ITEM)(v30 + 1), (WORK_QUEUE_TYPE)40);
                v29 = 259;
              }
              if ( v29 == 259 )
              {
LABEL_38:
                ndisDereferencePackage((__int64)&ndisPkgs);
                if ( v43 )
                  ndisDereferenceMiniport(v13, 0x2Du);
                if ( (unsigned __int8)byte_1C00A0255 >= 4u )
                {
                  LODWORD(v37) = v29;
                  WPP_SF_qqqL(0x44u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids, v7, v13, OpenBlock, v37);
                }
                return v29;
              }
LABEL_82:
              *NdisBindingHandle = 0LL;
              if ( v9 )
                ndisDereferenceProtocol((_NDIS_PROTOCOL_BLOCK *)v7, MediumArraySize, 9u);
              if ( v38 )
                ndisRemoveOpenFromGlobalList((__int64)OpenBlock);
              goto LABEL_38;
            }
LABEL_51:
            v29 = -1073741670;
            goto LABEL_82;
          }
        }
        v29 = -1073676282;
        goto LABEL_82;
      }
      v29 = -1073676286;
    }
    else
    {
      v29 = v42;
    }
    v13 = v40;
    goto LABEL_82;
  }
  if ( (unsigned __int8)byte_1C00A0255 >= 2u )
    WPP_SF_(0x40u, &WPP_5a25d62004233057cf64a29056d8f8be_Traceguids);
  return -1073741823;
}
