/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14013A8A0
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14004EFD0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBED0 (PsBoostThreadIoEx.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 1412));
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1804));
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
