/*
 * XREFs of ?_HasBorder@CThumbnailVisual@@AEAA_NXZ @ 0x180009174
 * Callers:
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800089D0 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x180008EA0 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x18000A510 (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
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
