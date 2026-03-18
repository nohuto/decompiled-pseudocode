/*
 * XREFs of ?vRestartKillEudcRFONTs@@YAXPEAVRFONT@@@Z @ 0x1C0268970
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0088DC8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

void __fastcall vRestartKillEudcRFONTs(struct RFONT *a1)
{
  struct RFONT *v1; // rbx
  struct _FONTOBJ *v2; // rax
  struct _FONTOBJ *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  PVOID v5[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 )
  {
    v1 = a1;
    v2 = (struct _FONTOBJ *)a1;
    do
    {
      v1 = (struct RFONT *)*((_QWORD *)v1 + 82);
      v4 = 0;
      v3 = v2;
      v5[0] = v2[1].pvConsumer;
      RFONTOBJ::vDeleteRFONT(&v3, 0LL, (struct PFFOBJ *)v5, 0);
      v3 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
      v2 = (struct _FONTOBJ *)v1;
    }
    while ( v1 );
  }
}
