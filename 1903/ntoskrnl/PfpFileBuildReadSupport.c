/*
 * XREFs of PfpFileBuildReadSupport @ 0x140627600
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x14066D5F4 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x1408A0B0C (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x140088194 (PfpFileCheckAttributesForPrefetch.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     NtCreateSection @ 0x1405D6430 (NtCreateSection.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     PfpFileBuildReadList @ 0x1406273FC (PfpFileBuildReadList.c)
 *     PfpFileSetupObjectAttributes @ 0x140627568 (PfpFileSetupObjectAttributes.c)
 *     PfpOpenHandleCreate @ 0x140628C74 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x140628DE8 (PfpOpenHandleClose.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v6; // r12
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  int AllocationAttributes; // r9d
  __int64 v13; // rdx
  __m128i *v14; // rbx
  int v15; // edi
  void *FileHandle; // r12
  __m128i v17; // xmm6
  unsigned __int64 v18; // rbx
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  HANDLE v21; // rax
  __int128 v22; // xmm0
  void *v23; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm0
  void *v27; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v28[2]; // [rsp+50h] [rbp-59h] BYREF
  __m256i v29; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  int v31; // [rsp+108h] [rbp+5Fh] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  ULONG v33; // [rsp+120h] [rbp+77h]

  v6 = a3;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  SectionHandle = 0LL;
  memset(&v29, 0, 24);
  v9 = 0LL;
  v10 = *a1;
  v11 = a1[1];
  v28[0] = 0LL;
  v28[1] = 0LL;
  v29.m256i_i64[3] = 0x200000000LL;
  v27 = 0LL;
  AllocationAttributes = a4 != 0 ? 285212672 : 0x4000000;
  v13 = (unsigned __int128)(((__int64)a2 - *(unsigned int *)(v10 + 40) - v10) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v33 = AllocationAttributes;
  v14 = (__m128i *)(v11 + 32 * (((unsigned __int64)v13 >> 63) + (v13 >> 3)));
  if ( v11 && (v14[1].m128i_i64[1] & 0x400000000LL) != 0 )
  {
    v25 = v14[1];
    v17 = *v14;
    v29.m256i_i64[2] = v14[1].m128i_i64[0];
    v18 = _mm_srli_si128(v25, 8).m128i_u64[0] | 0x1000000000LL;
    *(__m128i *)v29.m256i_i8 = v17;
    FileHandle = (void *)v17.m128i_i64[0];
    v29.m256i_i64[3] = v18;
  }
  else
  {
    PfpFileSetupObjectAttributes((__int64)a1, (__int64)a2, v6, (__int64)v28, (__int64)&ObjectAttributes, &v31);
    v15 = PfpOpenHandleCreate(
            (unsigned int)&v29,
            a1[5],
            ObjectAttributes.ObjectName,
            ObjectAttributes.RootDirectory,
            a4 != 0 ? 32 : 129,
            v31,
            128,
            a1[2] + (v6 << 6));
    if ( v15 < 0 )
    {
      v18 = v29.m256i_u64[3];
      goto LABEL_11;
    }
    FileHandle = (void *)v29.m256i_i64[0];
    v15 = PfpFileCheckAttributesForPrefetch((void *)v29.m256i_i64[0], 21248);
    if ( v15 < 0 )
    {
      v18 = v29.m256i_u64[3];
      goto LABEL_20;
    }
    v17 = *(__m128i *)v29.m256i_i8;
    AllocationAttributes = v33;
    if ( a1[1] )
    {
      v26 = *(__m128i *)&v29.m256i_u64[2];
      *v14 = *(__m128i *)v29.m256i_i8;
      v14[1] = v26;
      v18 = _mm_srli_si128(v26, 8).m128i_u64[0] | 0x1000000000LL;
      v29.m256i_i64[3] = v18;
    }
    else
    {
      v18 = v29.m256i_u64[3];
    }
  }
  if ( (*a2 & 1) != 0 && !a4 && *(_QWORD *)(*(_QWORD *)(_mm_srli_si128(v17, 8).m128i_u64[0] + 40) + 16LL) )
  {
    v15 = -1073741791;
    goto LABEL_11;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v19 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, FileHandle);
  v15 = v19;
  if ( v19 >= 0 )
  {
    v15 = PfpFileBuildReadList((__int64)a1, (__int64)a2, a4, &v27);
    if ( v15 < 0 )
    {
      v9 = v27;
    }
    else
    {
      v20 = a5;
      v21 = SectionHandle;
      v18 = 0x200000000LL;
      v22 = *(_OWORD *)&v29.m256i_u64[2];
      v29.m256i_i64[0] = 0LL;
      SectionHandle = 0LL;
      *(_QWORD *)(a5 + 40) = v21;
      v15 = 0;
      v23 = v27;
      *(__m128i *)(v20 + 8) = v17;
      *(_QWORD *)v20 = v23;
      *(_OWORD *)(v20 + 24) = v22;
      v29.m256i_i64[3] = 0x200000000LL;
      *(_OWORD *)&v29.m256i_u64[1] = 0LL;
      *(_QWORD *)(v20 + 48) = a2;
    }
    goto LABEL_11;
  }
  if ( a4 && v19 == -1073740749 )
  {
LABEL_11:
    if ( (v18 & 0x100000000LL) == 0 )
      goto LABEL_12;
  }
LABEL_20:
  if ( (*a2 & 8) == 0 )
  {
    *a2 |= 8u;
    ++*(_DWORD *)(*a1 + 124LL);
  }
LABEL_12:
  if ( SectionHandle )
    NtClose(SectionHandle);
  if ( (v18 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v29, a1[5]);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v15;
}
