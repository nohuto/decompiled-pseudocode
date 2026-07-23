/*
 * XREFs of sub_1800DFBC4 @ 0x1800DFBC4
 * Callers:
 *     sub_1800D16A0 @ 0x1800D16A0 (sub_1800D16A0.c)
 * Callees:
 *     sub_18001E620 @ 0x18001E620 (sub_18001E620.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_18007025C @ 0x18007025C (sub_18007025C.c)
 */

void __fastcall sub_1800DFBC4(unsigned __int64 BaseAddress, int a2, char *a3, char *a4)
{
  int v5; // edi
  __int64 v7; // rbp
  __int64 v8; // rsi
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int64 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp+8h]

  v5 = 0;
  if ( BaseAddress < *((_QWORD *)&xmmword_18017A4E0 + 1)
    || BaseAddress >= *((_QWORD *)&xmmword_18017A4E0 + 1) + (unsigned __int64)(unsigned int)qword_18017A4F0 )
  {
    v7 = sub_18001E620(BaseAddress, (signed __int64)&v9, a3, a4);
  }
  else
  {
    v7 = xmmword_18017A4E0;
    v9 = xmmword_18017A4E0;
    v10 = qword_18017A4F0;
  }
  if ( v7 )
  {
    v8 = *((_QWORD *)&v9 + 1);
    v5 = HIDWORD(v10);
  }
  else
  {
    v8 = v11;
  }
  sub_180035F18(0);
  *(_QWORD *)&xmmword_18017A4E0 = v7;
  HIDWORD(qword_18017A4F0) = v5;
  *((_QWORD *)&xmmword_18017A4E0 + 1) = v8;
  LODWORD(qword_18017A4F0) = a2;
  sub_18007025C(BaseAddress);
  sub_180035F18(1);
}
