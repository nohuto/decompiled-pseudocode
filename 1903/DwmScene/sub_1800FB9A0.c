/*
 * XREFs of sub_1800FB9A0 @ 0x1800FB9A0
 * Callers:
 *     sub_1800FBE78 @ 0x1800FBE78 (sub_1800FBE78.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x18000F5A8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_1800F63BC @ 0x1800F63BC (sub_1800F63BC.c)
 *     sub_1800F6440 @ 0x1800F6440 (sub_1800F6440.c)
 *     sub_1800F64F0 @ 0x1800F64F0 (sub_1800F64F0.c)
 *     sub_1800FB4BC @ 0x1800FB4BC (sub_1800FB4BC.c)
 *     sub_1800FB600 @ 0x1800FB600 (sub_1800FB600.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800FB9A0(unsigned __int64 a1, __int64 *a2, __int64 *a3, __int64 *a4, char a5)
{
  unsigned __int16 **v8; // r13
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  __int64 v11; // r8
  unsigned __int16 *v12; // r12
  unsigned __int16 *v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned __int16 *v21; // rsi
  __int64 v22; // r14
  unsigned __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int128 v33; // [rsp+28h] [rbp-49h] BYREF
  unsigned __int64 v34; // [rsp+38h] [rbp-39h]
  __int128 v35; // [rsp+40h] [rbp-31h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h]
  __int128 v37; // [rsp+58h] [rbp-19h] BYREF
  unsigned __int64 v38; // [rsp+68h] [rbp-9h]

  v8 = (unsigned __int16 **)a1;
  v9 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v38 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  v10 = v9 >> 1;
  if ( v10 )
  {
    if ( v10 > 0x1555555555555555LL )
      std::vector<void *>::_Xlen();
    sub_1800F6440((__int64 *)&v37, v10);
  }
  v11 = v33;
  if ( v10 > (__int64)(v34 - v33) >> 3 )
  {
    sub_1800F63BC((__int64 *)&v33, v10);
    v11 = v33;
  }
  v12 = v8[1];
  v13 = *v8;
  if ( *v8 != v12 )
  {
    do
    {
      v14 = *a2 + 12LL * *v13;
      v15 = *((_QWORD *)&v37 + 1);
      if ( v38 == *((_QWORD *)&v37 + 1) )
      {
        sub_1800FB600((__int64 *)&v37, *((__int64 *)&v37 + 1), v14);
      }
      else
      {
        **((_QWORD **)&v37 + 1) = *(_QWORD *)v14;
        *(_DWORD *)(v15 + 8) = *(_DWORD *)(v14 + 8);
        *((_QWORD *)&v37 + 1) += 12LL;
      }
      a1 = *v13;
      v16 = (_QWORD *)(*a4 + 8 * a1);
      if ( v34 == *((_QWORD *)&v33 + 1) )
      {
        sub_1800FB4BC((__int64 *)&v33, *((char **)&v33 + 1), v16);
      }
      else
      {
        **((_QWORD **)&v33 + 1) = *v16;
        *((_QWORD *)&v33 + 1) += 8LL;
      }
      ++v13;
    }
    while ( v13 != v12 );
    v11 = v33;
  }
  if ( a2 != (__int64 *)&v37 )
  {
    v17 = *a2;
    *a2 = v37;
    *(_QWORD *)&v37 = v17;
    v18 = a2[1];
    a2[1] = *((_QWORD *)&v37 + 1);
    *((_QWORD *)&v37 + 1) = v18;
    a1 = a2[2];
    a2[2] = v38;
    v38 = a1;
  }
  if ( a4 != (__int64 *)&v33 )
  {
    v19 = *a4;
    *a4 = v11;
    v11 = v19;
    *(_QWORD *)&v33 = v19;
    v20 = a4[1];
    a4[1] = *((_QWORD *)&v33 + 1);
    *((_QWORD *)&v33 + 1) = v20;
    a1 = a4[2];
    a4[2] = v34;
    v34 = a1;
  }
  if ( a5 )
  {
    v35 = 0LL;
    v36 = 0LL;
    if ( v10 )
      sub_1800F6440((__int64 *)&v35, v10);
    v21 = *v8;
    v22 = 0LL;
    v23 = (unsigned __int64)((char *)v8[1] - (char *)*v8 + 1) >> 1;
    if ( *v8 > v8[1] )
      v23 = 0LL;
    v24 = *((_QWORD *)&v35 + 1);
    if ( v23 )
    {
      do
      {
        v25 = *a3 + 12LL * *v21;
        if ( v36 == v24 )
        {
          sub_1800FB600((__int64 *)&v35, v24, v25);
          v24 = *((_QWORD *)&v35 + 1);
        }
        else
        {
          *(_QWORD *)v24 = *(_QWORD *)v25;
          *(_DWORD *)(v24 + 8) = *(_DWORD *)(v25 + 8);
          v24 = *((_QWORD *)&v35 + 1) + 12LL;
          *((_QWORD *)&v35 + 1) += 12LL;
        }
        ++v21;
        ++v22;
      }
      while ( v22 != v23 );
    }
    if ( a3 != (__int64 *)&v35 )
    {
      v26 = *a3;
      *a3 = v35;
      *(_QWORD *)&v35 = v26;
      v27 = a3[1];
      a3[1] = v24;
      *((_QWORD *)&v35 + 1) = v27;
      v28 = a3[2];
      a3[2] = v36;
      v36 = v28;
    }
    sub_1800F64F0((__int64 *)&v35);
    v11 = v33;
  }
  if ( v11 )
  {
    v29 = (v34 - v11) & 0xFFFFFFFFFFFFFFF8uLL;
    v30 = v11;
    if ( v29 >= 0x1000 )
    {
      v31 = v29 + 39;
      v11 = *(_QWORD *)(v11 - 8);
      if ( (unsigned __int64)(v30 - v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(a1, v31);
        __debugbreak();
      }
    }
    j_j__o_free(v11);
    v33 = 0LL;
    v34 = 0LL;
  }
  return sub_1800F64F0((__int64 *)&v37);
}
