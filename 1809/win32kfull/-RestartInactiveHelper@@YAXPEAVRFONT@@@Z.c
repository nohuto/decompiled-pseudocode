/*
 * XREFs of ?RestartInactiveHelper@@YAXPEAVRFONT@@@Z @ 0x1C028B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall RestartInactiveHelper(struct RFONT *a1)
{
  __int64 v1; // rax
  struct _FONTOBJ *v2; // [rsp+20h] [rbp-28h] BYREF
  int v3; // [rsp+28h] [rbp-20h]
  _QWORD v4[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v3 = 0;
  v2 = (struct _FONTOBJ *)a1;
  v4[0] = v1;
  RFONTOBJ::vDeleteRFONT(&v2, 0LL, (struct PFFOBJ *)v4, 0);
  v2 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v2);
}
