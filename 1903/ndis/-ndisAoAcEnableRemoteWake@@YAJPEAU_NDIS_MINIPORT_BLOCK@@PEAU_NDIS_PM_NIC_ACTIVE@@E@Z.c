/*
 * XREFs of ?ndisAoAcEnableRemoteWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_NIC_ACTIVE@@E@Z @ 0x1C00BAB98
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C012B4E8 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00BADA0 (-ndisAoAcIsD0Required@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     WPP_RECORDER_SF_DDLc @ 0x1C00BE304 (WPP_RECORDER_SF_DDLc.c)
 *     WPP_RECORDER_SF_DDLcD @ 0x1C00BE408 (WPP_RECORDER_SF_DDLcD.c)
 */

__int64 __fastcall ndisAoAcEnableRemoteWake(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_PM_NIC_ACTIVE *a2,
        unsigned __int8 a3)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rsi
  unsigned int v6; // ebx
  KIRQL v7; // dl
  KSPIN_LOCK *v8; // rcx
  int v9; // r9d

  AoAc = a1->AoAc;
  v6 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLc(*((_QWORD *)WPP_GLOBAL_Control + 8), (_DWORD)a2, a3, (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFF);
  KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  if ( ndisAoAcIsD0Required(AoAc) )
    AoAc->RemoteWakeEnabled = a3;
  else
    v6 = -1073741823;
  KeReleaseSpinLock(v8, v7);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDLcD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      *((unsigned __int16 *)a2 + 7),
      (*((_QWORD *)a2 + 1) >> 24) & 0xFFFFFF,
      v9);
  return v6;
}
