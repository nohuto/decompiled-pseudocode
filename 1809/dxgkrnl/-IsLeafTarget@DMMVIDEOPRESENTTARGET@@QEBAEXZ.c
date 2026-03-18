/*
 * XREFs of ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C004E224
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C0283430 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsLeafTarget(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 53) == (DMMVIDEOPRESENTTARGET *)((char *)this + 424)
    && *((DMMVIDEOPRESENTTARGET **)this + 58) == (DMMVIDEOPRESENTTARGET *)((char *)this + 464) )
  {
    return *((_QWORD *)this + 64) == 0LL;
  }
  return v1;
}
