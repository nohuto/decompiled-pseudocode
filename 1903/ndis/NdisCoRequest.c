/*
 * XREFs of NdisCoRequest @ 0x1C0085660
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041440 (memset.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C0082220 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     ?ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00822F4 (-ndisReferenceAf@@YAEPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     NdisCoOidRequest @ 0x1C0085140 (NdisCoOidRequest.c)
 *     NdisCoRequestComplete @ 0x1C0085A30 (NdisCoRequestComplete.c)
 */

__int64 __fastcall NdisCoRequest(void *a1, __int64 a2, _QWORD *NdisVcHandle, _QWORD *NdisPartyHandle, _QWORD *a5)
{
  __int64 v7; // rdi
  void *v8; // r12
  KIRQL v10; // al
  KSPIN_LOCK *v11; // rcx
  int v12; // edx
  unsigned int v13; // ebp
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 (__fastcall *v16)(PVOID, __int64, __int64, _QWORD *); // rbp
  KIRQL v18; // al
  KSPIN_LOCK *v19; // rcx
  NDIS_STATUS v20; // eax
  char *PoolWithTag; // rax
  _DWORD *OidRequest; // rbx
  _DWORD *v23; // rcx
  __int64 v24; // r9
  __int64 v25; // r8
  __int64 v26; // r10
  __int64 v27; // r11
  char v28; // [rsp+30h] [rbp-38h]
  char v29; // [rsp+70h] [rbp+8h]
  PVOID v30; // [rsp+90h] [rbp+28h]

  v29 = (char)a1;
  v7 = a2;
  v8 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      11,
      62,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)a1,
      v28,
      (char)a5);
  }
  if ( *((_DWORD *)a5 + 10) == -33554422
    && *((_DWORD *)a5 + 8) == 1
    && v7
    && ndisReferenceAf((struct _NDIS_CO_AF_BLOCK *)v7) )
  {
    if ( *(_DWORD *)(v7 + 396) >= 6u )
    {
      *(_QWORD *)(v7 + 400) = a5;
      v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 384));
      v11 = (KSPIN_LOCK *)(v7 + 384);
      if ( (*(_DWORD *)(v7 + 8) & 0x40000000) != 0 )
      {
        *(_BYTE *)(v7 + 592) = 1;
        *(_QWORD *)(v7 + 584) = a5;
        KeReleaseSpinLock(v11, v10);
LABEL_10:
        v13 = 259;
        goto LABEL_20;
      }
      KeReleaseSpinLock(v11, v10);
      v13 = (*(__int64 (__fastcall **)(_QWORD))(v7 + 360))(*(_QWORD *)(v7 + 376));
      if ( v13 != 259 )
      {
        *(_QWORD *)(v7 + 400) = 0LL;
        ndisDereferenceAf((KSPIN_LOCK *)v7);
      }
      goto LABEL_20;
    }
    v14 = 0LL;
    v15 = 0LL;
    memset(a5 + 9, 0, 0x20uLL);
    v16 = *(__int64 (__fastcall **)(PVOID, __int64, __int64, _QWORD *))(v7 + 80);
    v30 = *(PVOID *)(v7 + 376);
    a5[11] = *(_QWORD *)(v7 + 48);
    a5[9] = *(_QWORD *)(*(_QWORD *)(v7 + 24) + 128LL);
    if ( NdisVcHandle )
    {
      a5[10] = NdisVcHandle[18];
      v14 = NdisVcHandle[3];
    }
    if ( NdisPartyHandle )
    {
      a5[12] = NdisPartyHandle[18];
      v15 = NdisPartyHandle[2];
    }
    if ( v16 )
    {
      v18 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 384));
      v19 = (KSPIN_LOCK *)(v7 + 384);
      if ( (*(_DWORD *)(v7 + 8) & 0x40000000) != 0 )
      {
        *(_BYTE *)(v7 + 592) = 1;
        *(_QWORD *)(v7 + 584) = a5;
        KeReleaseSpinLock(v19, v18);
      }
      else
      {
        KeReleaseSpinLock(v19, v18);
        v20 = v16(v30, v14, v15, a5);
        v13 = v20;
        if ( v20 == 259 )
          goto LABEL_19;
        NdisCoRequestComplete(v20, (PVOID)v7, NdisVcHandle, NdisPartyHandle, a5);
      }
      v13 = 259;
    }
    else
    {
      v13 = -1073741637;
      ndisDereferenceAf((KSPIN_LOCK *)v7);
    }
LABEL_19:
    LOBYTE(v8) = v29;
    goto LABEL_20;
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
  OidRequest = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag + 4, 0, 0xF4uLL);
    *OidRequest = 16253334;
    OidRequest[1] = *((_DWORD *)a5 + 8);
    if ( *((_DWORD *)a5 + 8) != 12 )
    {
      OidRequest[8] = *((_DWORD *)a5 + 10);
      *((_QWORD *)OidRequest + 5) = a5[6];
      OidRequest[12] = *((_DWORD *)a5 + 14);
      OidRequest[13] = *((_DWORD *)a5 + 15);
      OidRequest[14] = *((_DWORD *)a5 + 16);
    }
    *((_QWORD *)OidRequest + 13) = v8;
    *((_QWORD *)OidRequest + 12) = a5;
    v13 = NdisCoOidRequest(v8, (NDIS_HANDLE)v7, NdisVcHandle, NdisPartyHandle, (PNDIS_OID_REQUEST)OidRequest);
    if ( v13 != 259 )
    {
      v23 = (_DWORD *)*((_QWORD *)OidRequest + 12);
      v24 = *((_QWORD *)OidRequest + 14);
      v25 = *((_QWORD *)OidRequest + 16);
      v26 = *((_QWORD *)OidRequest + 17);
      v27 = *((_QWORD *)OidRequest + 13);
      if ( v23[8] != 12 )
      {
        v23[15] = OidRequest[13];
        v23[16] = OidRequest[14];
      }
      (*(void (__fastcall **)(_QWORD, __int64, __int64, __int64, _DWORD *))(v27 + 1016))(v13, v26, v25, v24, v23);
      ExFreePoolWithTag(OidRequest, 0);
      goto LABEL_10;
    }
  }
  else
  {
    v13 = -1073741670;
  }
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      11,
      63,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)v8,
      v7,
      (char)a5);
  }
  return v13;
}
