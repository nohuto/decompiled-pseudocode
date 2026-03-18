/*
 * XREFs of MmMapViewOfSection @ 0x140680790
 * Callers:
 *     PsDispatchIumService @ 0x140308164 (PsDispatchIumService.c)
 *     PspMapView @ 0x1403092EC (PspMapView.c)
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x14065EEC8 (AlpcpCreateView.c)
 *     MiMapProcessExecutable @ 0x14067F7A8 (MiMapProcessExecutable.c)
 *     PspMapSiloSharedDataView @ 0x14067FFA8 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x14067FFE0 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406800CC (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x1406D3450 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406D5F9C (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x140894398 (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapParametersInitialize @ 0x14060A740 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 */

__int64 __fastcall MmMapViewOfSection(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        void *a5,
        _WORD *a6,
        __int64 *a7,
        int a8,
        int a9,
        int a10)
{
  __int64 result; // rax
  _QWORD v15[16]; // [rsp+40h] [rbp-88h] BYREF

  memset(v15, 0, sizeof(v15));
  result = MiMapParametersInitialize(v15, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v15, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_140466024;
      else
        ++dword_140466020;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
