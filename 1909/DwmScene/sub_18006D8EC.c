/*
 * XREFs of sub_18006D8EC @ 0x18006D8EC
 * Callers:
 *     sub_180021C80 @ 0x180021C80 (sub_180021C80.c)
 *     sub_180022370 @ 0x180022370 (sub_180022370.c)
 * Callees:
 *     sub_18009EC2C @ 0x18009EC2C (sub_18009EC2C.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     j_??2@YAPEAX_K@Z @ 0x1801266C0 (j_--2@YAPEAX_K@Z.c)
 */

void *__fastcall sub_18006D8EC(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 v4; // rcx
  float *v7; // rax
  void *v8; // rcx
  int v9; // esi
  int v10; // ebp
  int v12; // [rsp+38h] [rbp+10h] BYREF
  int v13; // [rsp+3Ch] [rbp+14h]

  v4 = *(_QWORD *)(a3 + 136);
  if ( v4 )
  {
    v7 = (float *)sub_18009EC2C(v4, &v12);
  }
  else
  {
    v12 = 0;
    v7 = (float *)&v12;
    v13 = 0;
  }
  v8 = *(void **)a2;
  v9 = (int)*v7;
  v10 = (int)v7[1];
  if ( !*(_QWORD *)a2
    || a4 != *(_DWORD *)(a2 + 16)
    || v9 != *(_DWORD *)(a2 + 8)
    || v10 != *(_DWORD *)(a2 + 12)
    || *(_DWORD *)(a2 + 20) != 1 )
  {
    j_j__o_free(v8);
    v8 = operator new(a4);
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 12) = v10;
    *(_DWORD *)(a2 + 16) = a4;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v8;
}
