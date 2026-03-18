/*
 * XREFs of ?AlignSizeTo@UmfdUMBuffer@@CA_NKKPEAK@Z @ 0x1C00F02E0
 * Callers:
 *     ?CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z @ 0x1C007C078 (-CommitUMBuffer@UmfdTls@@QEAAPEAXK_N@Z.c)
 *     ?AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z @ 0x1C02D4BC4 (-AllocTemporaryBuffer@UmfdUMBuffer@@AEAA_NK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall UmfdUMBuffer::AlignSizeTo(unsigned int a1, __int64 a2, unsigned int *a3)
{
  unsigned int v3; // edx
  bool result; // al

  v3 = -1;
  if ( a1 + 4095 >= a1 )
    v3 = a1 + 4095;
  *a3 = v3;
  if ( a1 + 4095 < a1 )
    return 0;
  result = 1;
  *a3 = v3 & 0xFFFFF000;
  return result;
}
