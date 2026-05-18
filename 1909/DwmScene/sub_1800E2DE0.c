/*
 * XREFs of sub_1800E2DE0 @ 0x1800E2DE0
 * Callers:
 *     sub_1800E2D90 @ 0x1800E2D90 (sub_1800E2D90.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 * Callees:
 *     sub_180016A80 @ 0x180016A80 (sub_180016A80.c)
 *     sub_180087450 @ 0x180087450 (sub_180087450.c)
 *     sub_1800E2DE0 @ 0x1800E2DE0 (sub_1800E2DE0.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

void __fastcall sub_1800E2DE0(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  _QWORD *v7; // rbx
  _BYTE *v8; // rdx
  _QWORD *v9; // rbp
  _QWORD *i; // rbx
  _QWORD v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v11[0] = a2;
  v7 = (_QWORD *)a2;
  sub_180087450(a2);
  if ( (v7[56] & a3[66]) == a3[65] )
  {
    sub_180087450((__int64)v7);
    if ( (v7[56] & a3[64]) == a3[63] )
    {
      v8 = *(_BYTE **)(a4 + 8);
      if ( *(_BYTE **)(a4 + 16) == v8 )
      {
        sub_180016A80((const void **)a4, v8, v11);
        v7 = (_QWORD *)v11[0];
      }
      else
      {
        *(_QWORD *)v8 = v7;
        *(_QWORD *)(a4 + 8) += 8LL;
      }
    }
    sub_180087450((__int64)v7);
    v9 = (_QWORD *)v7[5];
    for ( i = (_QWORD *)v7[4]; i != v9; i += 2 )
      sub_1800E2DE0(a1, *i, a3, a4, v11[0], v11[1]);
  }
}
