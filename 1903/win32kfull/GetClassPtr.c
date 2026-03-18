/*
 * XREFs of GetClassPtr @ 0x1C00BEAC0
 * Callers:
 *     _GetClassInfoEx @ 0x1C001ECF4 (_GetClassInfoEx.c)
 *     xxxFreeWindow @ 0x1C00988D4 (xxxFreeWindow.c)
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 *     _GetWOWClass @ 0x1C01EA8D0 (_GetWOWClass.c)
 * Callees:
 *     _InnerGetClassPtr @ 0x1C00BEB50 (_InnerGetClassPtr.c)
 */

__int64 __fastcall GetClassPtr(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int16 v5; // bx
  __int64 result; // rax
  __int64 v7; // rdi

  v3 = a2 + 344;
  v5 = a1;
  result = InnerGetClassPtr(a1, a2 + 344, a3);
  if ( !result )
  {
    result = InnerGetClassPtr(v5, a2 + 352, 0LL);
    if ( !result )
    {
      v7 = *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount;
      result = InnerGetClassPtr(v5, v3, *(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount);
      if ( !result )
        return InnerGetClassPtr(v5, a2 + 352, v7);
    }
  }
  return result;
}
