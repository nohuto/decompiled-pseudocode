/*
 * XREFs of sub_18007BDBC @ 0x18007BDBC
 * Callers:
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180050D98 @ 0x180050D98 (sub_180050D98.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18007BDBC(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = *(unsigned __int16 *)(a1 + 34);
  if ( *(_WORD *)(a1 + 32) == (_WORD)result )
  {
    *(_QWORD *)(a1 + 16) = a2;
  }
  else
  {
    v3 = _InterlockedExchange64((volatile __int64 *)(a1 + 16), a2);
    if ( (v3 & 1) != 0 )
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 32), v3 >> 1);
  }
  return result;
}
