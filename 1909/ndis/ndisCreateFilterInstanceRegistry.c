/*
 * XREFs of ndisCreateFilterInstanceRegistry @ 0x1C008E0D4
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C012C44C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_qqqL @ 0x1C0002F40 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C0008AE0 (WPP_RECORDER_SF_qqq.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C008F898 (ndisGetOrCreateFilterInstanceKey.c)
 *     ndisSetAllFilterDefaultParameters @ 0x1C0090690 (ndisSetAllFilterDefaultParameters.c)
 */

__int64 __fastcall ndisCreateFilterInstanceRegistry(char a1, char a2, char a3)
{
  int v6; // edx
  unsigned int v7; // ebx
  _UNICODE_STRING Destination; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+A8h] [rbp+20h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  LOBYTE(v10) = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      1,
      89,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      a3,
      a2);
  v7 = ndisGetOrCreateFilterInstanceKey(a1, (__int64)&v10, &Destination);
  if ( !v7 && !(_BYTE)v10 )
    v7 = ndisSetAllFilterDefaultParameters(a1, (char)&Destination, (char)ndisFilterInstanceParamsStr);
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      1u,
      0x5Au,
      (struct _GUID *)&WPP_6ee99368f40c34c231f69366c0436dad_Traceguids,
      a1,
      a3,
      a2,
      v7);
  return v7;
}
