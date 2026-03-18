/*
 * XREFs of PopFxIsDevicePotentialDripsConstraint @ 0x1402F3758
 * Callers:
 *     NtPowerInformation @ 0x14067C840 (NtPowerInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14000D6B0 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IoGetDevicePropertyData @ 0x140623060 (IoGetDevicePropertyData.c)
 */

bool __fastcall PopFxIsDevicePotentialDripsConstraint(PVOID Object)
{
  bool v1; // di
  __int64 v3; // rbx
  KIRQL v4; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  ULONG RequiredSize; // [rsp+40h] [rbp-48h] BYREF
  ULONG Type; // [rsp+44h] [rbp-44h] BYREF
  wchar_t Str1[4]; // [rsp+48h] [rbp-40h] BYREF

  *(_QWORD *)Str1 = 0LL;
  v1 = 0;
  ObfReferenceObjectWithTag(Object, 0x78466F50u);
  if ( Object )
    v3 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 88));
    if ( (*(_DWORD *)(v3 + 296) & 4) != 0 )
      v1 = (_InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v3 + 80) + 816LL), 0, 0) & 0x10) != 0;
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 88));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v4 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v4);
    if ( !v1
      && IoGetDevicePropertyData(
           *(PDEVICE_OBJECT *)(v3 + 32),
           &DEVPKEY_Device_EnumeratorName,
           0,
           0,
           8u,
           Str1,
           &RequiredSize,
           &Type) >= 0
      && Type == 18
      && RequiredSize > 2
      && !Str1[((unsigned __int64)RequiredSize >> 1) - 1] )
    {
      v1 = wcsicmp(Str1, L"USB") == 0;
    }
  }
  ObfDereferenceObjectWithTag(Object, 0x78466F50u);
  return v1;
}
