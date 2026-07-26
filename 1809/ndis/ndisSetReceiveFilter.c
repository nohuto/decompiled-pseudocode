/*
 * XREFs of ndisSetReceiveFilter @ 0x1C003CA90
 * Callers:
 *     ndisOidPreRcvFilterSetFilter @ 0x1C00E20C0 (ndisOidPreRcvFilterSetFilter.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0009B70 (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C0009DEC (ndisDereferenceMiniport.c)
 *     ndisGetOidSourceHandle @ 0x1C0014FD0 (ndisGetOidSourceHandle.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C0015520 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C0016F10 (ndisIovNicSwitchWithoutIovSupported.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceOpenByHandle @ 0x1C001BC04 (ndisReferenceOpenByHandle.c)
 *     memmove @ 0x1C0026E40 (memmove.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     ndisAddReceiveFilterToList @ 0x1C003A9B0 (ndisAddReceiveFilterToList.c)
 *     ndisDereferenceReceiveQueue @ 0x1C003B3C8 (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C003B564 (ndisFindReceiveQueueByQueueId.c)
 *     ndisIovFindVPortByVPortId @ 0x1C0070024 (ndisIovFindVPortByVPortId.c)
 */

char __fastcall ndisSetReceiveFilter(__int64 a1)
{
  __int64 v1; // r14
  __int64 *ReceiveQueueByQueueId; // rbp
  __int64 v3; // rbx
  __int64 v5; // r15
  __int64 v6; // r13
  __int64 VPortByVPortId; // r12
  char v8; // si
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  char v11; // r14
  char v12; // r15
  struct _NDIS_OPEN_BLOCK *OidSourceHandle; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  char v16; // al
  bool v17; // zf
  __int64 v18; // rax
  unsigned int v19; // r14d
  __int64 v20; // rcx
  unsigned int v21; // r15d
  unsigned __int64 v22; // rcx
  PVOID PoolWithTag; // rax
  _DWORD *v24; // r14
  KIRQL v25; // r10
  unsigned int v26; // edx
  KIRQL v27; // cl
  KIRQL v28; // dl
  KSPIN_LOCK *v29; // rcx
  _BYTE *v30; // r15
  unsigned int v31; // r8d
  __int64 v32; // rax
  int v33; // r10d
  _BYTE *v34; // rcx
  _BYTE *v35; // r14
  __int64 v36; // r9
  int v37; // ecx
  int v38; // eax
  int v39; // edx
  int v40; // r10d
  int v41; // eax
  __int64 **v42; // rcx
  __int64 v43; // rdx
  __int64 *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  int v49; // [rsp+30h] [rbp-78h]
  unsigned int v50; // [rsp+34h] [rbp-74h]
  unsigned int Size; // [rsp+38h] [rbp-70h]
  unsigned int Size_4; // [rsp+3Ch] [rbp-6Ch]
  unsigned int v53; // [rsp+40h] [rbp-68h]
  __int64 v54; // [rsp+48h] [rbp-60h]
  _DWORD *Src; // [rsp+50h] [rbp-58h]
  char v56; // [rsp+B0h] [rbp+8h]
  char v57; // [rsp+C0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 32);
  ReceiveQueueByQueueId = 0LL;
  v3 = *(_QWORD *)a1;
  v54 = 0LL;
  v49 = 0;
  v5 = *(_QWORD *)(v1 + 40);
  v6 = 0LL;
  VPortByVPortId = 0LL;
  Src = (_DWORD *)v5;
  v50 = 0;
  v8 = 1;
  v56 = 0;
  v57 = 0;
  v9 = v1;
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
  {
    WPP_SF_q(0x14u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3);
    v9 = *(_QWORD *)(a1 + 32);
  }
  v10 = *(_BYTE *)(v5 + 1);
  if ( v10 >= 2u )
    v50 = *(_DWORD *)(v5 + 40);
  *(_DWORD *)(a1 + 40) = -1073741637;
  *(_DWORD *)(v9 + 64) = v10 < 2u ? 36 : 44;
  Size_4 = v10 < 2u ? 36 : 44;
  *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = 0;
  if ( !ndisReferenceMiniport(v3) )
  {
    *(_DWORD *)(a1 + 40) = -1073676286;
    v11 = 0;
    v12 = 0;
LABEL_20:
    v16 = 0;
    goto LABEL_21;
  }
  OidSourceHandle = (struct _NDIS_OPEN_BLOCK *)ndisGetOidSourceHandle(v1);
  if ( OidSourceHandle && OidSourceHandle->Header.Type == 18 )
  {
    v54 = (__int64)OidSourceHandle;
    if ( !ndisReferenceOpenByHandle(OidSourceHandle, 0xBu) )
    {
      *(_DWORD *)(a1 + 40) = -1073676286;
      v11 = 0;
LABEL_19:
      v12 = 1;
      goto LABEL_20;
    }
    v56 = 1;
  }
  if ( *(_QWORD *)(v3 + 4720)
    && (ndisIovNicSwitchWithoutIovSupported(v3) || (v15 = *(_QWORD *)(v3 + 4648)) != 0 && (*(_BYTE *)(v15 + 8) & 3) == 3) )
  {
    if ( *(_DWORD *)(v5 + 12) )
      goto LABEL_17;
    VPortByVPortId = ndisIovFindVPortByVPortId(v14, v50);
    if ( !VPortByVPortId )
      goto LABEL_17;
    if ( !v50 )
      goto LABEL_34;
    v17 = *(_QWORD *)(VPortByVPortId + 80) == v54;
  }
  else
  {
    v17 = v50 == 0;
  }
  if ( !v17 )
  {
LABEL_17:
    *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_18:
    v11 = v56;
    goto LABEL_19;
  }
LABEL_34:
  v18 = *(unsigned int *)(v5 + 24);
  v19 = -1;
  v20 = *(unsigned int *)(v5 + 28);
  v21 = -1;
  v22 = v18 * v20;
  if ( v22 <= 0xFFFFFFFF )
    v21 = v22;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v22 > 0xFFFFFFFF ? 0xC0000095 : 0) )
    goto LABEL_18;
  if ( v21 + 184 >= 0xB8 )
    v19 = v21 + 184;
  if ( (unsigned int)NdisConvertNtStatusToNdisStatus(v21 >= 0xFFFFFF48 ? 0xC0000095 : 0) )
    goto LABEL_18;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x6672444Eu);
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_18;
  memset(PoolWithTag, 0, v19);
  v24 = Src;
  *(_DWORD *)(v6 + 48) = 0;
  *(_QWORD *)(v6 + 64) = v54;
  *(_DWORD *)(v6 + 80) = 1;
  *(_QWORD *)(v6 + 56) = v3;
  memmove((void *)(v6 + 132), Src, Size_4);
  *(_DWORD *)(v6 + 152) = 184;
  memmove((void *)(v6 + 184), (char *)v24 + (unsigned int)v24[5], (unsigned int)(v24[6] * v24[7]));
  *(_QWORD *)(v6 + 176) = VPortByVPortId;
  *(_QWORD *)(v6 + 40) = v6 + 32;
  *(_QWORD *)(v6 + 32) = v6 + 32;
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1864) = 2688789;
  v26 = Src[3];
  if ( v26 )
    ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(v3, v26);
  else
    ReceiveQueueByQueueId = *(__int64 **)(v3 + 4408);
  if ( ReceiveQueueByQueueId )
  {
    ++*((_DWORD *)ReceiveQueueByQueueId + 20);
    v57 = 1;
  }
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v25);
  if ( !ReceiveQueueByQueueId )
    goto LABEL_48;
  if ( Src[3] )
  {
    if ( v54 )
    {
      if ( v54 != ReceiveQueueByQueueId[9] )
      {
LABEL_48:
        *(_DWORD *)(a1 + 40) = -1073741811;
LABEL_49:
        v11 = v56;
        v12 = 1;
        v16 = v57;
        goto LABEL_21;
      }
    }
    else if ( *((_DWORD *)ReceiveQueueByQueueId + 34) == 1 )
    {
      *(_DWORD *)(a1 + 40) = -1073741637;
      goto LABEL_49;
    }
  }
  v27 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
  NewIrql = v27;
  *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
  *(_DWORD *)(v3 + 1864) = 2688852;
  *(_QWORD *)(v6 + 72) = ReceiveQueueByQueueId;
  if ( (unsigned int)(*(_DWORD *)(v3 + 3548) + 1) > 0x5555555 )
  {
    v28 = v27;
    v29 = (KSPIN_LOCK *)(v3 + 96);
LABEL_55:
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1864) = 0;
    KeReleaseSpinLock(v29, v28);
    *(_DWORD *)(a1 + 40) = -1073741670;
    goto LABEL_49;
  }
  v30 = *(_BYTE **)(v3 + 3536);
  v31 = *(_DWORD *)(v3 + 3544);
  Size = v31;
  if ( v30 && (v32 = 0LL, v31) )
  {
    v33 = 0;
    v34 = *(_BYTE **)(v3 + 3536);
    while ( *v34 == 0xFF )
    {
      v33 += 8;
      v32 = (unsigned int)(v32 + 1);
      ++v34;
      v49 = v33;
      if ( (unsigned int)v32 >= v31 )
        goto LABEL_63;
    }
    v36 = (unsigned int)v32;
    v37 = 1;
    v38 = (unsigned __int8)v30[v32];
    v39 = 0;
    while ( (v38 & v37) != 0 )
    {
      v37 *= 2;
      if ( (unsigned int)++v39 >= 8 )
        goto LABEL_63;
    }
    v40 = v39 + v33;
    v30[v36] = v37 | v38;
    v49 = v40;
  }
  else
  {
LABEL_63:
    v53 = v31 + 64;
    v35 = ExAllocatePoolWithTag(NonPagedPoolNx, v31 + 64, 0x7571444Eu);
    if ( !v35 )
    {
      v28 = NewIrql;
      v29 = (KSPIN_LOCK *)(v3 + 96);
      goto LABEL_55;
    }
    memset(&v35[Size], 0, 0x40uLL);
    if ( v30 )
    {
      memmove(v35, v30, Size);
      v35[Size] = 1;
      ExFreePoolWithTag(v30, 0);
      v40 = v49;
    }
    else
    {
      *v35 = 3;
      v40 = 1;
      v49 = 1;
    }
    *(_QWORD *)(v3 + 3536) = v35;
    v24 = Src;
    *(_DWORD *)(v3 + 3544) = v53;
  }
  v24[4] = v40;
  *(_DWORD *)(v6 + 148) = v40;
  *(_DWORD *)(v6 + 48) = v40;
  v41 = ndisAddReceiveFilterToList(v3, v6);
  v11 = 0;
  *(_DWORD *)(a1 + 40) = v41;
  if ( v41 )
  {
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
    goto LABEL_49;
  }
  ++*((_DWORD *)ReceiveQueueByQueueId + 21);
  v42 = (__int64 **)(ReceiveQueueByQueueId + 4);
  v43 = ReceiveQueueByQueueId[4];
  v44 = (__int64 *)(v6 + 16);
  if ( *(__int64 **)(v43 + 8) != ReceiveQueueByQueueId + 4 )
    goto LABEL_83;
  *v44 = v43;
  *(_QWORD *)(v6 + 24) = v42;
  *(_QWORD *)(v43 + 8) = v44;
  *v42 = v44;
  if ( VPortByVPortId )
  {
    ++*(_DWORD *)(VPortByVPortId + 864);
    v45 = (_QWORD *)(VPortByVPortId + 872);
    v46 = *(_QWORD *)(VPortByVPortId + 872);
    if ( *(_QWORD *)(v46 + 8) == VPortByVPortId + 872 )
    {
      *(_QWORD *)(v6 + 32) = v46;
      *(_QWORD *)(v6 + 40) = v45;
      *(_QWORD *)(v46 + 8) = v6 + 32;
      *v45 = v6 + 32;
      v47 = *(_QWORD *)(VPortByVPortId + 88);
      if ( v50 )
        ++*(_DWORD *)(v47 + 656);
      else
        ++*(_DWORD *)(v47 + 652);
      goto LABEL_82;
    }
LABEL_83:
    __fastfail(3u);
  }
LABEL_82:
  *(_QWORD *)(v3 + 520) = 0LL;
  *(_DWORD *)(v3 + 1864) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), NewIrql);
  v16 = 0;
  v12 = 0;
  v8 = 0;
LABEL_21:
  if ( *(_DWORD *)(a1 + 40) )
  {
    if ( v16 )
      ndisDereferenceReceiveQueue(ReceiveQueueByQueueId);
    if ( v11 )
      ndisMDereferenceOpenUnlocked(v54, 11);
    if ( v12 )
      ndisDereferenceMiniport(v3, 0x46u);
    if ( v6 )
      ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 32) + 60LL) = Size_4;
  }
  if ( (unsigned __int8)byte_1C00A0268 >= 4u )
    WPP_SF_qdD(0x15u, &WPP_4e96cfa6cc7a3b71fc1adf7434706e83_Traceguids, v3, *(_DWORD *)(a1 + 40), v49);
  return v8;
}
