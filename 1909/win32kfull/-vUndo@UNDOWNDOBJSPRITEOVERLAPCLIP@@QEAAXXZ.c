/*
 * XREFs of ?vUndo@UNDOWNDOBJSPRITEOVERLAPCLIP@@QEAAXXZ @ 0x1C0281B88
 * Callers:
 *     ?vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C0280A10 (-vSpRedrawUncoveredArea@@YAXPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00B8724 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z @ 0x1C027A994 (--0UNDODESKTOPCOORD@@QEAA@PEAVEWNDOBJ@@PEAU_SPRITESTATE@@@Z.c)
 *     ??1UNDODESKTOPCOORD@@QEAA@XZ @ 0x1C027AAAC (--1UNDODESKTOPCOORD@@QEAA@XZ.c)
 *     ?vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z @ 0x1C02837A4 (-vUpdateClientRgnOnSpriteOverlap@@YAXPEAVEWNDOBJ@@AEAVRGNOBJ@@@Z.c)
 */

void __fastcall UNDOWNDOBJSPRITEOVERLAPCLIP::vUndo(UNDOWNDOBJSPRITEOVERLAPCLIP *this)
{
  __int64 v2; // rbp
  TRACKOBJ *i; // rdi
  __int64 j; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  unsigned int v7; // esi
  _BYTE v8[56]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)this + 16LL);
  v11 = ghsemWndobj;
  GreAcquireSemaphore(ghsemWndobj);
  for ( i = gpto; i; i = (TRACKOBJ *)*((_QWORD *)i + 1) )
  {
    for ( j = *((_QWORD *)i + 3); j; j = *(_QWORD *)(j + 160) )
    {
      UNDODESKTOPCOORD::UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v8, (struct EWNDOBJ *)j, (struct _SPRITESTATE *)v2);
      if ( (*(_DWORD *)(j + 184) & 0x200) != 0 )
      {
        v5 = *(_QWORD *)(j + 192);
        v6 = *(_QWORD *)(v2 + 704);
        v9 = v6;
        v10 = v5;
        if ( v5 )
        {
          if ( v6 )
          {
            v7 = 0;
            if ( *((_DWORD *)this + 2) )
            {
              while ( RGNOBJ::bInside((RGNOBJ *)&v10, (struct _RECTL *)(*((_QWORD *)this + 2) + 16LL * v7)) != 2 )
              {
                if ( ++v7 >= *((_DWORD *)this + 2) )
                  goto LABEL_11;
              }
              RGNOBJ::vSet((RGNOBJ *)&v9);
              vUpdateClientRgnOnSpriteOverlap((struct EWNDOBJ *)j, (struct RGNOBJ *)&v9);
              *(_QWORD *)(v2 + 704) = v9;
              *(_DWORD *)(j + 184) |= 0x800000u;
            }
          }
        }
      }
LABEL_11:
      UNDODESKTOPCOORD::~UNDODESKTOPCOORD((UNDODESKTOPCOORD *)v8);
    }
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v11);
}
