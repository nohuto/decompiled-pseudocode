/*
 * XREFs of WmipUpdateDataSource @ 0x1408B5B08
 * Callers:
 *     WmipProcessWmiRegInfo @ 0x140708EEC (WmipProcessWmiRegInfo.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     WmipUnreferenceEntry @ 0x1405FD204 (WmipUnreferenceEntry.c)
 *     WmipReferenceEntry @ 0x140613C30 (WmipReferenceEntry.c)
 *     WmipCachePtrs @ 0x1407091C8 (WmipCachePtrs.c)
 *     WmipEnableCollectionForNewGuid @ 0x140709294 (WmipEnableCollectionForNewGuid.c)
 *     WmipSendGuidUpdateNotifications @ 0x140709350 (WmipSendGuidUpdateNotifications.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140709890 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipUnlinkInstanceSetFromGuidEntry @ 0x14070E92C (WmipUnlinkInstanceSetFromGuidEntry.c)
 *     WmipGenerateBinaryMofNotification @ 0x140761D58 (WmipGenerateBinaryMofNotification.c)
 *     WmipFindISInDSByGuid @ 0x1408B591C (WmipFindISInDSByGuid.c)
 *     WmipUpdateModifyGuid @ 0x1408B5E54 (WmipUpdateModifyGuid.c)
 */

__int64 __fastcall WmipUpdateDataSource(__int64 a1, __int64 a2, int a3)
{
  volatile signed __int64 *v3; // rdi
  unsigned int v4; // esi
  unsigned int v7; // ebx
  unsigned int v8; // r13d
  unsigned int v9; // r12d
  _OWORD **v10; // r14
  int v11; // r12d
  __int64 v12; // rbx
  volatile signed __int64 *ISInDSByGuid; // rax
  volatile signed __int64 *v14; // r14
  const void **p_P; // rax
  int *v16; // r9
  __int64 v17; // rdx
  unsigned int *v18; // r8
  int updated; // eax
  unsigned int v20; // edi
  _QWORD *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rdx
  _QWORD *v25; // rcx
  _OWORD **v26; // rsi
  __int64 *v27; // rbx
  __int64 v28; // rdi
  __int64 v29; // rcx
  _OWORD **v30; // rsi
  _QWORD *v31; // rbx
  __int64 v32; // rdi
  _QWORD *v33; // r8
  __int64 v34; // rcx
  unsigned int v35; // [rsp+30h] [rbp-30h] BYREF
  int v36; // [rsp+34h] [rbp-2Ch] BYREF
  int v37; // [rsp+38h] [rbp-28h] BYREF
  int v38; // [rsp+3Ch] [rbp-24h] BYREF
  __int64 v39; // [rsp+40h] [rbp-20h] BYREF
  PVOID P; // [rsp+48h] [rbp-18h] BYREF
  PVOID v41; // [rsp+50h] [rbp-10h] BYREF
  _OWORD **v42; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+40h] BYREF
  int v44; // [rsp+B0h] [rbp+50h]
  unsigned int v45; // [rsp+B8h] [rbp+58h] BYREF

  v44 = a3;
  v3 = *(volatile signed __int64 **)(a1 + 32);
  v4 = 0;
  if ( !v3 )
    return 3221225524LL;
  WmipReferenceEntry((ULONG_PTR)v3);
  v7 = 0;
  v45 = 0;
  v43 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  v8 = 0;
  v36 = 0;
  v9 = 0;
  P = 0LL;
  v41 = 0LL;
  v10 = 0LL;
  v42 = 0LL;
  KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
  if ( !*(_DWORD *)(a2 + 16) )
    goto LABEL_16;
  v11 = v44;
  do
  {
    v12 = 32LL * v4 + a2 + 24;
    if ( (*(_DWORD *)(v12 + 16) & 0x10000) != 0 )
    {
      ISInDSByGuid = WmipFindISInDSByGuid((__int64)v3, (_QWORD *)v12);
      v14 = ISInDSByGuid;
      if ( !ISInDSByGuid )
        goto LABEL_14;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, ISInDSByGuid);
      p_P = (const void **)&v42;
      v39 = (__int64)v14;
      v16 = &v36;
      v17 = (__int64)v14;
      v18 = &v43;
    }
    else
    {
      updated = WmipUpdateModifyGuid((_DWORD)v3, v12, a2, v11, (__int64)&v39);
      if ( updated == 1 )
      {
        p_P = (const void **)&v41;
        v16 = &v37;
        v18 = &v45;
      }
      else
      {
        if ( updated != 2 )
          goto LABEL_14;
        p_P = (const void **)&P;
        v16 = &v38;
        v18 = &v35;
      }
      v17 = v39;
    }
    WmipCachePtrs(v12, v17, v18, v16, p_P);
