/*
 * XREFs of HvValidateOrInvalidatePrimaryFileHeader @ 0x1406B94E8
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     HvpPerformLogFileRecovery @ 0x1407F8D60 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     HvpHeaderCheckSum @ 0x1405A74F0 (HvpHeaderCheckSum.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 */

__int64 __fastcall HvValidateOrInvalidatePrimaryFileHeader(__int64 a1, char a2, char a3, char a4)
{
  int v7; // ebx
  _DWORD *v8; // rdi
  int v9; // ecx
  int v10; // eax
  __int64 (__fastcall *v11)(__int64, _QWORD, int *, __int64, int); // rax
  int v12; // ebx
  _DWORD *PoolWithTag; // rax
  _OWORD *v15; // rax
  __int64 v16; // rdx
  _OWORD *v17; // rcx
  __int128 v18; // xmm1
  int v19; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v20; // [rsp+38h] [rbp-20h]
  int v21; // [rsp+40h] [rbp-18h]

  if ( *(_QWORD *)(a1 + 1536) )
  {
    v7 = a4 & 1;
    if ( a3 )
    {
      v8 = *(_DWORD **)(a1 + 1768);
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6F494D43u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memset(PoolWithTag, 0, 0x1000uLL);
      v15 = *(_OWORD **)(a1 + 64);
      v16 = 4LL;
      v17 = v8;
      do
      {
        *v17 = *v15;
        v17[1] = v15[1];
        v17[2] = v15[2];
        v17[3] = v15[3];
        v17[4] = v15[4];
        v17[5] = v15[5];
        v17[6] = v15[6];
        v17 += 8;
        v18 = v15[7];
        v15 += 8;
        *(v17 - 1) = v18;
        --v16;
      }
      while ( v16 );
    }
    v9 = *(_DWORD *)(a1 + 168);
    v10 = v9 - 1;
    if ( a2 )
      v10 = *(_DWORD *)(a1 + 168);
    v8[2] = v10;
    v8[1] = v9;
    v8[127] = HvpHeaderCheckSum(v8);
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, int *, __int64, int))(a1 + 40);
    v19 = 0;
    v20 = v8;
    v21 = 4096;
    v12 = v11(a1, 0LL, &v19, 1LL, v7);
    if ( v12 >= 0 )
    {
      v12 = CmpFileFlushAndPurge(a1, 0LL);
      if ( v12 >= 0 )
      {
        *(_BYTE *)(a1 + 190) = a2;
        v12 = 0;
        *(_DWORD *)(a1 + 180) = v8[2];
      }
    }
    if ( !a3 )
      ExFreePoolWithTag(v8, 0);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v12;
}
