/*
 * XREFs of sub_1401AEA44 @ 0x1401AEA44
 * Callers:
 *     sub_1401A1880 @ 0x1401A1880 (sub_1401A1880.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140333010 (FsRtlMdlReadCompleteDevEx.c)
 * Callees:
 *     sub_1401ADA3C @ 0x1401ADA3C (sub_1401ADA3C.c)
 *     KeGuardDispatchICall @ 0x14034BB40 (KeGuardDispatchICall.c)
 */

unsigned __int64 __fastcall sub_1401AEA44(__int64 a1, int *a2, __int64 a3)
{
  unsigned __int64 result; // rax
  __int64 v6; // rdx
  int v7; // ecx
  unsigned __int64 v8; // rsi
  unsigned __int64 j; // rbp
  _QWORD *v10; // r11
  __int64 v11; // r8
  _QWORD *v12; // r9
  const char *v13; // rax
  int v14; // r10d
  __int64 v15; // r15
  unsigned int v16; // ebp
  unsigned __int64 i; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rsi
  _QWORD *v20; // r9
  __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // r8d
  unsigned __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // esi
  BOOL v28; // ebp
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 CurrentIrql; // r8
  unsigned __int64 v33; // r12
  unsigned __int64 v34; // r15
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rsi
  unsigned int v38; // r8d
  unsigned __int64 *v39; // r9
  unsigned __int8 *v40; // r10
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  int v44; // r13d
  __int64 v45; // r8
  unsigned __int64 v46; // rbp
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // r12
  __int64 v49; // rcx
  _BYTE v50[72]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp+10h]
  unsigned __int8 v52; // [rsp+78h] [rbp+10h]
  unsigned __int8 v53; // [rsp+80h] [rbp+18h]
  __int64 v54; // [rsp+80h] [rbp+18h]
  __int64 v55; // [rsp+88h] [rbp+20h]

  result = (unsigned int)a2[10];
  LOBYTE(a3) = 4;
  if ( (result & 2) == 0 )
  {
LABEL_14:
    result = (unsigned int)a2[10];
    if ( (result & 4) != 0 )
      return result;
    v10 = (_QWORD *)*((_QWORD *)a2 + 1);
    v11 = (unsigned int)a2[4];
    v12 = v10;
    *(_DWORD *)(a1 + 2064) += v11;
    v13 = (const char *)v10;
    v14 = *(_DWORD *)(a1 + 2044);
    v15 = *(_QWORD *)(a1 + 2048);
    if ( v10 < (_QWORD *)((char *)v10 + v11) )
    {
      do
      {
        _mm_prefetch(v13, 0);
        v13 += 64;
      }
      while ( v13 < (const char *)v10 + v11 );
    }
    v16 = (unsigned int)v11 >> 7;
    for ( i = *(_QWORD *)(a1 + 2048); v16; --v16 )
    {
      v18 = 8LL;
      do
      {
        v19 = *v12 ^ i;
        v20 = v12 + 1;
        v21 = *v20 ^ __ROL8__(v19, v14);
        v12 = v20 + 1;
        i = __ROL8__(v21, v14);
        --v18;
      }
      while ( v18 );
      v22 = __ROL8__(v15 ^ ((char *)v12 - (char *)v10), 17);
      LOBYTE(v22) = v14 ^ (((v22 ^ v15 ^ (unsigned __int64)((char *)v12 - (char *)v10))
                          * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v22 ^ v15 ^ ((_BYTE)v12 - (_BYTE)v10);
      LOBYTE(v14) = 1;
      v23 = v22 & 0x3F;
      if ( v23 )
        LOBYTE(v14) = v23;
    }
    v24 = v11 & 0x7F;
    if ( v24 >= 8 )
    {
      v25 = (unsigned __int64)v24 >> 3;
      do
      {
        i = __ROL8__(*v12++ ^ i, v14);
        v24 -= 8;
        --v25;
      }
      while ( v25 );
    }
    for ( ; v24; --v24 )
    {
      v26 = *(unsigned __int8 *)v12;
      v12 = (_QWORD *)((char *)v12 + 1);
      i = __ROL8__(v26 ^ i, v14);
    }
    for ( result = i; ; LODWORD(i) = result ^ i )
    {
      result >>= 31;
      if ( !result )
        break;
    }
    v27 = i & 0x7FFFFFFF;
    v28 = 0;
    v29 = 0xB3B74BDEE4453415uLL;
    if ( v27 != a2[5] )
    {
      if ( !*a2 )
        v28 = a2[6] != 0;
      v30 = (unsigned int)a2[4];
      v31 = *((_QWORD *)a2 + 1);
      if ( a2[4] && (*(_DWORD *)(a1 + 2420) & 0x40) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        v53 = CurrentIrql;
        __writecr8(2uLL);
        v33 = (unsigned __int8)CurrentIrql;
        v34 = v31 & 0xFFFFFFFFFFFFF000uLL;
        v55 = (v31 + v30 - 1) | 0xFFF;
        v51 = (v31 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            v35 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64))(a1 + 1120))(
                    v34,
                    0LL,
                    CurrentIrql,
                    v29);
            if ( v35 == -1073741267 )
              break;
            if ( v35 < 0 )
            {
LABEL_44:
              __writecr8(v33);
              goto LABEL_45;
            }
LABEL_42:
            v34 += 4096LL;
            result = v51 + 4096;
            v51 = result;
            if ( result == v55 )
            {
              __writecr8(v33);
              goto LABEL_49;
            }
          }
          if ( v28 )
            goto LABEL_44;
          if ( v53 > 1u )
            goto LABEL_42;
          __writecr8(v33);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_45:
      result = *(unsigned int *)(a1 + 2264);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1408) + 24LL) = v27 ^ (unsigned __int64)(unsigned int)a2[5];
        result = *(unsigned int *)(a1 + 2264);
      }
      v36 = *((_QWORD *)a2 + 1);
      if ( !(_DWORD)result )
      {
        *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2280) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        result = *a2;
        *(_QWORD *)(a1 + 2288) = result;
        *(_QWORD *)(a1 + 2296) = v36;
        *(_DWORD *)(a1 + 2264) = 1;
      }
    }
