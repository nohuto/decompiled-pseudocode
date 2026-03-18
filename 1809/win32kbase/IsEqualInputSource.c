/*
 * XREFs of IsEqualInputSource @ 0x1C0034590
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030860 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     CoalesceInputSourceMouseMoves @ 0x1C0031E50 (CoalesceInputSourceMouseMoves.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsEqualInputSource(_DWORD *a1, _DWORD *a2)
{
  char v2; // r8

  v2 = 0;
  if ( !a1 || !a2 )
    return 0;
  if ( *a1 == *a2 )
    return a1[1] == a2[1];
  return v2;
}
