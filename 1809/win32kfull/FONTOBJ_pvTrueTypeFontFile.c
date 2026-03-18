/*
 * XREFs of FONTOBJ_pvTrueTypeFontFile @ 0x1C0277AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z @ 0x1C028BCDC (-pvFile@RFONTOBJ@@QEAAPEAXPEAK@Z.c)
 */

PVOID __stdcall FONTOBJ_pvTrueTypeFontFile(FONTOBJ *pfo, ULONG *pcjFile)
{
  void *v2; // rbx
  FONTOBJ *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  v2 = 0LL;
  v4 = pfo;
  *pcjFile = 0;
  v5 = 0;
  if ( pfo )
    v2 = RFONTOBJ::pvFile((RFONTOBJ *)&v4, pcjFile);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
