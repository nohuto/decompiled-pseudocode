/*
 * XREFs of ndisMInvokeOidRequest @ 0x1C00B7B80
 * Callers:
 *     ndisMDoOidRequest @ 0x1C000E0B0 (ndisMDoOidRequest.c)
 *     ?ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00728D0 (-ndisSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 *     ndisSetPowerResumeCompleteWorkItem @ 0x1C0076180 (ndisSetPowerResumeCompleteWorkItem.c)
 *     ndisAddWoLDirectedMAC @ 0x1C00E62FC (ndisAddWoLDirectedMAC.c)
 *     ndisRemoveWoLDirectedMAC @ 0x1C00E82A4 (ndisRemoveWoLDirectedMAC.c)
 *     ndisMInvokeBlockingOidRequest @ 0x1C00F0810 (ndisMInvokeBlockingOidRequest.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0009B54 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ndisOidCloneForCompatibility @ 0x1C000DB90 (ndisOidCloneForCompatibility.c)
 *     ?ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C000E610 (-ndisDisarmWatchdogAsync@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisOidFreeInternalCloneRequest @ 0x1C000F400 (ndisOidFreeInternalCloneRequest.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMInvokeOidRequest(__int64 a1, _NDIS_OID_REQUEST *a2)
{
  __int64 Oid; // r13
  _NDIS_OID_REQUEST *v4; // r14
  __int64 v5; // r15
  NDIS_STATUS v6; // eax
  PNDIS_OID_REQUEST v7; // rsi
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v11; // rbp
  struct _NDIS_REFCOUNT_BLOCK *v12; // rax
  __int64 v13; // r12
  int v14; // ebx
  struct _NDIS_REFCOUNT_BLOCK *v15; // rsi
  char v16; // al
  __int64 v17; // rcx
  BOOLEAN v18; // al
  unsigned int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  ULONG v25; // eax
  unsigned int v26; // eax
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-48h]
  ULONG SecondsRemaining; // [rsp+70h] [rbp+8h] BYREF
  PNDIS_OID_REQUEST v29; // [rsp+78h] [rbp+10h] BYREF

  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v4 = a2;
  v5 = *(_QWORD *)(a1 + 3792);
  v29 = 0LL;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qD(0xEFu, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, Oid);
  v6 = ndisOidCloneForCompatibility((_BYTE *)a1, (__int64)v4, 1, &v29);
  v7 = v29;
  v8 = v6;
  if ( v6 )
    goto LABEL_26;
  if ( v29 && (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(0xF0u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, v4, v29, v29->DATA.QUERY_INFORMATION.Oid);
  v9 = *(_QWORD *)(a1 + 3792);
  v10 = *(_QWORD *)(v9 + 352);
  if ( !v10 || *(_QWORD *)(v10 + 64) == *(_QWORD *)(v9 + 176) )
    v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 5512);
  else
    v11 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 5520);
  if ( v11 != (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
  {
    v12 = ndisRefCountHandleFromRefCountBlock(v11);
    KeWaitForSingleObject(&v12[2].RefWithStack[0].Block.References[2], Executive, 0, 0, 0LL);
  }
  v13 = *(_QWORD *)(v5 + 176);
  v14 = 35000;
  if ( v11 == (struct _NDIS_REFCOUNT_BLOCK *)-1LL )
    goto LABEL_19;
  v15 = ndisRefCountHandleFromRefCountBlock(v11);
  v15[2].RefWithStack[0].Block.Dereferences[4] = (_NDIS_REFCOUNT_STACK_ENTRY)846677070;
  v16 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 == 17 )
  {
    v17 = a1;
  }
  else if ( v16 == 5 )
  {
    v17 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( v16 != 18 )
      goto LABEL_18;
    v17 = *(_QWORD *)(a1 + 16);
  }
  if ( v17 )
  {
    if ( (*(_DWORD *)(v17 + 120) & 0x100) != 0 )
    {
      v18 = 0;
      goto LABEL_17;
    }
    v18 = PoQueryWatchdogTime(*(PDEVICE_OBJECT *)(v17 + 3864), &SecondsRemaining);
    if ( !v18 )
    {
LABEL_17:
      *(_BYTE *)&v15[3].RefWithStack[0].Block.References[4] = v18;
      goto LABEL_18;
    }
    v25 = SecondsRemaining;
    if ( SecondsRemaining < 3 )
      v25 = 3;
    v26 = 1000 * v25 - 3000;
    if ( v26 < 0xBB8 )
    {
      v26 = 3000;
    }
    else if ( v26 >= 0x88B8 )
    {
LABEL_36:
      v18 = 1;
      goto LABEL_17;
    }
    v14 = v26;
    goto LABEL_36;
  }
LABEL_18:
  v15[2].RefWithStack[0].Block.Dereferences[5] = (_NDIS_REFCOUNT_STACK_ENTRY)v14;
  *((_QWORD *)v15[2].RefWithStack + 7) = &ndisGlobalTriageBlock;
  *(_QWORD *)&v15[3].Flags = a1;
  v15[3].TaggedRefCounts.Tags = (_NDIS_REFCOUNT_TAGGED_ENTRY *)MEMORY[0xFFFFF78000000008];
  *(_QWORD *)v15[3].RefWithStack[0].Block.References = KeGetCurrentThread();
  v19 = g_ndisWatchdogSequenceNumber;
  *(_QWORD *)&v15[3].RefWithStack[0].Block.References[2] = Oid;
  *(_QWORD *)v15[3].RefWithStack[0].Block.Dereferences = v13;
  g_ndisWatchdogSequenceNumber = v19 + 1;
  v15[2].RefWithStack[0].Block.References[1] = (_NDIS_REFCOUNT_STACK_ENTRY)(v19 + 1);
  v20 = -10000LL * *(_DWORD *)&v15[2].RefWithStack[0].Block.Dereferences[5];
  v15[2].RefWithStack[0].Block.Dereferences[2] = (_NDIS_REFCOUNT_STACK_ENTRY)35;
  v15[2].TaggedRefCounts.RefMask[0] = 1;
  KeClearEvent((PRKEVENT)&v15[2].RefWithStack[0].Block.References[2]);
  KeSetTimerEx((PKTIMER)((char *)v15->RefWithStack + 56), (LARGE_INTEGER)v20, 0, (PKDPC)v15);
  v7 = v29;
LABEL_19:
  v21 = *(_QWORD *)(a1 + 3792);
  v22 = *(_QWORD *)(v21 + 352);
  if ( (!v22 || *(_QWORD *)(v22 + 64) == *(_QWORD *)(v21 + 176))
    && ndisVerifierNdisDispatch
    && (*(_BYTE *)(v5 + 26) & 2) != 0 )
  {
    if ( v7 )
      v4 = v7;
    v23 = ndisVerifierNdisDispatch->NdisMiniportOidRequestHandler(
            *(void **)(a1 + 24),
            v4,
            (void *)a1,
            *(void **)(a1 + 5000),
            *(int (__fastcall **)(void *, _NDIS_OID_REQUEST *))(v5 + 176));
  }
  else
  {
    if ( v7 )
      v4 = v7;
    v23 = (*(__int64 (__fastcall **)(_QWORD, _NDIS_OID_REQUEST *))(v5 + 176))(*(_QWORD *)(a1 + 24), v4);
  }
  v8 = v23;
  if ( v23 != 259 )
  {
    ndisDisarmWatchdogAsync((struct NDISWATCHDOG__ *)v11);
LABEL_26:
    if ( v8 != 259 && v7 )
      ndisOidFreeInternalCloneRequest((KSPIN_LOCK *)a1, (__int64)v7, 1, 0LL);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
  {
    LODWORD(Timeout) = v8;
    WPP_SF_qdD(0xF1u, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, Oid, Timeout);
  }
  return v8;
}
