/*
 * XREFs of NtFreezeRegistry @ 0x140824010
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     CmFreezeRegistry @ 0x14082E618 (CmFreezeRegistry.c)
 */

__int64 __fastcall NtFreezeRegistry(unsigned int a1)
{
  unsigned int v2; // ebx
  _BYTE v4[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( a1 <= 0x384 )
  {
    if ( SeSinglePrivilegeCheck(SeBackupPrivilege, KeGetCurrentThread()->PreviousMode) )
    {
      CmpAttachToRegistryProcess((__int64)v4);
      v2 = CmFreezeRegistry(a1);
      KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
    }
    else
    {
      return (unsigned int)-1073741727;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v2;
}
