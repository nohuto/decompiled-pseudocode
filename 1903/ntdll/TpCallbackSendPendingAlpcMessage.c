/*
 * XREFs of TpCallbackSendPendingAlpcMessage @ 0x18008BEE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007EB64 @ 0x18007EB64 (sub_18007EB64.c)
 *     sub_18010EFC8 @ 0x18010EFC8 (sub_18010EFC8.c)
 */

__int64 __fastcall TpCallbackSendPendingAlpcMessage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a1 && (*(_BYTE *)(a1 + 228) & 1) != 0 )
  {
    result = sub_18007EB64(a1);
    *(_DWORD *)(a1 + 228) &= ~1u;
  }
  else
  {
    sub_18010EFC8(a1, a2, a3);
    return 3221225485LL;
  }
  return result;
}
