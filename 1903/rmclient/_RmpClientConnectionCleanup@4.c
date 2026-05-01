/*
 * XREFs of _RmpClientConnectionCleanup@4 @ 0x10011807
 * Callers:
 *     _RmDisconnectFromResourceManager@4 @ 0x10011340 (_RmDisconnectFromResourceManager@4.c)
 *     _RmpClientConnectToResourceManager@8 @ 0x10011719 (_RmpClientConnectToResourceManager@8.c)
 * Callees:
 *     _HamIpcChannelRundown@4 @ 0x10007110 (_HamIpcChannelRundown@4.c)
 *     _RmpClientDisconnectContextHandle@4 @ 0x100118B9 (_RmpClientDisconnectContextHandle@4.c)
 */

int __thiscall RmpClientConnectionCleanup(_DWORD *this)
{
  int v2; // eax
  _DWORD *v3; // ecx

  HamIpcChannelRundown((int)(this + 3));
  if ( this[2] )
    RmpClientDisconnectContextHandle();
  RtlAcquireSRWLockExclusive(&RmpClientConnectionListLock);
  v2 = *this;
  if ( *(_DWORD **)(*this + 4) != this || (v3 = (_DWORD *)this[1], (_DWORD *)*v3 != this) )
    __fastfail(3u);
  *v3 = v2;
  *(_DWORD *)(v2 + 4) = v3;
  return RtlReleaseSRWLockExclusive(&RmpClientConnectionListLock);
}
