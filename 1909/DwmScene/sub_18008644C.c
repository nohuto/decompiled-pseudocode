/*
 * XREFs of sub_18008644C @ 0x18008644C
 * Callers:
 *     sub_1800864BC @ 0x1800864BC (sub_1800864BC.c)
 *     sub_180086948 @ 0x180086948 (sub_180086948.c)
 *     sub_1800C471C @ 0x1800C471C (sub_1800C471C.c)
 *     sub_1800C7D30 @ 0x1800C7D30 (sub_1800C7D30.c)
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 */

unsigned __int64 __fastcall sub_18008644C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_180087524(a1);
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_180259748);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
