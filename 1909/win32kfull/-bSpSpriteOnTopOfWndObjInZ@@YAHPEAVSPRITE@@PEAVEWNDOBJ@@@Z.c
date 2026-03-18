/*
 * XREFs of ?bSpSpriteOnTopOfWndObjInZ@@YAHPEAVSPRITE@@PEAVEWNDOBJ@@@Z @ 0x1C027DB0C
 * Callers:
 *     ?vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z @ 0x1C0281634 (-vSpUpdateWndobjOverlap@@YAXPEAU_SPRITESTATE@@PEAVEWNDOBJ@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bSpSpriteOnTopOfWndObjInZ(struct SPRITE *a1, struct EWNDOBJ *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int64 i; // r9
  __int64 v5; // rax

  if ( !*((_QWORD *)a1 + 9) )
    return 0LL;
  v2 = *((_QWORD *)a1 + 2);
  v3 = *(_QWORD *)(v2 + 8);
  for ( i = *(_QWORD *)(v2 + 1120); v3 != i; v3 = *(_QWORD *)(v3 + 24) )
  {
    if ( *(_QWORD *)(v3 + 72) == *((_QWORD *)a2 + 22) )
      break;
  }
  v5 = 0LL;
  if ( v3 != i )
    v5 = v3;
  return !v5 || *((_DWORD *)a1 + 16) > *(_DWORD *)(v5 + 64);
}
