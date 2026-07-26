/*
 * XREFs of NdisLWMStartNetworkInterface @ 0x1C009DA50
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0002B20 (ndisReferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisStartDeviceSynchronous @ 0x1C002F168 (ndisStartDeviceSynchronous.c)
 *     NdisConvertNtStatusToNdisStatus @ 0x1C003F500 (NdisConvertNtStatusToNdisStatus.c)
 *     ndisBugCheckEx @ 0x1C007E3F0 (ndisBugCheckEx.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall NdisLWMStartNetworkInterface(ULONG_PTR a1)
{
  __int64 v2; // r8
  unsigned int v3; // edi
  int started; // eax
  int v5; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      146,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
    ndisBugCheckEx(0x29uLL, 3uLL, a1, 0LL);
  if ( (unsigned __int8)ndisReferenceMiniport(a1) )
  {
    started = ndisStartDeviceSynchronous(a1, 0LL, v2);
    v3 = NdisConvertNtStatusToNdisStatus(started);
    if ( !v3 )
      ndisMSetMiniportReadyForBinding(a1);
    ndisDereferenceMiniport(a1, 0x69u);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2,
        1,
        147,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        a1);
    v3 = -1073676286;
  }
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v5) = 4;
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v5,
      1,
      148,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1,
      v3);
  }
  return v3;
}
