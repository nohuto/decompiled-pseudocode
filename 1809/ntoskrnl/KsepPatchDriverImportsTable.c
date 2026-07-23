/*
 * XREFs of KsepPatchDriverImportsTable @ 0x1408495EC
 * Callers:
 *     KsepApplyShimsToDriver @ 0x1408493BC (KsepApplyShimsToDriver.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1400F2CC0 (RtlImageDirectoryEntryToData.c)
 *     VfIsVerifierEnabled @ 0x14013BAE0 (VfIsVerifierEnabled.c)
 *     VfIsVerificationEnabledForImage @ 0x140309C00 (VfIsVerificationEnabledForImage.c)
 *     KsepPatchImportTableEntry @ 0x140849760 (KsepPatchImportTableEntry.c)
 *     VfGetHookAddressForOriginal @ 0x14092917C (VfGetHookAddressForOriginal.c)
 */

__int64 __fastcall KsepPatchDriverImportsTable(__int64 a1, __int64 a2)
{
  PVOID v4; // r13
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // r12
  __int64 v8; // rbx
  int v9; // r15d
  __int64 HookAddressForOriginal; // rbp
  ULONG v11; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && a2 )
  {
    v4 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &v11);
    if ( !v4 )
      return 3221225473LL;
    v6 = *(_QWORD *)(a2 + 48);
    if ( v6 )
    {
      LODWORD(v7) = 0;
      while ( 1 )
      {
        if ( *(_DWORD *)v6 == 4 )
          return 0LL;
        if ( *(_DWORD *)v6 <= 2u )
          break;
LABEL_24:
        v7 = (unsigned int)(v7 + 1);
        v6 = *(_QWORD *)(a2 + 48) + 24 * v7;
        if ( !v6 )
          return 0LL;
      }
      v8 = *(_QWORD *)(v6 + 16);
      if ( v8 )
      {
        v9 = 0;
        while ( 1 )
        {
          if ( *(_DWORD *)v8 == 2 )
            goto LABEL_24;
          if ( !*(_QWORD *)(v8 + 16) || !*(_QWORD *)(v8 + 24) || *(_DWORD *)v8 )
            return 3221225485LL;
          result = KsepPatchImportTableEntry(v4, v11);
          if ( (_DWORD)result == -1073741275 )
          {
            if ( !(unsigned int)VfIsVerifierEnabled() )
              goto LABEL_23;
            if ( !(unsigned int)VfIsVerificationEnabledForImage(a1) )
              goto LABEL_23;
            HookAddressForOriginal = VfGetHookAddressForOriginal(*(_QWORD *)(v8 + 8));
            if ( !HookAddressForOriginal )
              goto LABEL_23;
            result = KsepPatchImportTableEntry(v4, v11);
            if ( (int)result < 0 )
              goto LABEL_22;
            *(_QWORD *)(v8 + 24) = HookAddressForOriginal;
          }
          if ( (int)result < 0 )
          {
LABEL_22:
            if ( (_DWORD)result != -1073741275 )
              return result;
          }
LABEL_23:
          v8 = *(_QWORD *)(v6 + 16) + 32LL * (unsigned int)++v9;
          if ( !v8 )
            goto LABEL_24;
        }
      }
    }
  }
  return 3221225485LL;
}
