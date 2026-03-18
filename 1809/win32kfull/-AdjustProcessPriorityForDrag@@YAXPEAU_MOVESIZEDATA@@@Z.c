/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4278
 * Callers:
 *     xxxMoveSize @ 0x1C01EBF38 (xxxMoveSize.c)
 * Callees:
 *     SetForegroundPriority @ 0x1C00CF050 (SetForegroundPriority.c)
 *     ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C01E5170 (-IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct _MOVESIZEDATA *a1)
{
  struct tagWND *v2; // rcx
  int v3; // eax
  __int64 v4; // r9
  int v5; // edx
  __int64 v6; // r9
  int v7; // edx

  v2 = (struct tagWND *)*((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 49);
  if ( (v3 & 0x100000) != 0 )
  {
    if ( !(unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v4 != gptiForeground )
        return;
      v5 = 0;
      goto LABEL_8;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(v4 + 424) + 820LL) & 0x30000) == 0
      && (*(_DWORD *)(*(_QWORD *)(gptiForeground + 424LL) + 820LL) & 0x30000) != 0 )
    {
      v5 = 1;
LABEL_8:
      SetForegroundPriority(v4, v5);
      *((_DWORD *)a1 + 49) |= 0x40000000u;
    }
  }
  else
  {
    if ( (v3 & 0x40000000) == 0 )
      return;
    if ( (unsigned int)IsDraggingForegroundModernApp(v2) )
    {
      if ( v6 == gptiForeground )
        return;
      v7 = 0;
    }
    else
    {
      if ( v6 != gptiForeground )
        return;
      v7 = 1;
    }
    SetForegroundPriority(v6, v7);
  }
}
