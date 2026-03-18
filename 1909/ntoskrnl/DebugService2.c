/*
 * XREFs of DebugService2 @ 0x1401CC540
 * Callers:
 *     DbgLoadImageSymbols @ 0x140155450 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140181554 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x14019C368 (DbgLoadUserImageSymbols.c)
 *     DbgCommandString @ 0x14030AB40 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x14030AC9C (DbgUnLoadImageSymbols.c)
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
