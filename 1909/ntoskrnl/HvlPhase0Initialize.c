/*
 * XREFs of HvlPhase0Initialize @ 0x14078A70C
 * Callers:
 *     KiInitializeKernel @ 0x1405A1220 (KiInitializeKernel.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015DF0 (PsGetHostSilo.c)
 *     HvlQueryConnection @ 0x140147F60 (HvlQueryConnection.c)
 *     HviIsAnyHypervisorPresent @ 0x140180DE0 (HviIsAnyHypervisorPresent.c)
 *     HvlpTryConfigureInterface @ 0x14019CD08 (HvlpTryConfigureInterface.c)
 *     strstr @ 0x14019FD30 (strstr.c)
 *     HvlpInitializeBootProcessor @ 0x140285E64 (HvlpInitializeBootProcessor.c)
 *     HvlpSetupBootProcessorEarlyHypercallPages @ 0x140286A48 (HvlpSetupBootProcessorEarlyHypercallPages.c)
 *     HvlpDetermineEnlightenments @ 0x14028CCE8 (HvlpDetermineEnlightenments.c)
 *     HvlpPhase0Enlightenments @ 0x14028D198 (HvlpPhase0Enlightenments.c)
 *     HviGetHypervisorVersion @ 0x1403438B0 (HviGetHypervisorVersion.c)
 */

__int64 __fastcall HvlPhase0Initialize(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ebx

  HvlpFlags = (HviIsAnyHypervisorPresent() ? 0x1000 : 0) | HvlpFlags & 0xFFFFEFFF;
  if ( (int)HvlQueryConnection(0LL) >= 0 || (result = HvlpTryConfigureInterface(a1), (int)result >= 0) )
  {
    result = HvlpSetupBootProcessorEarlyHypercallPages(a1);
    if ( (int)result >= 0 )
    {
      HvlHypervisorConnected = 1;
      HvlpDetermineEnlightenments();
      result = PsGetHostSilo();
      if ( (int)result >= 0 )
      {
        if ( (HvlpFlags & 2) != 0 && strstr(*(const char **)(KeLoaderBlock_0 + 216), "HYPERVISORDBG") )
          HvlpRootFlags |= 8u;
        if ( (HvlpFlags & 2) != 0 && (*(_DWORD *)(*(_QWORD *)(KeLoaderBlock_0 + 240) + 3444LL) & 0x2000) != 0 )
          HvlpRootFlags |= 0x800u;
        result = HvlpPhase0Enlightenments(a1);
        if ( (int)result >= 0 )
        {
          result = HvlpInitializeBootProcessor(a1);
          v3 = result;
          if ( (int)result >= 0 )
          {
            HviGetHypervisorVersion(HvlpHypervisorVersion);
            return v3;
          }
        }
      }
    }
  }
  else if ( (_DWORD)result == -1070264320 )
  {
    return 0LL;
  }
  return result;
}
