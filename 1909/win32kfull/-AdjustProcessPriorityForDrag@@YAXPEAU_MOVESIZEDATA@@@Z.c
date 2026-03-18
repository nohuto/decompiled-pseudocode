/*
 * XREFs of ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01F9854
 * Callers:
 *     xxxMoveSize @ 0x1C0201A40 (xxxMoveSize.c)
 * Callees:
 *     ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C01FA7B0 (-IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z.c)
 *     ?IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z @ 0x1C0211884 (-IsProcessPriorityByClassBackground@PriorityBoost@@YA_NPEBUtagPROCESSINFO@@@Z.c)
 *     SetForegroundPriority @ 0x1C02119B0 (SetForegroundPriority.c)
 */

void __fastcall AdjustProcessPriorityForDrag(struct _MOVESIZEDATA *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  const struct tagPROCESSINFO *v5; // rdx
  const struct tagPROCESSINFO *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx

  v2 = *((_QWORD *)a1 + 2);
  v3 = *((_DWORD *)a1 + 49);
  v4 = *(_QWORD *)(v2 + 16);
  if ( (v3 & 0x100000) != 0 )
  {
    if ( !(unsigned int)IsDraggingForegroundModernApp((struct tagWND *)v2) )
    {
      if ( v4 != gptiForeground )
        return;
      v7 = 0LL;
      goto LABEL_8;
    }
    if ( PriorityBoost::IsProcessPriorityByClassBackground(*(PriorityBoost **)(v4 + 416), v5)
      && !PriorityBoost::IsProcessPriorityByClassBackground(*(PriorityBoost **)(gptiForeground + 416LL), v6) )
    {
      v7 = 1LL;
LABEL_8:
      SetForegroundPriority(v4, v7);
      *((_DWORD *)a1 + 49) |= 0x40000000u;
    }
  }
  else
  {
    if ( (v3 & 0x40000000) == 0 )
      return;
    if ( (unsigned int)IsDraggingForegroundModernApp((struct tagWND *)v2) )
    {
      if ( v4 == gptiForeground )
        return;
      v8 = 0LL;
    }
    else
    {
      if ( v4 != gptiForeground )
        return;
      v8 = 1LL;
    }
    SetForegroundPriority(v4, v8);
  }
}
