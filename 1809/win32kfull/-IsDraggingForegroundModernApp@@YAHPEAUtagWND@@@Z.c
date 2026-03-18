/*
 * XREFs of ?IsDraggingForegroundModernApp@@YAHPEAUtagWND@@@Z @ 0x1C01E5170
 * Callers:
 *     ?AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z @ 0x1C01E4278 (-AdjustProcessPriorityForDrag@@YAXPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsDraggingForegroundModernApp(struct tagWND *a1)
{
  __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *((_QWORD *)a1 + 2);
  v2 = 0;
  if ( (*(_DWORD *)(v1 + 1208) & 0x1C0000) == 0x40000
    && *(_QWORD *)(v1 + 1376)
    && *(struct tagWND **)(v1 + 1368) == a1
    && gptiForeground )
  {
    return *(_QWORD *)(v1 + 432) == *(_QWORD *)(gptiForeground + 432LL);
  }
  return v2;
}
