/*
 * XREFs of vKillRFONTList @ 0x1C02702D4
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C008E90C (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C011FBB0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0096348 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C009674C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall vKillRFONTList(PFFOBJ *this, struct _FONTOBJ *a2)
{
  struct _FONTOBJ *sizLogResPpi; // rbx
  struct _FONTOBJ *v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF
  struct _FONTOBJ *v6; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    sizLogResPpi = a2;
    v4 = a2;
    do
    {
      sizLogResPpi = (struct _FONTOBJ *)sizLogResPpi[10].sizLogResPpi;
      v6 = v4;
      memset(v5, 0, 0x20uLL);
      PushThreadGuardedObject(v5, v4, vRestartKillEudcRFONTs);
      RFONTOBJ::vDeleteRFONT(&v6, 0LL, 0LL, 1);
      PopThreadGuardedObject(v5);
      PFFOBJ::vDeleteRFONTRef(this);
      v6 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v6);
      v4 = sizLogResPpi;
    }
    while ( sizLogResPpi );
  }
}
