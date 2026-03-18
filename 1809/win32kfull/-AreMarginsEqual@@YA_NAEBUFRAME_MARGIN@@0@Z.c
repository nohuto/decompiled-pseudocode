/*
 * XREFs of ?AreMarginsEqual@@YA_NAEBUFRAME_MARGIN@@0@Z @ 0x1C010F914
 * Callers:
 *     ?xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z @ 0x1C010F748 (-xxxProcessUpdateFrameMargins@@YAXPEAUtagWND@@AEBUFRAME_MARGIN@@@Z.c)
 *     SetWindowExtendedBoundsMargin @ 0x1C010F804 (SetWindowExtendedBoundsMargin.c)
 * Callees:
 *     <none>
 */

bool __fastcall AreMarginsEqual(const struct FRAME_MARGIN *a1, const struct FRAME_MARGIN *a2)
{
  return *(_WORD *)a1 == *(_WORD *)a2
      && *((_WORD *)a1 + 1) == *((_WORD *)a2 + 1)
      && *((_WORD *)a1 + 2) == *((_WORD *)a2 + 2)
      && *((_WORD *)a1 + 3) == *((_WORD *)a2 + 3);
}
