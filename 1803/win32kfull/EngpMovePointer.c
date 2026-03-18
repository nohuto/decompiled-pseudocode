/*
 * XREFs of EngpMovePointer @ 0x1C023BFEC
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00C546C (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C023BFD0 (EngMovePointer.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0020FEC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0088FF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0136E58 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C024A74C (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  struct _RECTL *v8; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RECTL *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  if ( g_pDwmState )
  {
    v9 = *((_QWORD *)a1->hdev + 7);
    GreAcquireSemaphore(v9);
    v10 = (struct _RECTL *)ghsemSprite;
    GreAcquireSemaphoreSharedStarveExclusiveInternal(ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(L"hsem", ghsemSprite);
    DwmMovePointer(a1, a2, a3, v8, a5);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v10);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
  }
  else
  {
    GdiMovePointer(a1, a2, a3, a4, 0);
  }
}