LABEL_49:
    v37 = (unsigned int)a2[4];
    if ( !(_DWORD)v37 )
      return result;
    sub_1401ADA3C(a1, *((_QWORD *)a2 + 1), v37, (__int64)v50);
    v38 = 16;
    v39 = (unsigned __int64 *)(a2 + 6);
    v40 = v50;
    do
    {
      v41 = *(_QWORD *)v40;
      v40 += 8;
      result = *v39++;
      if ( v41 != result )
        goto LABEL_57;
      v38 -= 8;
    }
    while ( v38 >= 8 );
    if ( v38 )
    {
      while ( 1 )
      {
        v42 = *v40++;
        result = *(unsigned __int8 *)v39;
        v39 = (unsigned __int64 *)((char *)v39 + 1);
        if ( v42 != result )
          break;
        if ( !--v38 )
          goto LABEL_69;
      }
LABEL_57:
      v43 = *((_QWORD *)a2 + 1);
      v44 = a2[10] & 1;
      result = *(unsigned int *)(a1 + 2420);
      if ( (result & 0x40) != 0 )
      {
        v45 = KeGetCurrentIrql();
        v52 = v45;
        __writecr8(2uLL);
        v46 = (unsigned __int8)v45;
        v47 = v43 & 0xFFFFFFFFFFFFF000uLL;
        v54 = (v37 + v43 - 1) | 0xFFF;
        v48 = (v43 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          while ( 1 )
          {
            result = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD, __int64, unsigned __int64 *))(a1 + 1120))(
                       v47,
                       0LL,
                       v45,
                       v39);
            if ( (_DWORD)result == -1073741267 )
              break;
            if ( (result & 0x80000000) != 0LL )
            {
LABEL_66:
              __writecr8(v46);
              goto LABEL_67;
            }
LABEL_64:
            result = 4096LL;
            v47 += 4096LL;
            v48 += 4096LL;
            if ( v48 == v54 )
            {
              __writecr8(v46);
              goto LABEL_69;
            }
          }
          if ( v44 )
            goto LABEL_66;
          if ( v52 > 1u )
            goto LABEL_64;
          __writecr8(v46);
          KeGetCurrentIrql();
          __writecr8(2uLL);
        }
      }
LABEL_67:
      v49 = *((_QWORD *)a2 + 1);
      if ( !*(_DWORD *)(a1 + 2264) )
      {
        *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2280) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        result = *a2;
        *(_QWORD *)(a1 + 2288) = result;
        *(_QWORD *)(a1 + 2296) = v49;
        *(_DWORD *)(a1 + 2264) = 1;
      }
    }
LABEL_69:
    *(_DWORD *)(a1 + 2064) += 16 * v37;
    return result;
  }
  if ( !*(_QWORD *)(a1 + 2400) )
    goto LABEL_13;
  v6 = *(unsigned int *)(a1 + 2420);
  v7 = *(_DWORD *)(a1 + 2420);
  if ( !*(_DWORD *)(a1 + 2060) )
  {
    v7 = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(8 * v7)) & 0x20;
    *(_DWORD *)(a1 + 2420) = v7;
    goto LABEL_6;
  }
  result = (unsigned int)v6 ^ ((unsigned int)v6 >> 3);
  if ( (((unsigned __int8)v6 ^ (unsigned __int8)((unsigned int)v6 >> 3)) & 4) != 0 )
  {
LABEL_13:
    *(_DWORD *)(a1 + 2060) = 0;
    return result;
  }
LABEL_6:
  if ( (v7 & 4) == 0 )
    goto LABEL_14;
  v8 = *((_QWORD *)a2 + 1) & 0xFFFFFFFFFFFFF000uLL;
  for ( j = ((*((_QWORD *)a2 + 1) & 0xFFFLL) + (unsigned __int64)(unsigned int)a2[4] + 4095) >> 12; j; v8 += 4096LL )
  {
    --j;
    result = (*(__int64 (__fastcall **)(unsigned __int64, __int64, __int64))(a1 + 680))(v8, v6, a3);
    if ( (_BYTE)result )
    {
      if ( !*(_DWORD *)(a1 + 2264) )
      {
        *(_QWORD *)(a1 + 2272) = a1 - 0x5C5FC0A76E374B18LL;
        *(_QWORD *)(a1 + 2280) = (char *)a2 - 0x4C48B4211BBACBEBLL;
        result = *a2;
        *(_QWORD *)(a1 + 2288) = result;
        *(_QWORD *)(a1 + 2296) = v8;
        *(_DWORD *)(a1 + 2264) = 1;
      }
    }
    *(_DWORD *)(a1 + 2064) += 256;
  }
  return result;
}
