/*
 * XREFs of ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C02572E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct RFONT *v1; // rbx
  struct RFONT *v2; // rax
  struct _FONTOBJ *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = a1;
    do
    {
      v1 = (struct RFONT *)*((_QWORD *)v1 + 84);
      v4 = 0;
      v3 = (struct _FONTOBJ *)v2;
      v5[0] = *((_QWORD *)v2 + 16);
      RFONTOBJ::vDeleteRFONT(&v3, 0LL, (struct PFFOBJ *)v5, 0);
      v3 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
      v2 = v1;
    }
    while ( v1 );
  }
}
