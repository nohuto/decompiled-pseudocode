/*
 * XREFs of VfFaultsSetParameters @ 0x140979DB8
 * Callers:
 *     NtSetSystemInformation @ 0x1406A6650 (NtSetSystemInformation.c)
 * Callees:
 *     PsSetCreateProcessNotifyRoutine @ 0x140758F60 (PsSetCreateProcessNotifyRoutine.c)
 *     ViFaultsAddAllApps @ 0x140979F90 (ViFaultsAddAllApps.c)
 *     ViFaultsAddAllTags @ 0x14097A044 (ViFaultsAddAllTags.c)
 *     ViFaultsRemoveAllApps @ 0x14097A7CC (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x14097A880 (ViFaultsRemoveAllTags.c)
 *     VfSetVerifierInformation @ 0x14098A408 (VfSetVerifierInformation.c)
 */

__int64 __fastcall VfFaultsSetParameters(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  int v5; // eax
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(a3) = 1;
  v9 = MmVerifierData | 4;
  v4 = VfSetVerifierInformation(&v9, 4LL, a3);
  if ( v4 >= 0 )
  {
    PsSetCreateProcessNotifyRoutine((PCREATE_PROCESS_NOTIFY_ROUTINE)ViCreateProcessCallback, 0);
    if ( *(_DWORD *)(a1 + 4) )
      VfFaultInjectionMaxProbability = *(_DWORD *)(a1 + 4);
    v5 = *(_DWORD *)a1;
    if ( !*(_DWORD *)a1 )
    {
      VfFaultInjectionMaxProbability = 10000;
      v5 = 600;
    }
    VfFaultInjectionProbability = v5;
    ViFaultsRemoveAllTags();
    ViFaultsRemoveAllApps();
    v6 = *(_WORD *)(a1 + 24);
    if ( v6 )
      v4 = ViFaultsAddAllApps(*(_QWORD *)(a1 + 32), v6 >> 1);
    if ( v4 >= 0 )
    {
      v7 = *(_WORD *)(a1 + 8);
      if ( v7 )
        return (unsigned int)ViFaultsAddAllTags(*(_QWORD *)(a1 + 16), v7 >> 1);
    }
  }
  return (unsigned int)v4;
}
