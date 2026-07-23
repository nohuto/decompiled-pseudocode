/*
 * XREFs of LocalpGetStringForCondition @ 0x1408ABB30
 * Callers:
 *     LocalGetAceCondition @ 0x1408A7298 (LocalGetAceCondition.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400922E8 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     EncloseSubCondition @ 0x1408A83A4 (EncloseSubCondition.c)
 *     GetOperatorIndexByToken @ 0x1408A9244 (GetOperatorIndexByToken.c)
 *     GetPrintableAttributeName @ 0x1408A9268 (GetPrintableAttributeName.c)
 *     GetPrintableOperandValue @ 0x1408A94A8 (GetPrintableOperandValue.c)
 *     ULongAddStringSize @ 0x1408AC0C8 (ULongAddStringSize.c)
 */

__int64 __fastcall LocalpGetStringForCondition(
        char *a1,
        unsigned int a2,
        void *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // r9
  __int64 v10; // r8
  unsigned int v11; // r12d
  __int64 v12; // r10
  unsigned int PrintableAttributeName; // ebx
  int v14; // r13d
  wchar_t *v15; // rsi
  __int64 v16; // r14
  char *v17; // r15
  char v18; // di
  bool v19; // zf
  unsigned int v20; // eax
  int OperatorIndexByToken; // eax
  unsigned int v22; // r11d
  __int64 v23; // rdx
  __int64 v24; // rax
  wchar_t *v25; // rcx
  unsigned int v26; // eax
  wchar_t *v27; // r15
  size_t v28; // r12
  NTSTATUS v29; // eax
  __int64 v30; // rdi
  char v31; // al
  __int64 v32; // rdx
  PVOID *v33; // rcx
  PVOID v34; // rdi
  PVOID v35; // r15
  size_t v36; // r12
  _QWORD *v37; // rdi
  PVOID *v38; // rcx
  __int64 v39; // rdi
  PVOID v40; // rcx
  wchar_t *v42; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v43; // [rsp+48h] [rbp-B8h] BYREF
  int v44; // [rsp+4Ch] [rbp-B4h]
  unsigned int v45; // [rsp+50h] [rbp-B0h]
  __int64 v46; // [rsp+58h] [rbp-A8h]
  char *v47; // [rsp+60h] [rbp-A0h]
  __int64 v48; // [rsp+68h] [rbp-98h]
  __int64 v49; // [rsp+70h] [rbp-90h]
  __int64 v50; // [rsp+78h] [rbp-88h]
  PVOID P[2]; // [rsp+80h] [rbp-80h] BYREF
  PVOID v52[256]; // [rsp+90h] [rbp-70h] BYREF

  v8 = a6;
  v10 = a5;
  v11 = a2;
  v12 = a7;
  v45 = a2;
  P[0] = a3;
  PrintableAttributeName = 0;
  v47 = a1;
  v14 = 0;
  v48 = a5;
  v49 = a6;
  v50 = a7;
  v42 = 0LL;
  v43 = 0;
  if ( !a1 || !a3 || !a2 )
    return 87LL;
  if ( a2 < 6 || *(_DWORD *)a1 != 2020897377 )
    return 805LL;
  LODWORD(v15) = 4;
  v44 = 4;
  v16 = 0LL;
  do
  {
    if ( v16 == 255 )
    {
      PrintableAttributeName = 1001;
      goto LABEL_77;
    }
    v17 = &a1[(unsigned int)v15];
    v18 = *v17;
    if ( (unsigned __int8)*v17 > 0x51u )
    {
      if ( (unsigned __int8)v18 < 0x80u )
        goto LABEL_21;
      if ( (unsigned __int8)v18 > 0x93u )
      {
        if ( (unsigned __int8)v18 <= 0x9Fu )
          goto LABEL_21;
        if ( (unsigned __int8)v18 > 0xA3u )
        {
          if ( (unsigned __int8)v18 <= 0xF7u || (unsigned __int8)v18 > 0xFCu )
            goto LABEL_21;
          PrintableAttributeName = GetPrintableAttributeName(
                                     (__int64)&a1[(unsigned int)v15],
                                     v11 - (unsigned int)v15,
                                     v18,
                                     &v42,
                                     &v43);
          if ( PrintableAttributeName )
          {
LABEL_74:
            v15 = v42;
            goto LABEL_88;
          }
          v52[v16] = v42;
          goto LABEL_16;
        }
      }
      if ( (unsigned __int8)(v18 + 96) <= 1u )
      {
        if ( v16 < 2 )
          goto LABEL_21;
        PrintableAttributeName = EncloseSubCondition(&v52[v14 - 1]);
        if ( PrintableAttributeName )
          goto LABEL_77;
        v20 = EncloseSubCondition(&v52[v14 - 2]);
      }
      else
      {
        if ( v18 != -94 )
        {
LABEL_38:
          OperatorIndexByToken = GetOperatorIndexByToken(*v17);
          if ( OperatorIndexByToken < 0 )
            goto LABEL_86;
          v23 = 3LL * OperatorIndexByToken;
          v24 = -1LL;
          v25 = (&Operators)[v23];
          v46 = v23;
          do
            ++v24;
          while ( v25[v24] );
          v26 = 2 * v24;
          LODWORD(v42) = v26;
          if ( LOBYTE((&Operators)[v23 + 1]) )
          {
            if ( !v16 )
              goto LABEL_86;
            v27 = (wchar_t *)P[v16 + 1];
            if ( (int)ULongAddStringSize(v26, v27, &v42) < 0 )
            {
LABEL_85:
              PrintableAttributeName = 534;
              goto LABEL_77;
            }
            v28 = (unsigned int)((_DWORD)v42 + 8);
            v15 = (wchar_t *)SddlpAlloc(v28);
            if ( !v15 )
              goto LABEL_76;
            if ( v18 == -94 )
            {
              v29 = RtlStringCchPrintfW(v15, v28 >> 1, L"(%ls%ls)", (&Operators)[v46], v27);
            }
            else
            {
              v30 = v46;
              v31 = *((_BYTE *)&Operators + 8 * v46 + 8);
              if ( (v31 == -121 || v31 == -115)
                && (!wcsnicmp(v27, L"@USER.", 6uLL)
                 || !wcsnicmp(v27, L"@DEVICE.", 8uLL)
                 || !wcsnicmp(v27, L"@TOKEN.", 7uLL)) )
              {
                PrintableAttributeName = 1336;
                goto LABEL_88;
              }
              v29 = RtlStringCchPrintfW(v15, v28 >> 1, L"(%ls %ls)", (&Operators)[v30], v27);
            }
            v32 = 0LL;
            if ( v29 < 0 )
              goto LABEL_87;
            if ( v27 )
            {
              ExFreePoolWithTag(v27, 0);
              v32 = 0LL;
            }
            v33 = &P[v16 + 1];
          }
          else
          {
            if ( v16 < 2 )
            {
LABEL_86:
              PrintableAttributeName = v22;
              goto LABEL_77;
            }
            v34 = P[v16 + 1];
            if ( (int)ULongAddStringSize(v26, v34, &v42) < 0 )
              goto LABEL_85;
            v35 = P[v16];
            if ( (int)ULongAddStringSize((unsigned int)v42, v35, &v42) < 0 )
              goto LABEL_85;
            v36 = (unsigned int)((_DWORD)v42 + 10);
            v15 = (wchar_t *)SddlpAlloc(v36);
            if ( !v15 )
            {
LABEL_76:
              PrintableAttributeName = 8;
              goto LABEL_77;
            }
            if ( RtlStringCchPrintfW(v15, v36 >> 1, L"(%ls %ls %ls)", v35, (&Operators)[v46], v34) < 0 )
            {
LABEL_87:
              PrintableAttributeName = 50;
LABEL_88:
              if ( v15 )
                ExFreePoolWithTag(v15, 0);
              goto LABEL_77;
            }
            if ( v34 )
              ExFreePoolWithTag(v34, 0);
            if ( v35 )
              ExFreePoolWithTag(v35, 0);
            v32 = -1LL;
            v33 = &P[v16];
          }
          v11 = v45;
          v14 += v32;
          *v33 = v15;
          LODWORD(v15) = v44;
          v16 += v32;
          v43 = 1;
          goto LABEL_69;
        }
        if ( v16 < 1 )
          goto LABEL_21;
        v20 = EncloseSubCondition(&v52[v14 - 1]);
      }
      PrintableAttributeName = v20;
      if ( v20 )
        goto LABEL_77;
      goto LABEL_38;
    }
    if ( (unsigned __int8)v18 >= 0x50u )
      goto LABEL_14;
    if ( v18 )
    {
      if ( (unsigned __int8)v18 > 4u && v18 != 16 && v18 != 24 )
        goto LABEL_21;
LABEL_14:
      PrintableAttributeName = GetPrintableOperandValue(
                                 &a1[(unsigned int)v15],
                                 v11 - (unsigned int)v15,
                                 (__int64)&v42,
                                 &v43,
                                 v10,
                                 v8,
                                 v12,
                                 a8);
      if ( PrintableAttributeName )
        goto LABEL_74;
      v52[v16] = v42;
LABEL_16:
      ++v14;
      ++v16;
LABEL_69:
      a1 = v47;
      v10 = v48;
      v8 = v49;
      v12 = v50;
      v42 = 0LL;
      goto LABEL_70;
    }
    while ( 1 )
    {
      v15 = (wchar_t *)(unsigned int)((_DWORD)v15 + 1);
      v19 = (_DWORD)v15 == v11;
      if ( (unsigned int)v15 >= v11 )
        break;
      if ( a1[(_QWORD)v15] )
      {
        v19 = (_DWORD)v15 == v11;
        break;
      }
    }
    if ( !v19 )
    {
LABEL_21:
      PrintableAttributeName = 1336;
      goto LABEL_77;
    }
LABEL_70:
    LODWORD(v15) = v43 + (_DWORD)v15;
    v44 = (int)v15;
  }
  while ( (unsigned int)v15 < v11 );
  if ( v14 == 1 )
  {
    v37 = P[0];
    v38 = (PVOID *)P[0];
    *(_QWORD *)P[0] = v52[0];
    PrintableAttributeName = EncloseSubCondition(v38);
    if ( !PrintableAttributeName )
      return PrintableAttributeName;
    *v37 = 0LL;
    goto LABEL_78;
  }
LABEL_77:
  if ( !v14 )
    return PrintableAttributeName;
LABEL_78:
  if ( !PrintableAttributeName )
    PrintableAttributeName = 1336;
  v39 = v14;
  do
  {
    v40 = P[v39-- + 1];
    if ( v40 )
      ExFreePoolWithTag(v40, 0);
  }
  while ( v39 );
  return PrintableAttributeName;
}
