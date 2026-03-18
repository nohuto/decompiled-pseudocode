/*
 * XREFs of rimRemoveFromObTrackList @ 0x1C006D1F4
 * Callers:
 *     RawInputManagerObjectDelete @ 0x1C006D06C (RawInputManagerObjectDelete.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 */

void __fastcall rimRemoveFromObTrackList(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdx
  _QWORD *v4; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v2 = (_QWORD *)(a1 + 16);
  v3 = *v2;
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (v4 = (_QWORD *)v2[1], (_QWORD *)*v4 != v2) )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
