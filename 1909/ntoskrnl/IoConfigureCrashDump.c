/*
 * XREFs of IoConfigureCrashDump @ 0x1401938E0
 * Callers:
 *     PoBroadcastSystemState @ 0x140597FCC (PoBroadcastSystemState.c)
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 *     PoShutdownBugCheck @ 0x1408A8030 (PoShutdownBugCheck.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     IopRemoveDumpCapsuleSupport @ 0x1401939C4 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140193A50 (IopReadDumpRegistry.c)
 *     IopDisableCrashDump @ 0x140193B24 (IopDisableCrashDump.c)
 *     IopInitDumpCapsuleSupport @ 0x14019D4D8 (IopInitDumpCapsuleSupport.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlGetHostNtSystemRoot @ 0x140623C90 (RtlGetHostNtSystemRoot.c)
 *     IopInitializeCrashDump @ 0x140774CF4 (IopInitializeCrashDump.c)
 *     MmGetPageFileForCrashDump @ 0x14088CB50 (MmGetPageFileForCrashDump.c)
 */

__int64 __fastcall IoConfigureCrashDump(int a1, char a2)
{
  __int64 v4; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  int v6; // ebx
  void *PageFileForCrashDump; // rdi
  __int64 HostNtSystemRoot; // rax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-78h] BYREF
  UNICODE_STRING v11; // [rsp+30h] [rbp-68h]
  WCHAR SourceString[32]; // [rsp+40h] [rbp-58h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  wcscpy(SourceString, L"C:\\pagefile.sys");
  memset(&SourceString[16], 0, 0x20uLL);
  if ( !a2 )
    IopReadDumpRegistry(v4, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v6 = -1073741808;
      goto LABEL_7;
    }
    if ( ForceDumpDisabled )
    {
      v6 = -1073741637;
      goto LABEL_7;
    }
    PageFileForCrashDump = (void *)MmGetPageFileForCrashDump();
    if ( !PageFileForCrashDump )
    {
      v6 = -1073741772;
      goto LABEL_7;
    }
    ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
    v6 = IopDisableCrashDump();
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      HostNtSystemRoot = RtlGetHostNtSystemRoot();
      v11 = DestinationString;
      *DestinationString.Buffer = **(_WORD **)(HostNtSystemRoot + 8);
      if ( (unsigned __int8)IopInitializeCrashDump(PageFileForCrashDump) )
      {
        IopRemoveDumpCapsuleSupport();
        v6 = 0;
      }
      else
      {
        if ( CapsuleDumpAllowed )
          IopInitDumpCapsuleSupport();
        v6 = -1073741823;
      }
    }
  }
  else
  {
    if ( !ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u) )
    {
      v6 = -1073741823;
      goto LABEL_7;
    }
    v6 = IopDisableCrashDump();
    IopRemoveDumpCapsuleSupport();
  }
  ExReleaseResourceLite(&IopCrashDumpLock);
LABEL_7:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return (unsigned int)v6;
}
