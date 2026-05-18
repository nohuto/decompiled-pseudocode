/*
 * XREFs of sub_1800FC3F8 @ 0x1800FC3F8
 * Callers:
 *     sub_1800FBFB4 @ 0x1800FBFB4 (sub_1800FBFB4.c)
 * Callees:
 *     sub_1800FB4BC @ 0x1800FB4BC (sub_1800FB4BC.c)
 *     sub_1800FB600 @ 0x1800FB600 (sub_1800FB600.c)
 */

__int64 __fastcall sub_1800FC3F8(float a1, float a2, char a3, int a4, __int64 *a5, __int64 *a6, __int64 *a7)
{
  float v8; // xmm11_4
  float v9; // xmm6_4
  int v10; // xmm9_4
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rdx
  float v14; // eax
  __int64 v15; // rdx
  __int64 result; // rax
  char *v17; // rdx
  __int64 v18; // [rsp+28h] [rbp-81h] BYREF
  __int64 v19; // [rsp+30h] [rbp-79h] BYREF
  float v20; // [rsp+38h] [rbp-71h]
  __int64 v21; // [rsp+40h] [rbp-69h] BYREF
  unsigned int v22; // [rsp+48h] [rbp-61h]

  v8 = (float)a4;
  v9 = (float)(a1 + a1) / (float)a4;
  if ( a3 )
    v10 = -1082130432;
  else
    v10 = 1065353216;
  v11 = 0;
  do
  {
    v12 = 0;
    do
    {
      v13 = a5[1];
      *((float *)&v19 + 1) = a2;
      v20 = (float)-(float)((float)v11 * v9) - (float)-a1;
      *(float *)&v19 = (float)((float)v12 * v9) - a1;
      if ( a5[2] == v13 )
      {
        sub_1800FB600(a5, v13, (__int64)&v19);
      }
      else
      {
        v14 = v20;
        *(_QWORD *)v13 = v19;
        *(float *)(v13 + 8) = v14;
        a5[1] += 12LL;
      }
      LODWORD(v21) = 0;
      v22 = 0;
      v15 = a6[1];
      HIDWORD(v21) = v10;
      if ( a6[2] == v15 )
      {
        result = sub_1800FB600(a6, v15, (__int64)&v21);
      }
      else
      {
        result = v22;
        *(_QWORD *)v15 = v21;
        *(_DWORD *)(v15 + 8) = result;
        a6[1] += 12LL;
      }
      v17 = (char *)a7[1];
      *((float *)&v18 + 1) = (float)v11 / v8;
      *(float *)&v18 = (float)v12 / v8;
      if ( (char *)a7[2] == v17 )
      {
        result = sub_1800FB4BC(a7, v17, &v18);
      }
      else
      {
        *(_QWORD *)v17 = v18;
        a7[1] += 8LL;
      }
      ++v12;
    }
    while ( v12 <= (unsigned int)a4 );
    ++v11;
  }
  while ( v11 <= (unsigned int)a4 );
  return result;
}
