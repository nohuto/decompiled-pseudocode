/*
 * XREFs of QueryInertiaInfo @ 0x1C01FDBFC
 * Callers:
 *     CachePTPInertiaInfo @ 0x1C01A1370 (CachePTPInertiaInfo.c)
 *     QueryInertiaStatus @ 0x1C01A1560 (QueryInertiaStatus.c)
 *     EditionPostInertiaMessage @ 0x1C01ABA50 (EditionPostInertiaMessage.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BE2DC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0035244 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C00F61A8 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01AE940 (DCEHitTestWindow.c)
 */

void *__fastcall QueryInertiaInfo(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  int *v9; // rcx
  int v10; // eax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = 0LL;
  if ( (dword_1C032AA08 & 1) == 0 || a3 && a3 != dword_1C032A998 )
    return 0LL;
  if ( qword_1C032A9F8 )
  {
    v6 = ValidateHwnd(qword_1C032A9F8);
    v3 = v6;
    if ( !v6 )
      return 0LL;
    v7 = *(_QWORD *)(v6 + 40);
    if ( *(char *)(v7 + 20) < 0 || *(char *)(v7 + 19) < 0 )
      return 0LL;
  }
  if ( ((dword_1C032AA08 & 4) == 0
     || (v11 = a2,
         (unsigned int)DCEHitTestWindow((int *)&xmmword_1C032A9A8, (__int64)&xmmword_1C032A9B8, (int *)&v11, 0LL)))
    && (!v3
     || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v3)
     || ((v8 = *(_QWORD *)(v3 + 200), v9 = (int *)(*(_QWORD *)(v3 + 40) + 88LL), v11 = a2, !v8)
       ? (v10 = DCEPtInRect(v9, a2))
       : (v10 = DCEHitTestWindow(v9, v8, (int *)&v11, 0LL)),
         v10)) )
  {
    return &gInertiaInfo;
  }
  else
  {
    return 0LL;
  }
}
