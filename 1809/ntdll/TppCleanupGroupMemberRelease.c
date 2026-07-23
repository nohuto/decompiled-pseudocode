/*
 * XREFs of TppCleanupGroupMemberRelease @ 0x18002F03C
 * Callers:
 *     TpReleaseTimer @ 0x18002C440 (TpReleaseTimer.c)
 *     TpReleaseWork @ 0x18002C520 (TpReleaseWork.c)
 *     TppWorkCallbackPrologRelease @ 0x18002ED5C (TppWorkCallbackPrologRelease.c)
 *     TpReleaseWait @ 0x18002F6C0 (TpReleaseWait.c)
 *     TpReleaseIoCompletion @ 0x1800312A0 (TpReleaseIoCompletion.c)
 *     TpReleaseAlpcCompletion @ 0x180032810 (TpReleaseAlpcCompletion.c)
 *     TpReleaseJobNotification @ 0x180032900 (TpReleaseJobNotification.c)
 * Callees:
 *     TppRaiseInvalidParameter @ 0x180110908 (TppRaiseInvalidParameter.c)
 */

bool __fastcall TppCleanupGroupMemberRelease(__int64 a1, __int64 a2)
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
  TppRaiseInvalidParameter(v2, a2, v3);
  return 0;
}
