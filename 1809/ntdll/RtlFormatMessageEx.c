/*
 * XREFs of RtlFormatMessageEx @ 0x18004F610
 * Callers:
 *     RtlFormatMessage @ 0x1800F8300 (RtlFormatMessage.c)
 * Callees:
 *     RtlStringCopyWorkerW_0 @ 0x18004F598 (RtlStringCopyWorkerW_0.c)
 *     RtlStringCchPrintfExW @ 0x18004FCCC (RtlStringCchPrintfExW.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

NTSTATUS __cdecl RtlFormatMessageEx(
        PWSTR MessageFormat,
        ULONG MaximumWidth,
        BOOLEAN IgnoreInserts,
        BOOLEAN ArgumentsAreAnsi,
        BOOLEAN ArgumentsAreAnArray,
        va_list *Arguments,
        PWSTR Buffer,
        ULONG Length,
        PULONG ReturnLength,
        PPARSE_MESSAGE_CONTEXT ParseContext)
{
  PPARSE_MESSAGE_CONTEXT v10; // r12
  PWSTR v11; // r15
  ULONG v12; // r9d
  signed int v13; // r13d
  unsigned int v14; // r11d
  PWSTR v15; // r8
  ULONG cwSavColumn; // esi
  PWSTR v17; // rdi
  WCHAR *v18; // r14
  PWSTR v19; // rbx
  __int16 v20; // ax
  WCHAR *v21; // rcx
  WCHAR v23; // cx
  PWSTR v24; // r12
  WCHAR v25; // ax
  int v26; // esi
  WCHAR v27; // cx
  int v28; // esi
  int v29; // r14d
  unsigned int v30; // r15d
  __int64 v31; // rsi
  int v32; // r8d
  __int16 *v33; // r9
  char v34; // r8
  va_list *v35; // r14
  unsigned int v36; // edx
  __int16 *v37; // r10
  va_list v38; // r8
  va_list v39; // rcx
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rax
  _WORD *v43; // rbx
  __int16 v44; // cx
  char *v45; // rdx
  WCHAR v46; // ax
  PPARSE_MESSAGE_CONTEXT v47; // rcx
  PWSTR v48; // rax
  __int64 v49; // r8
  __int64 v50; // rdi
  __int64 v51; // r14
  SIZE_T iwSrc; // rax
  ULONG fFlags; // ecx
  SIZE_T iwDst; // rdx
  SIZE_T iwDstSpace; // rax
  unsigned int v56; // eax
  unsigned int v57; // esi
  __int16 *v58; // r10
  int v59; // ecx
  __int16 v60; // dx
  __int16 *v61; // rcx
  unsigned __int16 v62; // ax
  int v63; // r8d
  __int64 v64; // rdx
  char *v65; // r8
  __int16 v66; // ax
  unsigned __int16 v67; // ax
  char *v68; // r8
  __int16 v69; // ax
  __int16 *v70; // rax
  __int16 v71; // ax
  __int64 v72; // rax
  __int64 v73; // rax
  unsigned int v74; // r11d
  WCHAR *v75; // rdx
  __int16 v76; // ax
  WCHAR *v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rdi
  _WORD *v80; // r14
  _WORD *v81; // rdi
  __int64 v82; // [rsp+30h] [rbp-D0h]
  unsigned int v85; // [rsp+54h] [rbp-ACh]
  ULONG v86; // [rsp+58h] [rbp-A8h]
  WCHAR *v87; // [rsp+60h] [rbp-A0h]
  __int16 *v88; // [rsp+68h] [rbp-98h]
  PWSTR v89; // [rsp+70h] [rbp-90h]
  __int16 *v90; // [rsp+78h] [rbp-88h] BYREF
  ULONG v91; // [rsp+80h] [rbp-80h]
  va_list *v92; // [rsp+88h] [rbp-78h]
  __int64 v93; // [rsp+90h] [rbp-70h] BYREF
  PPARSE_MESSAGE_CONTEXT v94; // [rsp+98h] [rbp-68h]
  PWSTR v95; // [rsp+A0h] [rbp-60h]
  PWSTR v96; // [rsp+A8h] [rbp-58h]
  PULONG v97; // [rsp+B0h] [rbp-50h]
  _QWORD v98[200]; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v99; // [rsp+700h] [rbp+600h] BYREF
  _WORD v100[30]; // [rsp+702h] [rbp+602h] BYREF
  char v101; // [rsp+73Eh] [rbp+63Eh] BYREF

  v10 = ParseContext;
  v11 = Buffer;
  v91 = MaximumWidth;
  v12 = MaximumWidth;
  v97 = ReturnLength;
  v13 = Length >> 1;
  v14 = 0;
  v15 = MessageFormat;
  v96 = MessageFormat;
  v92 = Arguments;
  v95 = Buffer;
  v94 = ParseContext;
  v85 = 0;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    iwSrc = ParseContext->iwSrc;
    fFlags = ParseContext->fFlags & 0xFFFFFFFE;
    iwDst = ParseContext->iwDst;
    cwSavColumn = ParseContext->cwSavColumn;
    ParseContext->fFlags = fFlags;
    v19 = &v15[iwSrc];
    v86 = cwSavColumn;
    iwDstSpace = ParseContext->iwDstSpace;
    v17 = &Buffer[iwDst];
    v89 = v19;
    v15 = v19;
    if ( iwDstSpace == -1LL )
      v18 = 0LL;
    else
      v18 = &Buffer[iwDstSpace];
    v13 -= iwDst;
    v87 = v18;
    if ( !ArgumentsAreAnArray && Arguments )
    {
      *Arguments = ParseContext->lpvArgStart;
      fFlags = ParseContext->fFlags;
    }
    if ( (fFlags & 2) != 0 )
    {
      v58 = v90;
      ParseContext->fFlags = fFlags & 0xFFFFFFFD;
      v88 = v58;
      goto LABEL_155;
    }
  }
  else
  {
    cwSavColumn = 0;
    v17 = Buffer;
    v18 = 0LL;
    v86 = 0;
    v19 = MessageFormat;
    v87 = 0LL;
    v89 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  v88 = v90;
  while ( 1 )
  {
    v20 = *v19;
    v21 = v17;
    if ( !*v19 )
      break;
    ++v19;
    switch ( v20 )
    {
      case 37:
        v23 = *v19;
        v24 = v17;
        if ( (unsigned __int16)(*v19 - 49) <= 8u )
        {
          v25 = v19[1];
          ++v19;
          v26 = v23;
          v27 = v25;
          v28 = v26 - 48;
          if ( v25 >= 0x30u )
          {
            v27 = v25;
            if ( v25 <= 0x39u )
            {
              ++v19;
              v28 = v25 + 2 * (5 * v28 - 24);
              v46 = *v19;
              v27 = *v19;
              if ( *v19 >= 0x30u && v46 <= 0x39u )
              {
                ++v19;
                v28 = v46 + 2 * (5 * v28 - 24);
                v27 = *v19;
                if ( *v19 >= 0x30u && *v19 <= 0x39u )
                  return -1073741811;
              }
            }
          }
          v29 = v28;
          v30 = 0;
          v31 = (unsigned int)(v28 - 1);
          if ( v27 == 33 )
          {
            v43 = v19 + 1;
            v33 = v100;
            v88 = v100;
            v99 = 37;
            v34 = 0;
            v44 = *v43;
            if ( *v43 != 33 )
            {
              v45 = (char *)v100;
              while ( v44 )
              {
                if ( v45 >= &v101 )
                  break;
                if ( v44 == 42 )
                {
                  v56 = v30;
                  v44 = 42;
                  ++v30;
                  if ( v56 > 1 )
                    break;
                }
                ++v43;
                *v33 = v44;
                v33 = (__int16 *)(v45 + 2);
                v88 = (__int16 *)(v45 + 2);
                v45 += 2;
                v44 = *v43;
                if ( *v43 == 33 )
                  goto LABEL_56;
              }
              return -1073741811;
            }
LABEL_56:
            v19 = v43 + 1;
            *v33 = 0;
          }
          else
          {
            v93 = 0LL;
            v32 = RtlStringCopyWorkerW_0(&v99, 0LL, &v93, (__int64)L"%s");
            if ( (int)(v32 + 0x80000000) < 0 || v32 == -2147483643 )
            {
              v33 = &v100[v93 - 1];
              v88 = v33;
            }
            else
            {
              v33 = v88;
            }
            v14 = v85;
            v34 = 1;
          }
          if ( IgnoreInserts )
          {
            if ( v34 == 1 )
              goto LABEL_60;
            v59 = v99 - aS_0[0];
            if ( v99 == aS_0[0] )
            {
              v59 = v100[0] - aS_0[1];
              if ( v100[0] == aS_0[1] )
                v59 = v100[1] - aS_0[2];
            }
            if ( !v59 )
            {
LABEL_60:
              LODWORD(v82) = v29;
              v40 = RtlStringCchPrintfExW((_DWORD)v17, v13, (unsigned int)&v90, 0, 0, (__int64)L"%%%u", v82);
            }
            else
            {
              LODWORD(v82) = v29;
              v40 = RtlStringCchPrintfExW((_DWORD)v17, v13, (unsigned int)&v90, 0, 0, (__int64)L"%%%u!%s!", v82, v100);
            }
          }
          else
          {
            v35 = v92;
            if ( !v92 || v30 + (unsigned int)v31 >= 0xC8 )
              return -1073741811;
            if ( !ArgumentsAreAnsi )
              goto LABEL_35;
            v60 = *(v33 - 1);
            v61 = v33 - 1;
            if ( v60 == 99 )
            {
              v62 = *(v33 - 2) - 104;
              if ( v62 > 0xFu || (v63 = 32785, !_bittest(&v63, v62)) )
              {
                v64 = 3LL;
                v65 = (char *)((char *)L"hc" - (char *)v61);
                do
                {
                  if ( v64 == -2147483643 )
                    break;
                  v66 = *(_WORD *)&v65[(_QWORD)v61];
                  if ( !v66 )
                    break;
                  *v61++ = v66;
                  --v64;
                }
                while ( v64 );
LABEL_135:
                v70 = v61 - 1;
                if ( v64 )
                  v70 = v61;
                *v70 = 0;
                goto LABEL_35;
              }
            }
            else
            {
              v63 = 32785;
            }
            if ( v60 == 115 )
            {
              v67 = *(v33 - 2) - 104;
              if ( v67 > 0xFu || !_bittest(&v63, v67) )
              {
                v64 = 3LL;
                v68 = (char *)((char *)L"hs" - (char *)v61);
                do
                {
                  if ( v64 == -2147483643 )
                    break;
                  v69 = *(_WORD *)&v68[(_QWORD)v61];
                  if ( !v69 )
                    break;
                  *v61++ = v69;
                  --v64;
                }
                while ( v64 );
                goto LABEL_135;
              }
            }
            if ( v60 == 83 )
            {
              v71 = 115;
            }
            else
            {
              if ( v60 != 67 )
                goto LABEL_35;
              v71 = 99;
            }
            *v61 = v71;
LABEL_35:
            if ( (unsigned int)v31 >= v14 )
            {
              do
              {
                v36 = v14 + 1;
                if ( ArgumentsAreAnArray )
                {
                  v42 = (__int64)*v35++;
                  v98[v14] = v42;
                }
                else
                {
                  *v35 += 8;
                  v98[v14] = *((_QWORD *)*v35 - 1);
                }
                ++v14;
              }
              while ( v36 <= (unsigned int)v31 );
              v85 = v36;
              v92 = v35;
            }
            v37 = (__int16 *)v98[v31];
            v38 = 0LL;
            v88 = v37;
            v39 = 0LL;
            if ( v30 )
            {
              if ( ArgumentsAreAnArray )
              {
                v38 = *v35;
                v72 = v14++;
                ++v35;
                v85 = v14;
                v92 = v35;
                v98[v72] = v38;
              }
              else
              {
                *v35 += 8;
                v38 = (va_list)*((_QWORD *)*v35 - 1);
              }
              if ( v30 > 1 )
              {
                v73 = v14;
                v74 = v14 + 1;
                v85 = v74;
                if ( ArgumentsAreAnArray )
                {
                  v39 = *v35;
                  v92 = v35 + 1;
                }
                else
                {
                  *v35 += 8;
                  v85 = v74;
                  v39 = (va_list)*((_QWORD *)*v35 - 1);
                }
                v98[v73] = v39;
              }
            }
            v40 = RtlStringCchPrintfExW((_DWORD)v17, v13, (unsigned int)&v90, 0, 0, (__int64)&v99, v37, v38, v39);
          }
          v18 = v87;
          if ( v40 < 0 || (v41 = ((char *)v90 - (char *)v17) >> 1, v13 -= v41, v13 < 0) )
          {
            cwSavColumn = v86;
            v15 = v89;
            goto LABEL_75;
          }
          v12 = v91;
          v14 = v85;
          v11 = v95;
          v17 += (int)v41;
          goto LABEL_45;
        }
        switch ( v23 )
        {
          case 0x30u:
            goto LABEL_17;
          case 0u:
            return -1073741811;
          case 0x72u:
            if ( --v13 < 0 )
              goto LABEL_75;
            *v17++ = 13;
            ++v19;
            goto LABEL_73;
          case 0x6Eu:
            v13 -= 2;
            if ( v13 < 0 )
              goto LABEL_75;
            *(_DWORD *)v17 = 655373;
            v17 += 2;
            ++v19;
            goto LABEL_73;
          case 0x74u:
            if ( --v13 < 0 )
              goto LABEL_75;
            if ( (cwSavColumn & 7) != 0 )
              v57 = (cwSavColumn + 7) & 0xFFFFFFF8;
            else
              v57 = cwSavColumn + 8;
            v86 = v57;
            *v17 = 9;
            v18 = v17;
            v87 = v17;
LABEL_107:
            ++v17;
            ++v19;
            goto LABEL_45;
          case 0x62u:
            if ( --v13 < 0 )
              goto LABEL_75;
            v87 = v17;
            *v17 = 32;
            v18 = v17;
            goto LABEL_107;
        }
        if ( !IgnoreInserts )
        {
          if ( --v13 < 0 )
            goto LABEL_75;
          *v17 = v23;
          goto LABEL_107;
        }
        v13 -= 2;
        if ( v13 < 0 )
          goto LABEL_75;
        *v17 = 37;
        v17[1] = *v19;
        v17 += 2;
        ++v19;
LABEL_45:
        if ( v24 )
        {
          cwSavColumn = v17 - v24 + v86;
          goto LABEL_14;
        }
LABEL_73:
        v18 = 0LL;
        v87 = 0LL;
        cwSavColumn = 0;
LABEL_14:
        v86 = cwSavColumn;
        v15 = v19;
        v89 = v19;
        if ( v12 && v12 != -1 && cwSavColumn >= v12 )
        {
          v10 = v94;
LABEL_155:
          if ( v18 )
          {
            v75 = v18;
            do
            {
              if ( *v75 != 32 && *v75 != 9 )
                break;
              ++v75;
            }
            while ( v75 != v17 );
            if ( v18 > v11 )
            {
              do
              {
                v76 = *(v18 - 1);
                v77 = v18 - 1;
                if ( v76 != 32 && v76 != 9 )
                  break;
                --v18;
              }
              while ( v77 > v11 );
            }
            v78 = v75 - v18;
            if ( (_DWORD)v78 == 1 )
            {
              if ( --v13 < 0 )
                goto LABEL_166;
            }
            else if ( (unsigned int)v78 > 2 )
            {
              v13 = v78 + v13 - 2;
            }
            v79 = v17 - v75;
            cwSavColumn = v79;
            v86 = v79;
            memmove(v18 + 2, v75, 2 * v79);
            v15 = v89;
            v12 = v91;
            v14 = v85;
            *v18 = 13;
            v80 = v18 + 1;
            *v80 = 10;
            v81 = &v80[(unsigned int)v79];
          }
          else
          {
            v13 -= 2;
            if ( v13 < 0 )
            {
LABEL_166:
              if ( v10 )
              {
                v10->fFlags |= 2u;
                goto LABEL_75;
              }
              return -2147483643;
            }
            *v17 = 13;
            v81 = v17 + 1;
            cwSavColumn = 0;
            v86 = 0;
            *v81 = 10;
          }
          v18 = 0LL;
          v87 = 0LL;
          v17 = v81 + 1;
        }
        break;
      case 13:
        if ( *v19 != 10 )
          goto LABEL_23;
LABEL_22:
        ++v19;
        goto LABEL_23;
      case 10:
        if ( *v19 == 13 )
          goto LABEL_22;
LABEL_23:
        if ( v12 )
        {
          v18 = v17;
          v20 = 32;
LABEL_10:
          if ( --v13 < 0 )
            goto LABEL_75;
          *v17 = v20;
          ++cwSavColumn;
          ++v17;
          if ( v20 != 32 )
            v21 = v18;
          v18 = v21;
          v87 = v21;
          goto LABEL_14;
        }
        v13 -= 2;
        if ( v13 < 0 )
          goto LABEL_75;
        cwSavColumn = 0;
        *(_DWORD *)v17 = 655373;
        v86 = 0;
        v17 += 2;
        v87 = 0LL;
        v18 = 0LL;
        v89 = v19;
        v15 = v19;
        break;
      default:
        goto LABEL_10;
    }
  }
LABEL_17:
  if ( v13 < 1 )
  {
LABEL_75:
    v47 = v94;
    if ( v94 )
    {
      v48 = v95;
      v49 = v15 - v96;
      v50 = v17 - v95;
      v94->cwSavColumn = cwSavColumn;
      v47->iwSrc = v49;
      v47->iwDst = v50;
      if ( v18 )
        v51 = v18 - v48;
      else
        v51 = -1LL;
      v47->fFlags |= 1u;
      v47->iwDstSpace = v51;
    }
    return -2147483643;
  }
  *v17 = 0;
  if ( v97 )
    *v97 = 2 * (((char *)v17 - (char *)v11 + 2) >> 1);
  return 0;
}
