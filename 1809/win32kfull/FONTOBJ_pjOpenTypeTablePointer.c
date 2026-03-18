/*
 * XREFs of FONTOBJ_pjOpenTypeTablePointer @ 0x1C0277A50
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z @ 0x1C028BC2C (-pjTable@RFONTOBJ@@QEAAPEAEKPEAK@Z.c)
 */

PBYTE __stdcall FONTOBJ_pjOpenTypeTablePointer(FONTOBJ *pfo, ULONG ulTag, ULONG *pcjTable)
{
  BYTE *v3; // rbx
  FONTOBJ *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  v3 = 0LL;
  v5 = pfo;
  v6 = 0;
  if ( pfo )
    v3 = RFONTOBJ::pjTable((RFONTOBJ *)&v5, ulTag, pcjTable);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
