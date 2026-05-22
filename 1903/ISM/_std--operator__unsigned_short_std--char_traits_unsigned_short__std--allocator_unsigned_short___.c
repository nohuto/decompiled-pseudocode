/*
 * XREFs of _std::operator__unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x180087C5E
 * Callers:
 *     <none>
 * Callees:
 *     ??1CandidateIdentity@@QEAA@XZ @ 0x18006E92C (--1CandidateIdentity@@QEAA@XZ.c)
 */

void __fastcall std::operator__unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    CandidateIdentity::~CandidateIdentity(*(CandidateIdentity **)(a2 + 80));
  }
}
