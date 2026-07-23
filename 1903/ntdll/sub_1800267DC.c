/*
 * XREFs of sub_1800267DC @ 0x1800267DC
 * Callers:
 *     RtlDosApplyFileIsolationRedirection_Ustr @ 0x1800263C0 (RtlDosApplyFileIsolationRedirection_Ustr.c)
 * Callees:
 *     RtlFindActivationContextSectionString @ 0x180026BF0 (RtlFindActivationContextSectionString.c)
 *     RtlFindCharInUnicodeString @ 0x180028A80 (RtlFindCharInUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 *     sub_180070B08 @ 0x180070B08 (sub_180070B08.c)
 *     RtlpEnsureBufferSize @ 0x18007F3B0 (RtlpEnsureBufferSize.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 *     sub_1800DE4C8 @ 0x1800DE4C8 (sub_1800DE4C8.c)
 *     RtlAssert @ 0x1800EA470 (RtlAssert.c)
 */

__int64 __fastcall sub_1800267DC(_UNICODE_STRING *a1, char a2, unsigned __int64 *a3, __int64 a4, unsigned __int16 *a5)
{
  _UNICODE_STRING v8; // xmm0
  _ACTIVATION_CONTEXT *hActCtx; // r12
  NTSTATUS ActivationContextSectionString; // eax
  int v11; // ebx
  WCHAR *v12; // rcx
  _DWORD *lpData; // r15
  ULONG ulSectionTotalLength; // esi
  unsigned __int64 v16; // rdx
  unsigned int v17; // r8d
  bool v18; // zf
  int v19; // edx
  int v20; // ecx
  int v21; // eax
  char *v22; // rbx
  int v23; // edx
  unsigned __int64 v24; // rcx
  int v25; // r13d
  const void **v26; // rdx
  unsigned __int64 v27; // r8
  _QWORD *v28; // rsi
  unsigned __int64 v29; // r8
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  const void **v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rax
  int v35; // r12d
  int v36; // eax
  PWCH Buffer; // r13
  USHORT Length; // bx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 v41; // rax
  unsigned __int16 v42; // bx
  unsigned int v43; // ecx
  int v44; // r9d
  unsigned __int64 v45; // r8
  char *v46; // r13
  __int64 v47; // rcx
  size_t v48; // r8
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rax
  NTSTATUS CharInUnicodeString; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rcx
  PACTCTX_SECTION_KEYED_DATA ReturnedData; // [rsp+20h] [rbp-E0h]
  USHORT NonInclusivePrefixLength; // [rsp+30h] [rbp-D0h] BYREF
  _ACTIVATION_CONTEXT *v59; // [rsp+38h] [rbp-C8h]
  int v60; // [rsp+40h] [rbp-C0h] BYREF
  const void **v61; // [rsp+48h] [rbp-B8h] BYREF
  _UNICODE_STRING StringToFind; // [rsp+50h] [rbp-B0h] BYREF
  size_t Size; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  tagACTCTX_SECTION_KEYED_DATA v65; // [rsp+80h] [rbp-80h] BYREF
  int v66; // [rsp+F0h] [rbp-10h] BYREF
  void *Src; // [rsp+F8h] [rbp-8h]
  WCHAR *v68; // [rsp+100h] [rbp+0h]
  WCHAR *v69; // [rsp+108h] [rbp+8h]
  __int64 v70; // [rsp+110h] [rbp+10h]
  __int64 v71; // [rsp+118h] [rbp+18h]
  __int16 v72; // [rsp+120h] [rbp+20h] BYREF

  *(_QWORD *)&UnicodeString.Length = a4;
  v65.cbSize = 112;
  memset(&v65.ulDataFormatVersion, 0, 0x6CuLL);
  v8 = *a1;
  v66 = 0x20000;
  v61 = 0LL;
  v68 = (WCHAR *)&v72;
  v72 = 0;
  v69 = (WCHAR *)&v72;
  v70 = 2LL;
  v71 = 2LL;
  Src = &v72;
  hActCtx = 0LL;
  StringToFind = v8;
  ActivationContextSectionString = RtlFindActivationContextSectionString(3u, 0LL, 2u, &StringToFind, &v65);
  v11 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v11 = -1072365560;
    goto LABEL_4;
  }
  if ( a2 )
  {
    v11 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)v65.hActCtx;
  v59 = (_ACTIVATION_CONTEXT *)v65.hActCtx;
  if ( v65.ulLength < 0x14
    || v65.ulDataFormatVersion != 1
    || (lpData = v65.lpData,
        ulSectionTotalLength = v65.ulSectionTotalLength,
        v16 = *((unsigned int *)v65.lpData + 4),
        (unsigned int)v16 > v65.ulSectionTotalLength)
    || (v17 = *((_DWORD *)v65.lpData + 3), v17 > 0x1FFFFFFF)
    || v16 > 0xFFFFFFFF - 8 * (unsigned __int64)v17
    || (unsigned int)v16 + 8 * v17 > v65.ulSectionTotalLength )
  {
LABEL_58:
    v11 = -1072365565;
    goto LABEL_4;
  }
  if ( (*((_BYTE *)v65.lpData + 4) & 2) == 0 )
    goto LABEL_26;
  v18 = (*((_BYTE *)v65.lpData + 4) & 4) == 0;
  v19 = 0;
  v60 = 0;
  if ( !v18 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      LODWORD(NtCurrentTeb()->ClientId.UniqueProcess),
      LODWORD(NtCurrentTeb()->ClientId.UniqueThread),
      "sxsisol_SearchActCtxForDllName");
    goto LABEL_58;
  }
  if ( (v65.ulFlags & 1) != 0 )
  {
    if ( (v65.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v19 = 1;
  }
  v20 = v19 | 2;
  if ( (v65.ulFlags & 2) == 0 )
    v20 = v19;
  v21 = sub_180070B08(
          v20,
          v65.hActCtx,
          v65.ulAssemblyRosterIndex,
          (unsigned int)&v61,
          (__int64)ReturnedData,
          (__int64)&v60);
  v11 = v21;
  if ( v21 < 0 )
  {
    if ( v21 == -1073741536 && v60 < 0 )
      v11 = v60;
    goto LABEL_4;
  }
LABEL_26:
  v22 = (char *)v65.lpSectionBase + (unsigned int)lpData[4];
  v23 = 0;
  *a3 = 0LL;
  v24 = 0LL;
  v25 = lpData[3];
  v60 = v25;
  if ( !v25 )
  {
LABEL_27:
    v26 = v61;
    if ( v61 )
      *a3 = v24 + *(unsigned __int16 *)v61;
    v27 = *(unsigned __int16 *)a3 + 2LL;
    if ( v27 <= 0xFFFE )
    {
      v28 = a5 + 8;
      if ( a5 == (unsigned __int16 *)-16LL || v27 > *((_QWORD *)a5 + 4) )
      {
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
          goto LABEL_69;
        v26 = v61;
      }
      *((_QWORD *)a5 + 1) = *v28;
      a5[1] = a5[16];
      if ( !v26 )
        goto LABEL_39;
      *a5 = 0;
      v29 = *(unsigned __int16 *)v26 + 2LL;
      if ( v29 <= 0xFFFE )
      {
        if ( a5 != (unsigned __int16 *)-16LL && v29 <= *((_QWORD *)a5 + 4) )
          goto LABEL_38;
        if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) >= 0 )
        {
          v26 = v61;
LABEL_38:
          v30 = *v28;
          v31 = *a5;
          *((_QWORD *)a5 + 1) = *v28;
          memmove((void *)(v30 + 2 * (v31 >> 1)), v26[1], *(unsigned __int16 *)v26);
          v32 = v61;
          a5[1] = *a5 + *(_WORD *)v61 + 2;
          v33 = (unsigned __int16)(*a5 + *(_WORD *)v32);
          v34 = *((_QWORD *)a5 + 1);
          *a5 = v33;
          v24 = v33 >> 1;
          *(_WORD *)(v34 + 2 * v24) = 0;
LABEL_39:
          v35 = 0;
          if ( v25 )
          {
            while ( 1 )
            {
              v45 = *(unsigned __int16 *)&v22[8 * v35] + *a5 + 2LL;
              v46 = (char *)v65.lpSectionBase + *(unsigned int *)&v22[8 * v35 + 4];
              Size = *(unsigned __int16 *)&v22[8 * v35];
              if ( v45 > 0xFFFE )
                break;
              if ( (a5 == (unsigned __int16 *)-16LL || v45 > *((_QWORD *)a5 + 4))
                && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
              {
                goto LABEL_79;
              }
              v47 = *v28;
              v48 = Size;
              v49 = (unsigned __int64)*a5 >> 1;
              *((_QWORD *)a5 + 1) = *v28;
              memmove((void *)(v47 + 2 * v49), v46, v48);
              v24 = *a5;
              ++v35;
              v50 = (unsigned __int16)(v24 + Size);
              LOWORD(v24) = Size + v24 + 2;
              v51 = *((_QWORD *)a5 + 1);
              *a5 = v50;
              a5[1] = v24;
              *(_WORD *)(v51 + 2 * (v50 >> 1)) = 0;
              if ( v35 == v60 )
                goto LABEL_40;
            }
          }
          else
          {
LABEL_40:
            v36 = lpData[1];
            if ( (v36 & 1) != 0 )
              goto LABEL_49;
            if ( (v36 & 8) != 0 )
            {
              CharInUnicodeString = RtlFindCharInUnicodeString(
                                      1u,
                                      &StringToFind,
                                      (PUNICODE_STRING)&stru_1801180B0,
                                      &NonInclusivePrefixLength);
              v11 = CharInUnicodeString;
              if ( CharInUnicodeString < 0 )
              {
                if ( CharInUnicodeString == -1073741275 )
                  RtlAssert(
                    "Internal error check failed",
                    "minkernel\\ntdll\\sxsisol.cpp",
                    0x477u,
                    (PSTR)"Status != STATUS_NOT_FOUND");
                goto LABEL_53;
              }
              Length = -2 - NonInclusivePrefixLength + StringToFind.Length;
              Buffer = &StringToFind.Buffer[((unsigned __int64)NonInclusivePrefixLength >> 1) + 1];
            }
            else
            {
              Buffer = StringToFind.Buffer;
              Length = StringToFind.Length;
            }
            *a3 += Length;
            if ( *a3 < 0xFFFF )
            {
              v39 = *a5 + (unsigned int)Length + 2LL;
              if ( v39 <= 0xFFFE )
              {
                if ( (a5 == (unsigned __int16 *)-16LL || v39 > *((_QWORD *)a5 + 4))
                  && (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                {
LABEL_79:
                  v11 = -1073741801;
                  goto LABEL_53;
                }
                v40 = *v28;
                v41 = (unsigned __int64)*a5 >> 1;
                *((_QWORD *)a5 + 1) = *v28;
                memmove((void *)(v40 + 2 * v41), Buffer, Length);
                v42 = *a5 + Length;
                *a5 = v42;
                v24 = (unsigned __int64)v42 >> 1;
                a5[1] = v42 + 2;
                *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * v24) = 0;
                v36 = lpData[1];
LABEL_49:
                if ( (v36 & 4) == 0 )
                {
LABEL_50:
                  if ( *(_QWORD *)&UnicodeString.Length )
                    **(_DWORD **)&UnicodeString.Length |= 2u;
                  v11 = 0;
                  goto LABEL_53;
                }
                v11 = sub_1800DE4C8(v24, a5, &v66);
                if ( v11 >= 0 )
                {
                  v53 = (unsigned __int16)v66;
                  *a5 = 0;
                  if ( (unsigned __int64)(v53 + 2) <= 0xFFFE )
                  {
                    if ( a5 == (unsigned __int16 *)-16LL || (unsigned __int64)(v53 + 2) > *((_QWORD *)a5 + 4) )
                    {
                      if ( (int)RtlpEnsureBufferSize(0LL, a5 + 8) < 0 )
                      {
                        v11 = -1073741801;
                        goto LABEL_53;
                      }
                      LOWORD(v53) = v66;
                    }
                    v54 = *v28;
                    v55 = (unsigned __int64)*a5 >> 1;
                    *((_QWORD *)a5 + 1) = *v28;
                    memmove((void *)(v54 + 2 * v55), Src, (unsigned __int16)v53);
                    v56 = (unsigned __int16)(*a5 + v66);
                    *a5 = v56;
                    a5[1] = v56 + 2;
                    *(_WORD *)(*((_QWORD *)a5 + 1) + 2 * (v56 >> 1)) = 0;
                    goto LABEL_50;
                  }
                  v11 = -1073741562;
                }
LABEL_53:
                hActCtx = v59;
                goto LABEL_4;
              }
            }
          }
          v11 = -1073741562;
          goto LABEL_53;
        }
LABEL_69:
        v11 = -1073741801;
        goto LABEL_4;
      }
    }
    v11 = -1073741562;
    goto LABEL_4;
  }
  while ( 1 )
  {
    v43 = *(_DWORD *)&v22[8 * v23 + 4];
    if ( v43 > ulSectionTotalLength )
      break;
    v44 = *(_DWORD *)&v22[8 * v23];
    if ( v43 > ~v44 || v44 + v43 > ulSectionTotalLength )
      break;
    ++v23;
    v24 = *a3 + (unsigned __int16)v44;
    *a3 = v24;
    if ( v23 == v25 )
      goto LABEL_27;
  }
  v11 = -1072365565;
LABEL_4:
  v12 = v69;
  if ( v68 )
  {
    if ( v68 != v69 )
    {
      UnicodeString.Buffer = v68;
      RtlFreeUnicodeString(&UnicodeString);
      v12 = v69;
    }
    v70 = v71;
    v68 = v12;
  }
  Src = v12;
  if ( v12 )
    *v12 = 0;
  HIWORD(v66) = v71;
  LOWORD(v66) = 0;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return (unsigned int)v11;
}
