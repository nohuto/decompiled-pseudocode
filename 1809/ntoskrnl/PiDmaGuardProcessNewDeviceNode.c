/*
 * XREFs of PiDmaGuardProcessNewDeviceNode @ 0x1406F9C80
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1406E51B4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PiIommuGetInterface @ 0x1406F9D10 (PiIommuGetInterface.c)
 *     PipDmgDestroyIommuExtension @ 0x1406FA544 (PipDmgDestroyIommuExtension.c)
 *     PiIommuAllocateExtension @ 0x140751728 (PiIommuAllocateExtension.c)
 */

__int64 __fastcall PiDmaGuardProcessNewDeviceNode(ULONG_PTR BugCheckParameter2)
{
  unsigned int Extension; // ebx
  __int64 v4; // rax
  _BYTE v5[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v6; // [rsp+38h] [rbp-50h]
  void (__fastcall *v7)(__int64); // [rsp+48h] [rbp-40h]

  PipDmgDestroyIommuExtension(BugCheckParameter2);
  if ( (int)PiIommuGetInterface(*(_QWORD *)(BugCheckParameter2 + 32)) >= 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 720) )
    {
      IoAddTriageDumpDataBlock(BugCheckParameter2, 784);
      if ( *(_WORD *)(BugCheckParameter2 + 40) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 40, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 48), *(unsigned __int16 *)(BugCheckParameter2 + 40));
      }
      if ( *(_WORD *)(BugCheckParameter2 + 56) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 56, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 64), *(unsigned __int16 *)(BugCheckParameter2 + 56));
      }
      v4 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v4 && *(_WORD *)(v4 + 56) )
      {
        IoAddTriageDumpDataBlock(v4 + 56, 2);
        IoAddTriageDumpDataBlock(
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 64LL),
          *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 56LL));
      }
      KeBugCheckEx(
        0xCAu,
        0x11uLL,
        BugCheckParameter2,
        *(_QWORD *)(BugCheckParameter2 + 720),
        *(unsigned int *)(BugCheckParameter2 + 704));
    }
    Extension = PiIommuAllocateExtension(BugCheckParameter2, v5, BugCheckParameter2 + 720);
    if ( v7 )
      v7(v6);
  }
  else
  {
    return 0;
  }
  return Extension;
}
