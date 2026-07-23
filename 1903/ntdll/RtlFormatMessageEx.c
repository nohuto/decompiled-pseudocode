/*
 * XREFs of RtlFormatMessageEx @ 0x180051EE0
 * Callers:
 *     RtlFormatMessage @ 0x1800F60F0 (RtlFormatMessage.c)
 * Callees:
 *     sub_180051E60 @ 0x180051E60 (sub_180051E60.c)
 *     sub_1800525D0 @ 0x1800525D0 (sub_1800525D0.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
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
  ULONG v10; // r13d
  signed int v12; // r10d
  PWSTR v13; // r8
  ULONG cwSavColumn; // r14d
  PWSTR v15; // rbx
  WCHAR *v16; // rsi
  PWSTR v17; // r12
  __int16 v18; // ax
  WCHAR *v19; // rcx
  NTSTATUS result; // eax
  WCHAR v21; // cx
  PWSTR v22; // rdx
  int v23; // r15d
  WCHAR v24; // ax
  va_list v25; // r8
  int v26; // r14d
  __int64 v27; // r15
  unsigned int v28; // r13d
  int v29; // r8d
  WCHAR *v30; // r11
  char v31; // r9
  va_list *v32; // r14
  unsigned int v33; // r11d
  unsigned int v34; // edx
  __int64 v35; // rax
  WCHAR *v36; // r9
  va_list v37; // rcx
  int v38; // eax
  __int64 v39; // rax
  bool v40; // sf
  WCHAR *v41; // r12
  WCHAR v42; // cx
  WCHAR v43; // dx
  char *v44; // r8
  SIZE_T v45; // rsi
  SIZE_T iwSrc; // rax
  ULONG fFlags; // ecx
  SIZE_T iwDst; // rax
  SIZE_T iwDstSpace; // rax
  unsigned int v50; // eax
  unsigned int v51; // r14d
  __int16 v52; // ax
  int v53; // eax
  int v54; // ecx
  WCHAR *v55; // rcx
  unsigned __int16 v56; // ax
  int v57; // r9d
  __int64 v58; // rdx
  char *v59; // r8
  WCHAR v60; // ax
  unsigned __int16 v61; // ax
  char *v62; // r8
  WCHAR v63; // ax
  char *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rdx
  unsigned int v67; // r11d
  WCHAR *v68; // rdx
  PWSTR v69; // rax
  __int64 v70; // rax
  __int64 v71; // rbx
  _WORD *v72; // rsi
  _WORD *v73; // rbx
  __int64 v74; // [rsp+38h] [rbp-D0h]
  ULONG v75; // [rsp+58h] [rbp-B0h]
  unsigned int v78; // [rsp+60h] [rbp-A8h]
  ULONG v79; // [rsp+68h] [rbp-A0h]
  PWSTR v80; // [rsp+70h] [rbp-98h]
  va_list *v81; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h] BYREF
  PWSTR v83; // [rsp+90h] [rbp-78h]
  ULONG v84; // [rsp+98h] [rbp-70h]
  __int64 v85; // [rsp+A0h] [rbp-68h] BYREF
  PWSTR v86; // [rsp+A8h] [rbp-60h]
  PWSTR v87; // [rsp+B0h] [rbp-58h]
  PULONG v88; // [rsp+B8h] [rbp-50h]
  _QWORD v89[200]; // [rsp+C8h] [rbp-40h]
  unsigned __int16 v90; // [rsp+708h] [rbp+600h] BYREF
  _WORD v91[30]; // [rsp+70Ah] [rbp+602h] BYREF
  char v92; // [rsp+746h] [rbp+63Eh] BYREF

  v10 = MaximumWidth;
  v84 = MaximumWidth;
  v12 = Length >> 1;
  v88 = ReturnLength;
  v13 = Buffer;
  v87 = MessageFormat;
  v81 = Arguments;
  v78 = 0;
  v75 = Length >> 1;
  if ( ParseContext && (ParseContext->fFlags & 1) != 0 )
  {
    iwSrc = ParseContext->iwSrc;
    fFlags = ParseContext->fFlags & 0xFFFFFFFE;
    cwSavColumn = ParseContext->cwSavColumn;
    v16 = 0LL;
    ParseContext->fFlags = fFlags;
    v79 = cwSavColumn;
    v17 = &MessageFormat[iwSrc];
    iwDst = ParseContext->iwDst;
    v83 = v17;
    v15 = &Buffer[iwDst];
    iwDstSpace = ParseContext->iwDstSpace;
    if ( iwDstSpace != -1LL )
      v16 = &Buffer[iwDstSpace];
    v12 -= LODWORD(ParseContext->iwDst);
    v75 = v12;
    if ( !ArgumentsAreAnArray && Arguments )
    {
      *Arguments = ParseContext->lpvArgStart;
      fFlags = ParseContext->fFlags;
    }
    if ( (fFlags & 2) != 0 )
    {
      ParseContext->fFlags = fFlags & 0xFFFFFFFD;
      v80 = Buffer;
      goto LABEL_155;
    }
  }
  else
  {
    cwSavColumn = 0;
    v83 = MessageFormat;
    v15 = Buffer;
    v16 = 0LL;
    v79 = 0;
    v17 = MessageFormat;
    if ( !ArgumentsAreAnArray && Arguments && ParseContext )
      ParseContext->lpvArgStart = *Arguments;
  }
  v80 = Buffer;
  while ( 1 )
  {
    v18 = *v17;
    v19 = v15;
    if ( !*v17 )
      break;
    ++v17;
    if ( v18 == 37 )
    {
      v21 = *v17;
      v22 = v15;
      v86 = v15;
      if ( (unsigned __int16)(v21 - 49) > 8u )
      {
        switch ( v21 )
        {
          case 0x30u:
            goto LABEL_17;
          case 0u:
            return -1073741811;
          case 0x72u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *v15++ = 13;
            goto LABEL_76;
          case 0x6Eu:
            v12 -= 2;
            v75 = v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *(_DWORD *)v15 = 655373;
            v15 += 2;
LABEL_76:
            ++v17;
            goto LABEL_77;
          case 0x74u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            if ( (cwSavColumn & 7) != 0 )
              v51 = (cwSavColumn + 7) & 0xFFFFFFF8;
            else
              v51 = cwSavColumn + 8;
            v79 = v51;
            v52 = 9;
            goto LABEL_104;
          case 0x62u:
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            v52 = 32;
LABEL_104:
            v16 = v15;
            *v15 = v52;
            break;
          default:
            if ( IgnoreInserts )
            {
              v12 -= 2;
              v75 = v12;
              if ( v12 < 0 )
                goto LABEL_78;
              *v15 = 37;
              v15[1] = *v17;
              v15 += 2;
              goto LABEL_106;
            }
            v75 = --v12;
            if ( v12 < 0 )
              goto LABEL_78;
            *v15 = v21;
            break;
        }
        ++v15;
LABEL_106:
        ++v17;
        goto LABEL_47;
      }
      ++v17;
      v23 = v21 - 48;
      v24 = *v17;
      if ( *v17 >= 0x30u )
      {
        v24 = *v17;
        if ( *v17 <= 0x39u )
        {
          ++v17;
          v23 = v24 + 2 * (5 * v23 - 24);
          v24 = *v17;
          if ( *v17 >= 0x30u && v24 <= 0x39u )
          {
            v53 = *v17++;
            v23 = v53 + 2 * (5 * v23 - 24);
            v24 = *v17;
            if ( *v17 >= 0x30u && v24 <= 0x39u )
              return -1073741811;
          }
        }
      }
      v25 = 0LL;
      v26 = v23;
      v27 = (unsigned int)(v23 - 1);
      v28 = 0;
      if ( v24 == 33 )
      {
        v41 = v17 + 1;
        v90 = 37;
        v30 = v91;
        v31 = 0;
        v80 = v91;
        v42 = *v41;
        if ( *v41 != 33 )
        {
          v43 = *v41;
          v44 = (char *)v91;
          while ( v43 )
          {
            if ( v44 >= &v92 )
              break;
            if ( v43 == 42 )
            {
              v50 = v28;
              v43 = v42;
              ++v28;
              if ( v50 > 1 )
                break;
            }
            *v30 = v43;
            ++v41;
            v30 = (WCHAR *)(v44 + 2);
            v80 = (PWSTR)(v44 + 2);
            v44 += 2;
            v42 = *v41;
            v43 = *v41;
            if ( *v41 == 33 )
            {
              v25 = 0LL;
              goto LABEL_56;
            }
          }
          return -1073741811;
        }
LABEL_56:
        v17 = v41 + 1;
        *v30 = 0;
      }
      else
      {
        v85 = 0LL;
        v29 = sub_180051E60(&v90, 48LL, &v85, (__int64)L"%s");
        if ( (int)(v29 + 0x80000000) < 0 || v29 == -2147483643 )
        {
          v30 = &v91[v85 - 1];
          v80 = v30;
        }
        else
        {
          v30 = v80;
        }
        v12 = v75;
        v31 = 1;
        v25 = 0LL;
      }
      if ( IgnoreInserts )
      {
        if ( v31 == 1 )
          goto LABEL_63;
        v54 = v90 - aS[0];
        if ( v90 == aS[0] )
        {
          v54 = v91[0] - aS[1];
          if ( v91[0] == aS[1] )
            v54 = v91[1] - aS[2];
        }
        if ( !v54 )
        {
LABEL_63:
          LODWORD(v74) = v26;
          v38 = sub_1800525D0((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)L"%%%u", v74);
        }
        else
        {
          LODWORD(v74) = v26;
          v38 = sub_1800525D0((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)L"%%%u!%s!", v74, v91);
        }
        goto LABEL_44;
      }
      v32 = v81;
      if ( !v81 || (unsigned int)v27 + v28 >= 0xC8 )
        return -1073741811;
      if ( ArgumentsAreAnsi )
      {
        v55 = v30 - 1;
        if ( *(v30 - 1) == 99 )
        {
          v56 = *(v30 - 2) - 104;
          if ( v56 > 0xFu || (v57 = 32785, !_bittest(&v57, v56)) )
          {
            v58 = 3LL;
            v59 = (char *)((char *)L"hc" - (char *)v55);
            do
            {
              if ( v58 == -2147483643 )
                break;
              v60 = *(WCHAR *)((char *)v55 + (_QWORD)v59);
              if ( !v60 )
                break;
              *v55++ = v60;
              --v58;
            }
            while ( v58 );
LABEL_140:
            v25 = 0LL;
            v64 = (char *)(v55 - 1);
            if ( v58 )
              v64 = (char *)v55;
            *(_WORD *)v64 = 0;
            goto LABEL_37;
          }
        }
        else
        {
          v57 = 32785;
        }
        if ( *v55 != 115 || (v61 = *(v30 - 2) - 104, v61 <= 0xFu) && _bittest(&v57, v61) )
        {
          if ( *v55 == 83 )
          {
            *v55 = 115;
          }
          else if ( *v55 == 67 )
          {
            *v55 = 99;
          }
          goto LABEL_37;
        }
        v58 = 3LL;
        v62 = (char *)((char *)L"hs" - (char *)v55);
        do
        {
          if ( v58 == -2147483643 )
            break;
          v63 = *(_WORD *)&v62[(_QWORD)v55];
          if ( !v63 )
            break;
          *v55++ = v63;
          --v58;
        }
        while ( v58 );
        goto LABEL_140;
      }
LABEL_37:
      v33 = v78;
      if ( (unsigned int)v27 >= v78 )
      {
        do
        {
          v34 = v33 + 1;
          if ( ArgumentsAreAnArray )
          {
            v35 = (__int64)*v32++;
          }
          else
          {
            *v32 += 8;
            v35 = *((_QWORD *)*v32 - 1);
          }
          v89[v33++] = v35;
        }
        while ( v34 <= (unsigned int)v27 );
        v12 = v75;
        v81 = v32;
        v78 = v34;
      }
      v36 = (WCHAR *)v89[v27];
      v80 = v36;
      v37 = 0LL;
      if ( v28 )
      {
        if ( ArgumentsAreAnArray )
        {
          v25 = *v32;
          v65 = v33++;
          ++v32;
          v78 = v33;
          v81 = v32;
          v89[v65] = v25;
        }
        else
        {
          *v32 += 8;
          v25 = (va_list)*((_QWORD *)*v32 - 1);
        }
        if ( v28 > 1 )
        {
          v66 = v33;
          v67 = v33 + 1;
          v78 = v67;
          if ( ArgumentsAreAnArray )
          {
            v37 = *v32;
            v81 = v32 + 1;
          }
          else
          {
            *v32 += 8;
            v78 = v67;
            v37 = (va_list)*((_QWORD *)*v32 - 1);
          }
          v89[v66] = v37;
        }
      }
      v38 = sub_1800525D0((_DWORD)v15, v12, (unsigned int)&v82, 0, 0, (__int64)&v90, v36, v25, v37);
LABEL_44:
      if ( v38 < 0 )
        goto LABEL_78;
      v39 = (v82 - (__int64)v15) >> 1;
      v40 = (int)(v75 - v39) < 0;
      v12 = v75 - v39;
      v75 -= v39;
      if ( v40 )
        goto LABEL_78;
      v22 = v86;
      v13 = Buffer;
      v10 = v84;
      v15 += (int)v39;
LABEL_47:
      if ( v22 )
      {
        cwSavColumn = v15 - v22 + v79;
        goto LABEL_14;
      }
LABEL_77:
      v16 = 0LL;
      cwSavColumn = 0;
LABEL_14:
      v79 = cwSavColumn;
      v83 = v17;
      if ( v10 && v10 != -1 && cwSavColumn >= v10 )
      {
LABEL_155:
        if ( v16 )
        {
          v68 = v16;
          do
          {
            if ( *v68 != 32 && *v68 != 9 )
              break;
            ++v68;
          }
          while ( v68 != v15 );
          if ( v16 > Buffer )
          {
            do
            {
              v69 = v16 - 1;
              if ( *(v16 - 1) != 32 && *v69 != 9 )
                break;
              --v16;
            }
            while ( v69 > Buffer );
          }
          v70 = v68 - v16;
          if ( (_DWORD)v70 == 1 )
          {
            v75 = v12 - 1;
            if ( v12 - 1 < 0 )
              goto LABEL_166;
          }
          else if ( (unsigned int)v70 > 2 )
          {
            v75 = v70 + v12 - 2;
          }
          v71 = v15 - v68;
          cwSavColumn = v71;
          v79 = v71;
          memmove(v16 + 2, v68, 2 * v71);
          v12 = v75;
          *v16 = 13;
          v72 = v16 + 1;
          *v72 = 10;
          v73 = &v72[(unsigned int)v71];
        }
        else
        {
          v12 -= 2;
          v75 = v12;
          if ( v12 < 0 )
          {
LABEL_166:
            if ( ParseContext )
            {
              ParseContext->fFlags |= 2u;
              goto LABEL_78;
            }
            return -2147483643;
          }
          cwSavColumn = 0;
          *v15 = 13;
          v73 = v15 + 1;
          v79 = 0;
          *v73 = 10;
        }
        v13 = Buffer;
        v16 = 0LL;
        v15 = v73 + 1;
      }
    }
    else
    {
      if ( v18 != 13 && v18 != 10 )
        goto LABEL_10;
      if ( v18 == 10 && *v17 == 13 || v18 == 13 && *v17 == 10 )
        ++v17;
      if ( v10 )
      {
        v16 = v15;
        v18 = 32;
LABEL_10:
        v75 = --v12;
        if ( v12 < 0 )
          goto LABEL_78;
        *v15 = v18;
        ++cwSavColumn;
        ++v15;
        if ( v18 != 32 )
          v19 = v16;
        v16 = v19;
        goto LABEL_14;
      }
      v12 -= 2;
      v75 = v12;
      if ( v12 < 0 )
        goto LABEL_78;
      cwSavColumn = 0;
      *(_DWORD *)v15 = 655373;
      v79 = 0;
      v83 = v17;
      v15 += 2;
      v16 = 0LL;
    }
  }
LABEL_17:
  if ( v12 < 1 )
  {
LABEL_78:
    if ( ParseContext )
    {
      ParseContext->cwSavColumn = v79;
      ParseContext->iwSrc = v83 - v87;
      ParseContext->iwDst = v15 - Buffer;
      if ( v16 )
        v45 = v16 - Buffer;
      else
        v45 = -1LL;
      ParseContext->fFlags |= 1u;
      ParseContext->iwDstSpace = v45;
    }
    return -2147483643;
  }
  *v15 = 0;
  result = 0;
  if ( v88 )
    *v88 = 2 * (((char *)v15 - (char *)v13 + 2) >> 1);
  return result;
}
