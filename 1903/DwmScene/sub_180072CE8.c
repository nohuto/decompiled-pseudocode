/*
 * XREFs of sub_180072CE8 @ 0x180072CE8
 * Callers:
 *     sub_18007C5F0 @ 0x18007C5F0 (sub_18007C5F0.c)
 *     sub_1800E2580 @ 0x1800E2580 (sub_1800E2580.c)
 * Callees:
 *     sub_18006F2AC @ 0x18006F2AC (sub_18006F2AC.c)
 *     sub_180071640 @ 0x180071640 (sub_180071640.c)
 */

__int64 __fastcall sub_180072CE8(__int64 **a1, __int64 a2, unsigned __int64 *a3)
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
    v8 = sub_18006F2AC(a1, (__int64)&unk_1801DFD04, &v11);
    sub_180071640((__int64 ***)a1, &v10, v3, v8 + 4, v8);
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
