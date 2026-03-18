/*
 * XREFs of NtFreezeRegistry @ 0x1407E93B0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140193FF0 (__security_check_cookie.c)
 *     CmCleanupThreadInfo @ 0x1401B2F1C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B2F5C (CmpInitializeThreadInfo.c)
 *     CmpAttachToRegistryProcess @ 0x1405D4048 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x1407F5844 (CmFreezeRegistry.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  PVOID v4[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v5[48]; // [rsp+30h] [rbp-48h] BYREF

  CmpInitializeThreadInfo(v4);
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess((__int64)v5);
      v2 = CmFreezeRegistry(a1);
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
    else
    {
      v2 = -1073741727;
    }
  }
  else
  {
    v2 = -1073741811;
  }
  CmCleanupThreadInfo(v4);
  return v2;
}
