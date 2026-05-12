/*
 * XREFs of RiGetEnqueueReason @ 0x1C000B33C
 * Callers:
 *     RaidInsertDeviceQueue @ 0x1C0009090 (RaidInsertDeviceQueue.c)
 *     RiNormalizeDeviceQueue @ 0x1C000B224 (RiNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C000B314 (RiPeekDeviceQueue.c)
 *     RiIsDeviceQueueBusy @ 0x1C000B40C (RiIsDeviceQueueBusy.c)
 */

__int64 __fastcall RiGetEnqueueReason(__int64 a1, __int64 a2, __int64 a3)
{
  int IsDeviceQueueBusy; // eax
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // r8d
  __int64 v7; // rax
  char v8; // al
  bool v10; // zf
  int v11; // eax

  LOBYTE(a2) = a3;
  IsDeviceQueueBusy = RiIsDeviceQueueBusy(a1, a2, a3, a1);
  LOBYTE(v6) = 0;
  if ( IsDeviceQueueBusy )
    return 1LL;
  if ( *(_BYTE *)(v4 + 37) && (*(_BYTE *)(v5 + 22) & 4) == 0 )
    return 2LL;
  if ( *(_BYTE *)(v4 + 36) && (*(_BYTE *)(v5 + 22) & 2) == 0 )
    return 3LL;
  if ( *(int *)(v4 + 28) > 0 )
    return 4LL;
  if ( *(_BYTE *)(v4 + 38) )
    return 5LL;
  if ( *(_DWORD *)(v4 + 20) || *(_DWORD *)(v4 + 16) )
  {
    v7 = RiPeekDeviceQueue(v4);
    if ( v5 != v7 )
    {
      v10 = (*(_BYTE *)(v7 + 22) & 1) == 0;
      v11 = v6;
      if ( !v10 )
        LOBYTE(v11) = (*(_BYTE *)(v5 + 22) & 6) == 0;
      if ( v11 )
        return 6LL;
    }
  }
  v8 = *(_BYTE *)(v5 + 22);
  if ( (v8 & 1) != 0 && *(int *)(v4 + 76) >= 1 )
    return 7LL;
  if ( *(_BYTE *)(v4 + 39) != (_BYTE)v6 && (v8 & 8) == 0 )
    return 8LL;
  if ( (v8 & 0x10) != 0 )
    return 9LL;
  return (v8 & 0x40) != 0 ? 0xA : 0;
}
