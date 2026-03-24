/*
 * XREFs of DebugService2 @ 0x1401C53A0
 * Callers:
 *     DbgLoadImageSymbols @ 0x1400F4C60 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C7B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x1401921F0 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x140291190 (KeBugCheck2.c)
 *     DbgCommandString @ 0x1402EC8E0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x1402ECA1C (DbgUnLoadImageSymbols.c)
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
