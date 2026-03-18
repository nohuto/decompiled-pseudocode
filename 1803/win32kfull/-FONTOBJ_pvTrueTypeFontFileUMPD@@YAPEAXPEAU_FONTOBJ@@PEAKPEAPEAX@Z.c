/*
 * XREFs of ?FONTOBJ_pvTrueTypeFontFileUMPD@@YAPEAXPEAU_FONTOBJ@@PEAKPEAPEAX@Z @ 0x1C0263CF0
 * Callers:
 *     NtGdiFONTOBJ_pvTrueTypeFontFile @ 0x1C0284E20 (NtGdiFONTOBJ_pvTrueTypeFontFile.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z @ 0x1C02783B0 (-pvFileUMPD@RFONTOBJ@@QEAAPEAXPEAKPEAPEAX@Z.c)
 */

void *__fastcall FONTOBJ_pvTrueTypeFontFileUMPD(struct _FONTOBJ *a1, unsigned int *a2, void **a3)
{
  void *v3; // rbx
  struct _FONTOBJ *v5; // [rsp+20h] [rbp-18h] BYREF
  int v6; // [rsp+28h] [rbp-10h]

  *a3 = 0LL;
  *a2 = 0;
  v6 = 0;
  v5 = a1;
  if ( a1 )
    v3 = RFONTOBJ::pvFileUMPD((RFONTOBJ *)&v5, a2, a3);
  else
    v3 = 0LL;
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
  return v3;
}
