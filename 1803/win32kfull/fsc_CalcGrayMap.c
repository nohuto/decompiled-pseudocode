/*
 * XREFs of fsc_CalcGrayMap @ 0x1C02B613C
 * Callers:
 *     fs_ContourScan @ 0x1C02B013C (fs_ContourScan.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     fsc_CalcGrayRow @ 0x1C02D0FD0 (fsc_CalcGrayRow.c)
 */

__int64 __fastcall fsc_CalcGrayMap(__int16 *a1, __int16 *a2, __int16 a3)
{
  __int64 v6; // rdi
  __int16 v7; // bx
  __int16 v8; // dx
  __int64 v9; // r9
  __int16 v10; // r14
  __int16 v11; // si
  __int64 v12; // rax
  __int16 v13; // dx
  __int16 v14; // cx
  __int64 v15; // rdi
  __int64 v16; // r15
  __int16 i; // r14
  __int64 result; // rax
  _QWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF
  __int16 v20; // [rsp+30h] [rbp-58h]
  __int16 v21; // [rsp+32h] [rbp-56h]
  __int16 v22; // [rsp+34h] [rbp-54h]
  __int64 v23; // [rsp+38h] [rbp-50h]
  __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  __int64 v26; // [rsp+50h] [rbp-38h]

  memset(*((void **)a2 + 5), 0, (*a2 * (a2[1] - a2[2])) & 0xFFFFFFFC);
  v6 = *((_QWORD *)a1 + 5);
  v7 = a3;
  v8 = a1[1];
  v9 = *((_QWORD *)a2 + 5);
  v10 = a2[1];
  v11 = v8 - a1[2];
  v24 = v6 + *((int *)a1 + 9);
  v12 = v9 + *((int *)a2 + 9);
  v21 = a3;
  v23 = v6;
  v25 = v9;
  v26 = v12;
  v13 = v8 - a3 * v10;
  if ( v13 >= 0 )
  {
    v6 += *a1 * v13;
    v11 -= v13;
  }
  else
  {
    v7 = a3 + v13;
  }
  v14 = a2[6];
  v20 = v14 - a2[4];
  v15 = (((unsigned __int16)(a3 * v14 - a1[4]) - 1LL) >> 3) + v6;
  v22 = 7 - ((a3 * v14 - a1[4] - 1) & 7);
  v16 = v9 + v20 - 1;
  for ( i = v10 - 1; i >= a2[2]; --i )
  {
    for ( v19[1] = v16; v7; --v7 )
    {
      if ( !v11 )
        break;
      v19[0] = v15;
      result = fsc_CalcGrayRow(v19);
      if ( (_DWORD)result )
        return result;
      v15 += *a1;
      --v11;
    }
    v7 = a3;
    v16 += *a2;
  }
  return 0LL;
}
