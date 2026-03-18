/*
 * XREFs of vInitXLATE @ 0x1C026913C
 * Callers:
 *     InitializeGre @ 0x1C0266080 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00C1440 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  xloIdent.cEntries = 256;
  xloIdent.iUniq = 1;
  v0 = &unk_1C0214AF8;
  xloIdent.flXlate = 1;
  xloIdent.pulXlate = (ULONG *)&unk_1C0214AF4;
  LODWORD(result) = 0;
  dword_1C0214AE8 = 0;
  dword_1C0214AC4 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
