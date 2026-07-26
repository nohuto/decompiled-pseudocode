/*
 * XREFs of NdisCoCreateVc @ 0x1C0084220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 */

NDIS_STATUS __stdcall NdisCoCreateVc(
        NDIS_HANDLE NdisBindingHandle,
        NDIS_HANDLE NdisAfHandle,
        NDIS_HANDLE ProtocolVcContext,
        PNDIS_HANDLE NdisVcHandle)
{
  NDIS_HANDLE *v5; // rsi
  bool v7; // r13
  _QWORD *v8; // r15
  NDIS_STATUS v9; // ebp
  _DWORD *v10; // rbx
  int v11; // r12d
  _DWORD *PoolWithTag; // rax
  int v13; // edx
  char *v14; // rax
  char *v15; // rdi
  LARGE_INTEGER *v16; // r9
  __int64 v17; // rcx
  _DWORD *v18; // rdx
  NDIS_HANDLE v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rdx
  NDIS_HANDLE *v27; // r12
  NDIS_HANDLE *v28; // r13
  _DWORD *v29; // r8
  NDIS_STATUS v30; // eax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  KSPIN_LOCK *v34; // r8
  _QWORD *v35; // rax
  char *v36; // rcx
  _LIST_ENTRY *v37; // rdx
  void (__fastcall *v38)(_QWORD); // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int8 v44; // dl
  bool v45; // al
  void (__fastcall *v46)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int); // rax
  void (__fastcall *v47)(void *, struct _NDIS_PACKET **, unsigned int); // rcx
  void (*v48)(int, void *, struct _NDIS_PACKET *); // rdx
  void (__fastcall *v49)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r8
  void (__fastcall *v50)(void *, struct _NET_BUFFER_LIST *, unsigned int); // r9
  KIRQL NewIrql; // [rsp+40h] [rbp-58h]
  int v53; // [rsp+44h] [rbp-54h]
  LARGE_INTEGER *v54; // [rsp+48h] [rbp-50h]
  char Increment; // [rsp+A0h] [rbp+8h]
  bool v56; // [rsp+A8h] [rbp+10h]

  v5 = (NDIS_HANDLE *)NdisAfHandle;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      19,
      16,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
  v54 = (LARGE_INTEGER *)*((_QWORD *)NdisBindingHandle + 2);
  v7 = v5 && ((_DWORD)v5[1] & 1) != 0;
  v56 = v7;
  if ( !v5 || (Increment = 1, NdisBindingHandle != v5[46]) )
    Increment = 0;
  v8 = *NdisVcHandle;
  v9 = 0;
  v10 = 0LL;
  v11 = *(_DWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 64LL) & 0x40000000;
  v53 = v11;
  if ( v8 && !v11 )
  {
    v9 = -1073741823;
    goto LABEL_120;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x158uLL, 0x6F63444Eu);
  v10 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v9 = -1073741670;
    goto LABEL_120;
  }
  memset(PoolWithTag, 0, 0x158uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)v10 + 2);
  *((_QWORD *)v10 + 20) = v10 + 38;
  *((_QWORD *)v10 + 19) = v10 + 38;
  *((_QWORD *)v10 + 5) = v10 + 8;
  *((_QWORD *)v10 + 4) = v10 + 8;
  *((_QWORD *)v10 + 7) = v10 + 12;
  *((_QWORD *)v10 + 6) = v10 + 12;
  if ( v8 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        18,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    v15 = (char *)v8[9];
    *((_QWORD *)v10 + 25) = v8[25];
LABEL_27:
    v16 = v54;
    goto LABEL_28;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v13,
      19,
      17,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
  v14 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6F63444Eu);
  v15 = v14;
  if ( !v14 )
  {
    v9 = -1073741670;
    ExFreePoolWithTag(v10, 0);
    v10 = 0LL;
    goto LABEL_120;
  }
  memset(v14, 0, 0x90uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)v15 + 1);
  v16 = v54;
  *((_QWORD *)v15 + 15) = v54;
  if ( !v7 )
  {
    v9 = (*((__int64 (__fastcall **)(LARGE_INTEGER, _DWORD *, _DWORD *))NdisBindingHandle + 121))(v54[3], v10, v10 + 50);
    if ( v9 )
    {
      ExFreePoolWithTag(v15, 0);
      goto LABEL_98;
    }
    *((_BYTE *)v10 + 336) = 1;
    goto LABEL_27;
  }
