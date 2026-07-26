/*
 * XREFs of ndisMHaltMiniport @ 0x1C0081E68
 * Callers:
 *     ndisPnPRemoveDevice @ 0x1C013A804 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000286C (ndisDereferenceMiniport.c)
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisCloseULongRef @ 0x1C0094C78 (ndisCloseULongRef.c)
 *     ndisMDeregisterBugCheckHandler @ 0x1C009F8A4 (ndisMDeregisterBugCheckHandler.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 */

void __fastcall ndisMHaltMiniport(__int64 a1)
{
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      30,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
  if ( (unsigned __int8)ndisCloseULongRef((PKSPIN_LOCK)(a1 + 4432)) )
  {
    if ( (*(_DWORD *)(a1 + 124) & 0x4000) == 0 )
    {
      ndisMCommonHaltMiniport(a1);
      ndisMDeregisterBugCheckHandler(a1);
    }
    ndisDereferenceMiniport(a1, 0x18u);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      31,
      (struct _GUID *)&WPP_1d1a299e20863994e3a947d35977b252_Traceguids,
      a1);
}
