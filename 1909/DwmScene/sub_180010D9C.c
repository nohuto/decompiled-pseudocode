/*
 * XREFs of sub_180010D9C @ 0x180010D9C
 * Callers:
 *     sub_1800C01E0 @ 0x1800C01E0 (sub_1800C01E0.c)
 * Callees:
 *     sub_180087524 @ 0x180087524 (sub_180087524.c)
 */

unsigned __int64 __fastcall sub_180010D9C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 result; // rax

  sub_180087524(a1);
  *(_DWORD *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 148) = a2[1];
  *(_DWORD *)(a1 + 152) = a2[2];
  v4 = _InterlockedIncrement64(&qword_180259748);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