LABEL_14:
    ++v4;
  }
  while ( v4 < *(_DWORD *)(a2 + 16) );
  v8 = v45;
  v9 = v35;
  v10 = v42;
  v7 = v43;
LABEL_16:
  KeReleaseMutex(&WmipSMMutex, 0);
  WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, v3);
  if ( v7 )
  {
    v20 = 0;
    do
    {
      v21 = v10[2 * v20];
      v22 = *v21 - WmipBinaryMofGuid;
      if ( *v21 == WmipBinaryMofGuid )
        v22 = v21[1] - 0x102906C9A000F0B2LL;
      if ( !v22 )
      {
        WmipGenerateBinaryMofNotification((__int64)v10[2 * v20 + 1], &GUID_MOF_RESOURCE_REMOVED_NOTIFICATION);
        v21 = v10[2 * v20];
      }
      v23 = (__int64)v10[2 * v20 + 1];
      WmipDisableCollectionForRemovedGuid(v21, v23);
      KeWaitForSingleObject(&WmipSMMutex, Executive, 0, 0, 0LL);
      if ( *(_QWORD *)v23 )
        WmipUnlinkInstanceSetFromGuidEntry((__int64 *)v23);
      if ( (*(_DWORD *)(v23 + 16) & 8) == 0 )
        WmipUnreferenceEntry((__int64)&WmipGEChunkInfo, *(volatile signed __int64 **)(v23 + 56));
      *(_QWORD *)(v23 + 56) = 0LL;
      v24 = *(_QWORD *)(v23 + 40);
      if ( *(_QWORD *)(v24 + 8) != v23 + 40 || (v25 = *(_QWORD **)(v23 + 48), *v25 != v23 + 40) )
        __fastfail(3u);
      *v25 = v24;
      *(_QWORD *)(v24 + 8) = v25;
      WmipUnreferenceEntry((__int64)&WmipISChunkInfo, (volatile signed __int64 *)v23);
      KeReleaseMutex(&WmipSMMutex, 0);
      ++v20;
    }
    while ( v20 < v43 );
    WmipSendGuidUpdateNotifications(2u, v43, v10);
    ExFreePoolWithTag(v10, 0);
  }
  if ( v9 )
  {
    v26 = (_OWORD **)P;
    v27 = (__int64 *)P;
    v28 = v9;
    do
    {
      v29 = *(_QWORD *)*v27 - WmipBinaryMofGuid;
      if ( !v29 )
        v29 = *(_QWORD *)(*v27 + 8) - 0x102906C9A000F0B2LL;
      if ( !v29 )
        WmipGenerateBinaryMofNotification(v27[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
      v27 += 2;
      --v28;
    }
    while ( v28 );
    WmipSendGuidUpdateNotifications(4u, v9, v26);
    ExFreePoolWithTag(v26, 0);
  }
  if ( v8 )
  {
    v30 = (_OWORD **)v41;
    v31 = v41;
    v32 = v8;
    do
    {
      v33 = (_QWORD *)*v31;
      v34 = *(_QWORD *)*v31 - WmipBinaryMofGuid;
      if ( !v34 )
        v34 = v33[1] - 0x102906C9A000F0B2LL;
      if ( !v34 )
      {
        WmipGenerateBinaryMofNotification(v31[1], &GUID_MOF_RESOURCE_ADDED_NOTIFICATION);
        v33 = (_QWORD *)*v31;
      }
      WmipEnableCollectionForNewGuid(v33, v31[1]);
      v31 += 2;
      --v32;
    }
    while ( v32 );
    WmipSendGuidUpdateNotifications(1u, v8, v30);
    ExFreePoolWithTag(v30, 0);
  }
  return 0LL;
}
