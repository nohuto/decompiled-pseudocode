/*
 * XREFs of ?pSpFindInZ@@YAPEAVSPRITE@@PEAV1@PEAU_RECTL@@@Z @ 0x1C00E59EC
 * Callers:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C008D520 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C008DBA0 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpRedrawSprite@@YAXPEAVSPRITE@@@Z @ 0x1C0254700 (-vSpRedrawSprite@@YAXPEAVSPRITE@@@Z.c)
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0254AB4 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0254F44 (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 * Callees:
 *     ?bIsCursorSprite@@YAHPEAVSPRITE@@@Z @ 0x1C0138E8C (-bIsCursorSprite@@YAHPEAVSPRITE@@@Z.c)
 *     ?vUnlock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0138EB8 (-vUnlock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

struct SPRITE *__fastcall pSpFindInZ(struct SPRITE *a1, struct _RECTL *a2)
{
  LONG left; // esi
  struct SPRITE *v3; // rbx
  LONG top; // ebp
  LONG right; // r14d
  LONG i; // r15d
  int IsCursorSprite; // edi
  void *v8; // rcx
  struct _KTHREAD *CurrentThread; // rax

  left = a2->left;
  v3 = a1;
  top = a2->top;
  right = a2->right;
  for ( i = a2->bottom; v3; v3 = (struct SPRITE *)*((_QWORD *)v3 + 3) )
  {
    IsCursorSprite = bIsCursorSprite(v3);
    if ( IsCursorSprite == 1 )
    {
      v8 = (void *)*((_QWORD *)v3 + 31);
      if ( v8 )
      {
        KeWaitForSingleObject(v8, UserRequest, 0, 0, 0LL);
        CurrentThread = KeGetCurrentThread();
        ++*((_DWORD *)v3 + 66);
        *((_QWORD *)v3 + 32) = CurrentThread;
      }
    }
    if ( (*(_DWORD *)v3 & 0x400) == 0
      && *((_DWORD *)v3 + 20) <= right
      && *((_DWORD *)v3 + 21) <= i
      && *((_DWORD *)v3 + 22) >= left
      && *((_DWORD *)v3 + 23) >= top )
    {
      break;
    }
    if ( IsCursorSprite == 1 )
      SINGLEREADERLOCK::vUnlock((struct SPRITE *)((char *)v3 + 248));
  }
  return v3;
}
