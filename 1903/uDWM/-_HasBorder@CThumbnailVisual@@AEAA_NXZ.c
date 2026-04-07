/*
 * XREFs of ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180025DA8
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x180003634 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180025AE0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180027B24 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CThumbnailVisual::_HasBorder(CThumbnailVisual *this)
{
  __int64 v1; // rdx
  char result; // al

  v1 = *((_QWORD *)this + 46);
  result = 0;
  if ( v1 )
  {
    if ( (*(_DWORD *)(v1 + 44) & 0x400000) != 0 )
      return 1;
  }
  return result;
}
