/*
 * XREFs of NtThawRegistry @ 0x140824DF0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x14082E6E4 (CmThawRegistry.c)
 */

NTSTATUS NtThawRegistry(void)
{
  NTSTATUS v0; // ebx
  _BYTE v2[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v2, 0, sizeof(v2));
  if ( !SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    return -1073741727;
  CmpAttachToRegistryProcess((__int64)v2);
  v0 = CmThawRegistry();
  KiUnstackDetachProcess((struct _KTHREAD *)v2, 0);
  return v0;
}
