/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x1400B92A0
 * Callers:
 *     IopCloseFile @ 0x140639B10 (IopCloseFile.c)
 *     IopDeleteFile @ 0x14063B3C0 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x14081BDC0 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x1408228FC (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x1400B92E0 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x14027E700 (IopAllocateReserveIrp.c)
 */

__int64 __fastcall IopAllocateIrpMustSucceed(__int64 a1, __int64 a2)
{
  unsigned __int8 v2; // bl
  __int64 result; // rax
  __int64 v5; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a2;
  for ( result = IopAllocateIrpExReturn(a1, a2, 0LL, retaddr);
        !result;
        result = IopAllocateIrpExReturn(a1, v2, 0LL, retaddr) )
  {
    result = IopAllocateReserveIrp(v5, v2, 3LL);
    if ( result )
      break;
  }
  *(_BYTE *)(result + 71) |= 0x20u;
  return result;
}
