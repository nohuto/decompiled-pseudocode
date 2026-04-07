/*
 * XREFs of ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x18000F02C
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x18002601C (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180026BF8 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ @ 0x18000F620 (-CheckOwnedWindowEligibilityForOwner@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowData::TrackOwnedWindows(CWindowData *this, char a2)
{
  char v3; // cl
  __int64 v4; // r9
  __int64 v5; // rdx

  v3 = *((_BYTE *)this + 597);
  if ( a2 != ((v3 & 0x40) != 0) )
  {
    v4 = 0LL;
    *((_BYTE *)this + 597) = (a2 << 6) | v3 & 0xBF;
    if ( a2 )
    {
      CWindowData::CheckOwnedWindowEligibilityForOwner(this);
    }
    else if ( *((_DWORD *)this + 144) )
    {
      do
      {
        v5 = *(_QWORD *)(*((_QWORD *)this + 69) + 8 * v4);
        v4 = (unsigned int)(v4 + 1);
        *(_BYTE *)(v5 + 597) &= ~0x80u;
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 144) );
    }
  }
}
