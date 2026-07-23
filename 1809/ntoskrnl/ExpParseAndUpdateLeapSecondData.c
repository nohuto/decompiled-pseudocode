/*
 * XREFs of ExpParseAndUpdateLeapSecondData @ 0x140736790
 * Callers:
 *     ExpReadLeapSecondData @ 0x1407354CC (ExpReadLeapSecondData.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlParseLeapSecondData @ 0x1409077CC (RtlParseLeapSecondData.c)
 */

__int64 __fastcall ExpParseAndUpdateLeapSecondData(__int64 a1, __int64 a2)
{
  char *v2; // rsi
  unsigned __int64 v5; // r8
  unsigned __int64 v6; // rdi
  unsigned int v7; // ecx
  unsigned int v8; // ebx
  unsigned int v10; // eax
  size_t v11; // r15
  char *PoolWithTag; // rax
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0LL;
  if ( *(_DWORD *)(a1 + 4) == 3 && (v5 = *(unsigned int *)(a1 + 8), v5 == 12 * (v5 / 0xC)) )
  {
    v6 = v5 / 0xC;
    v7 = 8 * (*(_DWORD *)(a1 + 8) / 0xCu) + 8;
    if ( v7 > 0x1000 )
      return 2;
    if ( !(_DWORD)v6 )
      return 0;
    v10 = *(_DWORD *)(a2 + 4);
    if ( (unsigned int)v6 <= v10 )
      return (unsigned int)v6 < v10 ? 3 : 0;
    v11 = v7;
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x6453704Cu);
    v2 = PoolWithTag;
    if ( !PoolWithTag )
      return 7;
    memset(PoolWithTag, 0, v11);
    v8 = RtlParseLeapSecondData(a1 + 12, (unsigned int)v6, a2, v2);
    if ( !v8 )
    {
      memmove((void *)(a2 + 8), v2 + 8, 8LL * (unsigned int)v6);
      _InterlockedOr(v13, 0);
      *(_DWORD *)(a2 + 4) = v6;
    }
  }
  else
  {
    v8 = 1;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0x6453704Cu);
  return v8;
}
