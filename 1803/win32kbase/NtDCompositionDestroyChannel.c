/*
 * XREFs of NtDCompositionDestroyChannel @ 0x1C0010C30
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010C44 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 */

__int64 __fastcall NtDCompositionDestroyChannel(unsigned int a1)
{
  return DirectComposition::CChannel::DestroyHandle(a1);
}
