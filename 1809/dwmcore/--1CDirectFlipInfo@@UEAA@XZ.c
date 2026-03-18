/*
 * XREFs of ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800E8B48
 * Callers:
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800E8A50 (--1COverlayContext@@MEAA@XZ.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180168A20 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180069400 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::~CDirectFlipInfo(std::_Ref_count_base **this)
{
  std::_Ref_count_base *v2; // rcx

  *this = (std::_Ref_count_base *)&CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((CDirectFlipInfo *)this);
  v2 = this[7];
  if ( v2 )
    std::_Ref_count_base::_Decref(v2);
}
