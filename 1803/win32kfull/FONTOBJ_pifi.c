/*
 * XREFs of FONTOBJ_pifi @ 0x1C0120590
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 *     NtGdiFONTOBJ_pifi @ 0x1C011E850 (NtGdiFONTOBJ_pifi.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

IFIMETRICS *__stdcall FONTOBJ_pifi(FONTOBJ *pfo)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  v4 = 0;
  v1 = *(_QWORD *)&pfo[1].ulStyleSize;
  if ( v1 )
    v1 = *(_QWORD *)(v1 + 32);
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
  return (IFIMETRICS *)v1;
}
