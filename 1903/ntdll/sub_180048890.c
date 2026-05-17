/*
 * XREFs of sub_180048890 @ 0x180048890
 * Callers:
 *     sub_180040320 @ 0x180040320 (sub_180040320.c)
 *     sub_180040B50 @ 0x180040B50 (sub_180040B50.c)
 *     sub_1800449D0 @ 0x1800449D0 (sub_1800449D0.c)
 *     sub_180051668 @ 0x180051668 (sub_180051668.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180048890(__int64 a1, __int64 a2, __int64 a3, BOOL *a4)
{
  __int64 v5; // r8
  int v6; // r9d
  __int64 v7; // rcx
  __int16 v8; // ax
  int v9; // r8d
  BOOL v10; // edx
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v5 = a2 - 16;
  v6 = *(_DWORD *)(a1 + 176) & 1;
  if ( v6 && (a2 & 0xFFF) == 0 )
    v5 = a2 - 32;
  if ( ((HIDWORD(v5) ^ HIDWORD(qword_180163540) ^ HIDWORD(*(_QWORD *)v5)) & 0xFF0000) == 0 )
    return -1LL;
  v7 = 16 * (WORD1(qword_180163540) ^ WORD1(v5) ^ *(unsigned __int16 *)(v5 + 2)) - 16;
  if ( v6 && ((v5 + 32) & 0xFFF) == 0 )
    v7 -= 16LL;
  if ( (*(_DWORD *)(v5 + 8) & 0x100) != 0 )
  {
    v8 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    v9 = v8 & 0x4000;
    if ( (v8 & 0x4000) != 0 )
    {
      _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
      v8 = *(_WORD *)((unsigned int)v7 + a2 - 2);
    }
    v10 = v9 != 0;
    if ( v8 < 0 )
      --v7;
    else
      v7 -= v8 & 0x1FFF;
  }
  else
  {
    v10 = 0;
  }
  if ( a4 )
    *a4 = v10;
  return v7;
}
