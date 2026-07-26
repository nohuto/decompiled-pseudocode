/*
 * XREFs of NdisCoDeleteVc @ 0x1C011CD50
 * Callers:
 *     NdisMCmDeleteVc @ 0x1C011DF70 (NdisMCmDeleteVc.c)
 * Callees:
 *     ndisSetupWmiNode @ 0x1C00172D4 (ndisSetupWmiNode.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_D @ 0x1C0041770 (WPP_SF_D.c)
 *     McTemplateK0qqq @ 0x1C004F464 (McTemplateK0qqq.c)
 *     WPP_SF_qLLqL @ 0x1C0053B2C (WPP_SF_qLLqL.c)
 *     ndisDereferenceVcPtr @ 0x1C011E8EC (ndisDereferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisCoDeleteVc(NDIS_HANDLE NdisVcHandle)
{
  KIRQL v2; // al
  _DWORD *v3; // rcx
  KIRQL v4; // r15
  int v5; // edi
  NTSTATUS v6; // eax
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  unsigned int v8; // edi
  NDIS_HANDLE *v9; // rdx
  NDIS_HANDLE *v10; // rcx
  KSPIN_LOCK *v11; // rcx
  void (__fastcall *v12)(_QWORD); // rax
  NDIS_HANDLE *v13; // rdx
  NDIS_HANDLE *v14; // rcx
  __int64 v15; // rcx
  _QWORD *v16; // r8
  NDIS_HANDLE *v17; // rdx
  PVOID WnodeEventItem; // [rsp+60h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_qLLqL(
      (__int64)NdisVcHandle,
      **((unsigned int **)NdisVcHandle + 1),
      (__int64)NdisVcHandle,
      *((_DWORD *)NdisVcHandle + 1));
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
    if ( WnodeEventItem )
    {
      v6 = IoWMIWriteEvent(WnodeEventItem);
      v8 = v6;
      if ( v6 < 0 )
      {
        if ( (unsigned __int8)byte_1C00A0261 >= 2u )
          WPP_SF_D(0x1Au, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v6);
        if ( (byte_1C00A2081 & 0x10) != 0 )
          McTemplateK0qqq(
            v7,
            &IoWMIWriteEventFailed,
            (const GUID *)(*((_QWORD *)NdisVcHandle + 24) + 4040LL),
            v8,
            0x80Fu,
            0);
        ExFreePoolWithTag(WnodeEventItem, 0);
      }
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 24) + 1344LL));
    v9 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 40);
    if ( v9[1] != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    v10 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 41);
    if ( *v10 != (char *)NdisVcHandle + 320 )
      goto LABEL_35;
    *v10 = v9;
    v9[1] = v10;
    --*(_WORD *)(*((_QWORD *)NdisVcHandle + 24) + 1384LL);
    ExFreePoolWithTag(*((PVOID *)NdisVcHandle + 38), 0);
    v11 = (KSPIN_LOCK *)(*((_QWORD *)NdisVcHandle + 24) + 1344LL);
    *((_QWORD *)NdisVcHandle + 38) = 0LL;
    *((_WORD *)NdisVcHandle + 149) = 0;
    *((_WORD *)NdisVcHandle + 148) = 0;
    KeReleaseSpinLockFromDpcLevel(v11);
  }
  v12 = (void (__fastcall *)(_QWORD))*((_QWORD *)NdisVcHandle + 12);
  if ( v12 )
    v12(*((_QWORD *)NdisVcHandle + 13));
  KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v13 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 4);
  if ( v13[1] != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  v14 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 5);
  if ( *v14 != (char *)NdisVcHandle + 32 )
    goto LABEL_35;
  *v14 = v13;
  v13[1] = v14;
  KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(*((_QWORD *)NdisVcHandle + 10) + 232LL));
  v15 = *((_QWORD *)NdisVcHandle + 17);
  if ( v15 )
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v15 + 232));
    v16 = (_QWORD *)*((_QWORD *)NdisVcHandle + 19);
    if ( (NDIS_HANDLE)v16[1] == (char *)NdisVcHandle + 152 )
    {
      v17 = (NDIS_HANDLE *)*((_QWORD *)NdisVcHandle + 20);
      if ( *v17 == (char *)NdisVcHandle + 152 )
      {
        *v17 = v16;
        v16[1] = v17;
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
    ndisDereferenceVcPtr(NdisVcHandle);
  if ( (unsigned __int8)byte_1C00A0262 >= 4u )
    WPP_SF_D(0x1Bu, &WPP_4751d4e37a7b3d0bd2bb7b74b42f4c5c_Traceguids, v5);
  return v5;
}
