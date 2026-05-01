/*
 * XREFs of _GetProcFromComCtl32 @ 0x180106D00
 * Callers:
 *     HIMAGELIST_QueryInterface @ 0x180106B30 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x180106B98 (ImageList_Create.c)
 *     ImageList_Destroy @ 0x180106BFC (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x180106C4C (ImageList_ReplaceIcon.c)
 *     PremultiplyAlphaChannel @ 0x180106CB0 (PremultiplyAlphaChannel.c)
 * Callees:
 *     DelayLoadCC @ 0x180106AD8 (DelayLoadCC.c)
 */

__int64 __fastcall GetProcFromComCtl32(__int64 *a1, const CHAR *a2)
{
  __int64 v3; // rbx
  HMODULE v4; // rcx
  __int64 result; // rax

  v3 = 0LL;
  v4 = g_hinstCC;
  if ( g_hinstCC || (result = DelayLoadCC(), (v4 = g_hinstCC) != 0LL) )
  {
    result = (__int64)GetProcAddress(v4, a2);
    v3 = result;
  }
  *a1 = v3;
  return result;
}
