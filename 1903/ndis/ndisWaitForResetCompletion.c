/*
 * XREFs of ndisWaitForResetCompletion @ 0x1C00146C8
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 *     ndisMCommonHaltMiniport @ 0x1C0136B28 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWaitForResetCompletion(__int64 a1)
{
  KIRQL v2; // cl
  bool v3; // zf
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v5; // [rsp+60h] [rbp+8h]

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  while ( *(_BYTE *)(a1 + 89) )
  {
    *(_QWORD *)(a1 + 520) = 0LL;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
    v5 = 0;
    do
      ++v5;
    while ( v5 < 0x32 );
    v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  }
  v3 = (*(_DWORD *)(a1 + 120) & 0x200000) == 0;
  *(_BYTE *)(a1 + 89) = 1;
  if ( !v3 )
    *(_QWORD *)(a1 + 1888) = &Event;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_BYTE *)(a1 + 89) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v2);
  if ( *(_QWORD *)(a1 + 1888) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 1888) = 0LL;
}
