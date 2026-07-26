/*
 * XREFs of ?ndisNsiGetCompartmentIdForGuid@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0011DE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C0011F54 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 */

__int64 __fastcall ndisNsiGetCompartmentIdForGuid(struct _NM_REQUEST_GET_PARAMETER *a1)
{
  unsigned int v2; // ebx
  const struct _GUID *v3; // rbp
  KIRQL v4; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *Flink; // rsi
  KIRQL v6; // r14

  v2 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      132,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1);
  v3 = (const struct _GUID *)*((_QWORD *)a1 + 2);
  if ( v3
    && *((_DWORD *)a1 + 6) == 16
    && *((_DWORD *)a1 + 8) == 2
    && *((_QWORD *)a1 + 5)
    && *((_DWORD *)a1 + 12) == 4
    && !*((_DWORD *)a1 + 13)
    && !*((_DWORD *)a1 + 14) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    Flink = ndisIfCompartmentList;
    v6 = v4;
    while ( Flink != (struct _NDIS_IF_COMPARTMENT_BLOCK *)&ndisIfCompartmentList )
    {
      if ( !(unsigned int)ndisCompareGuid(&Flink->LoopbackInfo.CompartmentGuid, v3) )
      {
        if ( Flink )
        {
          **((_DWORD **)a1 + 5) = Flink->CompartmentId;
          goto LABEL_15;
        }
        break;
      }
      Flink = (struct _NDIS_IF_COMPARTMENT_BLOCK *)Flink->Link.Flink;
    }
    v2 = -1073741772;
LABEL_15:
    KeReleaseSpinLock(&ndisIfListLock, v6);
  }
  else
  {
    v2 = -1073741811;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      22,
      133,
      (struct _GUID *)&WPP_ce927dcef9c335b55d94e8cd1be1c2f8_Traceguids,
      (char)a1,
      v2);
  return v2;
}
