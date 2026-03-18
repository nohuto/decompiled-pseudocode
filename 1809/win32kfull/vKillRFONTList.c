/*
 * XREFs of vKillRFONTList @ 0x1C025721C
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C00CB410 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C00CB9F8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00869C0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *sizLogResPpi; // rbx
  struct _FONTOBJ *v4; // rdi
  struct _FONTOBJ *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( a2 )
  {
    sizLogResPpi = a2;
    v4 = a2;
    do
    {
      sizLogResPpi = (struct _FONTOBJ *)sizLogResPpi[10].sizLogResPpi;
      v6 = 0;
      v5 = v4;
      memset(v7, 0, 0x20uLL);
      PushThreadGuardedObject(v7, v4, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v5, 0LL, 0LL, 1);
      PopThreadGuardedObject(v7);
      PFFOBJ::vDeleteRFONTRef(this);
      v5 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
      v4 = sizLogResPpi;
    }
    while ( sizLogResPpi );
  }
}
