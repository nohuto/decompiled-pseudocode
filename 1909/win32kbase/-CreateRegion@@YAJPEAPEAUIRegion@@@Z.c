/*
 * XREFs of ?CreateRegion@@YAJPEAPEAUIRegion@@@Z @ 0x1C007BBB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0013080 (Win32AllocPool.c)
 */

__int64 __fastcall CreateRegion(struct IRegion **a1)
{
  __int64 v2; // rax
  struct IRegion *v3; // rdx

  v2 = Win32AllocPool(24LL, 0x6E677247u);
  v3 = (struct IRegion *)v2;
  if ( v2 )
  {
    *(_DWORD *)(v2 + 12) = 0;
    *(_QWORD *)(v2 + 16) = 0LL;
    *(_QWORD *)v2 = &CRegion::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    v3 = 0LL;
  }
  *a1 = v3;
  return v3 == 0LL ? 0xC0000017 : 0;
}
