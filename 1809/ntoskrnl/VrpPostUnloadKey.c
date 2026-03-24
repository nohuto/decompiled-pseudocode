/*
 * XREFs of VrpPostUnloadKey @ 0x14080B5F0
 * Callers:
 *     VrpRegistryCallback @ 0x140807FF0 (VrpRegistryCallback.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     EtwActivityIdControl @ 0x1400A3B50 (EtwActivityIdControl.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B79B0 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     VrpDestroyNamespaceNode @ 0x14080A19C (VrpDestroyNamespaceNode.c)
 */

__int64 __fastcall VrpPostUnloadKey(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  GUID v6; // [rsp+20h] [rbp-28h] BYREF

  *(_QWORD *)&v6.Data1 = 0LL;
  *(_QWORD *)v6.Data4 = 0LL;
  EtwActivityIdControl(3u, &v6);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
  {
    if ( *(int *)(a1 + 8) >= 0 )
      VrpDestroyNamespaceNode((ULONGLONG *)a2, v4);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 16));
    KeAbPostRelease(a2 + 16);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
