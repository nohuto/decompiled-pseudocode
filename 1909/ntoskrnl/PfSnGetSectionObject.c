/*
 * XREFs of PfSnGetSectionObject @ 0x14062C478
 * Callers:
 *     PfSnPopulateReadList @ 0x14062BF40 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x140089498 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     NtCreateSection @ 0x1405D6BF0 (NtCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     PfSnPrefetchFileMetadata @ 0x14062A3EC (PfSnPrefetchFileMetadata.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x14062C828 (PfSnIsSectionPrefetchedAfterPhase.c)
 *     PfpOpenHandleCreate @ 0x14062CAC4 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14062CC38 (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        __int64 a1,
        __int64 a2,
        void *a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  __int128 v13; // xmm0
  __int64 v14; // rax
  ULONG AllocationAttributes; // ecx
  __int64 v16; // r13
  HANDLE v17; // r15
  __int64 v18; // rbx
  NTSTATUS v19; // edi
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int128 v23; // xmm1
  NTSTATUS v24; // eax
  PVOID v25; // r10
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r11
  __int64 v30; // r8
  NTSTATUS v31; // r11d
  unsigned __int8 v32; // r8
  int v34; // edx
  __int64 v35; // rcx
  HANDLE SectionHandle; // [rsp+40h] [rbp-A1h] BYREF
  ULONG v37; // [rsp+48h] [rbp-99h]
  __int64 v38; // [rsp+50h] [rbp-91h] BYREF
  PVOID Object; // [rsp+58h] [rbp-89h] BYREF
  __m256i v40; // [rsp+60h] [rbp-81h] BYREF
  __int64 v41; // [rsp+80h] [rbp-61h] BYREF
  _QWORD *v42; // [rsp+88h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  __int64 v44; // [rsp+C0h] [rbp-21h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-19h]
  __int64 v46; // [rsp+D0h] [rbp-11h]

  v41 = a8;
  Object = a3;
  v42 = a9;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  *a9 = 0LL;
  *a10 = 0;
  v13 = 0LL;
  v14 = *(_QWORD *)a1;
  v38 = 0LL;
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  memset(&v40, 0, 24);
  v16 = 0x200000000LL;
  SectionHandle = 0LL;
  v17 = 0LL;
  v40.m256i_i64[3] = 0x200000000LL;
  v37 = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v14 + 88) )
  {
    v19 = -1073741811;
    goto LABEL_27;
  }
  v18 = *(_QWORD *)(a1 + 56) + 56LL * a6;
  if ( (*(_QWORD *)(v18 + 24) & 0x400000000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v35 = *(_QWORD *)(a4 + 24);
      v45 = 0LL;
      v46 = v35;
      v44 = 0x100000003LL;
      if ( v35 )
        PfSnPrefetchFileMetadata(a1, *(void **)(a2 + 32), (__int64)&v44, 0, 1u, (HANDLE)v41);
    }
    v19 = PfpOpenHandleCreate(
            (unsigned int)&v40,
            *(_QWORD *)(a1 + 8),
            (_DWORD)Object,
            *(_QWORD *)(a2 + 64),
            161,
            64,
            128,
            a2 + 32);
    if ( v19 < 0
      || (v19 = PfpFileCheckAttributesForPrefetch(
                  (void *)v40.m256i_i64[0],
                  (((dword_140467830 & 0x10) == 0) << 14) + 4864),
          v19 < 0) )
    {
      v16 = v40.m256i_i64[3];
      goto LABEL_27;
    }
    if ( *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124)
      && (int)IopQueryXxxInformation((PVOID)v40.m256i_i64[1], (__int64)&v38, (__int64)&v41, 1) >= 0 )
    {
      v20 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 120), 1u);
      v21 = *(_QWORD *)(a1 + 112);
      v22 = 3 * v20;
      *(_QWORD *)(v21 + 8 * v22 + 12) = v38;
      LODWORD(v20) = v40.m256i_i32[6];
      *(_QWORD *)(v21 + 8 * v22) = *(_QWORD *)(v40.m256i_i64[1] + 24);
      *(_DWORD *)(v21 + 8 * v22 + 8) = v20;
    }
    v17 = SectionHandle;
    v23 = *(_OWORD *)&v40.m256i_u64[2];
    AllocationAttributes = v37;
    *(_OWORD *)v18 = *(_OWORD *)v40.m256i_i8;
    memset(&v40, 0, 24);
    v13 = 0LL;
    v40.m256i_i64[3] = 0x200000000LL;
    *(_OWORD *)(v18 + 16) = v23;
  }
  if ( a7 )
  {
    if ( *(_QWORD *)(v18 + 32) )
    {
      v27 = a5;
      v26 = a4;
      goto LABEL_33;
    }
  }
  else if ( *(_QWORD *)(v18 + 40) )
  {
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      goto LABEL_16;
LABEL_17:
    *v42 = *(_QWORD *)(v18 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v28)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v30)
      && ((v32 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 || a7 != v31) )
    {
      *(_DWORD *)(v18 + 48) |= 4u;
    }
    v19 = v31;
    goto LABEL_23;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = v13;
  v19 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, *(HANDLE *)v18);
  if ( v19 >= 0 )
  {
    v17 = SectionHandle;
    v24 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    v25 = Object;
    v19 = v24;
    if ( v24 < 0 )
    {
LABEL_23:
      if ( v25 )
        ObfDereferenceObject(v25);
      goto LABEL_25;
    }
    v26 = a4;
    v27 = a5;
    if ( !a7 )
    {
      *(_QWORD *)(v18 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      {
LABEL_16:
        *(_DWORD *)(v18 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_17;
      }
      if ( *(_QWORD *)(v18 + 32) != v29
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v28)
        && ((unsigned __int8)v28 & (unsigned __int8)BYTE1(*(_DWORD *)(a4 + 20)) & 0x7F) == 0 )
      {
        goto LABEL_17;
      }
      *(_DWORD *)(v18 + 48) |= 2u;
LABEL_35:
      *a10 = v34;
      goto LABEL_17;
    }
    *(_QWORD *)(v18 + 32) = Object;
LABEL_33:
    if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(v26, 1LL, v27) )
      goto LABEL_17;
    *(_DWORD *)(v18 + 48) |= v34;
    goto LABEL_35;
  }
  v17 = SectionHandle;
LABEL_25:
  if ( v17 )
    NtClose(v17);
LABEL_27:
  if ( (v16 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(&v40, *(_QWORD *)(a1 + 8));
  return (unsigned int)v19;
}
