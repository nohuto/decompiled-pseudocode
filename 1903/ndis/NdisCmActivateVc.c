/*
 * XREFs of NdisCmActivateVc @ 0x1C0083010
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 *     NdisMCoActivateVcComplete @ 0x1C0086450 (NdisMCoActivateVcComplete.c)
 */

NDIS_STATUS __stdcall NdisCmActivateVc(NDIS_HANDLE NdisVcHandle, PCO_CALL_PARAMETERS CallParameters)
{
  _QWORD *v2; // rsi
  PCO_CALL_PARAMETERS v3; // rbp
  KIRQL v5; // al
  int *v6; // rdx
  KIRQL v7; // r8
  int v8; // ecx
  NDIS_STATUS v9; // ebx
  PCO_MEDIA_PARAMETERS MediaParameters; // rax
  __int64 v11; // rax
  int v12; // edx

  v2 = (_QWORD *)*((_QWORD *)NdisVcHandle + 9);
  v3 = CallParameters;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(CallParameters) = 4;
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)CallParameters,
      19,
      32,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)NdisVcHandle,
      (char)v2,
      *((_QWORD *)NdisVcHandle + 25));
  }
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NdisVcHandle + 2);
  v6 = (int *)*((_QWORD *)NdisVcHandle + 1);
  v7 = v5;
  v8 = *v6;
  if ( (*v6 & 2) != 0 )
  {
    v9 = 65539;
  }
  else if ( (v8 & 4) != 0 )
  {
    v9 = -1073676286;
  }
  else
  {
    v9 = 0;
    *v6 = v8 | 2;
    MediaParameters = v3->MediaParameters;
    if ( MediaParameters->MediaSpecific.Length < 8 )
      v11 = (unsigned int)v2;
    else
      v11 = *(_QWORD *)MediaParameters->MediaSpecific.Parameters;
    v2[17] = v11;
  }
  v2[12] = *((_QWORD *)NdisVcHandle + 21);
  v2[11] = *((_QWORD *)NdisVcHandle + 18);
  KeReleaseSpinLock((PKSPIN_LOCK)NdisVcHandle + 2, v7);
  if ( !v9 )
    v9 = (*((__int64 (__fastcall **)(_QWORD, PCO_CALL_PARAMETERS))NdisVcHandle + 28))(
           *((_QWORD *)NdisVcHandle + 25),
           v3);
  if ( v9 != 259 )
  {
    NdisMCoActivateVcComplete(v9, NdisVcHandle, v3);
    v9 = 259;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v12,
      19,
      33,
      (struct _GUID *)&WPP_edc17b91658032a542ff368d2b56b781_Traceguids,
      (char)NdisVcHandle,
      v9);
  }
  return v9;
}
