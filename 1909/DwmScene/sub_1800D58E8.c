/*
 * XREFs of sub_1800D58E8 @ 0x1800D58E8
 * Callers:
 *     sub_1800D59C0 @ 0x1800D59C0 (sub_1800D59C0.c)
 * Callees:
 *     sub_1800636EC @ 0x1800636EC (sub_1800636EC.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800D59E0 @ 0x1800D59E0 (sub_1800D59E0.c)
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800D58E8(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  unsigned __int64 *v8; // rdx
  unsigned __int64 *v9; // r8
  unsigned __int64 *v10; // rcx
  bool v11; // cf
  _BYTE v13[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]
  __int64 v16; // [rsp+38h] [rbp-10h]

  v15 = -2LL;
  v16 = a1;
  sub_1800636EC(a1);
  sub_1800D59E0(a1, v13, a2);
  if ( v13[0] )
  {
    v6 = sub_1801098BC(*(_QWORD *)(a1 + 16 * (v14 + 4)), a3, 0LL);
    if ( v6 )
    {
      v7 = 4;
      if ( v6 > 0 )
      {
        if ( v6 <= 2 )
        {
          v7 = 1;
        }
        else if ( v6 == 3 )
        {
          v7 = 0;
        }
      }
      goto LABEL_16;
    }
LABEL_15:
    v7 = 3;
    goto LABEL_16;
  }
  v8 = (unsigned __int64 *)(a1 + 144);
  v9 = (unsigned __int64 *)(a1 + 144);
  if ( a1 + 144 != a1 + 184 )
  {
    while ( ++v8 != (unsigned __int64 *)(a1 + 184) )
    {
      v10 = v8;
      if ( *v8 >= *v9 )
        v10 = v9;
      v9 = v10;
    }
  }
  v11 = a2 < *v9;
  v7 = 2;
  if ( !v11 )
    goto LABEL_15;
LABEL_16:
  sub_180063778(a1);
  return v7;
}
