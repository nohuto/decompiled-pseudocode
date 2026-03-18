/*
 * XREFs of ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180182300
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1CDirectFlipInfo@@UEAA@XZ @ 0x1800DD408 (--1CDirectFlipInfo@@UEAA@XZ.c)
 */

std::_Ref_count_base **__fastcall CDirectFlipInfo::`vector deleting destructor'(std::_Ref_count_base **this, char a2)
{
  CDirectFlipInfo::~CDirectFlipInfo(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
