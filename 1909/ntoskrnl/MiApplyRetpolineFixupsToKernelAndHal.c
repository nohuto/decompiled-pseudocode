/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x1409F00AC
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1409EFDA4 (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14005EE50 (RtlImageNtHeader.c)
 *     VslpEnterIumSecureMode @ 0x14012B19C (VslpEnterIumSecureMode.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140187A28 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140187DDC (RtlUpdateImportRelocationsInImage.c)
 *     RtlLookupImageSectionByName @ 0x140188354 (RtlLookupImageSectionByName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x140314E14 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     MiSetRetpolineRoutines @ 0x1409F048C (MiSetRetpolineRoutines.c)
 */

NTSTATUS __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  unsigned int v6; // edi
  __int64 v7; // rax
  PIMAGE_NT_HEADERS v8; // rax
  const char *v9; // rax
  PIMAGE_NT_HEADERS v10; // rax
  const char *v11; // rax
  unsigned int (*v12)(void); // rdi
  _QWORD v13[14]; // [rsp+40h] [rbp-98h] BYREF

  dword_14046454C = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3452LL) >> 12;
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    MiSetRetpolineRoutines(*(_QWORD *)(a2 + 48));
    if ( dword_140464588 > (unsigned int)dword_14046454C )
      return -1073741811;
  }
  if ( ((KiSpeculationFeatures & 0x2000000) != 0 || (KiSpeculationFeatures & 0x4000000) != 0)
    && (MiFlags & 0x10000) != 0 )
  {
    v6 = ((unsigned int)KiSpeculationFeatures >> 25) & 1;
    memset(v13, 0, 0x68uLL);
    v7 = v6 | 2;
    if ( (KiSpeculationFeatures & 0x4000000) == 0 )
      v7 = v6;
    v13[1] = v7;
    return VslpEnterIumSecureMode(2, 219LL, 0LL, (__int64)v13);
  }
  else
  {
    if ( (KiSpeculationFeatures & 0x2000000) != 0 )
    {
      v8 = RtlImageNtHeader(*(PVOID *)(a2 + 48));
      v9 = RtlLookupImageSectionByName((__int64)v8, "INITKDBG");
      result = RtlPerformRetpolineRelocationsOnImageEx(
                 *(char **)(a2 + 48),
                 *(_QWORD *)(a2 + 48),
                 *(_DWORD *)(a2 + 64),
                 (__int64)qword_140464568,
                 (__int64)qword_140464568,
                 1,
                 *((_DWORD *)v9 + 3),
                 *((_DWORD *)v9 + 2));
      if ( result < 0 )
        return result;
      v10 = RtlImageNtHeader(*(PVOID *)(a3 + 48));
      v11 = RtlLookupImageSectionByName((__int64)v10, "MINIEX");
      result = RtlPerformRetpolineRelocationsOnImageEx(
                 *(char **)(a3 + 48),
                 *(_QWORD *)(a3 + 48),
                 *(_DWORD *)(a3 + 64),
                 (__int64)qword_140464568,
                 (__int64)qword_140464568,
                 1,
                 *((_DWORD *)v11 + 3),
                 *((_DWORD *)v11 + 2));
      if ( result < 0 )
        return result;
      MiRetpolUnwindInfoCopyStatus = RtlCopyRetpolineStubsUnwindInfo(
                                       *(_QWORD *)(a2 + 48),
                                       *(_QWORD *)(a2 + 48),
                                       (unsigned int *)qword_140464568,
                                       (__int64)qword_140464568);
    }
    if ( (KiSpeculationFeatures & 0x4000000) == 0 )
      return 0;
    v12 = (unsigned int (*)(void))((unsigned __int64)MiIsBootImageTargetFullyRetpolined & -(__int64)((KiSpeculationFeatures & 0x2000000) != 0));
    result = RtlUpdateImportRelocationsInImage(
               *(char **)(a2 + 48),
               *(_QWORD *)(a2 + 48),
               *(_DWORD *)(a2 + 64),
               v12,
               (__int64)qword_140464568,
               (__int64)qword_140464568,
               1,
               (KiSpeculationFeatures & 0x2000000) == 0);
    if ( result >= 0 )
    {
      result = RtlUpdateImportRelocationsInImage(
                 *(char **)(a3 + 48),
                 *(_QWORD *)(a3 + 48),
                 *(_DWORD *)(a3 + 64),
                 v12,
                 (__int64)qword_140464568,
                 (__int64)qword_140464568,
                 1,
                 (KiSpeculationFeatures & 0x2000000) == 0);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
