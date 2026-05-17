/*
 * XREFs of RtlpHpHeapExtendContext @ 0x180063B20
 * Callers:
 *     RtlpHpSegLfhExtendContext @ 0x180063B10 (RtlpHpSegLfhExtendContext.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpAllocVA @ 0x180060CA0 (RtlpHpAllocVA.c)
 *     RtlpHpMetadataCommit @ 0x180066ABC (RtlpHpMetadataCommit.c)
 *     RtlAcquireReleaseSRWLockExclusive @ 0x180082080 (RtlAcquireReleaseSRWLockExclusive.c)
 */

signed __int64 __fastcall RtlpHpHeapExtendContext(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rsi
  unsigned __int64 v5; // rdx
  unsigned __int64 *v6; // r8
  __int64 v7; // r9
  signed __int64 v8; // rdi
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  __int128 v12; // xmm0
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  bool v15; // zf
  int v16; // eax
  __int128 v17; // [rsp+30h] [rbp-38h] BYREF
  __int128 v18; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  void *v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = (volatile signed __int64 *)(a1 + 224);
  RtlAcquireReleaseSRWLockExclusive(a1 + 224);
  while ( 1 )
  {
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 232);
      if ( (unsigned __int64)(v8 + a2) > *(_QWORD *)(a1 + 240) )
        break;
      if ( v8 == _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 232), v8 + a2, v8) )
        return v8;
    }
    RtlAcquireSRWLockExclusive((unsigned __int64)v2, v5, v6, v7);
    v10 = *(_QWORD *)(a1 + 232);
    v11 = *(_QWORD *)(a1 + 240);
    if ( v10 + a2 > v11 )
      break;
LABEL_10:
    RtlReleaseSRWLockExclusive(v2);
  }
  v12 = *(_OWORD *)a1;
  v13 = v10 - v11;
  v20 = *(void **)(a1 + 240);
  v14 = (v13 + a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v15 = (*(_BYTE *)(a1 + 30) & 1) == 0;
  v19 = v14;
  if ( v15 )
  {
    v18 = v12;
    v16 = RtlpHpAllocVA(&v20, &v19, 0LL, 4096, 4, &v18);
    v14 = v19;
  }
  else
  {
    v17 = v12;
    v16 = RtlpHpMetadataCommit(a1, v11, (v13 + a2 + 4095) & 0xFFFFF000, (unsigned int)&v17, 1);
  }
  if ( v16 >= 0 )
  {
    *(_QWORD *)(a1 + 240) += v14;
    goto LABEL_10;
  }
  v8 = 0LL;
  RtlReleaseSRWLockExclusive(v2);
  return v8;
}
