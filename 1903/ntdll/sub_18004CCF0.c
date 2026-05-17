/*
 * XREFs of sub_18004CCF0 @ 0x18004CCF0
 * Callers:
 *     sub_18004C420 @ 0x18004C420 (sub_18004C420.c)
 *     sub_18004FB14 @ 0x18004FB14 (sub_18004FB14.c)
 * Callees:
 *     sub_18004CDC4 @ 0x18004CDC4 (sub_18004CDC4.c)
 *     sub_180084BBC @ 0x180084BBC (sub_180084BBC.c)
 */

__int64 __fastcall sub_18004CCF0(__int128 *a1, int a2)
{
  __int128 v2; // xmm0
  unsigned int v3; // ebx
  __int64 v5; // r8
  __int64 v6; // r8
  int v7; // eax
  __int128 v9; // [rsp+20h] [rbp-30h]
  _DWORD v10[3]; // [rsp+30h] [rbp-20h] BYREF
  int v11; // [rsp+3Ch] [rbp-14h]
  __int64 v12; // [rsp+40h] [rbp-10h]

  v2 = *a1;
  v3 = 0;
  v5 = 0LL;
  v11 = 0;
  v9 = v2;
  if ( BYTE3(v2) )
    v10[0] = BYTE3(v2) - 1;
  else
    v10[0] = -1;
  v10[1] = BYTE1(v2);
  v10[2] = BYTE2(v2);
  if ( (v2 & 8) != 0 )
  {
    v5 = 1LL;
    v11 = 1;
  }
  v12 = *((_QWORD *)&v2 + 1);
  if ( a2 )
  {
    v6 = 0x200000LL;
    if ( BYTE1(v2) == 3 )
      v6 = 0x40000000LL;
    v7 = sub_18004CDC4(&unk_180166AA8, v10, v6);
    if ( v7 == -1 )
    {
      return (unsigned int)-1073741670;
    }
    else
    {
      BYTE3(v9) = v7 + 1;
      *a1 = v9;
    }
  }
  else
  {
    sub_180084BBC(&unk_180166AA8, v10, v5);
  }
  return v3;
}
