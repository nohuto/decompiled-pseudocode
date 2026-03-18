/*
 * XREFs of IsEqualInputSource @ 0x1C00670A0
 * Callers:
 *     CoalesceInputSourceMouseMoves @ 0x1C003AB80 (CoalesceInputSourceMouseMoves.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0135A50 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
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
