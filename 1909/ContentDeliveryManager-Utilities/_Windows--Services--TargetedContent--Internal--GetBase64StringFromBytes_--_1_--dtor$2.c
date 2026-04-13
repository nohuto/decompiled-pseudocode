/*
 * XREFs of _Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes_::_1_::dtor$2 @ 0x1800D0498
 * Callers:
 *     <none>
 * Callees:
 *     ??1HString@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x180004C04 (--1HString@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

void __fastcall Windows::Services::TargetedContent::Internal::GetBase64StringFromBytes_::_1_::dtor_2(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::Wrappers::HString::~HString(*(HSTRING **)(a2 + 112));
  }
}
