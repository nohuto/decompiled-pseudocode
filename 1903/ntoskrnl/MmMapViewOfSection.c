/*
 * XREFs of MmMapViewOfSection @ 0x14067A6E0
 * Callers:
 *     PsDispatchIumService @ 0x1403086B4 (PsDispatchIumService.c)
 *     PspMapView @ 0x14030983C (PspMapView.c)
 *     NtGetNlsSectionPtr @ 0x14061E910 (NtGetNlsSectionPtr.c)
 *     AlpcpCreateView @ 0x14064B228 (AlpcpCreateView.c)
 *     MiMapProcessExecutable @ 0x1406796F4 (MiMapProcessExecutable.c)
 *     PspMapSiloSharedDataView @ 0x140679EF4 (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679F2C (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x14067A018 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x14067ACC0 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406D654C (EtwpCoverageEnsureUserModeView.c)
 *     MiMapImageForEnclaveUse @ 0x140894B78 (MiMapImageForEnclaveUse.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiMapParametersInitialize @ 0x140608C30 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x140608D80 (MiMapViewOfSection.c)
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
        ++dword_140466324;
      else
        ++dword_140466320;
    }
    else
    {
      *a7 = v15[3];
      return (unsigned int)result;
    }
  }
  return result;
}
