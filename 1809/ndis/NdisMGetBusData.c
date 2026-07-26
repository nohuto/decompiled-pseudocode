/*
 * XREFs of NdisMGetBusData @ 0x1C0015340
 * Callers:
 *     ndisMReadPciPropertiesFromConfigSpace @ 0x1C00BCDE0 (ndisMReadPciPropertiesFromConfigSpace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 */

ULONG __stdcall NdisMGetBusData(
        NDIS_HANDLE NdisMiniportHandle,
        ULONG WhichSpace,
        ULONG Offset,
        PVOID Buffer,
        ULONG Length)
{
  ULONG v9; // ebx
  __int64 (__fastcall *v10)(__int64, _QWORD, PVOID, _QWORD, ULONG); // r10
  __int64 v11; // rcx

  v9 = 0;
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_q(32LL, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, NdisMiniportHandle);
  if ( (*((_DWORD *)NdisMiniportHandle + 928) & 0x40) != 0 )
    return 0;
  v10 = (__int64 (__fastcall *)(__int64, _QWORD, PVOID, _QWORD, ULONG))*((_QWORD *)NdisMiniportHandle + 466);
  if ( v10 )
  {
    v11 = *((_QWORD *)NdisMiniportHandle + 467);
    if ( v11 )
      v9 = v10(v11, WhichSpace, Buffer, Offset, Length);
  }
  if ( (unsigned __int8)byte_1C00A0256 >= 4u )
    WPP_SF_qD(33LL, &WPP_664e81fe3e98381b8a075dcdfaa02fe6_Traceguids, NdisMiniportHandle, v9);
  return v9;
}
