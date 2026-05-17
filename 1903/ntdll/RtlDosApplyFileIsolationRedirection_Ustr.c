/*
 * XREFs of RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0
 * Callers:
 *     sub_180023170 @ 0x180023170 (sub_180023170.c)
 *     sub_1800253F0 @ 0x1800253F0 (sub_1800253F0.c)
 *     RtlDosSearchPath_Ustr @ 0x180025850 (RtlDosSearchPath_Ustr.c)
 *     sub_1800772D8 @ 0x1800772D8 (sub_1800772D8.c)
 * Callees:
 *     sub_1800267DC @ 0x1800267DC (sub_1800267DC.c)
 *     sub_180027528 @ 0x180027528 (sub_180027528.c)
 *     sub_1800289DC @ 0x1800289DC (sub_1800289DC.c)
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlMultiAppendUnicodeStringBuffer @ 0x180029690 (RtlMultiAppendUnicodeStringBuffer.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlDeleteBoundaryDescriptor @ 0x18006D6E0 (RtlDeleteBoundaryDescriptor.c)
 *     sub_180080B6C @ 0x180080B6C (sub_180080B6C.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DE690 @ 0x1800DE690 (sub_1800DE690.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 */

__int64 __fastcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        __int128 *a2,
        _WORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8,
        _QWORD *a9)
{
  __int64 v13; // r9
  char v14; // r15
  char v15; // r14
  int CharInUnicodeString; // ebx
  int v17; // edx
  int v18; // r14d
  _WORD *v19; // rax
  wchar_t *v20; // rcx
  __int128 v22; // xmm1
  _WORD v23[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v25[4]; // [rsp+38h] [rbp-C8h] BYREF
  int v26; // [rsp+3Ch] [rbp-C4h]
  __int128 v27; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v28; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  char *v33; // [rsp+80h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v35[2]; // [rsp+98h] [rbp-68h] BYREF
  __int128 v36; // [rsp+B8h] [rbp-48h] BYREF
  wchar_t *v37; // [rsp+C8h] [rbp-38h]
  wchar_t *v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  __int64 v40; // [rsp+E0h] [rbp-20h]
  _QWORD v41[12]; // [rsp+F0h] [rbp-10h] BYREF
  _WORD v42[16]; // [rsp+150h] [rbp+50h] BYREF
  char v43; // [rsp+170h] [rbp+70h] BYREF

  v26 = a1;
  *(_QWORD *)&v30.Length = a3;
  LODWORD(v28) = 0;
  v29 = 0LL;
  v32 = 0x800000;
  v33 = &v43;
  v31 = 0LL;
  v23[0] = 0;
  v24 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( a9 )
    *a9 = 520LL;
  if ( a5 )
  {
    *a5 = 0LL;
    a5[1] = 0LL;
  }
  v37 = v42;
  v39 = 32LL;
  v38 = v42;
  v40 = 32LL;
  v42[0] = 0;
  *((_QWORD *)&v36 + 1) = v42;
  LODWORD(v36) = 0x200000;
  sub_1800289DC(v41, a4, a5, a6);
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    CharInUnicodeString = -1073741811;
    goto LABEL_31;
  }
  v14 = 0;
  if ( !a2 )
    goto LABEL_69;
  if ( !a4 )
  {
    if ( a5 || !a8 )
      goto LABEL_13;
LABEL_69:
    CharInUnicodeString = -1073741811;
    goto LABEL_31;
  }
  if ( a5 && !v13 )
    goto LABEL_69;
LABEL_13:
  v27 = *a2;
  if ( a3 && *a3 )
  {
    v15 = 0;
    CharInUnicodeString = RtlFindCharInUnicodeString(1LL, &v27, &unk_180118230, v25);
    if ( CharInUnicodeString < 0 )
    {
      if ( CharInUnicodeString != -1073741275 )
      {
LABEL_18:
        if ( CharInUnicodeString < 0 )
          goto LABEL_31;
        if ( !v15 )
        {
          v22 = *(_OWORD *)*(_QWORD *)&v30.Length;
          v35[0] = v27;
          v35[1] = v22;
          CharInUnicodeString = RtlMultiAppendUnicodeStringBuffer(&v36, 2LL, v35);
          if ( CharInUnicodeString < 0 )
            goto LABEL_31;
          v14 = 1;
        }
        goto LABEL_20;
      }
    }
    else
    {
      v15 = 1;
    }
    CharInUnicodeString = 0;
    goto LABEL_18;
  }
LABEL_20:
  if ( v14 )
    v27 = v36;
  CharInUnicodeString = sub_180027528(&v27, &v32, &v28);
  if ( CharInUnicodeString >= 0 )
  {
    if ( (v26 & 1) == 0
      || !NtCurrentPeb()->ProcessParameters
      || (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) == 0
      || (CharInUnicodeString = sub_1800DE690(&v27, v41, &v24), CharInUnicodeString >= 0) )
    {
      v18 = v24;
      if ( (v24 & 1) != 0 )
        goto LABEL_63;
      if ( a4 || (LOBYTE(v17) = 1, a5) )
        LOBYTE(v17) = 0;
      CharInUnicodeString = sub_1800267DC((unsigned int)&v27, v17, (unsigned int)&v31, (_DWORD)a7, (__int64)v41);
      if ( CharInUnicodeString >= 0 )
      {
LABEL_63:
        if ( !a5 && a4 && v41[1] != *(_QWORD *)(a4 + 8) )
        {
          CharInUnicodeString = -1073741789;
          goto LABEL_31;
        }
        if ( a8 )
        {
          CharInUnicodeString = RtlFindCharInUnicodeString(1LL, v41, &unk_1801180B0, v23);
          if ( CharInUnicodeString < 0 )
            goto LABEL_31;
          *a8 = ((unsigned __int64)v23[0] >> 1) + 1;
        }
        CharInUnicodeString = sub_180080B6C(v41);
        if ( CharInUnicodeString >= 0 )
        {
          if ( a7 )
            *a7 = v18;
          CharInUnicodeString = 0;
        }
      }
    }
  }
  while ( 1 )
  {
LABEL_31:
    if ( CharInUnicodeString < 0 )
    {
      if ( LOBYTE(v41[10]) )
      {
        v19 = (_WORD *)v41[3];
        if ( v41[2] && v41[2] != v41[3] )
        {
          v30.Buffer = (wchar_t *)v41[2];
          RtlFreeUnicodeString(&v30);
          v19 = (_WORD *)v41[3];
        }
        if ( v19 )
          *v19 = 0;
      }
      memset(v41, 0, 0x58uLL);
    }
    if ( v29 )
    {
      RtlDeleteBoundaryDescriptor(v29);
      v28 = 0LL;
      v29 = 0LL;
    }
    v20 = v38;
    if ( v37 )
    {
      if ( v37 != v38 )
      {
        UnicodeString.Buffer = v37;
        RtlFreeUnicodeString(&UnicodeString);
        v20 = v38;
      }
      v39 = v40;
      v37 = v20;
    }
    *((_QWORD *)&v36 + 1) = v20;
    if ( v20 )
      *v20 = 0;
    WORD1(v36) = v40;
    LOWORD(v36) = 0;
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
