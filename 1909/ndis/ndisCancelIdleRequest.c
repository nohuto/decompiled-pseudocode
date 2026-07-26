/*
 * XREFs of ndisCancelIdleRequest @ 0x1C00B805C
 * Callers:
 *     ndisCancelIdleRequestSync @ 0x1C00B81B0 (ndisCancelIdleRequestSync.c)
 *     ndisIdleCancelWorkItem @ 0x1C00B84F0 (ndisIdleCancelWorkItem.c)
 * Callees:
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C0041350 (_guard_dispatch_icall_nop.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00B5F10 (ndisSelectiveSuspendSetResumeBusyReason.c)
 */

char __fastcall ndisCancelIdleRequest(_QWORD *a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v7; // al
  KIRQL v8; // bp
  int v9; // edx

  v3 = a1[556];
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v3);
  v8 = v7;
  if ( (*(_DWORD *)(v3 + 504) & 0x84) == 4 )
  {
    *(_DWORD *)(v3 + 504) |= 0x80u;
    if ( a2 )
      ndisSelectiveSuspendSetResumeBusyReason((_DWORD *)v3, 1, a2, a3);
    *(_QWORD *)(v3 + 656) = MEMORY[0xFFFFF78000000014];
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v8);
    KeWaitForSingleObject((PVOID)(v3 + 224), Executive, 0, 0, 0LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        15,
        27,
        (struct _GUID *)&WPP_5c92d274ba7c3cfc77b41af92408ef8f_Traceguids,
        (char)a1,
        a2);
    }
    ndisLogMiniportEvent((__int64)a1, 0x10u);
    (*(void (__fastcall **)(_QWORD))(a1[470] + 848LL))(a1[3]);
    return 1;
  }
  else
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v3, v7);
    return 0;
  }
}
