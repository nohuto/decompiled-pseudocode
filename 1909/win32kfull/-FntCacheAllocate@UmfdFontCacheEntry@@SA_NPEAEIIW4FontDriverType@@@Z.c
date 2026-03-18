/*
 * XREFs of ?FntCacheAllocate@UmfdFontCacheEntry@@SA_NPEAEIIW4FontDriverType@@@Z @ 0x1C02D4664
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0121D90 (UmfdDispatchEscape.c)
 * Callees:
 *     ?Win32ProbeForRead@@YAXPEAX_KK@Z @ 0x1C011EE90 (-Win32ProbeForRead@@YAXPEAX_KK@Z.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     EngFntCacheAllocInternal @ 0x1C02857BC (EngFntCacheAllocInternal.c)
 *     EngFntCacheFault @ 0x1C02858B0 (EngFntCacheFault.c)
 */

char __fastcall UmfdFontCacheEntry::FntCacheAllocate(char *a1, unsigned int a2, unsigned int a3, int a4)
{
  size_t v8; // rsi
  _QWORD *v9; // rax
  _DWORD v11[10]; // [rsp+20h] [rbp-28h] BYREF

  v8 = a2;
  Win32ProbeForRead(a1, a2, 1);
  if ( a2 >= 0xFFFFFFF0 )
    return 0;
  v11[0] = 0;
  v9 = (_QWORD *)EngFntCacheAllocInternal(a3, a2 + 16, v11);
  if ( v11[0] )
    return 0;
  if ( v9 )
  {
    *v9 = 0LL;
    v9[1] = 0LL;
    *(_DWORD *)v9 = a4;
    memmove(v9 + 2, a1, v8);
  }
  return 1;
}
