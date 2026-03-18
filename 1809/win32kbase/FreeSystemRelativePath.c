/*
 * XREFs of FreeSystemRelativePath @ 0x1C005467C
 * Callers:
 *     ldevLoadDriver @ 0x1C0054000 (ldevLoadDriver.c)
 *     ldevLoadImage @ 0x1C00542D0 (ldevLoadImage.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 */

void __fastcall FreeSystemRelativePath(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    Win32FreePool(v2);
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_DWORD *)a1 = 0;
}
