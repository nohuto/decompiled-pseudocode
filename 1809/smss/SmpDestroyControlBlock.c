/*
 * XREFs of SmpDestroyControlBlock @ 0x1400048D8
 * Callers:
 *     SmpStopCsr @ 0x140001020 (SmpStopCsr.c)
 *     SmpFinalizeClientContext @ 0x140003CDC (SmpFinalizeClientContext.c)
 *     SmpHandleConnectionRequest @ 0x140003DC0 (SmpHandleConnectionRequest.c)
 *     SmpStartCsr @ 0x140004B30 (SmpStartCsr.c)
 * Callees:
 *     SmpTerminateCSR @ 0x14000105C (SmpTerminateCSR.c)
 *     SmpSessionIdToInitialSessionIndex @ 0x140002B78 (SmpSessionIdToInitialSessionIndex.c)
 *     SmpReleaseControlBlock @ 0x140004968 (SmpReleaseControlBlock.c)
 *     __security_check_cookie @ 0x14000D270 (__security_check_cookie.c)
 *     SmpTerminate @ 0x140016584 (SmpTerminate.c)
 */

__int64 __fastcall SmpDestroyControlBlock(HANDLE *BaseAddress, int a2)
{
  unsigned int v2; // esi
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  unsigned __int64 v7; // rdi
  int v9; // ecx
  unsigned __int64 v10; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 Parameters[4]; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  if ( (*(_BYTE *)BaseAddress & 2) == 0 )
  {
    _m_prefetchw(BaseAddress);
    v5 = *(_DWORD *)BaseAddress;
    do
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange((volatile signed __int32 *)BaseAddress, v5 | 2, v5);
    }
    while ( v6 != v5 );
    if ( (v5 & 2) == 0 )
    {
      v7 = *((unsigned int *)BaseAddress + 2);
      SmpReleaseControlBlock(BaseAddress);
      if ( a2 )
      {
        if ( (unsigned int)SmpSessionIdToInitialSessionIndex(v7) != -1
          && !*(_DWORD *)(SmpCoreProcessIds + 40LL * (unsigned int)SmpSessionIdToInitialSessionIndex(v9) + 4) )
        {
          v10 = (unsigned __int64)BaseAddress[2];
          RtlInitUnicodeString(&DestinationString, L"initial session process or");
          Parameters[0] = (unsigned __int64)&DestinationString;
          Parameters[1] = *(int *)(v10 + 4);
          Parameters[2] = v7;
          Parameters[3] = v10;
          SmpTerminate(Parameters, 1u, 4u);
          __debugbreak();
        }
        NtTerminateProcess(BaseAddress[6], -1073741823);
        v2 = SmpTerminateCSR((unsigned int)v7);
      }
    }
  }
  NtWaitForSingleObject(BaseAddress[6], 0, 0LL);
  return v2;
}
