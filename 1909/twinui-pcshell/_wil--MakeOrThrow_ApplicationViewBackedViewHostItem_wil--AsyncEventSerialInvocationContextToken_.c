/*
 * XREFs of _wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x180237C2A
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x180237D14 (--1-$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::~ComPtr<ApplicationViewBackedViewHostItem>(*(_QWORD *)(a2 + 64));
  }
  return result;
}
