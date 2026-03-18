/*
 * XREFs of HvpGenerateLogEntry @ 0x14065DD60
 * Callers:
 *     HvStoreModifiedData @ 0x14065D6F0 (HvStoreModifiedData.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     HvpGenerateLogEntryDirtyData @ 0x14008A44C (HvpGenerateLogEntryDirtyData.c)
 *     HvpGenerateLogEntryMetadata @ 0x140098B38 (HvpGenerateLogEntryMetadata.c)
 *     HvpGenerateLogEntryHeader @ 0x140098BA4 (HvpGenerateLogEntryHeader.c)
 *     HvpAllocateLogBuffers @ 0x140098D34 (HvpAllocateLogBuffers.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     HvpCountSetRangesInVector @ 0x14062DB68 (HvpCountSetRangesInVector.c)
 *     HvpGenerateLogEntryChecksums @ 0x14065DF08 (HvpGenerateLogEntryChecksums.c)
 *     CmpLogDirtyVectorUse @ 0x14065E0A0 (CmpLogDirtyVectorUse.c)
 */

__int64 __fastcall HvpGenerateLogEntry(ULONG_PTR BugCheckParameter2, PVOID **a2, _DWORD *a3, unsigned int *a4)
{
  int v4; // edi
  char v6; // r13
  ULONG v7; // eax
  SIZE_T v8; // rdx
  unsigned int v9; // edi
  PVOID PoolWithTag; // r12
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // r14
  unsigned int v14; // esi
  int v15; // esi
  PVOID *v16; // rbx
  __int64 v17; // r8
  int v18; // r8d
  __int64 v19; // r8
  unsigned int v20; // eax
  PVOID *v21; // rdi
  PVOID *v23; // rbx
  int v24; // [rsp+28h] [rbp-40h]
  __int64 v25; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v26; // [rsp+48h] [rbp-20h]
  PVOID *v27; // [rsp+50h] [rbp-18h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp+48h] BYREF
  PVOID **v29; // [rsp+B8h] [rbp+50h]
  _DWORD *v30; // [rsp+C0h] [rbp+58h]
  unsigned int *v31; // [rsp+C8h] [rbp+60h]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  v4 = *(_DWORD *)(BugCheckParameter2 + 176);
  v27 = 0LL;
  v25 = 0LL;
  v6 = v4 == 0;
  v28 = 0;
  v26 = HvpCountSetRangesInVector((PRTL_BITMAP)(BugCheckParameter2 + 88));
  v7 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
  CmpLogDirtyVectorUse(BugCheckParameter2, 1LL, v26, v7);
  v8 = 8 * v26;
  v9 = (v8 + (v4 != 0 ? 4135 : 4647) + (*(_DWORD *)(BugCheckParameter2 + 104) << 9)) & 0xFFFFF000;
  PoolWithTag = ExAllocatePoolWithTag(PagedPoolCacheAligned, v8, 0x6F494D43u);
  if ( PoolWithTag )
  {
    v11 = HvpAllocateLogBuffers(&v27, (_DWORD *)&v25 + 1, v9);
    v13 = HIDWORD(v25);
    v14 = v11;
    if ( v11 < 0 )
    {
      v21 = v27;
    }
    else
    {
      v15 = v26;
      v16 = v27;
      HvpGenerateLogEntryHeader(BugCheckParameter2, (__int64)v27, v12, &v28, (unsigned int *)&v25, v9, v26, v6);
      HvpGenerateLogEntryMetadata(
        BugCheckParameter2,
        (__int64)v16,
        v17,
        &v28,
        (unsigned int *)&v25,
        (__int64)PoolWithTag,
        v15);
      HvpGenerateLogEntryDirtyData(BugCheckParameter2, (int)v16, v18, (__int64)&v28, (__int64)&v25, v24);
      v20 = (unsigned int)v16[3 * v28 + 2];
      if ( (unsigned int)v25 < v20 )
        memset((char *)v16[3 * v28 + 1] + (unsigned int)v25, 0, v20 - (unsigned int)v25);
      LOBYTE(v19) = v6;
      HvpGenerateLogEntryChecksums(v16, (unsigned int)v13, v19);
      *v29 = v16;
      *v30 = v13;
      *v31 = v9;
      v21 = 0LL;
      v14 = 0;
    }
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( v21 )
    {
      if ( (_DWORD)v13 )
      {
        v23 = v21 + 1;
        do
        {
          if ( *v23 )
          {
            ExFreePoolWithTag(*v23, 0);
            *v23 = 0LL;
          }
          v23 += 3;
          --v13;
        }
        while ( v13 );
      }
      ExFreePoolWithTag(v21, 0);
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v14;
}
