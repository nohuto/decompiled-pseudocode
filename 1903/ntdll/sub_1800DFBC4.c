/*
 * XREFs of sub_1800DFBC4 @ 0x1800DFBC4
 * Callers:
 *     sub_1800D16A0 @ 0x1800D16A0 (sub_1800D16A0.c)
 * Callees:
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_18007025C @ 0x18007025C (sub_18007025C.c)
 */

signed __int64 __fastcall sub_1800DFBC4(unsigned __int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int128 v10; // [rsp+20h] [rbp-38h] BYREF
  __int64 v11; // [rsp+30h] [rbp-28h]
  __int64 v12; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( a1 < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || a1 >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    v7 = sub_18001E620(a1, (signed __int64)&v10, a3, a4);
  }
  else
  {
    v7 = xmmword_18017A4E0;
    v10 = xmmword_18017A4E0;
    v11 = qword_18017A4F0;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v10 + 1);
    v5 = HIDWORD(v11);
  }
  else
  {
    v8 = v12;
  }
  sub_180035F18(0);
  *(_QWORD *)&xmmword_18017A4E0 = v7;
  HIDWORD(qword_18017A4F0) = v5;
  *((_QWORD *)&xmmword_18017A4E0 + 1) = v8;
  LODWORD(qword_18017A4F0) = a2;
  sub_18007025C(a1);
  return sub_180035F18(1);
}
