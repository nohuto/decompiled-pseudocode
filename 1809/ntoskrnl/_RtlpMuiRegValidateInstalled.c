/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x14073F6A0
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14073F178 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1401826AC (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x140182840 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x140182900 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     NtQueryInstallUILanguage @ 0x1406C6650 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x14073F940 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x14073FCF0 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x14073FEB4 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x140760068 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x140897850 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x1409094E8 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x140909738 (_RtlpMuiRegValidatePartialLanguage.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  __int16 v2; // di
  int v3; // esi
  int v4; // r14d
  wchar_t *v5; // r12
  LANGID v6; // r15
  unsigned int v7; // r13d
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 v20; // r11
  __int16 v21; // r10
  unsigned int v22; // eax
  int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // r8
  wchar_t *v26; // rax
  __int64 v27; // r8
  bool v28; // sf
  LANGID v29; // ax
  __int64 v30; // r9
  __int16 v31; // r8
  unsigned int v32; // eax
  LANGID LanguageId[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v34; // [rsp+2Ch] [rbp-DCh] BYREF
  UNICODE_STRING String; // [rsp+30h] [rbp-D8h] BYREF
  wchar_t *v36; // [rsp+40h] [rbp-C8h]
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  LANGID v38; // [rsp+4Ch] [rbp-BCh]
  int v39; // [rsp+4Eh] [rbp-BAh]
  __int16 v40; // [rsp+52h] [rbp-B6h]
  __int64 v41; // [rsp+54h] [rbp-B4h]
  __int64 v42; // [rsp+5Ch] [rbp-ACh]
  _BYTE v43[176]; // [rsp+68h] [rbp-A0h] BYREF

  v2 = -1;
  LanguageId[0] = 0;
  v34 = -1;
  v36 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v43, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(LanguageId);
    if ( result < 0 )
      return result;
    v6 = LanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &v34);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LanguageId[0] = -1;
    v26 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v36 = v26;
    v5 = v26;
    if ( !v26 )
      return -1073741801;
    String.Buffer = v26;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v27) = 1;
    v28 = (int)RtlpMuiRegGetOrAddString(a1, String.Buffer, v27, LanguageId) < 0;
    v29 = -1;
    if ( !v28 )
      v29 = LanguageId[0];
    v39 = v29;
    v37 = 49;
    v38 = v6;
    v41 = 0LL;
    v42 = 0LL;
    v40 = 0;
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v37, 0LL) < 0 )
      goto LABEL_12;
    v11 = *(_QWORD *)(a1 + 24);
    v3 = *(unsigned __int16 *)(v11 + 6) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v34;
    v11 = *(_QWORD *)(a1 + 24);
LABEL_8:
    if ( v3 != -1 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      String.Buffer = (wchar_t *)v43;
      String.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v12, &String) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, String.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
        else
        {
          v4 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = 0LL;
  v15 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v16 = *(_QWORD *)(a1 + 24);
    v17 = 0LL;
    do
    {
      v13 = v16;
      if ( (*(_BYTE *)(v17 + *(_QWORD *)(v16 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v15);
        v13 = *(_QWORD *)(a1 + 24);
        v30 = *(_QWORD *)(v13 + 16);
        v31 = *(_WORD *)(v30 + v17);
        v32 = v4 + 1;
        if ( (v31 & 0x1000) != 0 )
          v32 = v4;
        v4 = v32;
        if ( !v7 && v15 != v3 && v32 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v30 + v17) = v31 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v17) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v15;
      v17 += 28LL;
      v16 = v13;
    }
    while ( v15 < *(unsigned __int16 *)(v13 + 6) );
    v5 = v36;
    v14 = 0LL;
  }
  v18 = 0LL;
  if ( *(_WORD *)(v13 + 6) )
  {
    v19 = v13;
    do
    {
      v20 = *(_QWORD *)(v19 + 16);
      v13 = v19;
      v21 = *(_WORD *)(v20 + v14);
      if ( (v21 & 0x21) == 0x21 )
      {
        v22 = v4 + 1;
        if ( (v21 & 0x1000) != 0 )
          v22 = v4;
        v4 = v22;
        if ( !v7 && (_DWORD)v18 != v3 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v14) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v14) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      v18 = (unsigned int)(v18 + 1);
      v14 += 28LL;
      v19 = v13;
    }
    while ( (int)v18 < *(unsigned __int16 *)(v13 + 6) );
    v5 = v36;
  }
  v23 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = v13;
      if ( (*(_BYTE *)(v24 + *(_QWORD *)(v13 + 16)) & 4) != 0 )
      {
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v23, v13, v18);
        v25 = *(_QWORD *)(a1 + 24);
      }
      ++v23;
      v24 += 28LL;
      v13 = v25;
    }
    while ( v23 < *(unsigned __int16 *)(v25 + 6) );
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return 0;
}