LABEL_28:
  *((_QWORD *)v10 + 26) = *(_QWORD *)(v16[470].QuadPart + 280);
  if ( LOBYTE(v16[4].LowPart) < 6u )
    v17 = 0LL;
  else
    v17 = *(_QWORD *)(v16[470].QuadPart + 536);
  *((_QWORD *)v10 + 30) = v17;
  if ( !v7 )
  {
    *((_QWORD *)v10 + 27) = *(_QWORD *)(v16[470].QuadPart + 512);
    *((_QWORD *)v10 + 28) = *(_QWORD *)(v16[470].QuadPart + 520);
    *((_QWORD *)v10 + 29) = *(_QWORD *)(v16[470].QuadPart + 528);
  }
  *((_QWORD *)v10 + 24) = v16;
  v18 = v15 + 4;
  *((_QWORD *)v10 + 1) = v15 + 4;
  *((_QWORD *)v10 + 9) = v15;
  *((_QWORD *)v10 + 8) = v5;
  *v10 = 1;
  if ( !v5 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v18) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)v18,
        19,
        19,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    *((_QWORD *)v10 + 3) = ProtocolVcContext;
    *((_QWORD *)v10 + 10) = NdisBindingHandle;
    *((_QWORD *)v15 + 5) = v10;
    v39 = *((_QWORD *)v10 + 3);
    v10[22] = 1;
    *((_QWORD *)v15 + 3) = v39;
    *((_QWORD *)v15 + 2) = NdisBindingHandle;
    v40 = *((_QWORD *)NdisBindingHandle + 3);
    if ( *(_BYTE *)(v40 + 56) < 6u )
    {
      v41 = 0LL;
      *((_QWORD *)v15 + 6) = *(_QWORD *)(v40 + 304);
      v42 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 312LL);
      *((_QWORD *)v15 + 8) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 8) = *(_QWORD *)(v40 + 216);
      v41 = *(_QWORD *)(*((_QWORD *)NdisBindingHandle + 3) + 208LL);
      v42 = 0LL;
      *((_QWORD *)v15 + 6) = 0LL;
    }
    *((_QWORD *)v15 + 9) = v41;
    *((_QWORD *)v15 + 7) = v42;
    *((_QWORD *)v10 + 21) = *((_QWORD *)NdisBindingHandle + 125);
    v43 = *((_QWORD *)NdisBindingHandle + 126);
    *((_QWORD *)v10 + 18) = ProtocolVcContext;
    *((_QWORD *)v10 + 22) = v43;
    ExInterlockedInsertHeadList(
      (PLIST_ENTRY)((char *)NdisBindingHandle + 1048),
      (PLIST_ENTRY)v10 + 2,
      (PKSPIN_LOCK)NdisBindingHandle + 29);
    goto LABEL_98;
  }
  *((_QWORD *)v10 + 10) = v5[46];
  *((_QWORD *)v10 + 17) = v5[5];
  if ( *((_DWORD *)v5 + 99) >= 6u )
  {
    *((_QWORD *)v10 + 14) = v5[36];
    *((_QWORD *)v10 + 15) = v5[41];
    v19 = v5[44];
  }
  else
  {
    *((_QWORD *)v10 + 14) = v5[17];
    *((_QWORD *)v10 + 15) = v5[22];
    v19 = v5[25];
  }
  *((_QWORD *)v10 + 16) = v19;
  if ( *((_DWORD *)v5 + 98) >= 6u )
  {
    *((_QWORD *)v10 + 21) = *((_QWORD *)v5[4] + 12);
    *((_QWORD *)v10 + 22) = *((_QWORD *)v5[4] + 13);
    v20 = v5[4];
  }
  else
  {
    *((_QWORD *)v10 + 21) = *((_QWORD *)v5[3] + 12);
    *((_QWORD *)v10 + 22) = *((_QWORD *)v5[3] + 13);
    v20 = v5[3];
  }
  *((_QWORD *)v10 + 23) = v20[14];
  if ( v8 )
    *v18 |= 0x10u;
  if ( !v11 )
  {
    *((_QWORD *)v15 + 2) = v5[46];
    v21 = *((_QWORD *)v5[46] + 3);
    if ( *(_BYTE *)(v21 + 56) < 6u )
    {
      v23 = 0LL;
      *((_QWORD *)v15 + 7) = *(_QWORD *)(v21 + 312);
      v22 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
      *((_QWORD *)v15 + 8) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 8) = *(_QWORD *)(v21 + 216);
      v22 = 0LL;
      v23 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
      *((_QWORD *)v15 + 7) = 0LL;
    }
    *((_QWORD *)v15 + 9) = v23;
    *((_QWORD *)v15 + 6) = v22;
    v10[22] = 1;
    if ( Increment )
      *((_QWORD *)v15 + 5) = v10;
    else
      *((_QWORD *)v15 + 4) = v10;
    goto LABEL_58;
  }
  if ( Increment )
  {
    if ( v8 )
    {
      *((_QWORD *)v15 + 5) = v8;
      *((_DWORD *)v8 + 22) = 0;
    }
    else
    {
      *((_QWORD *)v15 + 2) = v5[46];
      v24 = *((_QWORD *)v5[46] + 3);
      if ( *(_BYTE *)(v24 + 56) < 6u )
      {
        v26 = 0LL;
        *((_QWORD *)v15 + 7) = *(_QWORD *)(v24 + 312);
        v25 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
        *((_QWORD *)v15 + 8) = 0LL;
      }
      else
      {
        *((_QWORD *)v15 + 8) = *(_QWORD *)(v24 + 216);
        v25 = 0LL;
        v26 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
        *((_QWORD *)v15 + 7) = 0LL;
      }
      *((_QWORD *)v15 + 9) = v26;
      *((_QWORD *)v15 + 6) = v25;
    }
    *((_QWORD *)v15 + 4) = v10;
  }
  else
  {
    *((_QWORD *)v15 + 2) = v5[46];
    v31 = *((_QWORD *)v5[46] + 3);
    if ( *(_BYTE *)(v31 + 56) < 6u )
    {
      v33 = 0LL;
      *((_QWORD *)v15 + 7) = *(_QWORD *)(v31 + 312);
      v32 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 304LL);
      *((_QWORD *)v15 + 8) = 0LL;
    }
    else
    {
      *((_QWORD *)v15 + 8) = *(_QWORD *)(v31 + 216);
      v32 = 0LL;
      v33 = *(_QWORD *)(*((_QWORD *)v5[46] + 3) + 208LL);
      *((_QWORD *)v15 + 7) = 0LL;
    }
    *((_QWORD *)v15 + 9) = v33;
    *((_QWORD *)v15 + 6) = v32;
    *((_QWORD *)v15 + 5) = v10;
    if ( v8 )
    {
      *((_QWORD *)v15 + 4) = v8;
      *((_DWORD *)v8 + 22) = 1;
      goto LABEL_58;
    }
  }
  v10[22] = 1;
