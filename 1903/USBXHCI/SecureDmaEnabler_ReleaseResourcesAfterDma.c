/*
 * XREFs of SecureDmaEnabler_ReleaseResourcesAfterDma @ 0x1C0046B80
 * Callers:
 *     Control_TransferData_Free @ 0x1C002B058 (Control_TransferData_Free.c)
 *     Isoch_Stage_FreeScatterGatherList @ 0x1C0031034 (Isoch_Stage_FreeScatterGatherList.c)
 *     Bulk_Stage_FreeScatterGatherList @ 0x1C0036D5C (Bulk_Stage_FreeScatterGatherList.c)
 * Callees:
 *     memset @ 0x1C0008D80 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C000B24C (WPP_RECORDER_SF_d.c)
 */

void *__fastcall SecureDmaEnabler_ReleaseResourcesAfterDma(__int64 a1, _QWORD *a2)
{
  int v4; // eax
  int v6; // [rsp+28h] [rbp-10h]

  if ( *(_DWORD *)a2 == 1 )
  {
    v4 = VslDeleteSecureSection(a2[2]);
    if ( v4 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
        3u,
        0x12u,
        0x12u,
        (__int64)&WPP_4fb5ac5d8fed31f024e2792297bfd0b8_Traceguids,
        v6);
    }
  }
  return memset(a2, 0, 0x20uLL);
}
