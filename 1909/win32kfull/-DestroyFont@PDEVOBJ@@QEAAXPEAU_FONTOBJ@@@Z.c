/*
 * XREFs of ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1C0096218
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0096348 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C0117AC0 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 *     ?MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z @ 0x1C029B850 (-MulDestroyFont@@YAXPEAU_FONTOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C009C5D4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     UnmapPrintKView @ 0x1C01011A8 (UnmapPrintKView.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::DestroyFont(PDEVOBJ *this, struct _FONTOBJ *a2)
{
  int v4; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = ghsemPublicPFT;
  GreAcquireSemaphore(ghsemPublicPFT);
  v4 = *(_DWORD *)(*(_QWORD *)&a2[2].iUniq + 68LL);
  SEMOBJ::vUnlock((SEMOBJ *)&v5);
  if ( v4 == 1 )
    UnmapPrintKView(*(_QWORD *)(*(_QWORD *)&a2[2].iUniq + 80LL));
  (*(void (__fastcall **)(struct _FONTOBJ *))(*(_QWORD *)this + 3032LL))(a2);
  v5 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v5);
}
