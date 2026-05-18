/*
 * XREFs of sub_18008F670 @ 0x18008F670
 * Callers:
 *     sub_180090F10 @ 0x180090F10 (sub_180090F10.c)
 * Callees:
 *     sub_18008F2F8 @ 0x18008F2F8 (sub_18008F2F8.c)
 *     sub_18008F33C @ 0x18008F33C (sub_18008F33C.c)
 */

__int64 __fastcall sub_18008F670(__int64 **a1, __int64 a2, unsigned __int16 *a3)
{
  __int64 *v3; // rbx
  __int64 v6; // rax
  unsigned __int16 v7; // dx
  unsigned __int16 *v8; // rax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = *a1;
  v6 = (*a1)[1];
  if ( *(_BYTE *)(v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *(_WORD *)(v6 + 28) >= v7 )
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
  if ( v3 == *a1 || v7 < *((_WORD *)v3 + 14) )
  {
LABEL_10:
    v11 = a3;
    v8 = (unsigned __int16 *)sub_18008F2F8(a1, (__int64)&unk_1801EB928, &v11);
    sub_18008F33C(a1, &v10, v3, v8 + 14, v8);
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
