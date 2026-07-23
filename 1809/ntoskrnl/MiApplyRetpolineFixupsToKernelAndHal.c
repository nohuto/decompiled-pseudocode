/*
 * XREFs of MiApplyRetpolineFixupsToKernelAndHal @ 0x1409D3744
 * Callers:
 *     MiRebaseDynamicRelocationRegions @ 0x1409D341C (MiRebaseDynamicRelocationRegions.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14009DA20 (RtlImageNtHeader.c)
 *     MiIsImportOptimizationEnabled @ 0x1400DA590 (MiIsImportOptimizationEnabled.c)
 *     MiIsRetpolineEnabled @ 0x1400DA5F0 (MiIsRetpolineEnabled.c)
 *     VslpEnterIumSecureMode @ 0x140129D80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     RtlUpdateImportRelocationsInImage @ 0x1401B6174 (RtlUpdateImportRelocationsInImage.c)
 *     RtlLookupImageSectionByName @ 0x1402F4220 (RtlLookupImageSectionByName.c)
 *     RtlCopyRetpolineStubsUnwindInfo @ 0x1402F6A24 (RtlCopyRetpolineStubsUnwindInfo.c)
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x1402F7294 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     MiSetRetpolineRoutines @ 0x1409ABF7C (MiSetRetpolineRoutines.c)
 */

NTSTATUS __fastcall MiApplyRetpolineFixupsToKernelAndHal(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  NTSTATUS result; // eax
  unsigned int v7; // edx
  PIMAGE_NT_HEADERS v8; // rax
  const char *v9; // rax
  PIMAGE_NT_HEADERS v10; // rax
  const char *v11; // rax
  unsigned int (*v12)(void); // rsi
  bool IsRetpolineEnabled; // al
  bool v14; // al
  _BYTE v15[8]; // [rsp+40h] [rbp-98h] BYREF
  __int64 v16; // [rsp+48h] [rbp-90h]

  dword_140439EF4 = *(_DWORD *)(*(_QWORD *)(a1 + 240) + 3428LL) >> 12;
  if ( MiIsRetpolineEnabled() )
  {
    MiSetRetpolineRoutines(*(char **)(v5 + 48));
    if ( dword_140439F20 > (unsigned int)dword_140439EF4 )
      return -1073741811;
  }
  if ( (MiIsRetpolineEnabled() || MiIsImportOptimizationEnabled()) && (MiFlags & 0x10000) != 0 )
  {
    MiIsRetpolineEnabled();
    if ( MiIsImportOptimizationEnabled() )
      v7 |= 2u;
    v16 = v7;
    return VslpEnterIumSecureMode(2u, 220LL, 0, (__int64)v15);
  }
  else
  {
    if ( MiIsRetpolineEnabled() )
    {
      v8 = RtlImageNtHeader(*(PVOID *)(a2 + 48));
      v9 = RtlLookupImageSectionByName((__int64)v8, "INITKDBG");
      result = RtlPerformRetpolineRelocationsOnImageEx(
                 *(char **)(a2 + 48),
                 *(_QWORD *)(a2 + 48),
                 *(_DWORD *)(a2 + 64),
                 (__int64)qword_140439F10,
                 (__int64)qword_140439F10,
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
                 (__int64)qword_140439F10,
                 (__int64)qword_140439F10,
                 1,
                 *((_DWORD *)v11 + 3),
                 *((_DWORD *)v11 + 2));
      if ( result < 0 )
        return result;
      MiRetpolUnwindInfoCopyStatus = RtlCopyRetpolineStubsUnwindInfo(
                                       *(_QWORD *)(a2 + 48),
                                       *(_QWORD *)(a2 + 48),
                                       (unsigned int *)qword_140439F10,
                                       (int)qword_140439F10);
    }
    if ( !MiIsImportOptimizationEnabled() )
      return 0;
    v12 = 0LL;
    if ( MiIsRetpolineEnabled() )
      v12 = (unsigned int (*)(void))MiIsBootImageTargetFullyRetpolined;
    IsRetpolineEnabled = MiIsRetpolineEnabled();
    result = RtlUpdateImportRelocationsInImage(
               *(char **)(a2 + 48),
               *(_QWORD *)(a2 + 48),
               *(_DWORD *)(a2 + 64),
               v12,
               (__int64)qword_140439F10,
               (__int64)qword_140439F10,
               1,
               !IsRetpolineEnabled);
    if ( result >= 0 )
    {
      v14 = MiIsRetpolineEnabled();
      result = RtlUpdateImportRelocationsInImage(
                 *(char **)(a3 + 48),
                 *(_QWORD *)(a3 + 48),
                 *(_DWORD *)(a3 + 64),
                 v12,
                 (__int64)qword_140439F10,
                 (__int64)qword_140439F10,
                 1,
                 !v14);
      if ( result >= 0 )
        return 0;
    }
  }
  return result;
}
