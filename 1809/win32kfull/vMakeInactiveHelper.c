/*
 * XREFs of vMakeInactiveHelper @ 0x1C027C874
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C011EB20 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0135950 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C027CAC8 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C027CC38 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0081840 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall vMakeInactiveHelper(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v4 = 0;
      v3 = v1;
      RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v3, 0LL);
      *a1 = 0LL;
      v3 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
    }
  }
}
