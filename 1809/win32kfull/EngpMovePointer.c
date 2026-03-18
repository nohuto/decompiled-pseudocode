/*
 * XREFs of EngpMovePointer @ 0x1C025315C
 * Callers:
 *     ?vMovePointer@@YAXPEAUHDEV__@@HHJ@Z @ 0x1C00A1BB8 (-vMovePointer@@YAXPEAUHDEV__@@HHJ@Z.c)
 *     EngMovePointer @ 0x1C0253140 (EngMovePointer.c)
 * Callees:
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C000A6F4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0045A3C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C004899C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z @ 0x1C02622D8 (-GdiMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@H@Z.c)
 */

void __fastcall EngpMovePointer(struct _SURFOBJ *a1, int a2, int a3, struct _RECTL *a4, char a5)
{
  struct _RECTL *v8; // r9
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF
  struct _RECTL *v10; // [rsp+68h] [rbp+20h] BYREF

  v10 = a4;
  if ( g_pDwmState )
  {
    v9 = *((_QWORD *)a1->hdev + 8);
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
