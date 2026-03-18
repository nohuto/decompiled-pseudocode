/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C0059810
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0059824 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyChannel(unsigned int a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
