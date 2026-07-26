/*
 * XREFs of NdisCmMakeCallComplete @ 0x1C00837C0
 * Callers:
 *     NdisClMakeCall @ 0x1C0082780 (NdisClMakeCall.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0011C88 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C0082220 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C00869BC (WPP_RECORDER_SF_LqDLqD.c)
 *     ndisDereferenceVcPtr @ 0x1C00871C0 (ndisDereferenceVcPtr.c)
 *     ndisReferenceVcPtr @ 0x1C00874C0 (ndisReferenceVcPtr.c)
 */

void __stdcall NdisCmMakeCallComplete(
        NDIS_STATUS Status,
        NDIS_HANDLE NdisVcHandle,
        NDIS_HANDLE NdisPartyHandle,
        NDIS_HANDLE CallMgrPartyContext,
        PCO_CALL_PARAMETERS CallParameters)
{
  bool v9; // di
  __int64 v10; // rbp
  KIRQL v11; // al
  unsigned int v12; // ecx
  __int64 v13; // rdx
  KIRQL v14; // al
  _QWORD *v15; // rcx
  KIRQL v16; // r9
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  int v22; // edx

  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, *((_QWORD *)NdisVcHandle + 9), 34);
  v10 = *((_QWORD *)NdisVcHandle + 8);
  v11 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v12 = *((_DWORD *)NdisVcHandle + 1) & 0xFFFFFFEF;
  *((_DWORD *)NdisVcHandle + 1) = v12;
  if ( Status )
    v9 = (v12 & 0x40) != 0;
  else
    *((_DWORD *)NdisVcHandle + 1) = v12 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v11);
  if ( Status )
  {
    if ( !v9 )
    {
      ndisDereferenceVcPtr((char)NdisVcHandle);
      ndisDereferenceAf((KSPIN_LOCK *)v10);
      if ( NdisPartyHandle )
      {
        ExFreePoolWithTag(NdisPartyHandle, 0);
        NdisPartyHandle = 0LL;
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v13,
        19,
        35,
        (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
        Status);
    }
  }
  else
  {
    if ( NdisPartyHandle )
    {
      *((_QWORD *)NdisPartyHandle + 1) = CallMgrPartyContext;
      ndisReferenceVcPtr(NdisVcHandle, v13);
    }
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL));
    v15 = (char *)NdisVcHandle + 32;
    v16 = v14;
    v17 = *((_QWORD *)NdisVcHandle + 4);
    if ( *(NDIS_HANDLE *)(v17 + 8) != (char *)NdisVcHandle + 32
      || (v18 = (_QWORD *)*((_QWORD *)NdisVcHandle + 5), (_QWORD *)*v18 != v15)
      || (*v18 = v17,
          *(_QWORD *)(v17 + 8) = v18,
          v19 = *(_QWORD *)(v10 + 368) + 1032LL,
          v20 = *(_QWORD *)v19,
          *(_QWORD *)(*(_QWORD *)v19 + 8LL) != v19) )
    {
      __fastfail(3u);
    }
    *v15 = v20;
    *((_QWORD *)NdisVcHandle + 5) = v19;
    *(_QWORD *)(v20 + 8) = v15;
    *(_QWORD *)v19 = v15;
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v10 + 368) + 232LL), v16);
  }
  v21 = *((_QWORD *)NdisVcHandle + 3);
  if ( *(_DWORD *)(v10 + 396) >= 6u )
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v10 + 280))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters);
  else
    (*(void (__fastcall **)(_QWORD, __int64, NDIS_HANDLE, PCO_CALL_PARAMETERS))(v10 + 128))(
      (unsigned int)Status,
      v21,
      NdisPartyHandle,
      CallParameters);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v22) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v22,
      19,
      36,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids);
  }
}
