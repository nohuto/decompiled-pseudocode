/*
 * XREFs of MmMapViewOfSection @ 0x140679D20
 * Callers:
 *     PsDispatchIumService @ 0x1402EAD84 (PsDispatchIumService.c)
 *     PspMapView @ 0x1402EBEAC (PspMapView.c)
 *     AlpcpCreateView @ 0x140618D0C (AlpcpCreateView.c)
 *     MiMapProcessExecutable @ 0x140678E08 (MiMapProcessExecutable.c)
 *     PspMapSiloSharedDataView @ 0x1406795CC (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140679604 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x1406796F0 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x14067B5C0 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406B52AC (EtwpCoverageEnsureUserModeView.c)
 *     NtGetNlsSectionPtr @ 0x1406C6080 (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
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
  _BYTE v13[24]; // [rsp+40h] [rbp-88h] BYREF
  __int64 v14; // [rsp+58h] [rbp-70h]

  result = MiMapParametersInitialize(v13, a1, a2, *a3, *a7, a9, a10, a4);
  if ( (int)result >= 0 )
  {
    result = MiMapViewOfSection(a1, (__int64)v13, (void **)a3, a5, a6, a8, 1);
    if ( (int)result < 0 )
    {
      if ( *a3 )
        ++dword_14043B944;
      else
        ++dword_14043B940;
    }
    else
    {
      *a7 = v14;
      return (unsigned int)result;
    }
  }
  return result;
}
