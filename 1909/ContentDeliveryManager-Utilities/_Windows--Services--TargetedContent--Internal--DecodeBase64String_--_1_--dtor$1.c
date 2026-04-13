/*
 * XREFs of _Windows::Services::TargetedContent::Internal::DecodeBase64String_::_1_::dtor$1 @ 0x1800D04D6
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180004C04 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::DecodeBase64String_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::Wrappers::HString::~HString(*(HSTRING **)(a2 + 64));
  }
}
