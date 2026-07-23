/*
 * XREFs of MiRemoveVad @ 0x1402C5310
 * Callers:
 *     MiRemovePlaceholderVad @ 0x1402C50AC (MiRemovePlaceholderVad.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x140037250 (RtlAvlRemoveNode.c)
 *     MiVadMapsLargeImage @ 0x140074A00 (MiVadMapsLargeImage.c)
 */

__int64 __fastcall MiRemoveVad(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax

  v2 = (_QWORD *)(a2 + 1576);
  RtlAvlRemoveNode((unsigned __int64 *)(a2 + 1576), (unsigned __int64 *)a1);
  if ( *(_QWORD *)(a2 + 1584) == a1 )
    *(_QWORD *)(a2 + 1584) = *v2;
  --*(_QWORD *)(a2 + 1592);
  result = *(_DWORD *)(a1 + 48) & 7;
  *(_QWORD *)(a1 + 16) = -2LL;
  if ( (_BYTE)result == 5 || (result = MiVadMapsLargeImage(a1), (_DWORD)result) )
    --*(_DWORD *)(a2 + 1708);
  return result;
}
