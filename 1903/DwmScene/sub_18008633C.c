/*
 * XREFs of sub_18008633C @ 0x18008633C
 * Callers:
 *     sub_1800863AC @ 0x1800863AC (sub_1800863AC.c)
 *     sub_180086838 @ 0x180086838 (sub_180086838.c)
 *     sub_1800C460C @ 0x1800C460C (sub_1800C460C.c)
 *     sub_1800C7C20 @ 0x1800C7C20 (sub_1800C7C20.c)
 * Callees:
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 */

unsigned __int64 __fastcall sub_18008633C(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  sub_180087414(a1);
  *(_DWORD *)(a1 + 156) = *a2;
  *(_DWORD *)(a1 + 160) = a2[1];
  *(_DWORD *)(a1 + 164) = a2[2];
  *(_DWORD *)(a1 + 168) = a2[3];
  v4 = _InterlockedIncrement64(&qword_180258748);
  *(_QWORD *)(a1 + 208) = v4;
  result = *(_QWORD *)(a1 + 216);
  if ( v4 >= result )
    result = v4;
  *(_QWORD *)(a1 + 216) = result;
  return result;
}
