/*
 * XREFs of ?GetCurrentDefaultColorizationFlags@CTopLevelWindow@@AEAA?AU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@XZ @ 0x180013110
 * Callers:
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180014FA8 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180017770 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B120 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

int *__fastcall CTopLevelWindow::GetCurrentDefaultColorizationFlags(__int64 a1, int *a2)
{
  bool v2; // zf
  __int64 v3; // rcx
  int v4; // eax

  v2 = (*(_BYTE *)(a1 + 584) & 0x40) == 0;
  v3 = *(_QWORD *)(a1 + 720);
  if ( !v2 || (v4 = 2, (*(_BYTE *)(v3 + 607) & 0x10) != 0) )
    v4 = 1;
  *a2 = v4;
  if ( *(_DWORD *)(v3 + 80) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 84) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 88) == 0x7FFFFFFF
    && *(_DWORD *)(v3 + 92) == 0x7FFFFFFF )
  {
    v4 |= 0x40u;
    *a2 = v4;
  }
  if ( (*(_BYTE *)(v3 + 609) & 2) != 0 )
    *a2 = v4 | 0x80;
  return a2;
}
