/*
 * XREFs of NdisClCloseCall @ 0x1C0082410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisCmCloseCallComplete @ 0x1C0083330 (NdisCmCloseCallComplete.c)
 *     WPP_RECORDER_SF_qLLqD @ 0x1C0086D54 (WPP_RECORDER_SF_qLLqD.c)
 *     ndisReferenceVcPtr @ 0x1C00874C0 (ndisReferenceVcPtr.c)
 */

NDIS_STATUS __stdcall NdisClCloseCall(NDIS_HANDLE NdisVcHandle, NDIS_HANDLE NdisPartyHandle, PVOID Buffer, UINT Size)
{
  __int64 v8; // rdi
  KIRQL v10; // al
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 (__fastcall *v14)(_QWORD, __int64, PVOID, _QWORD); // rax
  NDIS_STATUS v15; // eax
  int v16; // edx
  NDIS_STATUS v17; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qLLqD(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)NdisPartyHandle, (_DWORD)Buffer, Size);
  v8 = 0LL;
  if ( !(unsigned __int8)ndisReferenceVcPtr(NdisVcHandle, NdisPartyHandle) )
    return -1073741823;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  *((_DWORD *)NdisVcHandle + 1) |= 0x20u;
  v11 = *((_DWORD *)NdisVcHandle + 1);
  if ( (v11 & 0x10) != 0 )
    *((_DWORD *)NdisVcHandle + 1) = v11 | 0x40;
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v10);
  v12 = *((_QWORD *)NdisVcHandle + 8);
  if ( *(_DWORD *)(v12 + 392) >= 6u )
    v13 = *(_QWORD *)(v12 + 32);
  else
    v13 = *(_QWORD *)(v12 + 24);
  v14 = *(__int64 (__fastcall **)(_QWORD, __int64, PVOID, _QWORD))(v13 + 64);
  if ( NdisPartyHandle )
    v8 = *((_QWORD *)NdisPartyHandle + 1);
  v15 = v14(*((_QWORD *)NdisVcHandle + 18), v8, Buffer, Size);
  v17 = v15;
  if ( v15 != 259 )
  {
    NdisCmCloseCallComplete(v15, NdisVcHandle, NdisPartyHandle);
    v17 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v16,
      19,
      38,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      v17);
  }
  return v17;
}
