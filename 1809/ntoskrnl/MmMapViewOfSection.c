/*
 * XREFs of MmMapViewOfSection @ 0x140678B60
 * Callers:
 *     PsDispatchIumService @ 0x1402EAB94 (PsDispatchIumService.c)
 *     PspMapView @ 0x1402EBCBC (PspMapView.c)
 *     AlpcpCreateView @ 0x140617D0C (AlpcpCreateView.c)
 *     MiMapProcessExecutable @ 0x140677C48 (MiMapProcessExecutable.c)
 *     PspMapSiloSharedDataView @ 0x14067840C (PspMapSiloSharedDataView.c)
 *     MmMapApiSetView @ 0x140678444 (MmMapApiSetView.c)
 *     MmCreatePeb @ 0x140678530 (MmCreatePeb.c)
 *     NtInitializeNlsFiles @ 0x14067A400 (NtInitializeNlsFiles.c)
 *     EtwpCoverageEnsureUserModeView @ 0x1406B400C (EtwpCoverageEnsureUserModeView.c)
 *     NtGetNlsSectionPtr @ 0x1406C4DE0 (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 * Callees:
 *     MiMapViewOfSection @ 0x1405EFB10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F0080 (MiMapParametersInitialize.c)
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
        ++dword_14043A884;
      else
        ++dword_14043A880;
    }
    else
    {
      *a7 = v14;
      return (unsigned int)result;
    }
  }
  return result;
}
