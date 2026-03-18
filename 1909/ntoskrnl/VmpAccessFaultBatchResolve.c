/*
 * XREFs of VmpAccessFaultBatchResolve @ 0x1408ED0B4
 * Callers:
 *     VmpAccessFaultBatch @ 0x1403291A8 (VmpAccessFaultBatch.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmVirtualAccessFault @ 0x14089277C (MmVirtualAccessFault.c)
 *     VmpCreateFaultLargePage @ 0x1408ED414 (VmpCreateFaultLargePage.c)
 */

__int64 __fastcall VmpAccessFaultBatchResolve(
        _QWORD *a1,
        unsigned int a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        unsigned int a6)
{
  char v6; // bp
  __int64 v8; // r9
  char *v9; // rsi
  unsigned int v10; // r15d
  char v11; // dl
  int v12; // r12d
  char v13; // cl
  char v14; // dl
  char v15; // cl
  _QWORD *v16; // r13
  unsigned int v17; // edi
  __int64 v18; // rdx
  _QWORD *i; // rcx
  size_t v20; // r14
  __int64 result; // rax
  char *v22; // rdx
  char v23; // [rsp+20h] [rbp-F8h]
  int v24; // [rsp+24h] [rbp-F4h]
  int v25; // [rsp+28h] [rbp-F0h]
  _QWORD *v27; // [rsp+30h] [rbp-E8h]
  signed __int64 v28; // [rsp+38h] [rbp-E0h] BYREF
  __int64 v29; // [rsp+40h] [rbp-D8h]
  char v30; // [rsp+50h] [rbp-C8h] BYREF

  v29 = 0LL;
  v6 = a4;
  v8 = a2;
  if ( a3 )
  {
    v9 = *(char **)(a3 + 16);
    v10 = *(_DWORD *)a3;
  }
  else
  {
    v9 = &v30;
    v10 = 16;
  }
  v11 = v6 & 1 | 2;
  v12 = v6 & 2;
  if ( (v6 & 2) == 0 )
    v11 = v6 & 1;
  v25 = v6 & 4;
  if ( (v6 & 4) != 0 )
    v11 |= 1u;
  v13 = v11 | 8;
  if ( (v6 & 8) == 0 )
    v13 = v11;
  v14 = v13 | 0x10;
  if ( (v6 & 0x10) == 0 )
    v14 = v13;
  v24 = v6 & 0x20;
  v15 = v14 | 0x20;
  if ( (v6 & 0x20) == 0 )
    v15 = v14;
  v16 = &a1[6 * v8];
  v23 = v15;
  v17 = 0;
  v27 = v16;
  while ( a1 < v16 )
  {
    v18 = a1[3] & 0xFFFFFFFFFFFFFLL;
    v28 = a1[3] << 12;
    if ( !v17 )
    {
      v17 = 1;
      for ( i = a1 + 6; i < v16; i += 6 )
      {
        if ( v17 >= v10 )
          break;
        a3 = i[3] & 0xFFFFFFFFFFFFFLL;
        if ( a3 != v18 + 1 )
          break;
        v18 = a3;
        ++v17;
      }
      if ( (v6 & 0x40) != 0 && v17 == 512 )
        VmpCreateFaultLargePage(a6, v18, a3, 0xFFFFFFFFFFFFFLL);
    }
    v20 = 8LL * v17;
    v29 = v17 << 12;
    memset(v9, 0, v20);
    result = MmVirtualAccessFault(&v28, (__int64)v9, v23);
    if ( (int)result >= 0 )
    {
      a3 = (unsigned __int64)&v9[v20];
      v22 = v9;
      if ( v9 < &v9[v20] )
      {
        do
        {
          if ( (*(_QWORD *)v22 & 0x10000000000000LL) == 0 )
            break;
          a1[5] = *(_QWORD *)v22 & 0xFFFFFFFFFFFFFLL;
          if ( v12 || (*(_QWORD *)v22 & 0x20000000000000LL) != 0 && (a5 & 2) != 0 )
            a1[4] |= 0x10000000000000uLL;
          if ( v25 )
            a1[4] |= 0x20000000000000uLL;
          if ( (*(_QWORD *)v22 & 0x80000000000000LL) != 0 )
            a1[4] |= 0x40000000000000uLL;
          v22 += 8;
          a1 += 6;
          --v17;
        }
        while ( (unsigned __int64)v22 < a3 );
        v6 = a4;
        v16 = v27;
      }
    }
    else
    {
      if ( !v24 )
        return result;
      a1[4] |= 0x100000000000000uLL;
      a1 += 6;
      v17 = 0;
      v10 = 1;
    }
  }
  return 0LL;
}
