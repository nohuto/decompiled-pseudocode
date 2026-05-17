/*
 * XREFs of sub_18006E63C @ 0x18006E63C
 * Callers:
 *     RtlGetUserInfoHeap @ 0x18006E330 (RtlGetUserInfoHeap.c)
 * Callees:
 *     sub_180046D10 @ 0x180046D10 (sub_180046D10.c)
 */

__int64 __fastcall sub_18006E63C(__int64 a1, unsigned __int64 a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 v6; // rax

  v6 = sub_180046D10(a1, a2, *(_DWORD *)(a1 + 20) | a3, 0LL);
  if ( v6 == -1LL )
    return 0LL;
  if ( a4 && v6 )
    *a4 = *(_QWORD *)(v6 + 8);
  if ( a5 )
  {
    if ( v6 )
      *a5 = *(unsigned __int8 *)(v6 + 2) >> 4 << 8;
    else
      *a5 = 0;
  }
  return 1LL;
}
