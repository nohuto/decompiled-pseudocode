/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02AF9E4
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0082100 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C007E554 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     EngFntCacheAlloc @ 0x1C025A020 (EngFntCacheAlloc.c)
 *     EngFntCacheFault @ 0x1C025A100 (EngFntCacheFault.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(char *a1, unsigned int a2, ULONG a3, int a4)
{
  size_t v6; // rbx
  _QWORD *v9; // rax

  v6 = a2;
  Win32ProbeForRead(a1, a2, 1);
  if ( (unsigned int)v6 >= 0xFFFFFFF0 )
    return 0;
  v9 = EngFntCacheAlloc(a3, (int)v6 + 16);
  if ( !v9 )
    return 0;
  *v9 = 0LL;
  v9[1] = 0LL;
  *(_DWORD *)v9 = a4;
  memmove(v9 + 2, a1, v6);
  return 1;
}
