/*
 * XREFs of sub_180077DDC @ 0x180077DDC
 * Callers:
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_180063468 @ 0x180063468 (sub_180063468.c)
 *     sub_180063780 @ 0x180063780 (sub_180063780.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180077DDC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  sub_180063468(a1 + 112, &v6);
  v4 = 0;
  if ( (unsigned int)sub_180077C8C(a1) )
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v4) != *a2 )
    {
      if ( ++v4 >= (unsigned int)sub_180077C8C(a1) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = -1;
  }
  if ( (_BYTE)v7 )
    sub_180063780(v6);
  return v4;
}
