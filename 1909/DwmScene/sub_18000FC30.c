/*
 * XREFs of sub_18000FC30 @ 0x18000FC30
 * Callers:
 *     sub_180011250 @ 0x180011250 (sub_180011250.c)
 *     sub_18003FF20 @ 0x18003FF20 (sub_18003FF20.c)
 *     sub_180075C4C @ 0x180075C4C (sub_180075C4C.c)
 *     sub_180076620 @ 0x180076620 (sub_180076620.c)
 *     sub_1800824E8 @ 0x1800824E8 (sub_1800824E8.c)
 *     sub_180082640 @ 0x180082640 (sub_180082640.c)
 *     sub_1800B3AC0 @ 0x1800B3AC0 (sub_1800B3AC0.c)
 *     sub_1800C33C0 @ 0x1800C33C0 (sub_1800C33C0.c)
 *     sub_1800CB070 @ 0x1800CB070 (sub_1800CB070.c)
 *     sub_1800DA7E4 @ 0x1800DA7E4 (sub_1800DA7E4.c)
 *     sub_1800DB880 @ 0x1800DB880 (sub_1800DB880.c)
 *     sub_1800DD618 @ 0x1800DD618 (sub_1800DD618.c)
 *     sub_1800EC0B0 @ 0x1800EC0B0 (sub_1800EC0B0.c)
 *     sub_1800FC8A4 @ 0x1800FC8A4 (sub_1800FC8A4.c)
 *     sub_18010BA58 @ 0x18010BA58 (sub_18010BA58.c)
 *     sub_18010BC54 @ 0x18010BC54 (sub_18010BC54.c)
 *     sub_18010F964 @ 0x18010F964 (sub_18010F964.c)
 *     sub_180114670 @ 0x180114670 (sub_180114670.c)
 *     sub_18011E8C0 @ 0x18011E8C0 (sub_18011E8C0.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18000F60C @ 0x18000F60C (sub_18000F60C.c)
 *     sub_1800110A4 @ 0x1800110A4 (sub_1800110A4.c)
 */

unsigned __int64 __fastcall sub_18000FC30(char **a1, char *a2, _QWORD *a3)
{
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdi
  _QWORD *v12; // r10
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // rcx
  __int64 v16; // rax
  char *v17; // r8
  char *v18; // rdx
  _QWORD *v19; // rcx
  signed __int64 v20; // rdx
  _QWORD *v21; // r8
  signed __int64 v22; // rdx
  unsigned __int64 v23; // rbx
  char *v25; // [rsp+20h] [rbp-58h]

  v6 = a2 - *a1;
  v7 = (a1[1] - *a1) >> 4;
  if ( v7 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<void *>::_Xlen();
  v8 = v7 + 1;
  v9 = (a1[2] - *a1) >> 4;
  v10 = v9 >> 1;
  if ( v9 <= 0xFFFFFFFFFFFFFFFLL - (v9 >> 1) )
  {
    v11 = v10 + v9;
    if ( v10 + v9 < v8 )
      v11 = v8;
  }
  else
  {
    v11 = v8;
  }
  v12 = sub_18000F60C((__int64)a1, v11);
  v13 = v6 & 0xFFFFFFFFFFFFFFF0uLL;
  v14 = (_QWORD *)((char *)v12 + v13);
  v15 = (_QWORD *)((char *)v12 + v13 + 16);
  *v14 = 0LL;
  v14[1] = 0LL;
  v16 = a3[1];
  if ( v16 )
    _InterlockedIncrement((volatile signed __int32 *)(v16 + 8));
  *v14 = *a3;
  v14[1] = a3[1];
  v25 = (char *)v12 + v13;
  v17 = a1[1];
  v18 = *a1;
  if ( a2 == v17 )
  {
    if ( v18 != v17 )
    {
      v19 = v12;
      v20 = v18 - (char *)v12;
      do
      {
        *v19 = 0LL;
        v19[1] = 0LL;
        *v19 = *(_QWORD *)((char *)v19 + v20);
        v19[1] = *(_QWORD *)((char *)v19 + v20 + 8);
        *(_QWORD *)((char *)v19 + v20) = 0LL;
        *(_QWORD *)((char *)v19 + v20 + 8) = 0LL;
        v19 += 2;
      }
      while ( (char *)v19 + v20 != v17 );
    }
  }
  else
  {
    if ( v18 != a2 )
    {
      v21 = v12;
      v22 = v18 - (char *)v12;
      do
      {
        *v21 = 0LL;
        v21[1] = 0LL;
        *v21 = *(_QWORD *)((char *)v21 + v22);
        v21[1] = *(_QWORD *)((char *)v21 + v22 + 8);
        *(_QWORD *)((char *)v21 + v22) = 0LL;
        *(_QWORD *)((char *)v21 + v22 + 8) = 0LL;
        v21 += 2;
      }
      while ( (char *)v21 + v22 != a2 );
      v17 = a1[1];
    }
    v25 = (char *)v12;
    if ( a2 != v17 )
    {
      v23 = &a2[-v13] - (char *)v12;
      do
      {
        *v15 = 0LL;
        v15[1] = 0LL;
        *v15 = *(_QWORD *)((char *)v15 + v23 - 16);
        v15[1] = *(_QWORD *)((char *)v15 + v23 - 8);
        *(_QWORD *)((char *)v15 + v23 - 16) = 0LL;
        *(_QWORD *)((char *)v15 + v23 - 8) = 0LL;
        v15 += 2;
      }
      while ( (char *)v15 + v23 - 16 != v17 );
    }
  }
  sub_1800110A4(a1, v12, v8, v11, v25, v11, a1, (char *)v12 + v13 + 16, v12, -2LL);
  return (unsigned __int64)&(*a1)[v13];
}
