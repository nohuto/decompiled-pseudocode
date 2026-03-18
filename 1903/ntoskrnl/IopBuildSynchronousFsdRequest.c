/*
 * XREFs of IopBuildSynchronousFsdRequest @ 0x1406D0C80
 * Callers:
 *     IoBuildSynchronousFsdRequest @ 0x1406D0C40 (IoBuildSynchronousFsdRequest.c)
 *     PnpQueryInterface @ 0x1407146F0 (PnpQueryInterface.c)
 *     IopCreateArcName @ 0x1407369D8 (IopCreateArcName.c)
 *     RawQueryFileSystemInformation @ 0x1408CE154 (RawQueryFileSystemInformation.c)
 * Callees:
 *     IopQueueThreadIrp @ 0x14003BA80 (IopQueueThreadIrp.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140127260 (IopBuildAsynchronousFsdRequest.c)
 */

__int64 __fastcall IopBuildSynchronousFsdRequest(
        unsigned int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _QWORD *a5,
        __int64 a6,
        __int64 a7)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rbx

  result = IopBuildAsynchronousFsdRequest(a1, a2, a3, a4, a5, a7);
  v9 = result;
  if ( result )
  {
    *(_QWORD *)(result + 80) = a6;
    IopQueueThreadIrp(result, v8);
    return v9;
  }
  return result;
}
