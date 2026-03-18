/*
 * XREFs of CmpInitializeDiscardReplaceContext @ 0x1408331BC
 * Callers:
 *     CmDeleteLayeredKey @ 0x140280714 (CmDeleteLayeredKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInitializeDiscardReplaceContext(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)a1 = 0LL;
  *(_DWORD *)(a1 + 12) = 0;
  *(_QWORD *)(a1 + 24) = 0LL;
  result = a1 + 16;
  *(_DWORD *)(a1 + 8) = -1073741823;
  *(_QWORD *)(a1 + 24) = a1 + 16;
  *(_QWORD *)(a1 + 16) = a1 + 16;
  return result;
}
