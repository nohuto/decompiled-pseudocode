/*
 * XREFs of vInitXLATE @ 0x1C01F4060
 * Callers:
 *     InitializeGre @ 0x1C01F40E8 (InitializeGre.c)
 * Callees:
 *     memset @ 0x1C0079EC0 (memset.c)
 */

__int64 vInitXLATE()
{
  _DWORD *v0; // rcx
  __int64 result; // rax

  memset(&xlateTable, 0, 0x100uLL);
  memset(&xloIdent, 0, 0x458uLL);
  xloIdent.cEntries = 256;
  xloIdent.iUniq = 1;
  v0 = &unk_1C01A1208;
  xloIdent.flXlate = 1;
  xloIdent.pulXlate = (ULONG *)&unk_1C01A1204;
  LODWORD(result) = 0;
  dword_1C01A11F8 = 0;
  dword_1C01A11D4 = -2;
  do
  {
    result = (unsigned int)(result + 1);
    *v0++ = result;
  }
  while ( (unsigned int)result < 0xFF );
  return result;
}
