/*
 * XREFs of NdisMSetTimer @ 0x1C0014ED0
 * Callers:
 *     NdisSetTimer @ 0x1C001CC60 (NdisSetTimer.c)
 *     NdisSetPeriodicTimer @ 0x1C009CBB0 (NdisSetPeriodicTimer.c)
 *     NdisSetTimerEx @ 0x1C009CC00 (NdisSetTimerEx.c)
 *     ndisMTimerDpc @ 0x1C00A1520 (ndisMTimerDpc.c)
 * Callees:
 *     WPP_RECORDER_SF_qql @ 0x1C001C18C (WPP_RECORDER_SF_qql_ea_1C001C18C.c)
 */

BOOLEAN __fastcall NdisMSetTimer(__int64 a1, int a2)
{
  char v3; // si
  __int64 v4; // rcx
  __int64 v5; // rbx
  KIRQL v7; // al
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 144);
  v5 = -10000LL * a2;
  if ( (*(_BYTE *)(*(_QWORD *)(v4 + 3760) + 26LL) & 2) != 0 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 1880));
    v8 = *(_QWORD *)(a1 + 144);
    v9 = *(_QWORD *)(v8 + 560);
    v10 = v9;
    if ( !v9 )
      goto LABEL_9;
    do
    {
      if ( v10 == a1 )
        break;
      v10 = *(_QWORD *)(v10 + 152);
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_9:
      *(_QWORD *)(a1 + 152) = v9;
      *(_QWORD *)(v8 + 560) = a1;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 144) + 1880LL), v7);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qql(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      12,
      10,
      (struct _GUID *)&WPP_6a66c12e6892314c82587e9ff74a73a8_Traceguids,
      *(_QWORD *)(a1 + 144),
      a1,
      v3);
  return KeSetTimer((PKTIMER)a1, (LARGE_INTEGER)v5, (PKDPC)(a1 + 64));
}
