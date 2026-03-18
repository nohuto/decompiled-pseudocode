/*
 * XREFs of sub_14036B3BC @ 0x14036B3BC
 * Callers:
 *     KiSwInterruptDispatch @ 0x1401AB5C0 (KiSwInterruptDispatch.c)
 *     sub_1401AC880 @ 0x1401AC880 (sub_1401AC880.c)
 *     sub_1401B8F7C @ 0x1401B8F7C (sub_1401B8F7C.c)
 *     sub_1401B9EE8 @ 0x1401B9EE8 (sub_1401B9EE8.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140354010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140368148 @ 0x140368148 (sub_140368148.c)
 *     sub_14036A0A4 @ 0x14036A0A4 (sub_14036A0A4.c)
 *     sub_14036BD00 @ 0x14036BD00 (sub_14036BD00.c)
 *     sub_14036C810 @ 0x14036C810 (sub_14036C810.c)
 *     sub_14036CED0 @ 0x14036CED0 (sub_14036CED0.c)
 *     sub_1409D0FB4 @ 0x1409D0FB4 (sub_1409D0FB4.c)
 *     sub_1409D1EB4 @ 0x1409D1EB4 (sub_1409D1EB4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14036B3BC(__int64 a1, __int64 a2)
{
  unsigned __int128 v2; // rax
  int v3; // r11d
  __int64 v5; // r10
  unsigned int v6; // r9d
  __int64 v7; // rcx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  __int64 *v10; // rbx
  unsigned __int64 v11; // r14
  __int64 v12; // r11
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  unsigned __int64 v17; // rax
  __int64 v18; // r11
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  *((_QWORD *)&v2 + 1) = a2;
  *(_QWORD *)&v2 = &retaddr;
  v3 = *(_DWORD *)(a1 + 2448);
  if ( (v3 & 0x40000000) == 0 )
  {
    v5 = 0LL;
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 2452);
      *(_QWORD *)&v2 = DWORD2(v2) != 0;
      if ( (_DWORD)v2 == ((v6 >> 21) & 1) || (v3 & 2) == 0 )
        break;
      v7 = *(unsigned int *)(a1 + 2604);
      v8 = *(_QWORD *)(a1 + 2072);
      v9 = (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 2020) - v7) >> 3;
      v10 = (__int64 *)(a1 + v7);
      v11 = a1 + v7 + 8 * v9;
      if ( DWORD2(v2) )
      {
        v17 = __rdtsc();
        v2 = (__ROR8__(v17, 3) ^ v17) * (unsigned __int128)0x7010008004002001uLL;
        v18 = v2 ^ *((_QWORD *)&v2 + 1);
        *(_QWORD *)(a1 + 2608) = v2 ^ *((_QWORD *)&v2 + 1);
        if ( (unsigned __int64)v10 > v11 )
          v9 = 0LL;
        if ( v9 )
        {
          do
          {
            ++v5;
            *(_QWORD *)&v2 = v18 ^ *v10;
            *((_QWORD *)&v2 + 1) = v8 ^ *v10;
            *v10 = v2;
            v18 = (*((_QWORD *)&v2 + 1) + __ROR8__(v18, v18 & 0x3F)) ^ 0xEFFLL;
            ++v10;
          }
          while ( v5 != v9 );
          v6 = *(_DWORD *)(a1 + 2452);
        }
        *(_QWORD *)(a1 + 2616) = v18;
        *(_DWORD *)(a1 + 2452) = v6 | 0x200000;
        return v2;
      }
      v12 = *(_QWORD *)(a1 + 2608);
      v13 = 0LL;
      if ( (unsigned __int64)v10 > v11 )
        v9 = 0LL;
      if ( v9 )
      {
        do
        {
          *v10 ^= v12;
          ++v13;
          v14 = *v10++;
          v12 = ((v8 ^ v14) + __ROR8__(v12, v12 & 0x3F)) ^ 0xEFF;
        }
        while ( v13 != v9 );
        v6 = *(_DWORD *)(a1 + 2452);
      }
      *(_DWORD *)(a1 + 2452) = v6 & 0xFFDFFFFF;
      if ( v12 != *(_QWORD *)(a1 + 2616) )
      {
        v15 = *(_QWORD *)(a1 + 1424);
        v16 = *(_DWORD *)(a1 + 2020);
        *(_QWORD *)v15 = a1;
        *(_DWORD *)(v15 + 16) = v16;
        *(_QWORD *)&v2 = *(unsigned int *)(a1 + 2296);
        if ( !(_DWORD)v2 )
        {
          *(_QWORD *)(*(_QWORD *)(a1 + 1424) + 24LL) = v12 ^ *(_QWORD *)(a1 + 2616);
          *(_QWORD *)&v2 = *(unsigned int *)(a1 + 2296);
          if ( !(_DWORD)v2 )
          {
            *(_QWORD *)(a1 + 2312) = 0LL;
            *(_QWORD *)&v2 = a1 - 0x5C5FC0A76E374B18LL;
            *(_QWORD *)(a1 + 2320) = 256LL;
            *(_QWORD *)(a1 + 2304) = a1 - 0x5C5FC0A76E374B18LL;
            DWORD2(v2) = 0;
            *(_QWORD *)(a1 + 2328) = v12;
            *(_DWORD *)(a1 + 2296) = 1;
            v3 = *(_DWORD *)(a1 + 2448);
            if ( (v3 & 0x40000000) == 0 )
              continue;
          }
        }
      }
      return v2;
    }
  }
  return v2;
}
