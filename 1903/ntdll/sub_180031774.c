/*
 * XREFs of sub_180031774 @ 0x180031774
 * Callers:
 *     TpReleaseWait @ 0x1800302D0 (TpReleaseWait.c)
 *     TpReleaseWork @ 0x180031710 (TpReleaseWork.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     TpReleaseIoCompletion @ 0x180062720 (TpReleaseIoCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x1800786E0 (TpReleaseAlpcCompletion.c)
 *     TpReleaseJobNotification @ 0x18007DEB0 (TpReleaseJobNotification.c)
 * Callees:
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

bool __fastcall sub_180031774(__int64 a1, __int64 a2)
{
  unsigned __int32 v2; // eax
  __int64 v3; // r8
  unsigned __int32 v4; // ett

  _m_prefetchw((const void *)(a1 + 168));
  v2 = *(_DWORD *)(a1 + 168);
  do
  {
    v3 = v2 | 0x10000;
    v4 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 168), v3, v2);
  }
  while ( v4 != v2 );
  if ( !(_DWORD)a2 || (v2 & 0x10000) == 0 )
    return (v2 & 0x30000) == 0;
  sub_18010EFC8(v2, a2, v3, 0x10000LL);
  return 0;
}
