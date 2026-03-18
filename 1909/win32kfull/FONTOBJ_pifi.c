/*
 * XREFs of FONTOBJ_pifi @ 0x1C009A7A0
 * Callers:
 *     NtGdiFONTOBJ_pifi @ 0x1C009A5A0 (NtGdiFONTOBJ_pifi.c)
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  PVOID pvProducer; // rax
  IFIMETRICS *v2; // rbx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  pvProducer = pfo[1].pvProducer;
  if ( pvProducer )
    v2 = (IFIMETRICS *)*((_QWORD *)pvProducer + 4);
  else
    v2 = 0LL;
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
  return v2;
}
