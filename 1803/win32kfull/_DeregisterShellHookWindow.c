/*
 * XREFs of _DeregisterShellHookWindow @ 0x1C010F2A0
 * Callers:
 *     xxxFreeWindow @ 0x1C0036A54 (xxxFreeWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00C3E94 (SetOrClrWF.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00E5A94 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 */

__int64 __fastcall DeregisterShellHookWindow(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *((_QWORD *)a1 + 3);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(v5 + 8) + 240LL), a2, a1, a4, 0LL) )
    SetOrClrWF(0, (__int64)a1, 1856, 1);
  return 1LL;
}
