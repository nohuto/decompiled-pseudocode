/*
 * XREFs of ?ndisReferenceNextUnprocessedOpenEx@@YAPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0012790
 * Callers:
 *     ndisPnPNotifyAllTransports @ 0x1C012A008 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 */

struct _NDIS_OPEN_BLOCK *__fastcall ndisReferenceNextUnprocessedOpenEx(struct _NDIS_MINIPORT_BLOCK *a1)
{
  KIRQL v2; // r14
  _NDIS_OPEN_BLOCK *OpenQueue; // rbx
  int v4; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      20,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      1);
  v2 = KeAcquireSpinLockRaiseToDpc(&a1->Lock);
  OpenQueue = a1->OpenQueue;
  a1->MiniportThread = KeGetCurrentThread();
  while ( OpenQueue )
  {
    KeAcquireSpinLockAtDpcLevel(&OpenQueue->SpinLock);
    if ( (OpenQueue->OpenFlags & 0x80000) != 0 && (OpenQueue->OpenFlags & 0x10) == 0 )
    {
      OpenQueue->OpenFlags |= 0x10u;
    }
    else if ( (OpenQueue->OpenFlags & 0x18010) == 0 )
    {
      OpenQueue->OpenFlags |= 0x80010u;
      KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
      break;
    }
    KeReleaseSpinLockFromDpcLevel(&OpenQueue->SpinLock);
    OpenQueue = OpenQueue->MiniportNextOpen;
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      13,
      21,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      (char)OpenQueue);
  }
  return OpenQueue;
}
