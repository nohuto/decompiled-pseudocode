/*
 * XREFs of ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00553C4
 * Callers:
 *     ?CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@EPEAW4_CONNECTION_CHANGE_FAILURE_REASON@@@Z @ 0x1C02BB6D0 (-CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJIIAEAU_DXGK_CHILD_CAPABILITIES@@.c)
 * Callees:
 *     <none>
 */

bool __fastcall DMMVIDEOPRESENTTARGET::IsLeafTarget(DMMVIDEOPRESENTTARGET *this)
{
  char v1; // dl

  v1 = 0;
  if ( *((DMMVIDEOPRESENTTARGET **)this + 55) == (DMMVIDEOPRESENTTARGET *)((char *)this + 440)
    && *((DMMVIDEOPRESENTTARGET **)this + 60) == (DMMVIDEOPRESENTTARGET *)((char *)this + 480) )
  {
    return *((_QWORD *)this + 66) == 0LL;
  }
  return v1;
}
