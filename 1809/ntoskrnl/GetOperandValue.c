/*
 * XREFs of GetOperandValue @ 0x1408A8A98
 * Callers:
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408A9E2C (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x1400162C0 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     wcstoxq @ 0x140198288 (wcstoxq.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     LocalGetSidForString @ 0x1406B154C (LocalGetSidForString.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x1408A7ED8 (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x1408A8598 (FreeOperandValue.c)
 *     GetAttributeName @ 0x1408A85D0 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1408A8828 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1408A8910 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1408A8A1C (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x1408A9BA8 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x1408A9E00 (IsValueSizeFixed.c)
 */

__int64 __fastcall GetOperandValue(
        wchar_t *a1,
        char a2,
        char a3,
        __int64 *a4,
        unsigned int *a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  unsigned int *v9; // r12
  unsigned int AttributeName; // esi
  char v14; // r14
  PVOID v15; // rax
  PVOID v16; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // rsi
  char v23; // r15
  __int64 v24; // r8
  int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // ecx
  unsigned int v29; // r14d
  void *v30; // rax
  unsigned int v31; // ecx
  __int64 v32; // r8
  bool v33; // zf
  char v34; // r14
  __int64 v35; // r14
  __int64 v36; // rdi
  PSID v37; // rcx
  int v38; // r11d
  int v39; // r13d
  __int64 v40; // rax
  __int64 v41; // r14
  PVOID v42; // rax
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r15
  unsigned __int64 v48; // rax
  wint_t *v49; // rdx
  unsigned __int64 v50; // r13
  wchar_t v51; // ax
  unsigned __int64 v52; // rax
  __int16 v53; // r12
  wint_t *v54; // rbx
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rcx
  int v58; // [rsp+28h] [rbp-58h]
  int v59; // [rsp+30h] [rbp-50h]
  _BYTE v60[4]; // [rsp+50h] [rbp-30h] BYREF
  int v61; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-28h]
  PVOID v63; // [rsp+60h] [rbp-20h] BYREF
  PSID Sid; // [rsp+68h] [rbp-18h] BYREF
  wint_t *v65[2]; // [rsp+70h] [rbp-10h] BYREF
  char v67; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  v65[0] = 0LL;
  P = 0LL;
  Sid = 0LL;
  v67 = 0;
  AttributeName = 0;
  v63 = 0LL;
  v14 = 0;
  v60[0] = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, v9);
