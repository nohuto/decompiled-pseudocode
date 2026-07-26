/*
 * XREFs of ndisPnPQueryStopDevice @ 0x1C013A6F8
 * Callers:
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A4100 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FC30 (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPQueryStopDevice(__int64 a1)
{
  unsigned int v2; // edi
  KIRQL v3; // al
  KSPIN_LOCK *v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      81,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  if ( (*(_DWORD *)(a1 + 3864) & 1) != 0 )
  {
    v2 = -1073741823;
  }
  else
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = 0LL;
    v4 = (KSPIN_LOCK *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 1800) )
    {
      v2 = -1073741823;
      KeReleaseSpinLock(v4, v3);
    }
    else
    {
      KeReleaseSpinLock(v4, v3);
      v2 = ndisPnPQueryRemoveDevice(a1);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      82,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  return v2;
}
