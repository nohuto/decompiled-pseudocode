/*
 * XREFs of GetPrintableOperandValue @ 0x1408E4E8C
 * Callers:
 *     GetPrintableOperandValue @ 0x1408E4E8C (GetPrintableOperandValue.c)
 *     LocalpGetStringForCondition @ 0x1408E73A8 (LocalpGetStringForCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400880E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406ED59C (SddlpAlloc.c)
 *     LocalGetStringForSid @ 0x1408E31C0 (LocalGetStringForSid.c)
 *     SddlpReAlloc @ 0x1408E38F8 (SddlpReAlloc.c)
 *     GetPrintableOperandValue @ 0x1408E4E8C (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1408E7940 (ULongAddStringSize.c)
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
  unsigned int v14; // r12d
  __int64 v15; // r9
  __int64 v16; // r12
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  wchar_t *v20; // rax
  unsigned int v21; // r13d
  _WORD *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  char *v26; // r10
  unsigned int v27; // ecx
  _WORD *v28; // r8
  SIZE_T v29; // rdx
  __int64 v30; // rcx
  wchar_t *v31; // rax
  unsigned __int64 v32; // rcx
  unsigned int v33; // r12d
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  _WORD *v37; // rax
  unsigned int v38; // r11d
  __int64 v39; // r13
  int v40; // r9d
  __int64 v41; // rax
  unsigned __int64 v42; // r8
  unsigned int v43; // r13d
  _WORD *v44; // rax
  unsigned __int64 v45; // rbx
  __int64 v46; // r13
  char v47; // r12
  char v48; // bl
  wchar_t *v49; // rax
  wchar_t *v50; // r10
  __int16 v51; // ax
  wchar_t *v52; // rdx
  __int64 v53; // rcx
  wchar_t v54; // ax
  wchar_t *v55; // rax
  wchar_t v56; // ax
  wchar_t v57; // ax
  __int64 v58; // r9
  int v60; // [rsp+20h] [rbp-E0h]
  unsigned int v61; // [rsp+40h] [rbp-C0h]
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v63; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v64; // [rsp+54h] [rbp-ACh]
  unsigned int v65; // [rsp+58h] [rbp-A8h]
  __int64 v66; // [rsp+60h] [rbp-A0h]
  __int64 v67; // [rsp+68h] [rbp-98h]
  __int64 v68; // [rsp+70h] [rbp-90h]
  int v69[2]; // [rsp+78h] [rbp-88h]
  __int64 i; // [rsp+80h] [rbp-80h]
  wchar_t pszFormat[12]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE Sid[80]; // [rsp+A0h] [rbp-60h] BYREF

  v68 = a6;
  v67 = a7;
  *(_QWORD *)v69 = a5;
  PrintableOperandValue = 0;
  P = 0LL;
  v63 = 0;
  if ( a1 && a3 && a2 )
  {
    *a4 = 1;
    v13 = *a1;
    if ( !*a1 )
    {
LABEL_90:
      PrintableOperandValue = 1336;
      goto LABEL_91;
    }
    if ( v13 > 4u )
    {
      switch ( v13 )
      {
        case 0x10u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v43 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 < v43 )
            return 1336;
          if ( v43 + 6 >= v43 )
          {
            v44 = SddlpAlloc(v43 + 6);
            *(_QWORD *)a3 = v44;
            if ( v44 )
            {
              *v44 = 34;
              memmove((void *)(*(_QWORD *)a3 + 2LL), &a1[*a4], v43);
              v45 = (unsigned __int64)v43 >> 1;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v45 + 2) = 34;
              *(_WORD *)(*(_QWORD *)a3 + 2 * v45 + 4) = 0;
              *a4 += v43;
              goto LABEL_91;
            }
            goto LABEL_59;
          }
          break;
        case 0x18u:
          if ( (unsigned int)(a2 - 1) < 4 )
            return 1336;
          v33 = *(_DWORD *)(a1 + 1);
          *a4 = 5;
          if ( a2 - 5 < v33 || !v33 )
            return 1336;
          v34 = 2LL * v33;
          if ( v34 <= 0xFFFFFFFF && (int)v34 + 2 >= (unsigned int)v34 )
          {
            v35 = 2LL * (unsigned int)(v34 + 2);
            if ( v35 <= 0xFFFFFFFF )
            {
              v36 = (unsigned int)v35;
              v37 = SddlpAlloc((unsigned int)v35);
              *(_QWORD *)a3 = v37;
              if ( v37 )
              {
                v38 = 0;
                *v37 = 35;
                v39 = 0LL;
                do
                {
                  v40 = 2 * v38;
                  v41 = v39 + *a4;
                  ++v38;
                  ++v39;
                  v42 = (unsigned __int8)a1[v41];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v40 + 1)) = a0123456789abcd[v42 >> 4];
                  *(_WORD *)(*(_QWORD *)a3 + 2LL * (unsigned int)(v40 + 2)) = a0123456789abcd[v42 & 0xF];
                }
                while ( v38 < v33 );
                PrintableOperandValue = 0;
                *(_WORD *)(*(_QWORD *)a3 + 2 * (v36 >> 1) - 2) = 0;
                *a4 += v33;
                goto LABEL_91;
              }
              goto LABEL_59;
            }
          }
          break;
        case 0x50u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v21 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v21 )
            {
              if ( a2 - 5 >= v21 )
              {
                v66 = 6LL;
                v22 = SddlpAlloc(6uLL);
                *(_QWORD *)a3 = v22;
                if ( !v22 )
                  goto LABEL_59;
                *v22 = 123;
                v23 = 0;
                v24 = *a4;
                v61 = *a4;
                v64 = 0;
                v25 = v24;
                for ( i = v24; ; v25 = i )
                {
                  v26 = &a1[v25 + v23];
                  if ( *v26 == 80 )
                    break;
                  PrintableOperandValue = GetPrintableOperandValue(
                                            (_DWORD)v26,
                                            a2 - v23 - v24,
                                            (unsigned int)&P,
                                            (_DWORD)a4,
                                            *(__int64 *)v69,
                                            v68,
                                            v67,
                                            a8);
                  if ( PrintableOperandValue )
                    goto LABEL_91;
                  v64 += *a4;
                  if ( (int)ULongAddStringSize((unsigned int)v66, P, &v63) < 0 )
                    goto LABEL_22;
                  v27 = v63 + 4;
                  v65 = v63 + 4;
                  if ( v63 + 4 < v63 )
                    goto LABEL_22;
                  v28 = *(_WORD **)a3;
                  v63 += 4;
                  v29 = v27;
                  v30 = -1LL;
                  do
                    ++v30;
                  while ( v28[v30] );
                  v31 = (wchar_t *)SddlpReAlloc(2 * v30, v29, v28);
                  *(_QWORD *)a3 = v31;
                  if ( !v31 )
                    goto LABEL_59;
                  if ( RtlStringCchPrintfW(
                         &v31[((unsigned __int64)(unsigned int)v66 >> 1) - 2],
                         (unsigned __int64)(v65 - (unsigned int)v66 + 4) >> 1,
                         L"%ls, ",
                         P) < 0 )
                    goto LABEL_73;
                  if ( P )
                    ExFreePoolWithTag(P, 0);
                  v23 = v64;
                  v24 = v61;
                  P = 0LL;
                  v66 = v65;
                  if ( v21 <= v64 )
                  {
                    v32 = (unsigned __int64)v65 >> 1;
                    *(_WORD *)(*(_QWORD *)a3 + 2 * v32 - 8) = 125;
                    *(_WORD *)(*(_QWORD *)a3 + 2 * v32 - 6) = 0;
                    *a4 = v61 + v21;
                    goto LABEL_91;
                  }
                }
                goto LABEL_90;
              }
            }
          }
          return 1336;
        case 0x51u:
          if ( (unsigned int)(a2 - 1) >= 4 )
          {
            v14 = *(_DWORD *)(a1 + 1);
            *a4 = 5;
            if ( v14 <= 0x44 && a2 - 5 >= v14 )
            {
              memmove(Sid, a1 + 5, v14);
              PrintableOperandValue = LocalGetStringForSid(Sid, (wchar_t **)&P, a5, v15, v60, a8);
              if ( PrintableOperandValue )
                goto LABEL_91;
              *a4 += v14;
              v16 = -1LL;
              do
                ++v16;
              while ( *((_WORD *)P + v16) );
              v17 = (unsigned int)(v16 + 6);
              if ( (unsigned int)v17 < (unsigned int)v16 || (v18 = 2 * v17, v18 > 0xFFFFFFFF) )
              {
LABEL_22:
                PrintableOperandValue = 534;
                goto LABEL_91;
              }
              v19 = (unsigned int)v18;
              v20 = (wchar_t *)SddlpAlloc((unsigned int)v18);
              *(_QWORD *)a3 = v20;
              if ( v20 )
              {
                if ( RtlStringCchPrintfW(v20, v19 >> 1, L"SID(%ls)", P) >= 0 )
                  goto LABEL_91;
                goto LABEL_73;
              }
LABEL_59:
              PrintableOperandValue = 8;
              goto LABEL_91;
            }
          }
          return 1336;
        default:
          goto LABEL_90;
      }
      return 534;
    }
    if ( (unsigned int)(a2 - 1) < 0xA )
      return 1336;
    v46 = *(_QWORD *)(a1 + 1);
    v47 = a1[9];
    v48 = a1[10];
    v49 = (wchar_t *)SddlpAlloc(0x40uLL);
    *(_QWORD *)a3 = v49;
    v50 = v49;
    if ( !v49 )
      goto LABEL_59;
    if ( v47 == 1 )
    {
      v51 = 43;
    }
    else
    {
      if ( v47 != 2 )
      {
LABEL_65:
        v52 = pszFormat;
        v53 = 8LL;
        if ( v48 == 1 )
        {
          *v50++ = 48;
          do
          {
            if ( v53 == -2147483638 )
              break;
            v54 = *(wchar_t *)((char *)v52 + (char *)L"%I64o" - (char *)pszFormat);
            if ( !v54 )
              break;
            *v52++ = v54;
            --v53;
          }
          while ( v53 );
        }
        else if ( v48 == 3 )
        {
          *(_DWORD *)v50 = 7864368;
          v50 += 2;
          do
          {
            if ( v53 == -2147483638 )
              break;
            v56 = *(wchar_t *)((char *)v52 + (char *)L"%I64x" - (char *)pszFormat);
            if ( !v56 )
              break;
            *v52++ = v56;
            --v53;
          }
          while ( v53 );
        }
        else
        {
          do
          {
            if ( v53 == -2147483638 )
              break;
            v57 = *(wchar_t *)((char *)v52 + (char *)L"%I64u" - (char *)pszFormat);
            if ( !v57 )
              break;
            *v52++ = v57;
            --v53;
          }
          while ( v53 );
        }
        v55 = v52 - 1;
        if ( v53 )
          v55 = v52;
        *v55 = 0;
        if ( !v53 )
          goto LABEL_73;
        if ( v46 || v48 != 1 )
        {
          v58 = -v46;
          if ( v47 != 2 )
            v58 = v46;
          if ( RtlStringCchPrintfW(v50, 32 - (((__int64)v50 - *(_QWORD *)a3) >> 1), pszFormat, v58) < 0 )
          {
LABEL_73:
            PrintableOperandValue = 50;
            goto LABEL_91;
          }
        }
        *a4 += 10;
LABEL_91:
        if ( P )
          ExFreePoolWithTag(P, 0);
        return PrintableOperandValue;
      }
      v51 = 45;
    }
    *v50++ = v51;
    goto LABEL_65;
  }
  return 87LL;
}
