/*
 * XREFs of FreeObject @ 0x1C00449C0
 * Callers:
 *     HmgAlloc @ 0x1C00248F0 (HmgAlloc.c)
 *     HmgFree @ 0x1C00715F0 (HmgFree.c)
 *     ?GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z @ 0x1C00D6B94 (-GreCreateColorSpace@@YAPEAUHCOLORSPACE__@@PEAU_LOGCOLORSPACEEXW@@@Z.c)
 *     ?bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z @ 0x1C00D6FCC (-bDeleteColorSpace@@YAHPEAUHCOLORSPACE__@@@Z.c)
 *     EngDeleteDriverObj @ 0x1C00D9DB0 (EngDeleteDriverObj.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 */

__int64 __fastcall FreeObject(__int64 a1, int a2)
{
  void * near *v3; // rdi
  __int64 result; // rax

  if ( *(__int16 *)(a1 + 14) >= 0 )
    return Win32FreePool(a1);
  v3 = (&pHmgLookAsideList)[a2];
  result = IsWin32FreeToPagedLookasideListImplSupported();
  if ( (int)result >= 0 )
    return Win32FreeToPagedLookasideListImpl(v3, a1);
  return result;
}
