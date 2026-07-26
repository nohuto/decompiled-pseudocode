/*
 * XREFs of ndisIMDeleteIfStackEntry @ 0x1C00994C0
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisIfDeleteStackEntries @ 0x1C00679E4 (ndisIfDeleteStackEntries.c)
 *     ndisDereferenceMiniportRef @ 0x1C0094CC4 (ndisDereferenceMiniportRef.c)
 *     ndisReferenceMiniportByName @ 0x1C012B290 (ndisReferenceMiniportByName.c)
 */

__int64 __fastcall ndisIMDeleteIfStackEntry(__int64 a1)
{
  _DWORD *v2; // rdx
  unsigned int v3; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      207,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  v2 = *(_DWORD **)(a1 + 3768);
  if ( *v2 > 1u )
  {
    ndisReferenceMiniportByName((__int64)&v2[4 * (*v2 - 2) + 2]);
    v3 = -1073741772;
  }
  else
  {
    v3 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      208,
      (struct _GUID *)&WPP_529e9a8d17733b7c5a0c4606a55c84c2_Traceguids,
      a1);
  return v3;
}