LABEL_58:
  v27 = (NDIS_HANDLE *)(v10 + 36);
  v28 = (NDIS_HANDLE *)(v10 + 6);
  NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v10 + 2);
  if ( NdisBindingHandle == v5[46] )
  {
    *v28 = ProtocolVcContext;
    v29 = v10 + 36;
    if ( *((_DWORD *)v5 + 98) >= 6u )
      v30 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v5[4] + 1))(v5[6], v10, v29);
    else
      v30 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v5[3] + 1))(v5[6], v10, v29);
    v9 = v30;
    if ( v56 )
      *((_QWORD *)v10 + 25) = *v27;
  }
  else
  {
    *v27 = ProtocolVcContext;
    v9 = (*((__int64 (__fastcall **)(NDIS_HANDLE, _DWORD *, _DWORD *))v5[46] + 123))(v5[47], v10, v10 + 6);
  }
  if ( !v9 && (!v8 || v53 && !Increment) )
    *((_QWORD *)v15 + 3) = *v28;
  if ( v8 )
    *((_DWORD *)v15 + 1) &= ~0x10u;
  KeReleaseSpinLock((PKSPIN_LOCK)v10 + 2, NewIrql);
  if ( !v9 )
  {
    v34 = (KSPIN_LOCK *)((char *)NdisBindingHandle + 232);
    if ( Increment )
    {
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1048), (PLIST_ENTRY)v10 + 2, v34);
      *((_QWORD *)v10 + 13) = *v27;
      if ( *((_DWORD *)v5 + 98) >= 6u )
        v35 = v5[4];
      else
        v35 = v5[3];
      *((_QWORD *)v10 + 12) = v35[2];
      if ( v56 )
        goto LABEL_99;
      v36 = (char *)v5[5];
      v37 = (_LIST_ENTRY *)(v10 + 38);
    }
    else
    {
      *((_QWORD *)v10 + 13) = *v28;
      *((_QWORD *)v10 + 12) = *((_QWORD *)v5[46] + 124);
      ExInterlockedInsertHeadList((PLIST_ENTRY)((char *)NdisBindingHandle + 1048), (PLIST_ENTRY)(v10 + 38), v34);
      v36 = (char *)v5[46];
      v37 = (_LIST_ENTRY *)(v10 + 8);
    }
    ExInterlockedInsertHeadList((PLIST_ENTRY)(v36 + 1048), v37, (PKSPIN_LOCK)v36 + 29);
    goto LABEL_99;
  }
  if ( !v8 )
  {
    if ( !v56 )
    {
      v38 = (void (__fastcall *)(_QWORD))*((_QWORD *)v10 + 27);
      if ( v38 )
        v38(*((_QWORD *)v10 + 25));
    }
    ExFreePoolWithTag(v15, 0);
  }
  ExFreePoolWithTag(v10, 0);
  v10 = 0LL;
