/*
 * XREFs of NdisCmCloseCallComplete @ 0x1C0083500
 * Callers:
 *     NdisClCloseCall @ 0x1C00825E0 (NdisClCloseCall.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ?ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z @ 0x1C00823F0 (-ndisDereferenceAf@@YAXPEAU_NDIS_CO_AF_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqDLqD @ 0x1C0086B8C (WPP_RECORDER_SF_LqDLqD.c)
 *     ndisDereferenceVcPtr @ 0x1C0087390 (ndisDereferenceVcPtr.c)
 */

void __stdcall NdisCmCloseCallComplete(NDIS_STATUS Status, NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle)
{
  KIRQL v6; // al
  int v7; // r14d
  __int64 v8; // r13
  KIRQL v9; // dl
  __int64 v10; // r15
  __int64 v11; // rax
  void (__fastcall *v12)(_QWORD, __int64, __int64); // r12
  KSPIN_LOCK *v13; // rcx
  int v14; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqDLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisVcHandle, (_DWORD)NdisPartyHandle, 39);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v7 = *((_DWORD *)NdisVcHandle + 1);
  v8 = *((_QWORD *)NdisVcHandle + 3);
  v9 = v6;
  *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF9F;
  if ( NdisPartyHandle )
    v10 = *((_QWORD *)NdisPartyHandle + 2);
  else
    v10 = 0LL;
  v11 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v11 + 396) >= 6u )
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 296);
  else
    v12 = *(void (__fastcall **)(_QWORD, __int64, __int64))(v11 + 144);
  v13 = (KSPIN_LOCK *)((char *)NdisVcHandle + 16);
  if ( Status )
  {
    KeReleaseSpinLock(v13, v9);
  }
  else
  {
    *((_DWORD *)NdisVcHandle + 1) = v7 & 0xFFFFFF97;
    KeReleaseSpinLock(v13, v9);
    if ( NdisPartyHandle )
    {
      ndisDereferenceVcPtr(*(_QWORD *)NdisPartyHandle);
      ExFreePoolWithTag(NdisPartyHandle, 0);
    }
    ndisDereferenceAf(*((KSPIN_LOCK **)NdisVcHandle + 8));
    if ( (v7 & 8) != 0 )
      ndisDereferenceVcPtr((char)NdisVcHandle);
  }
  ndisDereferenceVcPtr((char)NdisVcHandle);
  v12((unsigned int)Status, v8, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v14,
      19,
      40,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)NdisVcHandle);
  }
}
