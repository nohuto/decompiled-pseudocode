/*
 * XREFs of sub_18004EC58 @ 0x18004EC58
 * Callers:
 *     sub_18009BDD4 @ 0x18009BDD4 (sub_18009BDD4.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_18004CF00 @ 0x18004CF00 (sub_18004CF00.c)
 *     sub_18004EE04 @ 0x18004EE04 (sub_18004EE04.c)
 *     sub_18004EE4C @ 0x18004EE4C (sub_18004EE4C.c)
 *     sub_18004F690 @ 0x18004F690 (sub_18004F690.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_18004EC58(__int64 a1, __int128 *a2, __int64 a3, unsigned __int64 a4)
{
  void *v7; // rax
  signed __int64 v8; // rbx
  __int128 v9; // xmm0
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  unsigned __int16 v12; // di
  __int64 v13; // rcx
  __int64 v14; // rdx
  signed __int64 *v15; // roff
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int128 v19; // [rsp+20h] [rbp-20h] BYREF
  __int128 v20; // [rsp+30h] [rbp-10h] BYREF
  __int64 v21; // [rsp+70h] [rbp+30h]

  v19 = xmmword_1801638B0;
  v7 = sub_18004CF00(0x30uLL, 0x30uLL, 0, &v19);
  v8 = (signed __int64)v7;
  if ( v7 )
  {
    memset(v7, 0, 0x30uLL);
    v9 = *a2;
    *(_QWORD *)(v8 + 32) = a4;
    *(_QWORD *)(v8 + 8) = a3;
    *(_OWORD *)(v8 + 16) = v9;
    RtlAcquireSRWLockExclusive(&Parameter);
    v10 = sub_18004EE4C(&Parameter, a2, a3);
    if ( v10 )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v10 + 32), a4);
      v12 = *(_WORD *)(v10 + 40);
    }
    else
    {
      v11 = sub_18004EE04();
      v12 = v11;
      if ( v11 )
      {
        *(_WORD *)(v8 + 40) = v11;
        *(_QWORD *)(qword_180163B58 + 8LL * v11 - 8) = v8;
        v21 = *(_QWORD *)(v8 + 8) & (-1LL << (dword_180163B4C & 0x1F));
        v13 = qword_180163B50;
        v14 = (37
             * (BYTE6(v21)
              + 37
              * (BYTE5(v21)
               + 37
               * (BYTE4(v21)
                + 37 * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
             + HIBYTE(v21)) & (((unsigned int)dword_180163B4C >> 5) - 1);
        v15 = (signed __int64 *)(qword_180163B50 + 8 * v14);
        _m_prefetchw(v15);
        v16 = *v15;
        do
        {
          *(_QWORD *)v8 = v16;
          v17 = v16;
          v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 8 * v14), v8, v16);
        }
        while ( v17 != v16 );
        word_180163B60 = v12;
        ++dword_180163B48;
        v8 = 0LL;
        ++word_180163B62;
      }
    }
    RtlReleaseSRWLockExclusive(&Parameter);
    if ( v8 )
    {
      v20 = xmmword_1801638B0;
      sub_18004F690(v8, &v20);
    }
  }
  else
  {
    return 0;
  }
  return v12;
}
