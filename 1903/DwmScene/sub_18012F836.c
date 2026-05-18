/*
 * XREFs of sub_18012F836 @ 0x18012F836
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A2908 @ 0x1800A2908 (sub_1800A2908.c)
 */

__int64 __fastcall sub_18012F836(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 52) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 52) &= ~1u;
    return sub_1800A2908(*(_QWORD ***)(a2 + 64));
  }
  return result;
}
