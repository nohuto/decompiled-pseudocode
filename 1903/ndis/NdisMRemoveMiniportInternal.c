/*
 * XREFs of NdisMRemoveMiniportInternal @ 0x1C009E8AC
 * Callers:
 *     ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00636DC (-ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z.c)
 *     NdisMRemoveMiniport @ 0x1C009E890 (NdisMRemoveMiniport.c)
 *     ndisMiniportFatalError @ 0x1C0118E10 (ndisMiniportFatalError.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 */

void __fastcall NdisMRemoveMiniportInternal(__int64 a1, __int16 a2)
{
  unsigned __int16 v2; // si
  KIRQL v4; // al
  int v5; // ecx
  __int16 v6; // dx

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      100,
      (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
      a1);
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x100) == 0 )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = 0LL;
    v5 = *(_DWORD *)(a1 + 124);
    if ( (v5 & 0x100) != 0 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    }
    else
    {
      *(_DWORD *)(a1 + 124) = v5 | 0x100;
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
      ndisLogMiniportEvent(a1, v2);
      IoInvalidateDeviceState(*(PDEVICE_OBJECT *)(a1 + 3832));
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        101,
        (struct _GUID *)&WPP_3bdda7144e74370204adec44604355d7_Traceguids,
        a1);
    }
  }
}
