/*
 * XREFs of PsBoostThreadIoQoS @ 0x140101064
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExReinitializeResourceLite @ 0x140100860 (ExReinitializeResourceLite.c)
 *     ExpSetResourceOwnerPointerEx @ 0x140100A20 (ExpSetResourceOwnerPointerEx.c)
 *     ExpBoostIoAfterAcquire @ 0x140100ED8 (ExpBoostIoAfterAcquire.c)
 *     KiAbThreadBoostIoPriority @ 0x140130568 (KiAbThreadBoostIoPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x14013C834 (KiAbThreadUnboostIoPriority.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     KeAbProcessEffectiveIoPriorityChange @ 0x140101098 (KeAbProcessEffectiveIoPriorityChange.c)
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
