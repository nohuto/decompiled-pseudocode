/*
 * XREFs of ??$_UIntegral_to_buff@G_K@std@@YAPEAGPEAG_K@Z @ 0x18017390C
 * Callers:
 *     ?SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@Z @ 0x180173EF8 (-SaveTextureFromSource@CDebugTreeDumper@@AEAAJPEAUID3D11Texture2D@@IPEAXPEAV-$basic_string@GU-$c.c)
 * Callees:
 *     <none>
 */

_WORD *__fastcall std::_UIntegral_to_buff<unsigned short,unsigned __int64>(_WORD *a1, unsigned __int64 a2)
{
  do
  {
    *--a1 = a2 % 0xA + 48;
    a2 /= 0xAuLL;
  }
  while ( a2 );
  return a1;
}
