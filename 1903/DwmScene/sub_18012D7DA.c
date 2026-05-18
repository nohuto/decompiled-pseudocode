/*
 * XREFs of sub_18012D7DA @ 0x18012D7DA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18012D7DA(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 88) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 88) &= ~1u;
    return std::wios::~wios<wchar_t,std::char_traits<wchar_t>>(*(_QWORD *)(a2 + 80) + 152LL);
  }
  return result;
}
