/*
 * XREFs of sub_18012F946 @ 0x18012F946
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A2A18 @ 0x1800A2A18 (sub_1800A2A18.c)
 */

__int64 __fastcall sub_18012F946(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_1800A2A18(*(_QWORD ***)(a2 + 64));
  }
  return result;
}
