/*
 * XREFs of NtThawRegistry @ 0x1407EABA0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B2F3C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F7C (CmpInitializeThreadInfo.c)
 *     CmpAttachToRegistryProcess @ 0x1405D4048 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     CmThawRegistry @ 0x1407F5A74 (CmThawRegistry.c)
 */

__int64 NtThawRegistry()
{
  unsigned int v0; // ebx
  PVOID v2[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v3[48]; // [rsp+30h] [rbp-48h] BYREF

  CmpInitializeThreadInfo(v2);
  if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
  {
    CmpAttachToRegistryProcess((__int64)v3);
    v0 = CmThawRegistry();
    KiUnstackDetachProcess((__int64)v3, 0LL);
  }
  else
  {
    v0 = -1073741727;
  }
  CmCleanupThreadInfo(v2);
  return v0;
}
