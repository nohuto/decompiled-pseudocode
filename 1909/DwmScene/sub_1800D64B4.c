/*
 * XREFs of sub_1800D64B4 @ 0x1800D64B4
 * Callers:
 *     sub_1800D66B8 @ 0x1800D66B8 (sub_1800D66B8.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5F8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800666D8 @ 0x1800666D8 (sub_1800666D8.c)
 *     sub_180067020 @ 0x180067020 (sub_180067020.c)
 *     sub_1800694D4 @ 0x1800694D4 (sub_1800694D4.c)
 *     sub_180069A60 @ 0x180069A60 (sub_180069A60.c)
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     memset @ 0x1801272D8 (memset.c)
 */

// Hidden C++ exception states: #wind=2
unsigned __int64 __fastcall sub_1800D64B4(__int64 *a1, unsigned __int64 a2)
{
  __int64 ***v4; // rsi
  unsigned __int64 v5; // r12
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r14
  _QWORD *v11; // rax
  __int64 *v12; // rsi
  unsigned __int64 v13; // r13
  unsigned __int64 i; // rdi
  __int64 v15; // rdi
  __int64 ***v16; // r14
  __int64 v17; // rax
  __int64 *v18; // [rsp+38h] [rbp-60h]
  __int64 v20; // [rsp+50h] [rbp-48h]
  __int64 *v21[3]; // [rsp+58h] [rbp-40h] BYREF

  v21[1] = (__int64 *)-2LL;
  v4 = (__int64 ***)a1[1];
  v5 = ((__int64)v4 - *a1) / 152;
  v6 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x6BCA1AF286BCA1BLL) >> 64) >> 63;
  v8 = v6 / 152;
  if ( a2 <= v6 / 152 )
  {
    if ( a2 <= v5 )
    {
      if ( a2 != v5 )
      {
        v15 = *a1 + 152 * a2;
        if ( (__int64 ***)v15 != v4 )
        {
          v16 = (__int64 ***)(v15 + 136);
          do
          {
            sub_180069F04(v16, v21, **v16, (__int64 *)*v16);
            j_j__o_free(*v16);
            v16 += 19;
            result = (unsigned __int64)(v16 - 17);
          }
          while ( v16 - 17 != v4 );
        }
        a1[1] = v15;
      }
    }
    else
    {
      for ( i = a2 - v5; i; --i )
      {
        memset(v4, 0, 0x98uLL);
        result = sub_180067020((__int64)v4);
        v4 += 19;
      }
      a1[1] = (__int64)v4;
    }
  }
  else
  {
    if ( a2 > 0x1AF286BCA1AF286LL )
      std::vector<void *>::_Xlen();
    v9 = v8 >> 1;
    if ( v8 <= 0x1AF286BCA1AF286LL - (v8 >> 1) )
    {
      v10 = v8 + v9;
      if ( v8 + v9 < a2 )
        v10 = a2;
    }
    else
    {
      v10 = a2;
    }
    v11 = sub_180069A60((__int64)a1, v10);
    v20 = (__int64)v11;
    v12 = &v11[19 * v5];
    v21[0] = v12;
    v13 = a2 - v5;
    try
    {
      while ( v13 )
      {
        memset(v12, 0, 0x98uLL);
        sub_180067020((__int64)v12);
        v12 += 19;
        --v13;
      }
      v18 = v12;
      sub_1800666D8(*a1, a1[1], v20);
      result = sub_1800694D4(a1, v20, a2, v10);
    }
    catch ( ... )
    {
      sub_1800696BC((__int64)a1, (_QWORD **)v21[0], (_QWORD **)v18);
      v17 = sub_18000F594((__int64)a1);
      sub_180069D48(v17, v20, v10);
      throw;
    }
  }
  return result;
}
