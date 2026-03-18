/*
 * XREFs of PpCheckInDriverDatabase @ 0x140709DAC
 * Callers:
 *     PnpPrepareDriverLoading @ 0x140709CE8 (PnpPrepareDriverLoading.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     McTemplateK0j @ 0x14029EC4C (McTemplateK0j.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiLookupInDDB @ 0x140709E9C (PiLookupInDDB.c)
 *     PiLookupInDDBCache @ 0x14070D520 (PiLookupInDDBCache.c)
 *     IopBuildFullDriverPath @ 0x14070D600 (IopBuildFullDriverPath.c)
 *     PnpLogEvent @ 0x1408621D8 (PnpLogEvent.c)
 */

__int64 __fastcall PpCheckInDriverDatabase(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, int a5, __int64 a6)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v14; // r8
  __int64 v15; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF

  result = 0LL;
  v15 = 0LL;
  P = 0LL;
  if ( !InitIsWinPEMode )
  {
    v11 = IopBuildFullDriverPath(a1, a2, &v15);
    if ( v11 < 0 )
    {
      if ( (PiLoggedErrorEventsMask & 8) == 0 )
      {
        PiLoggedErrorEventsMask |= 8u;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        RtlInitUnicodeString(&DestinationString, L"BUILD DRIVER PATH FAILED");
        PnpLogEvent(&DestinationString, 0LL, 3221226349LL, 0LL, 0);
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiDDBLock, 1u);
      v11 = PiLookupInDDBCache(&v15, a3, v14, a6);
      if ( v11 == -1073741823 )
        v11 = PiLookupInDDB(&v15, a3, a4, a6);
      if ( v11 == -1073740948 && !a5 )
        v11 = -1073740949;
      ExReleaseResourceLite(&PiDDBLock);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      ExFreePoolWithTag(P, 0);
    }
    if ( (unsigned int)(v11 + 1073740949) <= 1 )
    {
      if ( (byte_14042BDBA & 2) != 0 )
        McTemplateK0j(v10, v9, v12, a6);
    }
    else
    {
      return 0;
    }
    return (unsigned int)v11;
  }
  return result;
}
