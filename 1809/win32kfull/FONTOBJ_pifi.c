/*
 * XREFs of FONTOBJ_pifi @ 0x1C00874E0
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C00879A0 (NtGdiFONTOBJ_pifi.c)
 *     UmfdDispatchEscape @ 0x1C008C040 (UmfdDispatchEscape.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  IFIMETRICS *pvProducer; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  pvProducer = (IFIMETRICS *)pfo[1].pvProducer;
  if ( pvProducer )
    pvProducer = *(IFIMETRICS **)&pvProducer->lItalicAngle;
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
  return pvProducer;
}
