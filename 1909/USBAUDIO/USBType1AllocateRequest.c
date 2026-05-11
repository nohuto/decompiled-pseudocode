/*
 * XREFs of USBType1AllocateRequest @ 0x1C002F340
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall USBType1AllocateRequest(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  char v3; // di
  _QWORD *PoolWithTag; // rbx
  PIRP Irp; // rax

  v3 = NumberOfBytes;
  PoolWithTag = ExAllocatePoolWithTag(PoolType, 0x250uLL, 0x41627845u);
  if ( PoolWithTag )
  {
    Irp = IoAllocateIrp(v3 - 8, 0);
    PoolWithTag[2] = Irp;
    if ( Irp )
    {
      PoolWithTag[3] = PoolWithTag + 7;
    }
    else
    {
      ExFreePool(PoolWithTag);
      return 0LL;
    }
  }
  return PoolWithTag;
}
