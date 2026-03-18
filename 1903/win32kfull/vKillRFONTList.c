/*
 * XREFs of vKillRFONTList @ 0x1C02709EC
 * Callers:
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z @ 0x1C0049F60 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@PEAPEAV2@K@Z.c)
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x1C007AFF8 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0052D74 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0074EF8 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C00752FC (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     memset @ 0x1C0166840 (memset.c)
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
