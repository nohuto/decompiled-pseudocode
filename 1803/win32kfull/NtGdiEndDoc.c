/*
 * XREFs of NtGdiEndDoc @ 0x1C0136380
 * Callers:
 *     <none>
 * Callees:
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013B460 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 */

__int64 __fastcall NtGdiEndDoc(HDC a1)
{
  return bEndDocInternal(a1, 0, 1u);
}
