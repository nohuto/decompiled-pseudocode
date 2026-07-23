/*
 * XREFs of PfpFileBuildReadSupport @ 0x140660480
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x140663144 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchFiles @ 0x140865268 (PfpPrefetchFiles.c)
 * Callees:
 *     PfpFileCheckAttributesForPrefetch @ 0x1400DDB74 (PfpFileCheckAttributesForPrefetch.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtCreateSection @ 0x1405DE740 (NtCreateSection.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     PfpFileBuildReadList @ 0x1406602D8 (PfpFileBuildReadList.c)
 *     PfpFileSetupObjectAttributes @ 0x1406603E8 (PfpFileSetupObjectAttributes.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 */

__int64 __fastcall PfpFileBuildReadSupport(_QWORD *a1, _DWORD *a2, unsigned int a3, char a4, __int64 a5)
{
  __int64 v6; // r12
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // r8
  int AllocationAttributes; // r9d
  __int64 v13; // rdx
  __m128i *v14; // rdi
  int v15; // ebx
  HANDLE FileHandle; // r12
  __m128i v17; // xmm6
  unsigned __int64 v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // rbx
  __int128 v21; // xmm0
  HANDLE v22; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  void *v26; // [rsp+48h] [rbp-61h] BYREF
  _BYTE v27[16]; // [rsp+50h] [rbp-59h] BYREF
  HANDLE v28[4]; // [rsp+60h] [rbp-49h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-29h] BYREF
  int v30; // [rsp+108h] [rbp+5Fh] BYREF
  HANDLE SectionHandle; // [rsp+110h] [rbp+67h] BYREF
  ULONG v32; // [rsp+120h] [rbp+77h]

  v6 = a3;
  memset(v28, 0, sizeof(v28));
  SectionHandle = 0LL;
  v9 = 0LL;
  v10 = *a1;
  v11 = a1[1];
  v28[3] = (HANDLE)0x200000000LL;
  v26 = 0LL;
  AllocationAttributes = a4 != 0 ? 285212672 : 0x4000000;
  v13 = (unsigned __int128)(((__int64)a2 - *(unsigned int *)(v10 + 40) - v10) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v32 = AllocationAttributes;
  v14 = (__m128i *)(v11 + 32 * (((unsigned __int64)v13 >> 63) + (v13 >> 3)));
  if ( v11 && (v14[1].m128i_i64[1] & 0x400000000LL) != 0 )
  {
    v25 = v14[1];
    v17 = *v14;
    v28[2] = (HANDLE)v14[1].m128i_i64[0];
    v18 = _mm_srli_si128(v25, 8).m128i_u64[0] | 0x1000000000LL;
    *(__m128i *)v28 = v17;
    FileHandle = (HANDLE)v17.m128i_i64[0];
    v28[3] = (HANDLE)v18;
  }
  else
  {
    PfpFileSetupObjectAttributes((__int64)a1, (__int64)a2, v6, (__int64)v27, (__int64)&ObjectAttributes, &v30);
    v15 = PfpOpenHandleCreate(
            (unsigned int)v28,
            a1[5],
            ObjectAttributes.ObjectName,
            ObjectAttributes.RootDirectory,
            a4 != 0 ? 32 : 129,
            v30,
            128,
            a1[2] + (v6 << 6));
    if ( v15 < 0 )
    {
      v18 = (unsigned __int64)v28[3];
      goto LABEL_11;
    }
    FileHandle = v28[0];
    v15 = PfpFileCheckAttributesForPrefetch(v28[0], 21248);
    if ( v15 < 0 )
    {
      v18 = (unsigned __int64)v28[3];
      goto LABEL_20;
    }
    v17 = *(__m128i *)v28;
    AllocationAttributes = v32;
    if ( a1[1] )
    {
      v24 = *(__m128i *)&v28[2];
      *v14 = *(__m128i *)v28;
      v14[1] = v24;
      v18 = _mm_srli_si128(v24, 8).m128i_u64[0] | 0x1000000000LL;
      v28[3] = (HANDLE)v18;
    }
    else
    {
      v18 = (unsigned __int64)v28[3];
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
    v15 = PfpFileBuildReadList((__int64)a1, (__int64)a2, a4, &v26);
    if ( v15 < 0 )
    {
      v9 = v26;
    }
    else
    {
      v20 = a5;
      v21 = *(_OWORD *)&v28[2];
      *(__m128i *)(a5 + 8) = v17;
      *(_OWORD *)(v20 + 24) = v21;
      memset(v28, 0, sizeof(v28));
      v22 = SectionHandle;
      v18 = 0x200000000LL;
      SectionHandle = 0LL;
      *(_QWORD *)(v20 + 40) = v22;
      *(_QWORD *)v20 = v26;
      *(_QWORD *)(v20 + 48) = a2;
      v15 = 0;
      v28[3] = (HANDLE)0x200000000LL;
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
    PfpOpenHandleClose(v28, a1[5]);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)v15;
}
