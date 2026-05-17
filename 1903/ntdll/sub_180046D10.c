/*
 * XREFs of sub_180046D10 @ 0x180046D10
 * Callers:
 *     sub_180040830 @ 0x180040830 (sub_180040830.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_180044EDC @ 0x180044EDC (sub_180044EDC.c)
 *     sub_18006E63C @ 0x18006E63C (sub_18006E63C.c)
 *     RtlSetUserValueHeap @ 0x18006E6A0 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800EF550 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     sub_180046C60 @ 0x180046C60 (sub_180046C60.c)
 */

unsigned __int64 __fastcall sub_180046D10(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11[6]; // [rsp+20h] [rbp-18h] BYREF

  v7 = sub_180046C60(a1, a2, a3, v11);
  result = -1LL;
  if ( v7 != -1LL )
  {
    result = 0LL;
    if ( a4 )
      *a4 = v7;
    if ( v11[0] )
    {
      v9 = a2 + v7;
      v10 = v9 + 16;
      if ( (a3 & 0x10000000) == 0 )
        v10 = v9;
      return (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return result;
}
