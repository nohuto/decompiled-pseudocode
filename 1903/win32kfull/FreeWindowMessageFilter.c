/*
 * XREFs of FreeWindowMessageFilter @ 0x1C009828C
 * Callers:
 *     _ChangeWindowMessageFilterEx @ 0x1C0087AE8 (_ChangeWindowMessageFilterEx.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00CF914 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C0115A5C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeWindowMessageFilter(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v4; // rax
  void **v5; // [rsp+40h] [rbp+8h] BYREF

  v4 = *((_QWORD *)a1 + 2);
  v5 = 0LL;
  if ( (unsigned int)VWPLRemoveBase(
                       (struct tagVWPL **)(*(_QWORD *)(v4 + 416) + 848LL),
                       a2,
                       a1,
                       a4,
                       (unsigned __int64 *)&v5) )
    MsgLookupTableCleanUp(v5);
}
