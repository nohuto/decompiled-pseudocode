/*
 * XREFs of ?DeliverInput@MPCFocusTarget@@UEAAJPEAUInputInfo@@@Z @ 0x180056DE0
 * Callers:
 *     ?DeliverInput@MPCFocusTarget@@WEI@EAAJPEAUInputInfo@@@Z @ 0x180037B80 (-DeliverInput@MPCFocusTarget@@WEI@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall MPCFocusTarget::DeliverInput(MPCFocusTarget *this, struct InputInfo *a2)
{
  return MPCTarget::DeliverInput(this, a2);
}
