/*
 * XREFs of ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027B054
 * Callers:
 *     ?vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z @ 0x1C003E928 (-vSpComputeUnlockedRegion@@YAXPEAU_SPRITESTATE@@@Z.c)
 *     ?SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z @ 0x1C027CEE0 (-SpSaveScreenBits@@YA_KPEAU_SURFOBJ@@K_KPEAU_RECTL@@@Z.c)
 *     ?vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C027F4F8 (-vRedo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 *     ?vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z @ 0x1C027F9C4 (-vSpCheckForWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@1@Z.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C0280164 (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     ?vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z @ 0x1C028040C (-vSpDeviceWndobjChange@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@@Z.c)
 *     ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0282248 (-vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ.c)
 * Callees:
 *     ?vOffset@EWNDOBJ@@QEAAXJJ@Z @ 0x1C0283DB8 (-vOffset@EWNDOBJ@@QEAAXJJ@Z.c)
 */

UNDODESKTOPCOORD *__fastcall UNDODESKTOPCOORD::UNDODESKTOPCOORD(
        UNDODESKTOPCOORD *this,
        struct EWNDOBJ *a2,
        struct _SPRITESTATE *a3)
{
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  LONG v9; // eax
  struct _POINTL v11; // [rsp+30h] [rbp+8h] BYREF
  __int64 v12; // [rsp+38h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  if ( a2 && (*((_DWORD *)a2 + 46) & 0x100) != 0 )
  {
    v5 = *(_QWORD *)a3;
    *(_QWORD *)this = a2;
    v6 = *(_DWORD *)(v5 + 2584);
    *((_DWORD *)this + 2) = v6;
    v7 = *(_DWORD *)(v5 + 2588);
    *((_DWORD *)this + 3) = v7;
    EWNDOBJ::vOffset(a2, -v6, -v7);
    v8 = *((_DWORD *)a2 + 46);
    if ( (v8 & 0x200) != 0 && *((_QWORD *)a2 + 24) )
    {
      v9 = -*((_DWORD *)this + 2);
      v12 = *((_QWORD *)a2 + 24);
      v11.x = v9;
      v11.y = -*((_DWORD *)this + 3);
      RGNOBJ::bOffset((RGNOBJ *)&v12, &v11);
      v8 = *((_DWORD *)a2 + 46);
    }
    *((_DWORD *)a2 + 46) = v8 & 0xFFFFFEFF;
  }
  return this;
}