LABEL_79:
    if ( AttributeName )
      goto LABEL_80;
    goto LABEL_7;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, v9);
    if ( !AttributeName )
      goto LABEL_7;
    goto LABEL_79;
  }
  if ( *a1 == 123 )
  {
    v18 = *a4;
    LODWORD(a5) = 1;
    *(_BYTE *)(v18 + 1) = 80;
    if ( a1[1] )
    {
      while ( 1 )
      {
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5);
        if ( AttributeName )
          goto LABEL_80;
        v19 = &a1[(unsigned int)a5];
        if ( *v19 == 123 )
          goto LABEL_37;
        AttributeName = GetOperandValue((_DWORD)v19, 0, 0, (unsigned int)&v63, (__int64)v9, a6, a7, a8, a9);
        if ( AttributeName )
          goto LABEL_80;
        if ( a3 )
        {
          if ( v14 && v14 != *((_BYTE *)v63 + 1) )
            goto LABEL_37;
          v60[0] = *((_BYTE *)v63 + 1);
        }
        LOBYTE(v20) = *((_BYTE *)v63 + 1);
        v21 = IsValueSizeFixed(v20);
        v22 = *a4;
        v23 = v21;
        v25 = *(_DWORD *)(v24 + 4);
        v26 = v21 != 0 ? 1 : 5;
        if ( *(_QWORD *)(*a4 + 8) )
        {
          v27 = *(_DWORD *)(v22 + 4);
          v28 = v27 + v25;
          if ( v28 < v27 || v26 + v28 < v28 )
          {
LABEL_38:
            AttributeName = 534;
            goto LABEL_80;
          }
          v29 = v26 + v28;
          v30 = SddlpReAlloc(v27, v26 + v28, *(PVOID *)(*a4 + 8));
          *(_QWORD *)(v22 + 8) = v30;
          if ( !v30 )
            goto LABEL_2;
        }
        else
        {
          v31 = v26 + v25;
          if ( v31 < v26 )
            goto LABEL_38;
          v29 = v31;
          *(_QWORD *)(v22 + 8) = SddlpAlloc(v31);
        }
        v32 = *(_QWORD *)(v22 + 8);
        if ( !v32 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v22 + 4) + v32) = *((_BYTE *)v63 + 1);
        if ( !v23 )
          *(_DWORD *)(*(unsigned int *)(v22 + 4) + *(_QWORD *)(v22 + 8) + 1LL) = *((_DWORD *)v63 + 1);
        memmove(
          (void *)(*(unsigned int *)(v22 + 4) + *(_QWORD *)(v22 + 8)
                                              + (-(__int64)(v23 != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                                              + 5),
          *((const void **)v63 + 1),
          *((unsigned int *)v63 + 1));
        *(_DWORD *)(v22 + 4) = v29;
        FreeOperandValue(v63);
        v63 = 0LL;
        LODWORD(a5) = *v9 + (_DWORD)a5;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5);
        if ( AttributeName )
          goto LABEL_80;
        if ( a1[(unsigned int)a5] != 44 )
        {
          v33 = a1[(unsigned int)a5] == 125;
          v16 = P;
          if ( !v33 )
            goto LABEL_41;
          *v9 = (_DWORD)a5 + 1;
          goto LABEL_8;
        }
        LODWORD(a5) = (_DWORD)a5 + 1;
        if ( !a1[(unsigned int)a5] )
          goto LABEL_7;
        v14 = v60[0];
      }
    }
    goto LABEL_7;
  }
  v34 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    LODWORD(a5) = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5);
    if ( AttributeName )
      goto LABEL_80;
    if ( a1[(unsigned int)a5] == 40 )
    {
      v35 = (unsigned int)((_DWORD)a5 + 1);
      AttributeName = LocalGetSidForString(&a1[v35], &Sid, &a5, &v67, a6, v58, v59, a9);
      if ( AttributeName
        || (LODWORD(a5) = v35 + (((char *)a5 - 2 * v35 - (char *)a1) >> 1),
            (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v33 = a1[(unsigned int)a5] == 41;
        v16 = Sid;
        if ( v33 )
        {
          v36 = *a4;
          v37 = Sid;
          *v9 = (_DWORD)a5 + 1;
          *(_BYTE *)(v36 + 1) = 81;
          *(_DWORD *)(v36 + 4) = RtlLengthSid(v37);
          v33 = v67 == 0;
          *(_QWORD *)(v36 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v36 = v33;
          goto LABEL_8;
        }
LABEL_41:
        AttributeName = 1336;
      }
      goto LABEL_81;
    }
    goto LABEL_37;
  }
  GetBinaryOperandLen(a1, &a5);
  if ( *a1 == 35 )
  {
    v39 = (int)a5;
    if ( (unsigned int)a5 >= 2 )
    {
      v40 = *a4;
      LODWORD(v41) = (unsigned int)a5 >> 1;
      *v9 = (unsigned int)a5;
      *(_BYTE *)(v40 + 1) = 24;
      *(_DWORD *)(v40 + 4) = v41;
      v42 = SddlpAlloc((unsigned int)v41);
      *(_QWORD *)(*a4 + 8) = v42;
      if ( !v42 )
      {
LABEL_2:
        AttributeName = 8;
LABEL_80:
        v16 = P;
        goto LABEL_81;
      }
      v43 = v39 - 1;
      if ( v43 >= 1 )
      {
        while ( GetDigitFromChar(a1[v43], v60) && GetDigitFromChar(a1[v44 - 1], &a5) )
        {
          v41 = (unsigned int)(v41 - 1);
          v43 = v45 - 2;
          *(_BYTE *)(v41 + *(_QWORD *)(v46 + 8)) = v60[0] | (16 * (_BYTE)a5);
          if ( v43 < 1 )
            goto LABEL_7;
        }
        goto LABEL_2;
      }
LABEL_7:
      v16 = P;
      goto LABEL_8;
    }
LABEL_37:
    AttributeName = 1336;
    goto LABEL_80;
  }
  v47 = (unsigned int)a5;
  if ( !(_DWORD)a5 )
    goto LABEL_37;
  *v9 = (unsigned int)a5;
  v61 = v38;
  v48 = wcstoxq(0LL, a1, v65, 0, 1, &v61);
  v49 = v65[0];
  v50 = v48;
  if ( v65[0] == a1 && !v48 )
    goto LABEL_37;
  if ( v65[0] != &a1[v47] || v61 )
    goto LABEL_37;
  v51 = *a1;
  if ( *a1 == 45 )
  {
    v52 = wcstoxq(0LL, ++a1, v65, 0, 1, &v61);
    if ( v52 >= v50 && v52 )
      goto LABEL_37;
    v51 = *a1;
    v53 = 2;
    v49 = v65[0];
  }
  else if ( v51 == 43 )
  {
    ++a1;
    v53 = 1;
    v51 = *a1;
  }
  else
  {
    v53 = 3;
  }
  if ( v51 == 48 )
  {
    v54 = a1 + 1;
    if ( v54 >= v49 || ((*v54 - 88) & 0xFFDF) != 0 )
      v34 = 1;
  }
  else
  {
    v34 = 2;
  }
  v55 = *a4;
  *(_BYTE *)(v55 + 1) = 4;
  *(_DWORD *)(v55 + 4) = 10;
  v56 = SddlpAlloc(0xAuLL);
  v57 = *a4;
  v16 = P;
  *(_QWORD *)(*a4 + 8) = v56;
  if ( v56 )
  {
    *v56 = v50;
    *(_WORD *)(*(_QWORD *)(v57 + 8) + 8LL) = v53;
    *(_BYTE *)(*(_QWORD *)(v57 + 8) + 9LL) = v34;
    goto LABEL_8;
  }
  AttributeName = 8;
LABEL_81:
  FreeOperandValue((_QWORD *)*a4);
  *a4 = 0LL;
LABEL_8:
  if ( v63 )
    FreeOperandValue(v63);
  if ( v16 && v67 )
    ExFreePoolWithTag(v16, 0);
  return AttributeName;
}
