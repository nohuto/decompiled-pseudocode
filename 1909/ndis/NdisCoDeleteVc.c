/*
 * XREFs of NdisCoDeleteVc @ 0x1C0084F50
 * Callers:
 *     NdisMCmDeleteVc @ 0x1C0086300 (NdisMCmDeleteVc.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C001B83C (ndisSetupWmiNode.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032358 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0qqq @ 0x1C007D7C8 (McTemplateK0qqq.c)
 *     WPP_RECORDER_SF_qLLqL @ 0x1C008704C (WPP_RECORDER_SF_qLLqL.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r15
  NDIS_STATUS v5; // edi
  PVOID v6; // rsi
  NTSTATUS v7; // eax
  int v8; // edx
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  unsigned int v10; // edi
  NDIS_HANDLE *v11; // rdx
  NDIS_HANDLE *v12; // rcx
  KSPIN_LOCK *v13; // rcx
  void (__fastcall *v14)(_QWORD); // rax
  NDIS_HANDLE *v15; // rdx
  NDIS_HANDLE *v16; // rcx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  NDIS_HANDLE *v19; // rdx
  int v20; // edx
  PVOID WnodeEventItem; // [rsp+80h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLqL(*((_QWORD *)WPP_GLOBAL_Control + 8), **((_DWORD **)NdisVcHandle + 1));
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v3 = (_DWORD *)*((_QWORD *)NdisVcHandle + 1);
  v4 = v2;
  if ( (*v3 & 3) != 0 )
  {
    v5 = 65539;
    goto LABEL_30;
  }
  if ( (*v3 & 4) != 0 )
  {
    v5 = -1073676286;
    goto LABEL_30;
  }
  *((_DWORD *)NdisVcHandle + 1) |= 0x80000000;
  if ( *((_DWORD *)NdisVcHandle + 22) && *((_QWORD *)NdisVcHandle + 27) )
    *v3 |= 8u;
  if ( *((_QWORD *)NdisVcHandle + 38) )
  {
    ndisSetupWmiNode(
      *((_QWORD *)NdisVcHandle + 24),
      (const void **)NdisVcHandle + 37,
      0,
      (__int128 *)&GUID_NDIS_NOTIFY_VC_REMOVAL,
      &WnodeEventItem);
    v6 = WnodeEventItem;
    if ( WnodeEventItem )
    {
      v7 = IoWMIWriteEvent(WnodeEventItem);
      v10 = v7;
      if ( v7 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v8) = 2;
          WPP_RECORDER_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            v8,
            18,
            26,
            (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
            v7);
        }
        if ( (byte_1C00E8081 & 0x10) != 0 )
          McTemplateK0qqq(
            v9,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4008LL),
            v10,
            0x10001u,
            0);
        ExFreePoolWithTag(v6, 0);
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 24) + 1344LL));
    v11 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v11[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v12 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v12 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v12 = v11;
    v11[1] = v12;
    --*(_WORD *)(*((_QWORD *)NdisVcHandle + 24) + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v13 = (KSPIN_LOCK *)(*((_QWORD *)NdisVcHandle + 24) + 1344LL);
    *((_QWORD *)NdisVcHandle + 38) = 0LL;
    *((_WORD *)NdisVcHandle + 149) = 0;
    *((_WORD *)NdisVcHandle + 148) = 0;
    KeReleaseSpinLockFromDpcLevel(v13);
  }
  v14 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v14 )
    v14(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v15 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v15[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v16 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v16 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v16 = v15;
  v15[1] = v16;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v17 = *((_QWORD *)NdisVcHandle + 17);
  if ( v17 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v17 + 232));
    v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v18[1] == (char *)NdisVcHandle + 152 )
    {
      v19 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v19 == (char *)NdisVcHandle + 152 )
      {
        *v19 = v18;
        v18[1] = v19;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 17) + 232LL));
        goto LABEL_29;
      }
    }
LABEL_35:
    __fastfail(3u);
  }
LABEL_29:
  v5 = 0;
LABEL_30:
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v4);
  if ( !v5 )
    ndisDereferenceVcPtr((char)NdisVcHandle);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v20,
      19,
      27,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      v5);
  }
  return v5;
}
