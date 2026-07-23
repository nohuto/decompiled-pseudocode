/*
 * XREFs of GetNameFromLangListNode @ 0x18003FAB4
 * Callers:
 *     RtlpMUIRegPatchLicenseInfortmation @ 0x18003B144 (RtlpMUIRegPatchLicenseInfortmation.c)
 *     RtlpFilterandReplaceConsoleLanguages @ 0x18003B7E8 (RtlpFilterandReplaceConsoleLanguages.c)
 *     RtlGetNeutralFallback @ 0x18003BDDC (RtlGetNeutralFallback.c)
 *     LdrpMergeLangFallbackLists @ 0x18003C708 (LdrpMergeLangFallbackLists.c)
 *     RtlpAddNeutralsToMergedList @ 0x1800423A4 (RtlpAddNeutralsToMergedList.c)
 * Callees:
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 */

__int64 __fastcall GetNameFromLangListNode(__int64 a1, _WORD *a2, _UNICODE_STRING *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int16 v8; // ax
  __int64 v9; // r8
  __int64 v10; // rcx

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    switch ( *a2 )
    {
      case 1:
        if ( !RtlLCIDToCultureName((__int16)a2[2], a3) )
          return (unsigned int)-1073741595;
        return v3;
      case 2:
        v6 = 28LL * (__int16)a2[2];
        v7 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL);
        v8 = *(_WORD *)(v6 + v7 + 4);
        if ( *(__int16 *)(v6 + v7 + 6) > 0 )
        {
          v9 = *(_QWORD *)(a1 + 32);
          v10 = *(__int16 *)(v6 + v7 + 6);
LABEL_8:
          RtlInitUnicodeString(a3, (PCWSTR)(*(_QWORD *)(v9 + 24) + 2LL * *(__int16 *)(*(_QWORD *)(v9 + 16) + 2 * v10)));
          return v3;
        }
        if ( v8 && RtlLCIDToCultureName(v8, a3) )
          return v3;
        break;
      case 3:
        v9 = *(_QWORD *)(a1 + 32);
        v10 = (__int16)a2[2];
        goto LABEL_8;
    }
    return (unsigned int)-1073741595;
  }
  return 3221225485LL;
}
