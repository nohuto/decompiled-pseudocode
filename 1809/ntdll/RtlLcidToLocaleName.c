/*
 * XREFs of RtlLcidToLocaleName @ 0x180040700
 * Callers:
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrpResSearchResourceMappedFile @ 0x180037AB4 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18003E950 (LdrLoadAlternateResourceModuleEx.c)
 *     RtlLCIDToCultureName @ 0x18003FEC0 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegAddNeutralToInstalled @ 0x18004C624 (_RtlpMuiRegAddNeutralToInstalled.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 *     LdrpGetParentLangId @ 0x1800830C4 (LdrpGetParentLangId.c)
 *     LdrpResSearchResourceHandle @ 0x1800E581C (LdrpResSearchResourceHandle.c)
 * Callees:
 *     RtlpInitUnicodeStringUsingBuffer @ 0x180040868 (RtlpInitUnicodeStringUsingBuffer.c)
 *     RtlpNlsGetLcidIndex @ 0x1800408E0 (RtlpNlsGetLcidIndex.c)
 *     RtlpLoadNlsData @ 0x180080B14 (RtlpLoadNlsData.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     RtlpGetUserLocaleName @ 0x1800F93C4 (RtlpGetUserLocaleName.c)
 *     RtlpGetUserOrMachineUILanguage4NLS @ 0x1800FF570 (RtlpGetUserOrMachineUILanguage4NLS.c)
 */

__int64 __fastcall RtlLcidToLocaleName(unsigned int a1, __int64 a2, int a3, char a4)
{
  char v5; // r14
  unsigned int v7; // ebx
  int LcidIndex; // eax
  __int64 v9; // r8
  __int64 v10; // rax
  wchar_t *v11; // r10
  _WORD *v12; // rax
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned int v15; // edx
  __int64 v16; // r8
  wchar_t *Buffer; // rdx
  __int64 v19; // [rsp+20h] [rbp-A9h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-A1h] BYREF
  _BYTE v21[176]; // [rsp+40h] [rbp-89h] BYREF

  v19 = 85LL;
  v5 = a3;
  v7 = a1;
  if ( (a1 & 0xFFFFEFFF) == 0 )
    return 3221225711LL;
  if ( a2 )
  {
    if ( (a3 & 0xFFFFFFFD) != 0 )
      return 3221225713LL;
    if ( a4 || *(_QWORD *)(a2 + 8) )
    {
      if ( a1 == 5120 )
      {
        if ( (int)RtlpGetUserOrMachineUILanguage4NLS(1LL, v21, &v19) >= 0 )
        {
          v16 = (unsigned int)v19;
          Buffer = (wchar_t *)v21;
          goto LABEL_21;
        }
      }
      else if ( ((a1 - 1024) & 0xFFFFF7FF) != 0 )
      {
        if ( pTblPtrs || (unsigned __int8)RtlpLoadNlsData() )
        {
          if ( v7 == 2048 )
            v7 = gSystemLocale;
          LcidIndex = RtlpNlsGetLcidIndex(v7);
          if ( LcidIndex < 0 )
            return 3221225711LL;
          v9 = LcidIndex;
          if ( (v5 & 2) == 0 )
          {
            _mm_lfence();
            if ( (*(_BYTE *)(*(unsigned __int16 *)(pTblPtrs + 56)
                           * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8LL * LcidIndex + 4)
                           + *(_QWORD *)(pTblPtrs + 16)
                           + 24LL) & 1) == 0 )
              return 3221225711LL;
          }
          _mm_lfence();
          v10 = *(_QWORD *)(pTblPtrs + 40) + 2LL;
          v11 = (wchar_t *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v9 + 6));
          if ( v11 )
          {
            v12 = (_WORD *)(v10 + 2LL * *(unsigned __int16 *)(*(_QWORD *)(pTblPtrs + 24) + 8 * v9 + 6));
            v13 = 84LL;
            do
            {
              if ( !*v12 )
                break;
              ++v12;
              --v13;
            }
            while ( v13 );
            v14 = v13 == 0 ? 0xC000000D : 0;
            v15 = v13 ? 84 - v13 : 0;
          }
          else
          {
            v15 = v19;
            v14 = 3221225485LL;
          }
          if ( (int)v14 >= 0 )
          {
            v16 = v15;
            Buffer = v11;
LABEL_21:
            LOBYTE(v14) = a4;
            return RtlpInitUnicodeStringUsingBuffer(v14, Buffer, v16, a2);
          }
        }
      }
      else
      {
        DestinationString.Buffer = (wchar_t *)v21;
        DestinationString.MaximumLength = 170;
        if ( (int)RtlpGetUserLocaleName(&DestinationString) >= 0 )
        {
          Buffer = DestinationString.Buffer;
          v16 = DestinationString.Length >> 1;
          goto LABEL_21;
        }
      }
      return 3221225473LL;
    }
  }
  return 3221225712LL;
}
