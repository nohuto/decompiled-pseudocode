/*
 * XREFs of NdisMGetBusData @ 0x1C002EE00
 * Callers:
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C002ECC4 (ndisMReadPciPropertiesFromConfigSpace.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     _guard_dispatch_icall_nop @ 0x1C00410C0 (_guard_dispatch_icall_nop.c)
 */

ULONG __stdcall NdisMGetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v7; // r14d
  ULONG v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v11; // rcx

  v7 = WhichSpace;
  v9 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(WhichSpace) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      WhichSpace,
      7,
      32,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisMiniportHandle);
  }
  if ( (*((_DWORD *)NdisMiniportHandle + 922) & 0x40) != 0 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 463);
  if ( v10 )
  {
    v11 = *((_QWORD *)NdisMiniportHandle + 464);
    if ( v11 )
      v9 = v10(v11, v7, Buffer, Offset, Length);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(WhichSpace) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      WhichSpace,
      7,
      33,
      (struct _GUID *)&WPP_ecb39071101534da99cb68be25855aca_Traceguids,
      (char)NdisMiniportHandle,
      v9);
  }
  return v9;
}
