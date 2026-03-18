/*
 * XREFs of ?ObtainKernelmodeAllocation@UmfdAllocation@@SAPEAXW4FontDriverType@@_KPEAXIPEA_NP6A_N22I@Z@Z @ 0x1C011E654
 * Callers:
 *     ?CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z @ 0x1C011E260 (-CaptureUsermodeParameters@QueryFontRequest@@UEAAXPEAX@Z.c)
 *     ?CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ @ 0x1C011E4E0 (-CaptureGlyphSet@QueryFontTreeRequest@@AEAAXXZ.c)
 *     ?CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ @ 0x1C0146344 (-CaptureKerningPairs@QueryFontTreeRequest@@AEAAXXZ.c)
 * Callees:
 *     ?ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z @ 0x1C0095B34 (-ReleaseKernelmodeAllocation@UmfdAllocation@@SAXPEAX@Z.c)
 *     ?_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z @ 0x1C011E1E8 (-_ValidateAllocationPair@UmfdAllocation@@CA_NW4FontDriverType@@_KPEAV1@PEAXIP6A_N33I@Z@Z.c)
 *     ?_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z @ 0x1C011E83C (-_FindAndReferenceExistingKernelmodeAllocation@UmfdAllocation@@CAPEAV1@PEAX@Z.c)
 *     unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___ @ 0x1C011E948 (unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___--_unique_ptr_UmfdAllocatio.c)
 *     ?Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z @ 0x1C011E96C (-Insert@CPointerHashTable@NSInstrumentation@@QEAA_NPEBX0@Z.c)
 *     ?TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z @ 0x1C011EB54 (-TryCopyMemoryFromProbedPointer@@YA_NPEAX0I@Z.c)
 *     ?TryProbeForRead@@YA_NPEAXII@Z @ 0x1C011EE0C (-TryProbeForRead@@YA_NPEAXII@Z.c)
 */

char *__fastcall UmfdAllocation::ObtainKernelmodeAllocation(
        int a1,
        __int64 a2,
        void *a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned __int8 (__fastcall *a6)(void *, __int64, _QWORD))
{
  PVOID v6; // rbx
  struct UmfdAllocation *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r8d
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  PVOID v17; // rbx
  struct UmfdAllocation *v18; // rax
  char *v19; // rdi
  _DWORD *v21; // [rsp+30h] [rbp-38h] BYREF

  v6 = UmfdAllocation::s_allocationLookupLock;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v6, 0LL);
  v11 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
  ExReleasePushLockSharedEx(v6, 0LL, v12, v13);
  KeLeaveCriticalRegion();
  if ( a5 )
    *a5 = 0;
  if ( v11 )
  {
    if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v11, a3, a4, a6) )
      return (char *)v11 + 28;
    UmfdAllocation::ReleaseKernelmodeAllocation((char *)v11 + 28);
  }
  else if ( TryProbeForRead(a3, a4, v14) && a4 + 28 >= a4 )
  {
    v15 = EngAllocMem(0, a4 + 28, 0x61646647u);
    v21 = v15;
    v16 = v15;
    if ( !v15
      || (v15[1] = a1,
          *((_QWORD *)v15 + 1) = a2,
          v15[6] = a4,
          *v15 = 1,
          *((_QWORD *)v15 + 2) = a3,
          !TryCopyMemoryFromProbedPointer(v15 + 7, a3, a4)) )
    {
      v19 = 0LL;
LABEL_13:
      unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___::_unique_ptr_UmfdAllocation__lambda_e063d8fab83c87fda3b4c41002095086___(&v21);
      return v19;
    }
    v17 = UmfdAllocation::s_allocationLookupLock;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v17, 0LL);
    v18 = UmfdAllocation::_FindAndReferenceExistingKernelmodeAllocation(a3);
    if ( v18 )
    {
      v19 = (char *)v18 + 28;
      if ( UmfdAllocation::_ValidateAllocationPair(a1, a2, (__int64)v18, a3, a4, a6) )
      {
LABEL_22:
        ExReleasePushLockExclusiveEx(v17, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_13;
      }
      UmfdAllocation::ReleaseKernelmodeAllocation(v19);
    }
    else if ( NSInstrumentation::CPointerHashTable::Insert(
                (NSInstrumentation::CPointerHashTable *)UmfdAllocation::s_allocationLookup,
                a3,
                v16 + 7) )
    {
      ExReleasePushLockExclusiveEx(v17, 0LL);
      KeLeaveCriticalRegion();
      v21 = 0LL;
      if ( a5 )
        *a5 = 1;
      v19 = (char *)(v16 + 7);
      goto LABEL_13;
    }
    v19 = 0LL;
    goto LABEL_22;
  }
  return 0LL;
}
