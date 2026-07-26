/*
 * XREFs of ndisAcquireMiniportPnPEventLock @ 0x1C001A668
 * Callers:
 *     ndisPnPNotifyBindingUnlocked @ 0x1C00C33BC (ndisPnPNotifyBindingUnlocked.c)
 *     ndisPnPNotifyAllTransports @ 0x1C010A900 (ndisPnPNotifyAllTransports.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAcquireMiniportPnPEventLock(__int64 a1, struct _KEVENT *a2)
{
  KIRQL v4; // r14
  int v5; // ecx
  struct _KEVENT *v6; // rdi

  KeInitializeEvent(a2, NotificationEvent, 0);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  for ( *(_QWORD *)(a1 + 520) = KeGetCurrentThread(); ; *(_QWORD *)(a1 + 520) = KeGetCurrentThread() )
  {
    *(_DWORD *)(a1 + 1864) = 1641165;
    v5 = *(_DWORD *)(a1 + 4456);
    if ( (v5 & 8) == 0 )
      break;
    v6 = *(struct _KEVENT **)(a1 + 760);
    if ( !v6 )
    {
      KeClearEvent(a2);
      *(_QWORD *)(a1 + 760) = a2;
      v6 = a2;
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
    KeWaitForSingleObject(v6, Executive, 0, 0, 0LL);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1864) = 0;
  *(_DWORD *)(a1 + 4456) = v5 | 8;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v4);
}
