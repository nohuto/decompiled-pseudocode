/*
 * XREFs of _GetProcFromComCtl32 @ 0x1800E49F4
 * Callers:
 *     HIMAGELIST_QueryInterface @ 0x1800E4824 (HIMAGELIST_QueryInterface.c)
 *     ImageList_Create @ 0x1800E488C (ImageList_Create.c)
 *     ImageList_Destroy @ 0x1800E48F0 (ImageList_Destroy.c)
 *     ImageList_ReplaceIcon @ 0x1800E4940 (ImageList_ReplaceIcon.c)
 *     PremultiplyAlphaChannel @ 0x1800E49A4 (PremultiplyAlphaChannel.c)
 * Callees:
 *     DelayLoadCC @ 0x1800E47CC (DelayLoadCC.c)
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
