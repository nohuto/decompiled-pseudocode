/*
 * XREFs of DWP_GetHotKey @ 0x1C02408DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 * Callees:
 *     ?HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z @ 0x1C0094330 (-HotKeyHelper@@YAPEAPEAUtagHOTKEYSTRUCT@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall DWP_GetHotKey(struct tagWND *a1)
{
  struct tagHOTKEYSTRUCT **v1; // rax

  v1 = HotKeyHelper(a1);
  if ( *v1 )
    return *((unsigned int *)*v1 + 2);
  else
    return 0LL;
}
