/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180168A20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800E8B48 (--1CDirectFlipInfo@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

std::_Ref_count_base **__fastcall CDirectFlipInfo::`vector deleting destructor'(std::_Ref_count_base **this, char a2)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
