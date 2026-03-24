/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x140662EB0
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x140662F10 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x1406F9178 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x14070B408 (IopCreateArcName.c)
 *     RawQueryFileSystemInformation @ 0x14088FD40 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x1400BC380 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E0610 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7, a8);
  v11 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result, v9, v10);
    return v11;
  }
  return result;
}
