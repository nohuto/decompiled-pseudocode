/*
 * XREFs of ndisMOidRequest @ 0x1C0016B50
 * Callers:
 *     <none>
 * Callees:
 *     ndisQueueOidRequest @ 0x1C000C300 (ndisQueueOidRequest.c)
 *     NdisReferenceWithTag @ 0x1C000CF50 (NdisReferenceWithTag.c)
 *     ndisOidPMAddRemove @ 0x1C0016A60 (ndisOidPMAddRemove.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C00173F4 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C001B340 (NdisMIndicateStatusEx.c)
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qqd @ 0x1C003A90C (WPP_SF_qqd.c)
 *     WPP_SF_qqqDD @ 0x1C004401C (WPP_SF_qqqDD.c)
 *     NdisMResetMiniport @ 0x1C0061150 (NdisMResetMiniport.c)
 *     WPP_SF_qDL @ 0x1C00616A0 (WPP_SF_qDL.c)
 */

__int64 __fastcall ndisMOidRequest(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // esi
  struct _NDIS_MINIPORT_BLOCK *v4; // r15
  char v5; // r12
  unsigned __int8 v8; // bl
  KIRQL v9; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v11; // di
  KIRQL v12; // bl
  __int64 v13; // rdx
  int v14; // eax
  unsigned int v15; // eax
  int v17; // eax
  unsigned int v18; // eax
  int v19; // ecx
  int v20; // ebx
  KIRQL v21; // [rsp+40h] [rbp-C8h]
  int v22; // [rsp+44h] [rbp-C4h] BYREF
  int v23; // [rsp+48h] [rbp-C0h]
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+50h] [rbp-B8h] BYREF

  v2 = *(_DWORD *)(a2 + 32);
  v3 = 0;
  v4 = 0LL;
  v23 = v2;
  v5 = 0;
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqd(14LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, a2, v2);
  v8 = 0;
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qD(118LL, &WPP_f453a6740ca1326a168191528118e90e_Traceguids, a1, 6LL);
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v11 = v9;
  v21 = v9;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_13;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), 6u);
      ++*(_DWORD *)(a1 + 228);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 600), v12);
      v11 = v21;
      v8 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
    v5 = 0;
  }
LABEL_13:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v11);
  if ( (unsigned __int8)byte_1C00A0263 >= 4u )
    WPP_SF_qDL(119LL, v13, a1, 6LL, v8);
  if ( !v8 )
  {
    v3 = -1073676286;
    goto LABEL_24;
  }
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  v5 = 1;
  if ( (v4->DriverVerifyFlags & 0x400) == 0 )
    *(_BYTE *)(a2 + 232) = 1;
  v14 = *(_DWORD *)(a2 + 4);
  if ( v14 == 1 )
  {
    v17 = *(_DWORD *)(a2 + 32);
    if ( v17 == 66058 )
    {
      if ( *(_DWORD *)(a2 + 48) >= 4u )
      {
        v22 = **(_DWORD **)(a2 + 40);
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v22;
        StatusIndication.SourceHandle = v4;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx(v4, &StatusIndication);
      }
      else
      {
        v3 = -1073676266;
      }
      goto LABEL_35;
    }
    if ( v17 == 66066 )
    {
      v20 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 64LL) & 0x20000000;
      if ( v20 )
        NdisMResetMiniport(v4);
      v15 = v20 == 0 ? 0xC00000BB : 0;
      goto LABEL_23;
    }
  }
  else if ( !v14 && *(_DWORD *)(a2 + 32) == 66059 )
  {
    if ( *(_DWORD *)(a2 + 48) >= 8u )
    {
      **(_QWORD **)(a2 + 40) = v4->MediaSpecificAttributes;
      *(_DWORD *)(a2 + 52) = v4->MediaSpecificAttributes != 0LL ? 8 : 0;
    }
    else
    {
      v3 = -1073676268;
    }
    goto LABEL_35;
  }
  memset((void *)(a2 + 72), 0, 0x60uLL);
  *(_DWORD *)(a2 + 88) |= 0x20u;
  *(_QWORD *)(a2 + 104) = a1;
  *(_QWORD *)(a2 + 96) = 0LL;
  if ( *(_DWORD *)(a2 + 4) == 1 && (v18 = *(_DWORD *)(a2 + 32) + 50265846, v18 <= 5) && (v19 = 43, _bittest(&v19, v18)) )
    v15 = ndisOidPMAddRemove(v4, 0LL, (PNDIS_OID_REQUEST)a2);
  else
    v15 = ndisQueueOidRequest(a2, v4, 0LL, 0LL);
LABEL_23:
  v3 = v15;
LABEL_24:
  if ( v3 != 259 && v5 == 1 )
  {
LABEL_35:
    LOBYTE(v13) = 6;
    ndisMDereferenceOpenUnlocked(a1, v13);
  }
  if ( (unsigned __int8)byte_1C00A025A >= 4u )
    WPP_SF_qqqDD(15LL, &WPP_3347f5d6e7de3bf7a7aa2b0281c0f110_Traceguids, a1, v4, a2, v23, v3);
  return v3;
}
