/*
 * XREFs of vInitXLATE @ 0x1C021A824
 * Callers:
 *     InitializeGre @ 0x1C021A080 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C00AF780 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  xloIdent.cEntries = 256;
  xloIdent.iUniq = 1;
  v0 = &unk_1C01CD018;
  xloIdent.flXlate = 1;
  xloIdent.pulXlate = (ULONG *)&unk_1C01CD014;
  LODWORD(result) = 0;
  dword_1C01CD008 = 0;
  dword_1C01CCFE4 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
