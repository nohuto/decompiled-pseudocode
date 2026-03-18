/*
 * XREFs of DxgkGetLegacyDpiInfo @ 0x1C0255EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C0254DF0 (-DxgkUpdateGdiInfo@Win81@@YAJPEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 */

__int64 __fastcall DxgkGetLegacyDpiInfo(__int64 a1, Win81 *a2, unsigned int a3, int a4)
{
  __int64 v5; // rbx
  _QWORD *v7; // rax

  v5 = a3;
  if ( *(int *)a1 < 4096 )
    return Win81::DxgkUpdateGdiInfo(a2, (void *)a3, (const GUID *)*(unsigned int *)(a1 + 4), *(_DWORD *)(a1 + 8), a4);
  v7 = (_QWORD *)WdLogNewEntry5_WdAssertion(a1);
  v7[3] = -1073741823LL;
  v7[4] = a2;
  v7[5] = v5;
  WdLogEvent5_WdAssertion(v7);
  return 3221225485LL;
}
