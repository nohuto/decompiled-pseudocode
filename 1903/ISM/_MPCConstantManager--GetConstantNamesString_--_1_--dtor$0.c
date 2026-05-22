/*
 * XREFs of _MPCConstantManager::GetConstantNamesString_::_1_::dtor$0 @ 0x180089BEA
 * Callers:
 *     <none>
 * Callees:
 *     ??1CandidateIdentity@@QEAA@XZ @ 0x18006E92C (--1CandidateIdentity@@QEAA@XZ.c)
 */

void __fastcall MPCConstantManager::GetConstantNamesString_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 56) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 56) &= ~1u;
    CandidateIdentity::~CandidateIdentity(*(CandidateIdentity **)(a2 + 72));
  }
}
