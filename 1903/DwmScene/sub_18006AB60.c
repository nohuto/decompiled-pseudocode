/*
 * XREFs of sub_18006AB60 @ 0x18006AB60
 * Callers:
 *     sub_1800965E0 @ 0x1800965E0 (sub_1800965E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006AB60(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // r10d
  __int64 v7; // r9
  int v8; // eax
  _DWORD v10[15]; // [rsp+30h] [rbp-21h]
  __int64 v11; // [rsp+6Ch] [rbp+1Bh]
  __int64 v12; // [rsp+74h] [rbp+23h]
  int v13; // [rsp+7Ch] [rbp+2Bh]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  int v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+8Ch] [rbp+3Bh]
  int v18; // [rsp+90h] [rbp+3Fh]

  v5 = a5;
  if ( !a5 && *(_QWORD *)a2 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)a2 + 112LL);
    if ( v7 )
      v8 = *(_DWORD *)(v7 + 20);
    else
      v8 = 0;
    v10[0] = 0;
    v10[1] = 4;
    v10[2] = 4;
    v10[3] = 4;
    v10[5] = 12;
    v10[6] = 16;
    v10[10] = 12;
    v10[11] = 16;
    v10[13] = 1;
    v11 = 0x400000004LL;
    v12 = 0x400000004LL;
    v17 = 1;
    v10[4] = 8;
    v10[7] = 4;
    v10[8] = 4;
    v10[9] = 8;
    v10[12] = 2;
    v10[14] = 2;
    v13 = 2;
    v14 = 4;
    v15 = 8;
    v16 = 4;
    v18 = 2;
    v5 = v10[v8];
  }
  return sub_1800DEDB8((unsigned int)*(_QWORD *)(a1 + 96) + 64, a2, a3, a4, v5);
}
