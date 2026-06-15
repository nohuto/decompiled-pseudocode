/*
 * XREFs of ?SafeStringLen@?$ChTraitsCRT@G@ATL@@SAHPEBG@Z @ 0x1800262A8
 * Callers:
 *     ?CalculateStaticId@CAppAudioSessionId@@AEAAJXZ @ 0x180022FC0 (-CalculateStaticId@CAppAudioSessionId@@AEAAJXZ.c)
 *     ?CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ @ 0x180023700 (-CalculateStaticId@CAudioSessionInstanceId@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::ChTraitsCRT<unsigned short>::SafeStringLen(__int64 a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 0LL;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)(a1 + 2 * result) );
  return result;
}
