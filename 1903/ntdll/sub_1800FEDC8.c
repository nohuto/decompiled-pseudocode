/*
 * XREFs of sub_1800FEDC8 @ 0x1800FEDC8
 * Callers:
 *     sub_1800FE350 @ 0x1800FE350 (sub_1800FE350.c)
 * Callees:
 *     sub_180100F24 @ 0x180100F24 (sub_180100F24.c)
 */

__int64 __fastcall sub_1800FEDC8(__int64 a1, int a2)
{
  __int64 v2; // r8
  int v3; // ebx
  __int64 v4; // rax
  int v6; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  v3 = 4;
  if ( a2 >= 1 )
    v3 = a2;
  if ( a1 )
  {
    if ( v3 >= *(unsigned __int16 *)(a1 + 6) )
    {
      v4 = sub_180100F24(a1, 24, v3, 28);
      v2 = v4;
      if ( v4 )
      {
        *(_DWORD *)v4 = v6;
        *(_QWORD *)(v4 + 16) = v4 + 24;
        *(_WORD *)(v4 + 4) = v3;
      }
    }
  }
  return v2;
}
