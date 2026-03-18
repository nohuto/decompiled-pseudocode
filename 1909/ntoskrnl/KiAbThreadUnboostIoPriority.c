/*
 * XREFs of KiAbThreadUnboostIoPriority @ 0x14013C834
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x14003DD10 (PsBoostThreadIoEx.c)
 *     PsBoostThreadIoQoS @ 0x140101064 (PsBoostThreadIoQoS.c)
 */

void __fastcall KiAbThreadUnboostIoPriority(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)((a2 != 0 ? 4 : 0) + a1 + 1412));
  if ( a2 )
    PsBoostThreadIoQoS(a1, 1);
  else
    PsBoostThreadIoEx(a1, 1, 0, 0LL);
}
