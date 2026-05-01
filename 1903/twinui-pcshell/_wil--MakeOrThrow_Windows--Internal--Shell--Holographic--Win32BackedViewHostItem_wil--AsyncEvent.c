/*
 * XREFs of _wil::MakeOrThrow_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x180218896
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18020D124 (--1-$ComPtr@VWin32BackedViewHostItem@Holographic@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_Windows::Internal::Shell::Holographic::Win32BackedViewHostItem_wil::AsyncEventSerialInvocationContextToken____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>::~ComPtr<Windows::Internal::Shell::Holographic::Win32BackedViewHostItem>(*(__int64 **)(a2 + 64));
  }
  return result;
}
