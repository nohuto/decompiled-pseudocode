/*
 * XREFs of ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x1C0255C44
 * Callers:
 *     ?SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z @ 0x1C0257148 (-SendDeviceIOControl@SimpleHapticsController@@QEAAJKPEAXK0KPEAK@Z.c)
 * Callees:
 *     <none>
 */

LeaveEnterUserCritIfAcquired *__fastcall LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired(
        LeaveEnterUserCritIfAcquired *this)
{
  bool v2; // al
  __int64 v3; // rcx
  ULONG IsResourceAcquiredSharedLite; // eax

  v2 = ExIsResourceAcquiredExclusiveLite(gpresUser) != 0;
  *(_BYTE *)this = v2;
  if ( v2 || (IsResourceAcquiredSharedLite = ExIsResourceAcquiredSharedLite(gpresUser)) != 0 )
    LOBYTE(IsResourceAcquiredSharedLite) = 1;
  *((_BYTE *)this + 1) = IsResourceAcquiredSharedLite;
  if ( (_BYTE)IsResourceAcquiredSharedLite )
    UserSessionSwitchLeaveCrit(v3);
  return this;
}
