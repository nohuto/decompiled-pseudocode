/*
 * XREFs of PipDmaGuardBlockAddDevice @ 0x14083A458
 * Callers:
 *     PipDmgEnforceEnumerationPolicy @ 0x14083A580 (PipDmgEnforceEnumerationPolicy.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PnpRequestDeviceRemoval @ 0x1406F04AC (PnpRequestDeviceRemoval.c)
 */

__int64 __fastcall PipDmaGuardBlockAddDevice(ULONG_PTR BugCheckParameter2)
{
  unsigned __int16 *v2; // rdi
  __int64 v3; // rax

  if ( PipDmaGuardPolicy == 1 )
  {
    if ( BugCheckParameter2 )
    {
      v2 = (unsigned __int16 *)(BugCheckParameter2 + 40);
      IoAddTriageDumpDataBlock(BugCheckParameter2, 784);
      if ( *v2 )
      {
        IoAddTriageDumpDataBlock((int)v2, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v2 + 1), *v2);
      }
      if ( *(_WORD *)(BugCheckParameter2 + 56) )
      {
        IoAddTriageDumpDataBlock(BugCheckParameter2 + 56, 2);
        IoAddTriageDumpDataBlock(*(_QWORD *)(BugCheckParameter2 + 64), *(unsigned __int16 *)(BugCheckParameter2 + 56));
      }
      v3 = *(_QWORD *)(BugCheckParameter2 + 16);
      if ( v3 )
      {
        if ( *(_WORD *)(v3 + 56) )
        {
          IoAddTriageDumpDataBlock(v3 + 56, 2);
          IoAddTriageDumpDataBlock(
            *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16) + 64LL),
            *(unsigned __int16 *)(*(_QWORD *)(BugCheckParameter2 + 16) + 56LL));
        }
      }
    }
    KeBugCheckEx(
      0xCAu,
      0x11uLL,
      BugCheckParameter2,
      *(_QWORD *)(BugCheckParameter2 + 720),
      *(unsigned int *)(BugCheckParameter2 + 704));
  }
  PnpRequestDeviceRemoval(BugCheckParameter2, 0, 55, -1073741790);
  return 3221226190LL;
}
