/*
 * XREFs of ?UpdateAtlasPositionAndSize@CButton@@AEAAXXZ @ 0x180025498
 * Callers:
 *     ?RedrawVisual@CButton@@AEAAJXZ @ 0x180024E10 (-RedrawVisual@CButton@@AEAAJXZ.c)
 *     ?UpdateLayout@CButton@@UEAAJ_N@Z @ 0x180025420 (-UpdateLayout@CButton@@UEAAJ_N@Z.c)
 *     ?UpdateOffset@CButton@@MEAAJXZ @ 0x180025460 (-UpdateOffset@CButton@@MEAAJXZ.c)
 * Callees:
 *     ?SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z @ 0x1800254E4 (-SetOffset@CAtlasedImage@@QEAAXAEBUtagPOINT@@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180025514 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 */

void __fastcall CButton::UpdateAtlasPositionAndSize(CButton *this)
{
  CButton **v2; // rcx
  const struct tagPOINT *v3; // rdx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  CAtlasedImage::SetSize(*((CAtlasedImage **)this + 36), (const struct tagSIZE *)this + 15);
  v2 = (CButton **)*((_QWORD *)this + 36);
  if ( v2[10] == this )
  {
    v3 = (const struct tagPOINT *)&v4;
    v4 = 0LL;
  }
  else
  {
    v3 = (const struct tagPOINT *)((char *)this + 112);
  }
  CAtlasedImage::SetOffset((CAtlasedImage *)v2, v3);
}
