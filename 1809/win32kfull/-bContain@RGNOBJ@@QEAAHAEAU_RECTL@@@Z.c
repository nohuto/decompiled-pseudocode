/*
 * XREFs of ?bContain@RGNOBJ@@QEAAHAEAU_RECTL@@@Z @ 0x1C01084C8
 * Callers:
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C005F050 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z @ 0x1C015AE9C (-vSpAddAndCompactDirtyRect@@YAXPEAVSPRITE@@VERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall RGNOBJ::bContain(RGNOBJ *this, struct _RECTL *a2)
{
  _DWORD *v2; // r8

  v2 = *(_DWORD **)this;
  return *(_DWORD *)(*(_QWORD *)this + 88LL) <= a2->left
      && v2[24] >= a2->right
      && v2[23] <= a2->top
      && v2[25] >= a2->bottom;
}
