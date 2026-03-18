/*
 * XREFs of FreeWindowGCData @ 0x1C00982D8
 * Callers:
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     SetGestureConfigSettings @ 0x1C0136E40 (SetGestureConfigSettings.c)
 * Callees:
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00CF914 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z @ 0x1C013EF48 (-FreeWindowGCList@@YAXPEAPEAUtagGESTURECONFIGLIST@@@Z.c)
 */

__int64 __fastcall FreeWindowGCData(struct tagWND *a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // rdx
  int v9; // r9d
  _QWORD *v10; // [rsp+40h] [rbp+8h] BYREF

  result = VWPLRemoveBase(
             (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 864LL),
             a2,
             a1,
             a4,
             (unsigned __int64 *)&v10);
  if ( (_DWORD)result )
  {
    v6 = (unsigned __int64)v10;
    if ( v10 )
    {
      if ( *v10 )
      {
        Win32FreePool(*v10);
        *(_QWORD *)v6 = 0LL;
      }
      v7 = *(_QWORD *)(v6 + 16);
      if ( v7 )
      {
        FreeWindowGCList(*(struct tagGESTURECONFIGLIST ***)(v6 + 16));
        Win32FreePool(v7);
        *(_QWORD *)(v6 + 16) = 0LL;
      }
      Win32FreePool(v6);
      return VWPLRemoveBase((struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 416LL) + 864LL), v8, a1, v9, 0LL);
    }
  }
  return result;
}
