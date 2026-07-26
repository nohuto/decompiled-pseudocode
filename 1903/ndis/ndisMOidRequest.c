/*
 * XREFs of ndisMOidRequest @ 0x1C0015410
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C0004470 (ndisQueueOidRequest.c)
 *     NdisReferenceWithTag @ 0x1C0006160 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001C08C (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001C6F0 (NdisMIndicateStatusEx.c)
 *     ndisOidPMAddRemove @ 0x1C001D2F4 (ndisOidPMAddRemove.c)
 *     __security_check_cookie @ 0x1C0040770 (__security_check_cookie.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     NdisMResetMiniport @ 0x1C0098800 (NdisMResetMiniport.c)
 */

__int64 __fastcall ndisMOidRequest(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v3; // rbp
  char v4; // r13
  char v5; // bl
  KIRQL v7; // al
  __int64 v8; // rcx
  KIRQL v9; // di
  KIRQL v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // eax
  int v16; // eax
  unsigned int v17; // eax
  int v18; // ecx
  int v19; // edi
  KIRQL v20; // [rsp+40h] [rbp-C8h]
  int v21; // [rsp+44h] [rbp-C4h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = 0;
  v3 = a2;
  v4 = 0;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      20,
      116,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      6);
  }
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  v8 = *(_QWORD *)ndisGlobalOpenList;
  v9 = v7;
  v20 = v7;
  if ( *(_QWORD *)ndisGlobalOpenList )
  {
    while ( v8 != a1 )
    {
      v8 = *(_QWORD *)(v8 + 384);
      if ( !v8 )
        goto LABEL_11;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), 6u);
      ++*(_DWORD *)(a1 + 228);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 600), v10);
      v9 = v20;
      v5 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  }
LABEL_11:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v11,
      20,
      117,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1,
      6,
      v5);
  if ( !v5 )
  {
    v2 = -1073676286;
    goto LABEL_22;
  }
  v12 = *(_QWORD *)(a1 + 16);
  v4 = 1;
  if ( (*(_DWORD *)(v12 + 3688) & 0x400) == 0 )
    *(_BYTE *)(v3 + 232) = 1;
  v13 = *(_DWORD *)(v3 + 4);
  if ( v13 == 1 )
  {
    v16 = *(_DWORD *)(v3 + 32);
    if ( v16 == 66058 )
    {
      memset(&StatusIndication, 0, sizeof(StatusIndication));
      if ( *(_DWORD *)(v3 + 48) >= 4u )
      {
        v21 = **(_DWORD **)(v3 + 40);
        StatusIndication.StatusBuffer = &v21;
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.SourceHandle = (void *)v12;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx((NDIS_HANDLE)v12, &StatusIndication);
      }
      else
      {
        v2 = -1073676266;
      }
      goto LABEL_31;
    }
    if ( v16 == 66066 )
    {
      v19 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) & 0x20000000;
      if ( v19 )
        NdisMResetMiniport(v12);
      v14 = v19 == 0 ? 0xC00000BB : 0;
      goto LABEL_21;
    }
  }
  else if ( !v13 && *(_DWORD *)(v3 + 32) == 66059 )
  {
    if ( *(_DWORD *)(v3 + 48) >= 8u )
    {
      **(_QWORD **)(v3 + 40) = *(_QWORD *)(v12 + 768);
      *(_DWORD *)(v3 + 52) = *(_QWORD *)(v12 + 768) != 0LL ? 8 : 0;
    }
    else
    {
      v2 = -1073676268;
    }
    goto LABEL_31;
  }
  memset((void *)(v3 + 72), 0, 0x60uLL);
  *(_DWORD *)(v3 + 88) |= 0x20u;
  *(_QWORD *)(v3 + 104) = a1;
  *(_QWORD *)(v3 + 96) = 0LL;
  if ( *(_DWORD *)(v3 + 4) == 1 && (v17 = *(_DWORD *)(v3 + 32) + 50265846, v17 <= 5) && (v18 = 43, _bittest(&v18, v17)) )
    v14 = ndisOidPMAddRemove(v12, 0LL, v3);
  else
    v14 = ndisQueueOidRequest(v3, v12, 0LL, 0LL);
LABEL_21:
  v2 = v14;
LABEL_22:
  if ( v2 != 259 && v4 == 1 )
  {
LABEL_31:
    LOBYTE(v11) = 6;
    ndisMDereferenceOpenUnlocked(a1, v11);
  }
  return v2;
}
