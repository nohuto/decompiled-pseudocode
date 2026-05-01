/*
 * XREFs of ??$?0$0ICE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0ICE@G@Z @ 0x18017BB18
 * Callers:
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x180052200 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     _lambda_e5434191a426e1e6c5461e9f90ae0298_::operator() @ 0x1802AE2C4 (_lambda_e5434191a426e1e6c5461e9f90ae0298_--operator().c)
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x1800403FC (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 */

HSTRING_HEADER *__fastcall Microsoft::WRL::Wrappers::HStringReference::HStringReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString)
{
  unsigned __int64 v4; // rbx
  UINT32 v5; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( sourceString[v4] );
  if ( v4 > 0xFFFFFFFF )
  {
    RaiseException(0x80070216, 1u, 0, 0LL);
    JUMPOUT(0x18017BB85LL);
  }
  v5 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v4);
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(hstringHeader, sourceString, v5, v4);
  return hstringHeader;
}
