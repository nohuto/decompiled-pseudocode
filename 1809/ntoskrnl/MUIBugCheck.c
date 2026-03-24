/*
 * XREFs of MUIBugCheck @ 0x14031F2B8
 * Callers:
 *     NtGetMUIRegistryInfo @ 0x1406AD5C0 (NtGetMUIRegistryInfo.c)
 * Callees:
 *     KeBugCheckEx @ 0x1401BBBC0 (KeBugCheckEx.c)
 */

void __fastcall __noreturn MUIBugCheck(int a1)
{
  KeBugCheckEx(0x12Au, 2uLL, a1, 0LL, 0LL);
}
