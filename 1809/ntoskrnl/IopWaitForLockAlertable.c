/*
 * XREFs of IopWaitForLockAlertable @ 0x14000EBDC
 * Callers:
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1405A4480 (IopAcquireFileObjectLock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     PsIsThreadTerminating @ 0x1400891C0 (PsIsThreadTerminating.c)
 */

NTSTATUS __fastcall IopWaitForLockAlertable(PVOID Object, char a2, char a3)
{
  KPROCESSOR_MODE v6; // di
  BOOLEAN v7; // r9
  NTSTATUS result; // eax
  BOOLEAN IsThreadTerminating; // al

  v6 = a3 != 0 ? a2 : 0;
  while ( 1 )
  {
    v7 = a3 || a2 == 1;
    result = KeWaitForSingleObject(Object, Executive, v6, v7, 0LL);
    if ( result != 257 )
      break;
    IsThreadTerminating = PsIsThreadTerminating(KeGetCurrentThread());
    if ( a3 )
      return IsThreadTerminating != 0 ? -1073741749 : -1073741536;
    if ( IsThreadTerminating )
      return -1073741749;
  }
  return result;
}
