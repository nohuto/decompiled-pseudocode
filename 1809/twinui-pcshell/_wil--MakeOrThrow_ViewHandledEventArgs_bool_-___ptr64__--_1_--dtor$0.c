/*
 * XREFs of _wil::MakeOrThrow_ViewHandledEventArgs_bool_&___ptr64__::_1_::dtor$0 @ 0x18024E922
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1801C2170 (--1-$ComPtr@VFrameworkViewTypeSetEventArgs@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeOrThrow_ViewHandledEventArgs_bool_____ptr64__::_1_::dtor_0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 32) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<FrameworkViewTypeSetEventArgs>::~ComPtr<FrameworkViewTypeSetEventArgs>(*(__int64 **)(a2 + 64));
  }
  return result;
}
