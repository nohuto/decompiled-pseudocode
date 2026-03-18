/*
 * XREFs of MUIBugCheck @ 0x14033E780
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406CFA90 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
