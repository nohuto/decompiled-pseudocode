/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x18000B060
 * Callers:
 *     LdrpLoadDependentModule @ 0x180023AC0 (LdrpLoadDependentModule.c)
 *     LdrpApplyFileNameRedirection @ 0x180026158 (LdrpApplyFileNameRedirection.c)
 *     RtlDosSearchPath_Ustr @ 0x180029E60 (RtlDosSearchPath_Ustr.c)
 *     LdrpQuerySxSMUIFile @ 0x1800584B4 (LdrpQuerySxSMUIFile.c)
 * Callees:
 *     sxsisol_RespectDotLocal @ 0x180002A5C (sxsisol_RespectDotLocal.c)
 *     RtlFindCharInUnicodeString @ 0x18000AA60 (RtlFindCharInUnicodeString.c)
 *     sxsisol_SearchActCtxForDllName @ 0x18000B588 (sxsisol_SearchActCtxForDllName.c)
 *     sxsisol_InitUnicodeStringBufferAroundUnicodeStrings @ 0x18000C084 (sxsisol_InitUnicodeStringBufferAroundUnicodeStrings.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     NtdllpFreeStringRoutine @ 0x1800178B0 (NtdllpFreeStringRoutine.c)
 *     RtlFreeAnsiString @ 0x18002A5F0 (RtlFreeAnsiString.c)
 *     RtlGetFullPathName_UstrEx @ 0x18002B310 (RtlGetFullPathName_UstrEx.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180075920 (RtlMultiAppendUnicodeStringBuffer.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x180084B68 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memset @ 0x1800A7100 (memset.c)
 *     RtlAssert @ 0x1800ED360 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        _WORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  char v9; // r14
  __int64 *v14; // rdx
  __int64 v15; // r9
  char v16; // si
  int CharInUnicodeString; // ebx
  bool v18; // si
  int v19; // r11d
  __int128 v20; // xmm0
  unsigned __int16 v21; // cx
  unsigned __int16 v22; // ax
  int v23; // r14d
  _DWORD *v24; // rsi
  _WORD *v25; // rax
  wchar_t *v26; // rcx
  _WORD v28[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v29; // [rsp+50h] [rbp-B0h] BYREF
  int v30; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v31[3]; // [rsp+64h] [rbp-9Ch] BYREF
  __int128 v32; // [rsp+70h] [rbp-90h] BYREF
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  _WORD v35[2]; // [rsp+90h] [rbp-70h] BYREF
  int v36; // [rsp+94h] [rbp-6Ch]
  _DWORD *v37; // [rsp+98h] [rbp-68h]
  __int64 v38; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+A8h] [rbp-58h] BYREF
  char *v40; // [rsp+B0h] [rbp-50h]
  UNICODE_STRING v41; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v43[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v44; // [rsp+F8h] [rbp-8h] BYREF
  wchar_t *v45; // [rsp+108h] [rbp+8h]
  wchar_t *v46; // [rsp+110h] [rbp+10h]
  __int64 v47; // [rsp+118h] [rbp+18h]
  __int64 v48; // [rsp+120h] [rbp+20h]
  _QWORD v49[12]; // [rsp+130h] [rbp+30h] BYREF
  _WORD v50[16]; // [rsp+190h] [rbp+90h] BYREF
  char v51; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = 0;
  v36 = a1;
  v37 = a7;
  LODWORD(v33) = 0;
  v34 = 0LL;
  v39 = 0x800000;
  v40 = &v51;
  v38 = 0LL;
  v28[0] = 0;
  v31[0] = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
  {
    *(_QWORD *)a5 = 0LL;
    *(_WORD *)(a5 + 2) = 0;
    *(_QWORD *)(a5 + 8) = 0LL;
  }
  v45 = v50;
  v47 = 32LL;
  v46 = v50;
  v48 = 32LL;
  *((_QWORD *)&v44 + 1) = v50;
  v50[0] = 0;
  LODWORD(v44) = 0x200000;
  sxsisol_InitUnicodeStringBufferAroundUnicodeStrings(v49, a4, a5, a6);
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 )
    goto LABEL_80;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_13;
LABEL_80:
    CharInUnicodeString = -1073741811;
    goto LABEL_42;
  }
  if ( a5 && !v15 )
    goto LABEL_80;
LABEL_13:
  v29 = *a2;
  if ( !a3 || !*a3 )
    goto LABEL_20;
  v16 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1, (__int16 *)&v29, (__int64)&unk_1801180D0, v35);
  if ( CharInUnicodeString >= 0 )
  {
    v16 = 1;
LABEL_17:
    CharInUnicodeString = 0;
    goto LABEL_18;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_17;
LABEL_18:
  if ( CharInUnicodeString < 0 )
    goto LABEL_42;
  if ( !v16 )
  {
    v43[1] = *(_OWORD *)a3;
    LOWORD(v44) = 0;
    v43[0] = v29;
    CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v44, 2LL, v43);
    if ( CharInUnicodeString < 0 )
      goto LABEL_42;
    v9 = 1;
  }
LABEL_20:
  if ( v9 )
    v29 = v44;
  v18 = 0;
  *(_QWORD *)&v32 = 0LL;
  if ( v34 )
  {
    CharInUnicodeString = -1073741811;
  }
  else
  {
    v19 = RtlDetermineDosPathNameType_Ustr(&v29);
    v30 = v19;
    if ( ((v19 - 1) & 0xFFFFFFFA) != 0 || v19 == 5 )
      goto LABEL_30;
    CharInUnicodeString = RtlGetFullPathName_UstrEx(
                            (unsigned int)&v29,
                            (unsigned int)&v39,
                            (unsigned int)&v33,
                            (unsigned int)&v32,
                            0LL,
                            0LL,
                            (__int64)&v30,
                            0LL);
    if ( CharInUnicodeString >= 0 )
    {
      v14 = (__int64 *)v32;
      v20 = *(_OWORD *)v32;
      v32 = *(_OWORD *)v32;
      if ( v30 == 6 && *(_DWORD *)(*((_QWORD *)&v29 + 1) + 10LL) == 6029370 )
      {
        *((_QWORD *)&v32 + 1) += 8LL;
        WORD1(v29) -= 8;
        v21 = v29 - 8;
        *((_QWORD *)&v29 + 1) += 8LL;
        v22 = v32 - 8;
        LOWORD(v29) = v29 - 8;
        WORD1(v32) -= 8;
        LOWORD(v32) = v32 - 8;
        v20 = v32;
      }
      else
      {
        v21 = v29;
        v22 = v32;
      }
      if ( v21 > v22 )
      {
        v29 = v20;
        v18 = v14 == &v33;
      }
LABEL_30:
      CharInUnicodeString = 0;
      if ( v18 )
        goto LABEL_33;
    }
  }
  if ( v34 )
  {
    NtdllpFreeStringRoutine();
    v33 = 0LL;
    v34 = 0LL;
  }
LABEL_33:
  if ( CharInUnicodeString < 0 )
    goto LABEL_43;
  if ( (v36 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        CharInUnicodeString = sxsisol_RespectDotLocal((__int64)&v29, (unsigned __int16 *)v49, v31);
        if ( CharInUnicodeString < 0 )
          goto LABEL_42;
      }
    }
  }
  v23 = v31[0];
  if ( (v31[0] & 1) != 0 )
  {
    v24 = v37;
  }
  else
  {
    if ( a4 || (LOBYTE(v14) = 1, a5) )
      LOBYTE(v14) = 0;
    v24 = v37;
    CharInUnicodeString = sxsisol_SearchActCtxForDllName(
                            (unsigned int)&v29,
                            (_DWORD)v14,
                            (unsigned int)&v38,
                            (_DWORD)v37,
                            (__int64)v49);
    if ( CharInUnicodeString < 0 )
      goto LABEL_42;
  }
  if ( !a5 && a4 && v49[1] != *(_QWORD *)(a4 + 8) )
  {
    CharInUnicodeString = -1073741789;
    goto LABEL_42;
  }
  if ( a8 )
  {
    CharInUnicodeString = RtlFindCharInUnicodeString(1, (__int16 *)v49, (__int64)&RtlDosPathSeperatorsString, v28);
    if ( CharInUnicodeString < 0 )
      goto LABEL_42;
    *a8 = ((unsigned __int64)v28[0] >> 1) + 1;
  }
  CharInUnicodeString = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v49);
  if ( CharInUnicodeString >= 0 )
  {
    if ( v24 )
      *v24 = v23;
    CharInUnicodeString = 0;
  }
  while ( 1 )
  {
LABEL_42:
    if ( CharInUnicodeString < 0 )
    {
LABEL_43:
      if ( LOBYTE(v49[10]) )
      {
        v25 = (_WORD *)v49[3];
        if ( v49[2] && v49[2] != v49[3] )
        {
          v41.Buffer = (wchar_t *)v49[2];
          RtlFreeAnsiString(&v41);
          v25 = (_WORD *)v49[3];
        }
        if ( v25 )
          *v25 = 0;
      }
      memset(v49, 0, 0x58uLL);
    }
    if ( v34 )
    {
      NtdllpFreeStringRoutine();
      v33 = 0LL;
      v34 = 0LL;
    }
    v26 = v46;
    if ( v45 )
    {
      if ( v45 != v46 )
      {
        UnicodeString.Buffer = v45;
        RtlFreeAnsiString(&UnicodeString);
        v26 = v46;
      }
      v47 = v48;
      v45 = v26;
    }
    *((_QWORD *)&v44 + 1) = v26;
    if ( v26 )
      *v26 = 0;
    WORD1(v44) = v48;
    LOWORD(v44) = 0;
    if ( CharInUnicodeString != -1072365567 )
      break;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      434LL,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    CharInUnicodeString = -1073741595;
  }
  return (unsigned int)CharInUnicodeString;
}
