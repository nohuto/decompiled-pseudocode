/*
 * XREFs of sub_18001F560 @ 0x18001F560
 * Callers:
 *     sub_18001DA88 @ 0x18001DA88 (sub_18001DA88.c)
 *     sub_18001DB7C @ 0x18001DB7C (sub_18001DB7C.c)
 *     sub_18001DC70 @ 0x18001DC70 (sub_18001DC70.c)
 *     sub_18001DD64 @ 0x18001DD64 (sub_18001DD64.c)
 *     sub_18001DE58 @ 0x18001DE58 (sub_18001DE58.c)
 *     sub_18001DF4C @ 0x18001DF4C (sub_18001DF4C.c)
 *     sub_18001E040 @ 0x18001E040 (sub_18001E040.c)
 *     sub_18001E134 @ 0x18001E134 (sub_18001E134.c)
 *     sub_18001E228 @ 0x18001E228 (sub_18001E228.c)
 *     sub_18001E31C @ 0x18001E31C (sub_18001E31C.c)
 *     sub_18001E410 @ 0x18001E410 (sub_18001E410.c)
 *     sub_18001E504 @ 0x18001E504 (sub_18001E504.c)
 *     sub_18001E5F8 @ 0x18001E5F8 (sub_18001E5F8.c)
 *     sub_18001E6EC @ 0x18001E6EC (sub_18001E6EC.c)
 *     sub_18001E7E0 @ 0x18001E7E0 (sub_18001E7E0.c)
 *     sub_18001E8D4 @ 0x18001E8D4 (sub_18001E8D4.c)
 *     sub_18001E9C8 @ 0x18001E9C8 (sub_18001E9C8.c)
 *     sub_1800B52BC @ 0x1800B52BC (sub_1800B52BC.c)
 *     sub_1800B53B0 @ 0x1800B53B0 (sub_1800B53B0.c)
 *     sub_1800B54A4 @ 0x1800B54A4 (sub_1800B54A4.c)
 *     sub_1800B5598 @ 0x1800B5598 (sub_1800B5598.c)
 *     sub_1800B568C @ 0x1800B568C (sub_1800B568C.c)
 *     sub_1800B5780 @ 0x1800B5780 (sub_1800B5780.c)
 *     sub_1800B5874 @ 0x1800B5874 (sub_1800B5874.c)
 *     sub_1800B5968 @ 0x1800B5968 (sub_1800B5968.c)
 * Callees:
 *     sub_18001EABC @ 0x18001EABC (sub_18001EABC.c)
 *     sub_18001ED8C @ 0x18001ED8C (sub_18001ED8C.c)
 */

__int64 __fastcall sub_18001F560(__int64 **a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_QWORD *)(v6 + 32) >= v7 )
    {
      v3 = (__int64 *)v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  while ( !*(_BYTE *)(v6 + 25) );
  if ( v3 == *a1 || v7 < v3[4] )
  {
LABEL_10:
    v11 = a3;
    v8 = (_QWORD *)sub_18001EABC((__int64)a1, (__int64)&unk_180149763, &v11);
    sub_18001ED8C(a1, &v10, v3, v8 + 4, v8);
    *(_QWORD *)a2 = v10;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
