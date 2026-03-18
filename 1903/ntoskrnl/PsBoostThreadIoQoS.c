/*
 * XREFs of PsBoostThreadIoQoS @ 0x1400B57CC
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14003F0E0 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x1400B4EB0 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x1400B5640 (ExpBoostIoAfterAcquire.c)
 *     ExReinitializeResourceLite @ 0x1400B7920 (ExReinitializeResourceLite.c)
 *     KiAbThreadBoostIoPriority @ 0x14011261C (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013C214 (KiAbThreadUnboostIoPriority.c)
 *     ExpWorkerInitialization @ 0x140A19598 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x1400B5800 (KeAbProcessEffectiveIoPriorityChange.c)
 */

__int64 __fastcall PsBoostThreadIoQoS(__int64 a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 1820));
  }
  else
  {
    result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 1820));
    if ( (_DWORD)result == 1 )
      return KeAbProcessEffectiveIoPriorityChange();
  }
  return result;
}
