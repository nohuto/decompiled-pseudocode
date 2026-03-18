/*
 * XREFs of ACPIInitIgnoreResourceMapDescriptor @ 0x1C005D684
 * Callers:
 *     PnpiBiosAddressDoubleToIoDescriptor @ 0x1C00964A4 (PnpiBiosAddressDoubleToIoDescriptor.c)
 *     PnpiBiosAddressToIoDescriptor @ 0x1C00A172C (PnpiBiosAddressToIoDescriptor.c)
 *     PnpiBiosAddressExtendedToIoDescriptor @ 0x1C00B2E88 (PnpiBiosAddressExtendedToIoDescriptor.c)
 *     PnpiBiosAddressQuadToIoDescriptor @ 0x1C00B32E0 (PnpiBiosAddressQuadToIoDescriptor.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ACPIInitIgnoreResourceMapDescriptor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *result; // rax
  _QWORD *v7; // rcx

  result = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x52706341u);
  *result = 0LL;
  result[1] = 0LL;
  result[4] = a3;
  result[2] = a1;
  result[3] = a2;
  v7 = (_QWORD *)qword_1C0081F58;
  if ( *(__int64 **)qword_1C0081F58 != &AcpiIgnoreResourceMapValidationList )
    __fastfail(3u);
  *result = &AcpiIgnoreResourceMapValidationList;
  result[1] = v7;
  *v7 = result;
  qword_1C0081F58 = (__int64)result;
  return result;
}
