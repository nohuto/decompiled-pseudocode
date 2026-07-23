/*
 * XREFs of LdrResolveDelayLoadedAPI @ 0x1800187C0
 * Callers:
 *     sub_180017368 @ 0x180017368 (sub_180017368.c)
 *     LdrQueryOptionalDelayLoadedAPI @ 0x1800CEF90 (LdrQueryOptionalDelayLoadedAPI.c)
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     sub_18001BB70 @ 0x18001BB70 (sub_18001BB70.c)
 *     sub_1800555A8 @ 0x1800555A8 (sub_1800555A8.c)
 *     sub_1800CE318 @ 0x1800CE318 (sub_1800CE318.c)
 *     sub_1800CF288 @ 0x1800CF288 (sub_1800CF288.c)
 */

PVOID __cdecl LdrResolveDelayLoadedAPI(
        PVOID ParentModuleBase,
        PCIMAGE_DELAYLOAD_DESCRIPTOR DelayloadDescriptor,
        PDELAYLOAD_FAILURE_DLL_CALLBACK FailureDllHook,
        PDELAYLOAD_FAILURE_SYSTEM_ROUTINE FailureSystemHook,
        PIMAGE_THUNK_DATA ThunkAddress,
        ULONG Flags)
{
  int v7; // r12d
  void *ForwarderString; // rbx
  int v10; // ecx
  PVOID v11; // rsi
  int v12; // eax
  char v13; // cl
  char v15; // al
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-38h] BYREF
  int v17; // [rsp+A0h] [rbp+18h]

  v17 = (int)FailureDllHook;
  v7 = (int)DelayloadDescriptor;
  ForwarderString = 0LL;
  if ( ((Flags & 0xFFFFDFFF) == 8 || (~((dword_180162714 & 4 | 0x7B) << 8) & Flags) == 0)
    && (DelayloadDescriptor->Attributes.AllAttributes & 1) != 0 )
  {
    v10 = sub_18001869C((unsigned __int64)ParentModuleBase, (__int64 *)BaseAddress, 0LL);
    if ( v10 < 0 )
    {
      v15 = dword_18015FAB0;
      if ( (dword_18015FAB0 & 3) != 0 )
      {
        sub_1800CE318(
          (unsigned int)"minkernel\\ntdll\\ldrdload.c",
          1247,
          (unsigned int)"LdrResolveDelayLoadedAPI",
          0,
          (__int64)"LdrResolveDelayLoadedAPI:Unable to locate DLL based at 0x%p.Status = 0x%x\n",
          ParentModuleBase,
          v10);
        v15 = dword_18015FAB0;
      }
      if ( (v15 & 0x10) != 0 )
        __debugbreak();
    }
    else
    {
      ForwarderString = (void *)ThunkAddress->u1.ForwarderString;
      v11 = BaseAddress[0];
      if ( ThunkAddress->u1.ForwarderString - (unsigned __int64)ParentModuleBase < *((unsigned int *)BaseAddress[0] + 16) )
      {
        if ( (*((_DWORD *)BaseAddress[0] + 26) & 0x8000) != 0 )
        {
          ForwarderString = (void *)sub_18001BB70(
                                      (int)BaseAddress[0],
                                      v7,
                                      v17,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
        }
        else
        {
          ForwarderString = (void *)sub_1800CF288(
                                      (int)BaseAddress[0],
                                      v7,
                                      v17,
                                      (__int64)FailureSystemHook,
                                      (__int64)ThunkAddress,
                                      Flags);
          if ( ForwarderString )
          {
            if ( (unsigned int)sub_18001AE58() )
            {
              v12 = sub_1800555A8((int)ParentModuleBase);
              if ( v12 < 0 )
              {
                v13 = dword_18015FAB0;
                if ( (dword_18015FAB0 & 3) != 0 )
                {
                  sub_1800CE318(
                    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
                    1226,
                    (unsigned int)"LdrResolveDelayLoadedAPI",
                    0,
                    (__int64)"LdrResolveDelayLoadedAPI:Unable to unsuppress the export suppressed functions that are impo"
                             "rted in the DLL based at 0x%p.Status = 0x%x\n",
                    ParentModuleBase,
                    v12);
                  v13 = dword_18015FAB0;
                }
                if ( (v13 & 0x10) != 0 )
                  __debugbreak();
              }
            }
          }
        }
      }
      sub_18001B678(v11);
    }
  }
  return ForwarderString;
}
