/*
 * XREFs of sub_180077CCC @ 0x180077CCC
 * Callers:
 *     sub_180076608 @ 0x180076608 (sub_180076608.c)
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 * Callees:
 *     sub_180063358 @ 0x180063358 (sub_180063358.c)
 *     sub_180063670 @ 0x180063670 (sub_180063670.c)
 *     sub_180077B7C @ 0x180077B7C (sub_180077B7C.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180077CCC(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  __int64 v6; // [rsp+28h] [rbp-20h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v6 = 0LL;
  v7 = 0LL;
  sub_180063358(a1 + 112, &v6);
  v4 = 0;
  if ( (unsigned int)sub_180077B7C(a1) )
  {
    while ( *(_QWORD *)(*(_QWORD *)(a1 + 88) + 16LL * v4) != *a2 )
    {
      if ( ++v4 >= (unsigned int)sub_180077B7C(a1) )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v4 = -1;
  }
  if ( (_BYTE)v7 )
    sub_180063670(v6);
  return v4;
}
