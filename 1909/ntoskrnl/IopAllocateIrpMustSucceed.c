/*
 * XREFs of IopAllocateIrpMustSucceed @ 0x140037420
 * Callers:
 *     IopCloseFile @ 0x1405D8DF0 (IopCloseFile.c)
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 *     IoCancelFileOpen @ 0x140855520 (IoCancelFileOpen.c)
 *     IopFreeBandwidthContract @ 0x14085C2D4 (IopFreeBandwidthContract.c)
 * Callees:
 *     IopAllocateIrpExReturn @ 0x140037580 (IopAllocateIrpExReturn.c)
 *     IopAllocateReserveIrp @ 0x140292EF0 (IopAllocateReserveIrp.c)
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
