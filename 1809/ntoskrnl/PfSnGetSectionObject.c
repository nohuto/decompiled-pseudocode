/*
 * XREFs of PfSnGetSectionObject @ 0x140660E58
 * Callers:
 *     PfSnPopulateReadList @ 0x140660900 (PfSnPopulateReadList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PfpFileCheckAttributesForPrefetch @ 0x1400DDB74 (PfpFileCheckAttributesForPrefetch.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     NtCreateSection @ 0x1405DE740 (NtCreateSection.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     PfSnPrefetchFileMetadata @ 0x14065DCA4 (PfSnPrefetchFileMetadata.c)
 *     PfSnIsSectionPrefetchedAfterPhase @ 0x14066128C (PfSnIsSectionPrefetchedAfterPhase.c)
 *     PfpOpenHandleCreate @ 0x140661528 (PfpOpenHandleCreate.c)
 *     PfpOpenHandleClose @ 0x14066168C (PfpOpenHandleClose.c)
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 */

__int64 __fastcall PfSnGetSectionObject(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        unsigned int a5,
        unsigned int a6,
        int a7,
        __int64 a8,
        _QWORD *a9,
        _BYTE *a10)
{
  HANDLE v13; // r14
  __int64 v14; // rax
  __int64 v15; // r13
  ULONG AllocationAttributes; // ecx
  NTSTATUS v17; // edi
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r9
  __int128 v24; // xmm1
  __int64 v25; // r8
  int v26; // r10d
  NTSTATUS v27; // eax
  PVOID v28; // r10
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // edx
  unsigned __int8 v33; // r8
  HANDLE SectionHandle; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+48h] [rbp-99h] BYREF
  ULONG v37; // [rsp+50h] [rbp-91h]
  PVOID v38[4]; // [rsp+58h] [rbp-89h] BYREF
  __int64 v39; // [rsp+78h] [rbp-69h] BYREF
  PVOID Object; // [rsp+80h] [rbp-61h] BYREF
  _QWORD *v41; // [rsp+88h] [rbp-59h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-51h] BYREF
  _QWORD v43[3]; // [rsp+C0h] [rbp-21h] BYREF

  v36 = a8;
  v39 = a3;
  v41 = a9;
  *a9 = 0LL;
  *a10 = 0;
  memset(v38, 0, sizeof(v38));
  v13 = 0LL;
  SectionHandle = 0LL;
  v14 = *(_QWORD *)a1;
  v15 = 0x200000000LL;
  v38[3] = (PVOID)0x200000000LL;
  AllocationAttributes = a7 != 0 ? 285212672 : 0x4000000;
  v37 = AllocationAttributes;
  if ( a6 >= *(_DWORD *)(v14 + 88) )
  {
    v17 = -1073741811;
    goto LABEL_45;
  }
  v18 = *(_QWORD *)(a1 + 56) + 56LL * a6;
  if ( (*(_QWORD *)(v18 + 24) & 0x400000000LL) == 0 )
  {
    if ( (*(_DWORD *)(a2 + 108) & 1) == 0 )
    {
      v19 = (unsigned int)a4[7];
      v43[0] = 0LL;
      v43[1] = 0LL;
      v20 = (unsigned int)a4[6] | (unsigned __int64)(v19 << 32);
      v43[0] = 0x100000003LL;
      v43[2] = v20;
      if ( v20 )
        PfSnPrefetchFileMetadata(a1, *(void **)(a2 + 32), (__int64)v43, 0, 1u, (HANDLE)v36);
    }
    v17 = PfpOpenHandleCreate((unsigned int)v38, *(_QWORD *)(a1 + 8), v39, *(_QWORD *)(a2 + 64), 161, 64, 128, a2 + 32);
    if ( v17 < 0
      || (v17 = PfpFileCheckAttributesForPrefetch(v38[0], (((dword_14043D130 & 0x10) == 0) << 14) + 4864), v17 < 0) )
    {
      v15 = (__int64)v38[3];
      goto LABEL_45;
    }
    if ( *(_DWORD *)(a1 + 120) < *(_DWORD *)(a1 + 124)
      && (int)IopQueryXxxInformation(v38[1], (__int64)&v36, (__int64)&v39, 1) >= 0 )
    {
      v21 = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 120), 1u);
      v22 = *(_QWORD *)(a1 + 112);
      v23 = 3 * v21;
      *(_QWORD *)(v22 + 8 * v23 + 12) = v36;
      LODWORD(v21) = v38[3];
      *(_QWORD *)(v22 + 8 * v23) = *((_QWORD *)v38[1] + 3);
      *(_DWORD *)(v22 + 8 * v23 + 8) = v21;
    }
    v24 = *(_OWORD *)&v38[2];
    *(_OWORD *)v18 = *(_OWORD *)v38;
    *(_OWORD *)(v18 + 16) = v24;
    memset(v38, 0, sizeof(v38));
    AllocationAttributes = v37;
    v13 = SectionHandle;
    v38[3] = (PVOID)0x200000000LL;
  }
  if ( a7 )
  {
    if ( *(_QWORD *)(v18 + 32) )
    {
      if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        goto LABEL_34;
      *(_DWORD *)(v18 + 48) |= v26;
      goto LABEL_17;
    }
  }
  else if ( *(_QWORD *)(v18 + 40) )
  {
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
    {
      *(_DWORD *)(v18 + 48) |= 2u;
LABEL_17:
      *a10 = v26;
      goto LABEL_34;
    }
    goto LABEL_34;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ObjectAttributes.Attributes = 576;
  v17 = NtCreateSection(&SectionHandle, 5u, &ObjectAttributes, 0LL, 2u, AllocationAttributes, *(HANDLE *)v18);
  if ( v17 >= 0 )
  {
    v13 = SectionHandle;
    v27 = ObReferenceObjectByHandle(SectionHandle, 5u, MmSectionObjectType, 0, &Object, 0LL);
    v28 = Object;
    v17 = v27;
    if ( v27 < 0 )
    {
LABEL_40:
      if ( v28 )
        ObfDereferenceObject(v28);
      goto LABEL_43;
    }
    if ( a7 )
    {
      *(_QWORD *)(v18 + 32) = Object;
      if ( (unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, a5) )
        goto LABEL_34;
      *(_DWORD *)(v18 + 48) |= v29;
    }
    else
    {
      *(_QWORD *)(v18 + 40) = Object;
      if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, a5) )
      {
        *(_DWORD *)(v18 + 48) |= 2u;
        *a10 = 1;
        goto LABEL_34;
      }
      if ( *(_QWORD *)(v18 + 32) != v30
        || !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v25)
        && ((unsigned __int8)v25 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 )
      {
        goto LABEL_34;
      }
      *(_DWORD *)(v18 + 48) |= 2u;
    }
    *a10 = v29;
LABEL_34:
    *v41 = *(_QWORD *)(v18 + 8);
    if ( !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 1LL, v25)
      && !(unsigned __int8)PfSnIsSectionPrefetchedAfterPhase(a4, 0LL, v31)
      && ((v33 & (unsigned __int8)BYTE1(a4[5]) & 0x7F) == 0 || a7 != v32) )
    {
      *(_DWORD *)(v18 + 48) |= 4u;
    }
    v17 = 0;
    goto LABEL_40;
  }
  v13 = SectionHandle;
LABEL_43:
  if ( v13 )
    NtClose(v13);
LABEL_45:
  if ( (v15 & 0x400000000LL) != 0 )
    PfpOpenHandleClose(v38, *(_QWORD *)(a1 + 8));
  return (unsigned int)v17;
}
