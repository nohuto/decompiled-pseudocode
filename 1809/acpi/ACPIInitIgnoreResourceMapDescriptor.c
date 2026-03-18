/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C005B8C4
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C009A0DC (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C009F444 (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00AF5C0 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00AF9C0 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     memset @ 0x1C00310C0 (memset.c)
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *PoolWithTag; // r14
  _QWORD *result; // rax

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
  memset(PoolWithTag, 0, 0x28uLL);
  PoolWithTag[4] = a3;
  PoolWithTag[2] = a1;
  PoolWithTag[3] = a2;
  result = (_QWORD *)qword_1C007FF58;
  if ( *(__int64 **)qword_1C007FF58 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *PoolWithTag = &AcpiIgnoreResourceMapValidationList;
  PoolWithTag[1] = result;
  *result = PoolWithTag;
  qword_1C007FF58 = (__int64)PoolWithTag;
  return result;
}
