/*
 * XREFs of DebugService2 @ 0x1401C5500
 * Callers:
 *     DbgLoadImageSymbols @ 0x1400F4CE0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14016C8B4 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadUserImageSymbols @ 0x140192330 (DbgLoadUserImageSymbols.c)
 *     KeBugCheck2 @ 0x140291380 (KeBugCheck2.c)
 *     DbgCommandString @ 0x1402ECAD0 (DbgCommandString.c)
 *     DbgUnLoadImageSymbols @ 0x1402ECC0C (DbgUnLoadImageSymbols.c)
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
