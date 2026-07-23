/*
 * XREFs of GetPrintableOperandValue @ 0x1408A94A8
 * Callers:
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408ABB30 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1408A7514 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x1408A7ED8 (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1408AC0C8 (ULongAddStringSize.c)
 */

__int64 __fastcall GetPrintableOperandValue(
        char *a1,
        int a2,
        __int64 a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  unsigned int PrintableOperandValue; // edi
  unsigned __int8 v13; // al
  unsigned int v14; // ebx
  __int64 v15; // r9
  __int64 v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbx
  wchar_t *v19; // rax
  unsigned int v20; // ebx
  _WORD *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  char *v25; // r10
  SIZE_T v26; // rdx
  bool v27; // cf
  _WORD *v28; // r8
  __int64 v29; // rcx
  wchar_t *v30; // rax
  unsigned int v31; // ebx
  unsigned __int64 v32; // rcx
  unsigned int v33; // r13d
  unsigned __int64 v34; // rax
  unsigned int v35; // eax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rbx
  _WORD *v38; // rax
  unsigned int v39; // r11d
  __int64 v40; // r14
  int v41; // r9d
  __int64 v42; // rax
  unsigned __int64 v43; // r8
  size_t v44; // r13
  _WORD *v45; // rax
  size_t v46; // rbx
  __int64 v47; // r13
  char v48; // r14
  char v49; // bl
  wchar_t *v50; // rax
  wchar_t *v51; // r10
  __int16 v52; // ax
  wchar_t *v53; // rdx
  __int64 v54; // rcx
  wchar_t v55; // ax
  wchar_t *v56; // rax
  wchar_t v57; // ax
  wchar_t v58; // ax
  __int64 v59; // r9
  int v61; // [rsp+20h] [rbp-D9h]
  unsigned int v62; // [rsp+40h] [rbp-B9h]
  PVOID P; // [rsp+48h] [rbp-B1h] BYREF
  unsigned int v64; // [rsp+50h] [rbp-A9h] BYREF
  unsigned int v65; // [rsp+54h] [rbp-A5h]
  unsigned int v66; // [rsp+58h] [rbp-A1h]
  unsigned int v67; // [rsp+5Ch] [rbp-9Dh]
  __int64 v68; // [rsp+60h] [rbp-99h]
  __int64 v69; // [rsp+68h] [rbp-91h]
  __int64 v70; // [rsp+70h] [rbp-89h]
  int v71[2]; // [rsp+78h] [rbp-81h]
  wchar_t pszFormat[8]; // [rsp+80h] [rbp-79h] BYREF
  _BYTE Sid1[80]; // [rsp+90h] [rbp-69h] BYREF

  v70 = a6;
  v69 = a7;
  *(_QWORD *)v71 = a5;
  PrintableOperandValue = 0;
  P = 0LL;
  v64 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1;
    if ( !*a1 )
      return 1336;
    if ( v13 > 4u )
    {
      if ( v13 == 16 )
      {
        if ( (unsigned int)(a2 - 1) >= 4 )
        {
          v44 = *(unsigned int *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 >= (unsigned int)v44 )
          {
            if ( (int)v44 + 6 >= (unsigned int)v44 )
            {
              v45 = SddlpAlloc((unsigned int)(v44 + 6));
              *(_QWORD *)a3 = v45;
              if ( v45 )
              {
                *v45 = 34;
                memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v44);
                v46 = v44 >> 1;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v46 + 2) = 34;
                *(_WORD *)(*(_QWORD *)a3 + 2 * v46 + 4) = 0;
                *a4 += v44;
              }
              else
              {
                PrintableOperandValue = 8;
              }
              goto LABEL_96;
            }
            return 534;
          }
        }
      }
      else
      {
        if ( v13 != 24 )
        {
          if ( v13 == 80 )
          {
            if ( (unsigned int)(a2 - 1) >= 4 )
            {
              v67 = *(_DWORD *)(a1 + 1);
              v20 = v67;
              *a4 = 5;
              if ( v20 )
              {
                if ( a2 - 5 >= v20 )
                {
                  v68 = 6LL;
                  v21 = SddlpAlloc(6uLL);
                  *(_QWORD *)a3 = v21;
                  if ( v21 )
                  {
                    *v21 = 123;
                    v22 = 0;
                    v23 = *a4;
                    v62 = *a4;
                    v65 = 0;
                    v24 = v23;
                    while ( 1 )
                    {
                      v25 = &a1[v22 + v24];
                      if ( *v25 == 80 )
                        break;
                      PrintableOperandValue = GetPrintableOperandValue(
                                                (_DWORD)v25,
                                                a2 - v22 - v23,
                                                (unsigned int)&P,
                                                (_DWORD)a4,
                                                *(__int64 *)v71,
                                                v70,
                                                v69,
                                                a8);
                      if ( PrintableOperandValue )
                        goto LABEL_96;
                      v65 += *a4;
                      if ( (int)ULongAddStringSize((unsigned int)v68, P, &v64) < 0 )
                        goto LABEL_17;
                      v26 = 0xFFFFFFFFLL;
                      v27 = v64 + 4 < v64;
                      if ( v64 + 4 >= v64 )
                        v26 = v64 + 4;
                      v66 = v26;
                      v64 = v26;
                      if ( v27 )
                        goto LABEL_17;
                      v28 = *(_WORD **)a3;
                      v29 = -1LL;
                      do
                        ++v29;
                      while ( v28[v29] );
                      v30 = (wchar_t *)SddlpReAlloc(2 * v29, v26, v28);
                      *(_QWORD *)a3 = v30;
                      if ( !v30 )
                        goto LABEL_65;
                      if ( RtlStringCchPrintfW(
                             &v30[((unsigned __int64)(unsigned int)v68 >> 1) - 2],
                             (unsigned __int64)(v66 - (unsigned int)v68 + 4) >> 1,
                             L"%ls, ",
                             P) < 0 )
                        goto LABEL_79;
                      if ( P )
                        ExFreePoolWithTag(P, 0);
                      v22 = v65;
                      v23 = v62;
                      v24 = v62;
                      P = 0LL;
                      v68 = v66;
                      if ( v67 <= v65 )
                      {
                        v31 = v67;
                        v32 = (unsigned __int64)v66 >> 1;
                        *(_WORD *)(*(_QWORD *)a3 + 2 * v32 - 8) = 125;
                        *(_WORD *)(*(_QWORD *)a3 + 2 * v32 - 6) = 0;
                        *a4 = v62 + v31;
                        goto LABEL_96;
                      }
                    }
                    PrintableOperandValue = 1336;
                  }
                  else
                  {
                    PrintableOperandValue = 8;
                  }
                  goto LABEL_96;
                }
              }
            }
          }
          else if ( v13 == 81 && (unsigned int)(a2 - 1) >= 4 )
          {
            v14 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v14 <= 0x44 && a2 - 5 >= v14 )
            {
              memmove(Sid1, a1 + 5, v14);
              PrintableOperandValue = LocalGetStringForSid(Sid1, (wchar_t **)&P, a5, v15, v61, a8);
              if ( PrintableOperandValue )
                goto LABEL_96;
              *a4 += v14;
              v16 = -1LL;
              do
                ++v16;
              while ( *((_WORD *)P + v16) );
              if ( (int)v16 + 6 < (unsigned int)v16 )
              {
LABEL_17:
                PrintableOperandValue = 534;
                goto LABEL_96;
              }
              v17 = 2LL * (unsigned int)(v16 + 6);
              if ( v17 > 0xFFFFFFFF )
              {
                PrintableOperandValue = 534;
                goto LABEL_96;
              }
              v18 = (unsigned int)v17;
              v19 = (wchar_t *)SddlpAlloc((unsigned int)v17);
              *(_QWORD *)a3 = v19;
              if ( !v19 )
              {
                PrintableOperandValue = 8;
                goto LABEL_96;
              }
              if ( RtlStringCchPrintfW(v19, v18 >> 1, L"SID(%ls)", P) < 0 )
                goto LABEL_79;
              goto LABEL_96;
            }
          }
          return 1336;
        }
        if ( (unsigned int)(a2 - 1) >= 4 )
        {
          v33 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 >= v33 )
          {
            if ( v33 )
            {
              v34 = 2LL * v33;
              if ( v34 <= 0xFFFFFFFF )
              {
                v35 = v34 + 2;
                if ( 2 * v33 + 2 >= 2 * v33 )
                {
                  v36 = 2LL * v35;
                  if ( v36 <= 0xFFFFFFFF )
                  {
                    v37 = (unsigned int)v36;
                    v38 = SddlpAlloc((unsigned int)v36);
                    *(_QWORD *)a3 = v38;
                    if ( v38 )
                    {
                      *v38 = 35;
                      v39 = 0;
                      v40 = 0LL;
                      do
                      {
                        v41 = 2 * v39;
                        v42 = v40 + *a4;
                        ++v39;
                        ++v40;
                        v43 = (unsigned __int8)a1[v42];
                        *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v41 + 1)) = a0123456789abcd[v43 >> 4];
                        *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v41 + 2)) = a0123456789abcd[v43 & 0xF];
                      }
                      while ( v39 < v33 );
                      PrintableOperandValue = 0;
                      *(_WORD *)(*(_QWORD *)a3 + 2 * (v37 >> 1) - 2) = 0;
                      *a4 += v33;
                    }
                    else
                    {
                      PrintableOperandValue = 8;
                    }
                    goto LABEL_96;
                  }
                }
              }
              return 534;
            }
          }
        }
      }
      return 1336;
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v47 = *(_QWORD *)(a1 + 1);
    v48 = a1[9];
    v49 = a1[10];
    v50 = (wchar_t *)SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v50;
    v51 = v50;
    if ( !v50 )
    {
LABEL_65:
      PrintableOperandValue = 8;
      goto LABEL_96;
    }
    if ( v48 == 1 )
    {
      v52 = 43;
    }
    else
    {
      if ( v48 != 2 )
      {
LABEL_71:
        v53 = pszFormat;
        v54 = 8LL;
        if ( v49 == 1 )
        {
          *v51++ = 48;
          do
          {
            if ( v54 == -2147483638 )
              break;
            v55 = *(wchar_t *)((char *)v53 + (char *)L"%I64o" - (char *)pszFormat);
            if ( !v55 )
              break;
            *v53++ = v55;
            --v54;
          }
          while ( v54 );
        }
        else if ( v49 == 3 )
        {
          *(_DWORD *)v51 = 7864368;
          v51 += 2;
          do
          {
            if ( v54 == -2147483638 )
              break;
            v57 = *(wchar_t *)((char *)v53 + (char *)L"%I64x" - (char *)pszFormat);
            if ( !v57 )
              break;
            *v53++ = v57;
            --v54;
          }
          while ( v54 );
        }
        else
        {
          do
          {
            if ( v54 == -2147483638 )
              break;
            v58 = *(wchar_t *)((char *)v53 + (char *)L"%I64u" - (char *)pszFormat);
            if ( !v58 )
              break;
            *v53++ = v58;
            --v54;
          }
          while ( v54 );
        }
        v56 = v53 - 1;
        if ( v54 )
          v56 = v53;
        *v56 = 0;
        if ( !v54 )
          goto LABEL_79;
        if ( v47 || v49 != 1 )
        {
          v59 = -v47;
          if ( v48 != 2 )
            v59 = v47;
          if ( RtlStringCchPrintfW(v51, 32 - (((__int64)v51 - *(_QWORD *)a3) >> 1), pszFormat, v59) < 0 )
          {
LABEL_79:
            PrintableOperandValue = 50;
            goto LABEL_96;
          }
        }
        *a4 += 10;
LABEL_96:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return PrintableOperandValue;
      }
      v52 = 45;
    }
    *v51++ = v52;
    goto LABEL_71;
  }
  return 87LL;
}