LABEL_98:
  if ( v9 )
    goto LABEL_120;
LABEL_99:
  v44 = *(_BYTE *)(*((_QWORD *)v10 + 24) + 32LL);
  if ( v5 )
  {
    v45 = *(_BYTE *)(*((_QWORD *)v5[46] + 3) + 56LL) >= 6u;
  }
  else
  {
    if ( *(_BYTE *)(*((_QWORD *)NdisBindingHandle + 3) + 56LL) >= 6u )
    {
LABEL_111:
      if ( v44 < 6u )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(NdisAfHandle) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NdisAfHandle,
            19,
            21,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v46 = 0LL;
        v47 = ndisMCoIndicateReceiveNdisPacketToNetBufferLists;
        v48 = ndisMCoSendCompleteToNetBufferLists;
        v49 = 0LL;
        v50 = ndisCoSendNetBufferListsToNdisPacket;
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(NdisAfHandle) = 4;
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            (int)NdisAfHandle,
            19,
            20,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
        }
        v46 = ndisMCoIndicateReceiveNetBufferListsToNetBufferLists;
        v47 = 0LL;
        v48 = 0LL;
        v49 = ndisMCoSendNetBufferListsCompleteToNetBufferLists;
        v50 = ndisCoSendNetBufferListsToNetBufferLists;
      }
      *((_QWORD *)v10 + 31) = v50;
      *((_QWORD *)v10 + 32) = v49;
      *((_QWORD *)v10 + 33) = 0LL;
      *((_QWORD *)v10 + 34) = v48;
      *((_QWORD *)v10 + 35) = v47;
      goto LABEL_119;
    }
    v45 = 0;
  }
  if ( v45 )
    goto LABEL_111;
  if ( v44 < 6u )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(NdisAfHandle) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)NdisAfHandle,
        19,
        23,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    *((_QWORD *)v10 + 31) = 0LL;
    *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNdisPackets;
    *((_QWORD *)v10 + 34) = ndisMCoSendCompleteToNdisPacket;
    *((_QWORD *)v10 + 35) = ndisMCoIndicateReceiveNdisPacketToNdisPacket;
    v46 = 0LL;
    *((_QWORD *)v10 + 32) = 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(NdisAfHandle) = 4;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)NdisAfHandle,
        19,
        22,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
    }
    *((_QWORD *)v10 + 31) = 0LL;
    *((_QWORD *)v10 + 32) = ndisMCoSendNetBufferListsCompleteToNdisPackets;
    *((_QWORD *)v10 + 33) = ndisCoSendPacketsToNetBufferLists;
    v46 = ndisMCoIndicateReceiveNetBufferListsToNdisPacket;
    *((_QWORD *)v10 + 34) = 0LL;
    *((_QWORD *)v10 + 35) = 0LL;
  }
LABEL_119:
  *((_QWORD *)v10 + 36) = v46;
  *((LARGE_INTEGER *)v10 + 39) = ExInterlockedAddLargeInteger(v54 + 167, (LARGE_INTEGER)0x100000000LL, &ndisGlobalLock);
LABEL_120:
  *NdisVcHandle = v10;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(NdisAfHandle) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisAfHandle,
      19,
      24,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)v10,
      v9);
  }
  return v9;
}
