/*
 * XREFs of VmpAccessFaultBatchResolve @ 0x14030BEFC
 * Callers:
 *     VmpAccessFaultBatch @ 0x14030BC68 (VmpAccessFaultBatch.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmVirtualAccessFault @ 0x14085A2D4 (MmVirtualAccessFault.c)
 */

__int64 __fastcall VmpAccessFaultBatchResolve(_QWORD *a1, unsigned int a2, char a3, char a4)
{
  __int64 v5; // r8
  int v6; // edx
  int v8; // r15d
  unsigned int v9; // r12d
  int v10; // r13d
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  int v14; // ebp
  _QWORD *v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rdx
  _QWORD *i; // rcx
  __int64 v19; // r8
  size_t v20; // rsi
  __int64 result; // rax
  __int64 *v22; // r8
  __int64 v23; // rdx
  unsigned int v24; // [rsp+20h] [rbp-D8h]
  _QWORD *v26; // [rsp+28h] [rbp-D0h]
  _QWORD v27[2]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v28[128]; // [rsp+40h] [rbp-B8h] BYREF

  v5 = a2;
  v6 = a3 & 1 | 2;
  v8 = a3 & 2;
  v9 = 16;
  if ( (a3 & 2) == 0 )
    v6 = a3 & 1;
  v10 = a3 & 4;
  if ( (a3 & 4) != 0 )
    v6 |= 1u;
  v11 = v6 | 8;
  if ( (a3 & 8) == 0 )
    v11 = v6;
  v12 = v11 | 0x10;
  if ( (a3 & 0x10) == 0 )
    v12 = v11;
  v13 = v12 | 0x20;
  v14 = a3 & 0x20;
  if ( !v14 )
    v13 = v12;
  v15 = &a1[6 * v5];
  v24 = v13;
  v16 = 0;
  v26 = v15;
  while ( a1 < v15 )
  {
    v17 = a1[3] & 0xFFFFFFFFFFFFFLL;
    v27[0] = a1[3] << 12;
    if ( !v16 )
    {
      v16 = 1;
      for ( i = a1 + 6; i < v15; i += 6 )
      {
        if ( v16 >= v9 )
          break;
        v19 = i[3] & 0xFFFFFFFFFFFFFLL;
        if ( v19 != v17 + 1 )
          break;
        v17 = v19;
        ++v16;
      }
    }
    v20 = 8LL * v16;
    v27[1] = v16 << 12;
    memset(v28, 0, v20);
    result = MmVirtualAccessFault(v27, v28, v24);
    if ( (int)result >= 0 )
    {
      v22 = (__int64 *)v28;
      if ( v28 < &v28[v20] )
      {
        do
        {
          v23 = *v22;
          if ( (*v22 & 0x10000000000000LL) == 0 )
            break;
          a1[5] = v23 & 0xFFFFFFFFFFFFFLL;
          if ( v8 || (v23 & 0x20000000000000LL) != 0 && (a4 & 2) != 0 )
            a1[4] |= 0x10000000000000uLL;
          if ( v10 )
            a1[4] |= 0x20000000000000uLL;
          if ( (v23 & 0x80000000000000LL) != 0 )
            a1[4] |= 0x40000000000000uLL;
          ++v22;
          a1 += 6;
          --v16;
        }
        while ( v22 < (__int64 *)&v28[v20] );
        v15 = v26;
      }
    }
    else
    {
      if ( !v14 )
        return result;
      a1[4] |= 0x100000000000000uLL;
      a1 += 6;
      v16 = 0;
      v9 = 1;
    }
  }
  return 0LL;
}
