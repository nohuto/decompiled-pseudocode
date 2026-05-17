/*
 * XREFs of sub_1800FECFC @ 0x1800FECFC
 * Callers:
 *     sub_1800FD5C0 @ 0x1800FD5C0 (sub_1800FD5C0.c)
 * Callees:
 *     sub_180100F24 @ 0x180100F24 (sub_180100F24.c)
 */

__int64 __fastcall sub_1800FECFC(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // rax
  int v6; // [rsp+58h] [rbp+10h]

  v2 = 4;
  if ( a2 >= 1 )
    v2 = a2;
  v3 = 0LL;
  if ( a1 )
  {
    if ( v2 >= *(unsigned __int16 *)(a1 + 4) )
    {
      v4 = sub_180100F24(a1, 16, v2, 12);
      v3 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_QWORD *)(v4 + 8) = v4 + 16;
        *(_WORD *)(v4 + 6) = v2;
      }
    }
  }
  return v3;
}
