/*
 * XREFs of ndisWaitForResetCompletion @ 0x1C0010CD4
 * Callers:
 *     ndisSetDevicePower @ 0x1C00108DC (ndisSetDevicePower.c)
 *     ndisMCommonHaltMiniport @ 0x1C0115B88 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisWaitForResetCompletion(__int64 a1)
{
  KIRQL v2; // al
  KIRQL v3; // cl
  bool v4; // zf
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+60h] [rbp+8h]

  KeInitializeEvent(&Event, NotificationEvent, 0);
  v2 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v3 = v2;
  while ( 1 )
  {
    *(_DWORD *)(a1 + 1864) = 1442741;
    if ( !*(_BYTE *)(a1 + 89) )
      break;
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1864) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
    v6 = 0;
    do
      ++v6;
    while ( v6 < 0x32 );
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  }
  *(_BYTE *)(a1 + 89) = 1;
  *(_DWORD *)(a1 + 1868) = 1442741;
  v4 = (*(_DWORD *)(a1 + 120) & 0x200000) == 0;
  *(_QWORD *)(a1 + 1872) = KeGetCurrentThread();
  if ( !v4 )
    *(_QWORD *)(a1 + 1896) = &Event;
  *(_BYTE *)(a1 + 89) = 0;
  *(_QWORD *)(a1 + 1864) = 0LL;
  *(_QWORD *)(a1 + 1872) = 0LL;
  *(_QWORD *)(a1 + 520) = 0LL;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v3);
  if ( *(_QWORD *)(a1 + 1896) )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  *(_QWORD *)(a1 + 1896) = 0LL;
}
