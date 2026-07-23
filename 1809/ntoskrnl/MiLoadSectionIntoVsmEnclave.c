/*
 * XREFs of MiLoadSectionIntoVsmEnclave @ 0x14085B5DC
 * Callers:
 *     NtLoadEnclaveData @ 0x14085C210 (NtLoadEnclaveData.c)
 * Callees:
 *     MiDereferenceControlAreaFile @ 0x14001CA78 (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x14001CBB0 (MiReferenceControlAreaFile.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     MiCommitExistingVad @ 0x140071460 (MiCommitExistingVad.c)
 *     MiSectionControlArea @ 0x140075E60 (MiSectionControlArea.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiCountCommittedPages @ 0x1402BD344 (MiCountCommittedPages.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     MiDecommitRegion @ 0x1405ED220 (MiDecommitRegion.c)
 *     MiUnmapImageInSystemSpace @ 0x140651A4C (MiUnmapImageInSystemSpace.c)
 *     MiMapImageInSystemSpace @ 0x140652000 (MiMapImageInSystemSpace.c)
 *     MiValidateSectionCreate @ 0x140653FD0 (MiValidateSectionCreate.c)
 *     MiPrefetchControlArea @ 0x1406C84E4 (MiPrefetchControlArea.c)
 *     VslLoadEnclaveModule @ 0x140819C74 (VslLoadEnclaveModule.c)
 *     MiGetSectionStrongImageReference @ 0x14085D558 (MiGetSectionStrongImageReference.c)
 */

NTSTATUS __fastcall MiLoadSectionIntoVsmEnclave(
        __int64 a1,
        ULONG_PTR a2,
        void *a3,
        KPROCESSOR_MODE a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _QWORD *a8)
{
  _DWORD *PoolWithTag; // rsi
  NTSTATUS result; // eax
  PVOID v12; // r12
  unsigned __int64 v13; // r14
  int EnclaveModule; // edi
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r12
  ULONG_PTR v20; // rbx
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // rcx
  _BYTE v24[8]; // [rsp+40h] [rbp-99h] BYREF
  PVOID Object; // [rsp+48h] [rbp-91h] BYREF
  int v26; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int64 v27; // [rsp+58h] [rbp-81h]
  __int64 v28; // [rsp+60h] [rbp-79h]
  __int64 v29; // [rsp+68h] [rbp-71h]
  _QWORD *v30; // [rsp+70h] [rbp-69h]
  unsigned __int64 v31[10]; // [rsp+80h] [rbp-59h] BYREF

  v29 = a7;
  PoolWithTag = 0LL;
  v30 = a8;
  v31[0] = 0LL;
  v27 = 0LL;
  result = ObReferenceObjectByHandle(a3, 4u, MmSectionObjectType, a4, &Object, 0LL);
  if ( result < 0 )
    return result;
  v12 = Object;
  v13 = MiSectionControlArea((__int64)Object);
  if ( (*((_DWORD *)v12 + 14) & 0x20) == 0 )
  {
    EnclaveModule = -1073741751;
    goto LABEL_26;
  }
  v15 = *((_QWORD *)v12 + 6);
  if ( v15 > (((*(unsigned int *)(a2 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a2 + 33) << 32)) << 12) | 0xFFF)
           - a6
           + 1
    || (v27 = v15 + a6 - 1, MiCountCommittedPages(a6, v27, a2, a1 + 1280)) )
  {
    EnclaveModule = -1073741800;
    goto LABEL_26;
  }
  v19 = *(_QWORD *)(v13 + 96);
  if ( (*(_DWORD *)(v13 + 92) & 0x180000) != 0 )
    goto LABEL_34;
  if ( (*(_QWORD *)(v19 + 40) & 0xFFFFFFFFFFFFFFF8uLL) <= 8 )
  {
    v20 = MiReferenceControlAreaFile(v13);
    EnclaveModule = MiValidateSectionCreate(v20, v13, 0xFFFFFFFF, a5, 0x40000000, 4, 0);
    MiDereferenceControlAreaFile(v13, v20);
    if ( EnclaveModule < 0 )
      goto LABEL_25;
    if ( (*(_DWORD *)(v13 + 92) & 0x180000) != 0 )
    {
LABEL_34:
      if ( *(_QWORD *)(v19 + 48)
        || (EnclaveModule = MiGetSectionStrongImageReference(v19, v16, v17, v18), EnclaveModule >= 0) )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4D456D4Du);
        if ( PoolWithTag )
        {
          EnclaveModule = MiMapImageInSystemSpace((__int64 *)v13, 1, (__int64)v31);
          if ( EnclaveModule >= 0 )
          {
            v26 = 0;
            v21 = v13 + 128;
            v22 = *(_QWORD *)(v13 + 136);
            v28 = v22;
            while ( 1 )
            {
              EnclaveModule = MiCommitExistingVad(
                                a2,
                                a6 + (((*(_QWORD *)(v21 + 8) - v22) << 9) & 0xFFFFFFFFFFFFF000uLL),
                                (unsigned __int64)*(unsigned int *)(v21 + 44) << 12,
                                4u,
                                &v26);
              if ( EnclaveModule < 0 )
                break;
              v21 = *(_QWORD *)(v21 + 16);
              v22 = v28;
              if ( !v21 )
              {
                MiPrefetchControlArea(v13, RtlpInterceptorRoutines[0], 0LL, 1LL, 0, 0xFFFFFFFF);
                EnclaveModule = VslLoadEnclaveModule(
                                  *(_QWORD *)(*(_QWORD *)(a2 + 72) + 24LL),
                                  a6,
                                  *(_QWORD *)(v19 + 48),
                                  v31[0],
                                  v29,
                                  v24,
                                  PoolWithTag + 9,
                                  PoolWithTag + 10);
                if ( EnclaveModule >= 0 && v24[0] )
                {
                  PoolWithTag[8] = 2;
                  *((_QWORD *)PoolWithTag + 2) = a6;
                  v23 = *(_QWORD **)(a2 + 88);
                  if ( *v23 != a2 + 80 )
                    __fastfail(3u);
                  *(_QWORD *)PoolWithTag = a2 + 80;
                  *((_QWORD *)PoolWithTag + 1) = v23;
                  *v23 = PoolWithTag;
                  *(_QWORD *)(a2 + 88) = PoolWithTag;
                  *v30 = PoolWithTag;
                  PoolWithTag = 0LL;
                }
                goto LABEL_25;
              }
            }
          }
        }
        else
        {
          EnclaveModule = -1073741670;
        }
      }
      goto LABEL_25;
    }
  }
  EnclaveModule = -1073740760;
LABEL_25:
  v12 = Object;
LABEL_26:
  if ( v31[0] )
  {
    MiUnmapImageInSystemSpace(v31);
    if ( EnclaveModule < 0 )
      MiDecommitRegion(a2, a6, v27);
  }
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  ObfDereferenceObject(v12);
  return EnclaveModule;
}
