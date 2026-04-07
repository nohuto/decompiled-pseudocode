/*
 * XREFs of ?NotifySWROfMarginOrSizeChange@CWindowData@@QEAAX_N0@Z @ 0x180039CDC
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x18003F1F8 (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 * Callees:
 *     ?OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ @ 0x180013D38 (-OnMarginsOrSizeUpdated@CSecondaryWindowRepresentation@@QEAAXXZ.c)
 */

void __fastcall CWindowData::NotifySWROfMarginOrSizeChange(CWindowData *this, char a2, char a3)
{
  __int64 i; // rbx
  CSecondaryWindowRepresentation *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 118); i = (unsigned int)(i + 1) )
  {
    v7 = *(CSecondaryWindowRepresentation **)(*((_QWORD *)this + 56) + 8 * i);
    v8 = *((_OWORD *)v7 + 4);
    if ( (CWindowData *)v8 == this && (a2 && DWORD2(v8) == 1 || a3 && DWORD2(v8) == 3) )
      CSecondaryWindowRepresentation::OnMarginsOrSizeUpdated(v7);
  }
}
