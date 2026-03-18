/*
 * XREFs of ?DuplicateSharedResource@CChannel@@UEAAJPEAXW4Enum@DwmResourceType@@PEAI@Z @ 0x1800C9C40
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180055A08 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x1800C9D08 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ?MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C9DF8 (-MilTypeFromDwmType@CChannel@@CAJW4Enum@DwmResourceType@@PEAW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CChannel::DuplicateSharedResource(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  signed int v8; // eax
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  int v12; // ebx
  unsigned int v14; // [rsp+20h] [rbp-28h]
  __int64 v15; // [rsp+30h] [rbp-18h] BYREF
  struct _RTL_CRITICAL_SECTION *v16; // [rsp+38h] [rbp-10h] BYREF
  unsigned int v17; // [rsp+50h] [rbp+8h] BYREF

  v15 = 0LL;
  v16 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  v8 = CChannel::MilTypeFromDwmType(a3, &v17);
  v10 = v8;
  if ( v8 < 0 )
  {
    v14 = 825;
    goto LABEL_8;
  }
  v12 = NtDCompositionReferenceSharedResourceOnDwmChannel(*(unsigned int *)(a1 + 56), a2, v17, (char *)&v15 + 4, &v15);
  if ( v12 < 0 )
  {
    v10 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(v11, (const int *)"\b", 1u, v10, 0x340u, 0LL);
    goto LABEL_4;
  }
  v8 = CHandleTable::DuplicateHandleOnTarget(v11, HIDWORD(v15), (unsigned int)v15, v17, a1, a4, v15);
  v10 = v8;
  if ( v8 < 0 )
  {
    v14 = 839;
LABEL_8:
    MilInstrumentationCheckHR_MaybeFailFast(v9, (const int *)"\b", 1u, v8, v14, 0LL);
  }
LABEL_4:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v16);
  return v10;
}
