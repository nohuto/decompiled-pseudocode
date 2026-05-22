/*
 * XREFs of _DWMInputRouter::Initialize_::_1_::dtor$35 @ 0x18003CA3C
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UICursor@@@WRL@Microsoft@@QEAA@XZ @ 0x18004E728 (--1-$ComPtr@UICursor@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall DWMInputRouter::Initialize_::_1_::dtor_35(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 712) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 712) &= ~1u;
    return Microsoft::WRL::ComPtr<ICursor>::~ComPtr<ICursor>(a2 + 264);
  }
  return result;
}
