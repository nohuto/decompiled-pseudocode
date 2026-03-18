/*
 * XREFs of VidSchIsFlipQueueDeviceOwner @ 0x1C00C86B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall VidSchIsFlipQueueDeviceOwner(__int64 a1, unsigned int a2, __int64 a3)
{
  struct _ERESOURCE *v3; // rsi
  __int64 v4; // rbx

  v3 = (struct _ERESOURCE *)(a1 + 904);
  v4 = a2;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 904), 1u);
  LOBYTE(v4) = *(_QWORD *)(*(_QWORD *)(a1 + 8 * v4 + 2576) + 16LL) == a3;
  ExReleaseResourceLite(v3);
  return v4;
}
