/*
 * XREFs of ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C010AEB8
 * Callers:
 *     DWP_SetHotKey @ 0x1C010AE1C (DWP_SetHotKey.c)
 *     DWP_GetHotKey @ 0x1C0228510 (DWP_GetHotKey.c)
 * Callees:
 *     <none>
 */

struct tagHOTKEYSTRUCT **__fastcall HotKeyHelper(struct tagWND *a1)
{
  __int64 v1; // rax
  __int64 *v2; // rdx

  v1 = gpHotKeyList;
  v2 = &gpHotKeyList;
  while ( v1 && *(struct tagWND **)v1 != a1 )
  {
    v2 = (__int64 *)(v1 + 16);
    v1 = *(_QWORD *)(v1 + 16);
  }
  return (struct tagHOTKEYSTRUCT **)v2;
}
