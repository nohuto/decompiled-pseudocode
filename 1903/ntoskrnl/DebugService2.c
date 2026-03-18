/*
 * XREFs of DebugService2 @ 0x1401CB9C0
 * Callers:
 *     DbgLoadImageSymbols @ 0x140154DB0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140180E64 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x14019BBE8 (DbgLoadUserImageSymbols.c)
 *     DbgCommandString @ 0x14030B090 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x14030B1EC (DbgUnLoadImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DebugService2(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax

  result = a3;
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return result;
}
