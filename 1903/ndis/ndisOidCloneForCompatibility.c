/*
 * XREFs of ndisOidCloneForCompatibility @ 0x1C0008630
 * Callers:
 *     ndisFDoOidRequestInternal @ 0x1C00072E0 (ndisFDoOidRequestInternal.c)
 *     ndisMInvokeDirectOidRequest @ 0x1C001D824 (ndisMInvokeDirectOidRequest.c)
 *     ndisFInvokeDirectOidRequest @ 0x1C008EB08 (ndisFInvokeDirectOidRequest.c)
 *     ndisMInvokeOidRequest @ 0x1C00FB8A0 (ndisMInvokeOidRequest.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     NdisAllocateCloneOidRequest @ 0x1C0008040 (NdisAllocateCloneOidRequest.c)
 */

NDIS_STATUS __fastcall ndisOidCloneForCompatibility(_BYTE *a1, __int64 a2, char a3, PNDIS_OID_REQUEST *a4)
{
  _QWORD *v4; // rbx
  KSPIN_LOCK *v5; // rbp
  __int64 v9; // rcx
  unsigned __int8 v10; // al
  char v11; // r14
  NDIS_STATUS result; // eax
  unsigned __int8 v13; // al
  int v14; // edx
  PNDIS_OID_REQUEST v15; // rcx
  int v16; // r9d
  KIRQL v17; // al
  KSPIN_LOCK *v18; // rcx

  v4 = a1;
  v5 = 0LL;
  if ( *a1 != 5 )
  {
    v5 = (KSPIN_LOCK *)a1;
    v4 = 0LL;
  }
  if ( v4 )
  {
    v9 = v4[2];
    v10 = *(_BYTE *)(v9 + 100);
    if ( v10 <= 6u && (v10 != 6 || *(_BYTE *)(v9 + 101) < 0x32u) )
      goto LABEL_7;
  }
  else
  {
    v13 = *((_BYTE *)v5 + 32);
    if ( v13 <= 6u && (v13 != 6 || *((_BYTE *)v5 + 33) < 0x32u) )
    {
LABEL_7:
      v11 = 0;
      if ( *(_BYTE *)(a2 + 1) != 2 && *(_WORD *)(a2 + 2) == 236 )
        return 0;
      goto LABEL_14;
    }
  }
  v11 = 1;
  if ( *(_BYTE *)(a2 + 1) != 1 )
    return 0;
LABEL_14:
  result = NdisAllocateCloneOidRequest(*(NDIS_HANDLE *)(a2 + 104), (PNDIS_OID_REQUEST)a2, 0x7172444Eu, a4);
  if ( result )
    return result;
  v15 = *a4;
  if ( v11 )
  {
    v15->Header.Revision = 2;
    (*a4)->Header.Size = 248;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_19;
    v16 = 42;
    goto LABEL_18;
  }
  v15->Header.Revision = 1;
  (*a4)->Header.Size = 236;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v16 = 43;
LABEL_18:
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      11,
      v16,
      (struct _GUID *)&WPP_5739fd541b2a398e5b965a8c6ad6e7df_Traceguids,
      a2,
      (char)*a4,
      *(_DWORD *)(a2 + 32));
  }
LABEL_19:
  *(_DWORD *)&(*a4)->NdisReserved[16] |= 0x8000000u;
  if ( a3 && (*(_DWORD *)(a2 + 88) & 0x400) == 0 )
  {
    if ( v4 )
    {
      v17 = KeAcquireSpinLockRaiseToDpc(v4 + 18);
      v18 = v4 + 18;
      v4[19] = KeGetCurrentThread();
      v4[22] = *a4;
      v4[19] = 0LL;
    }
    else
    {
      v17 = KeAcquireSpinLockRaiseToDpc(v5 + 12);
      v18 = v5 + 12;
      v5[65] = (KSPIN_LOCK)KeGetCurrentThread();
      v5[276] = (KSPIN_LOCK)*a4;
      v5[65] = 0LL;
    }
    KeReleaseSpinLock(v18, v17);
  }
  return 0;
}
