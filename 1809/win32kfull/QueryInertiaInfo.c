/*
 * XREFs of QueryInertiaInfo @ 0x1C0226920
 * Callers:
 *     CachePTPInertiaInfo @ 0x1C01C2930 (CachePTPInertiaInfo.c)
 *     QueryInertiaStatus @ 0x1C01C2B20 (QueryInertiaStatus.c)
 *     EditionPostInertiaMessage @ 0x1C01CEC40 (EditionPostInertiaMessage.c)
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01E0E94 (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     ?IsCompositionInputWindow@@YAHPEBUtagWND@@@Z @ 0x1C0072410 (-IsCompositionInputWindow@@YAHPEBUtagWND@@@Z.c)
 *     DCEPtInRect @ 0x1C010B948 (DCEPtInRect.c)
 *     DCEHitTestWindow @ 0x1C01D183C (DCEHitTestWindow.c)
 */

void *__fastcall QueryInertiaInfo(unsigned __int64 a1, unsigned __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  int *v8; // rcx
  int v9; // eax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = a1;
  v3 = 0LL;
  if ( (dword_1C0318928 & 1) == 0 || a3 && a3 != dword_1C03188B8 )
    return 0LL;
  if ( qword_1C0318918 )
  {
    v5 = ValidateHwnd(qword_1C0318918);
    v3 = v5;
    if ( !v5 )
      return 0LL;
    v6 = *(_QWORD *)(v5 + 40);
    if ( *(char *)(v6 + 20) < 0 || *(char *)(v6 + 19) < 0 )
      return 0LL;
  }
  if ( ((dword_1C0318928 & 4) == 0
     || (v11 = a2,
         (unsigned int)DCEHitTestWindow((int *)&xmmword_1C03188C8, (__int64)&xmmword_1C03188D8, (int *)&v11, 0LL)))
    && (!v3
     || (unsigned int)IsCompositionInputWindow((const struct tagWND *)v3)
     || ((v7 = *(_QWORD *)(v3 + 200), v8 = (int *)(*(_QWORD *)(v3 + 40) + 88LL), v11 = a2, !v7)
       ? (v9 = DCEPtInRect(v8, a2))
       : (v9 = DCEHitTestWindow(v8, v7, (int *)&v11, 0LL)),
         v9)) )
  {
    return &gInertiaInfo;
  }
  else
  {
    return 0LL;
  }
}
