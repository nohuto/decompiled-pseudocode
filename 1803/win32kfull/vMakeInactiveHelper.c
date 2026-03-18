/*
 * XREFs of vMakeInactiveHelper @ 0x1C026891C
 * Callers:
 *     vUnlinkAllEudcRFONTsAndPFEsWorker @ 0x1C00FF654 (vUnlinkAllEudcRFONTsAndPFEsWorker.c)
 *     ?vUnlinkAllEudcFromRFONTList@@YAXHH@Z @ 0x1C0110264 (-vUnlinkAllEudcFromRFONTList@@YAXHH@Z.c)
 *     vUnlinkEudcRFONTsAndPFEsWorker @ 0x1C0268BC4 (vUnlinkEudcRFONTsAndPFEsWorker.c)
 *     vUnlinkEudcRFONTsWorker @ 0x1C0268D28 (vUnlinkEudcRFONTsWorker.c)
 * Callees:
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0086C60 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0088BE8 (--1RFONTOBJ@@QEAA@XZ.c)
 */

void __fastcall vMakeInactiveHelper(struct RFONT **a1)
{
  struct RFONT *v1; // rax
  struct RFONT *v3; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v4 = 0;
      v3 = v1;
      RFONTOBJ::bMakeInactiveHelper(&v3, 0LL);
      *a1 = 0LL;
      v3 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
    }
  }
}
