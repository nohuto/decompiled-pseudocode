/*
 * XREFs of GetMessageWindow @ 0x1C0111020
 * Callers:
 *     xxxCreateWindowEx @ 0x1C003DE94 (xxxCreateWindowEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMessageWindow(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = 0LL;
  if ( v1 )
    return *(_QWORD *)(v1 + 104);
  return result;
}
