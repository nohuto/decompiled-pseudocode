/*
 * XREFs of ObIsObjectDeletionInline @ 0x1405F1140
 * Callers:
 *     IopDeleteFile @ 0x1405F1150 (IopDeleteFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ObIsObjectDeletionInline(__int64 a1)
{
  return *(_BYTE *)(a1 - 21) >> 7;
}
