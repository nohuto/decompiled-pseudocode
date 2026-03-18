/*
 * XREFs of GetOperandValue @ 0x1408E4BB8
 * Callers:
 *     GetOperandValue @ 0x1408E4BB8 (GetOperandValue.c)
 *     LocalGetConditionForString @ 0x1408E5E94 (LocalGetConditionForString.c)
 * Callees:
 *     RtlLengthSid @ 0x140004070 (RtlLengthSid.c)
 *     _wcsnicmp @ 0x1401A0240 (_wcsnicmp.c)
 *     wcstoxq @ 0x1401A2998 (wcstoxq.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406EC2DC (SddlpAlloc.c)
 *     LocalGetSidForString @ 0x1406F8B48 (LocalGetSidForString.c)
 *     SddlpReAlloc @ 0x1408E3FF0 (SddlpReAlloc.c)
 *     FreeOperandValue @ 0x1408E46B0 (FreeOperandValue.c)
 *     GetAttributeName @ 0x1408E46E8 (GetAttributeName.c)
 *     GetBinaryOperandLen @ 0x1408E4940 (GetBinaryOperandLen.c)
 *     GetDigitFromChar @ 0x1408E4A28 (GetDigitFromChar.c)
 *     GetNextNoneWhiteSpace @ 0x1408E4B3C (GetNextNoneWhiteSpace.c)
 *     GetOperandValue @ 0x1408E4BB8 (GetOperandValue.c)
 *     GetStringOperandValue @ 0x1408E5C10 (GetStringOperandValue.c)
 *     IsValueSizeFixed @ 0x1408E5E68 (IsValueSizeFixed.c)
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
  char v14; // r13
  PVOID v15; // rax
  PVOID v16; // rbx
  __int64 v18; // rax
  wchar_t *v19; // rcx
  __int64 v20; // rcx
  char v21; // al
  __int64 v22; // r9
  __int64 v23; // rsi
  char v24; // r15
  void *v25; // r8
  unsigned int v26; // edx
  unsigned int v27; // r10d
  unsigned int v28; // eax
  unsigned int v29; // r14d
  void *v30; // rax
  __int64 v31; // r8
  bool v32; // zf
  char v33; // r14
  __int64 v34; // r14
  __int64 v35; // rdi
  PSID v36; // rcx
  int v37; // r11d
  int v38; // r13d
  __int64 v39; // rax
  __int64 v40; // r14
  PVOID v41; // rax
  __int64 v42; // r8
  __int64 v43; // r8
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // r15
  unsigned __int64 v47; // rax
  wint_t *v48; // rdx
  unsigned __int64 v49; // r13
  wchar_t v50; // ax
  unsigned __int64 v51; // rax
  __int16 v52; // r12
  wint_t *v53; // rbx
  __int64 v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rcx
  int v57; // [rsp+28h] [rbp-58h]
  int v58; // [rsp+30h] [rbp-50h]
  _BYTE v59[4]; // [rsp+50h] [rbp-30h] BYREF
  int v60; // [rsp+54h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+58h] [rbp-28h]
  PVOID v62; // [rsp+60h] [rbp-20h] BYREF
  PSID Sid; // [rsp+68h] [rbp-18h] BYREF
  wint_t *v64[2]; // [rsp+70h] [rbp-10h] BYREF
  char v66; // [rsp+D8h] [rbp+58h] BYREF

  v9 = a5;
  v64[0] = 0LL;
  P = 0LL;
  Sid = 0LL;
  v66 = 0;
  AttributeName = 0;
  v62 = 0LL;
  v14 = 0;
  *a5 = 0;
  v15 = SddlpAlloc(0x10uLL);
  *a4 = (__int64)v15;
  if ( !v15 )
    goto LABEL_2;
  if ( a2 || !wcsnicmp(a1, L"@", 1uLL) )
  {
    AttributeName = GetAttributeName(a1, a4, v9);
LABEL_80:
    if ( AttributeName )
      goto LABEL_81;
    goto LABEL_7;
  }
  if ( *a1 == 34 )
  {
    AttributeName = GetStringOperandValue(a1, a4, v9);
    if ( !AttributeName )
      goto LABEL_7;
    goto LABEL_80;
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
          goto LABEL_81;
        v19 = &a1[(unsigned int)a5];
        if ( *v19 == 123 )
          goto LABEL_37;
        AttributeName = GetOperandValue((_DWORD)v19, 0, 0, (unsigned int)&v62, (__int64)v9, a6, a7, a8, a9);
        if ( AttributeName )
          goto LABEL_81;
        if ( a3 )
        {
          if ( v14 && v14 != *((_BYTE *)v62 + 1) )
            goto LABEL_37;
          v14 = *((_BYTE *)v62 + 1);
        }
        LOBYTE(v20) = *((_BYTE *)v62 + 1);
        v21 = IsValueSizeFixed(v20);
        v23 = *a4;
        v24 = v21;
        v25 = *(void **)(*a4 + 8);
        v26 = v21 != 0 ? 1 : 5;
        if ( v25 )
        {
          v27 = *(_DWORD *)(v23 + 4);
          v28 = v27 + *(_DWORD *)(v22 + 4);
          if ( v28 < v27 || (v29 = v26 + v28, v26 + v28 < v28) )
          {
LABEL_38:
            AttributeName = 534;
            goto LABEL_81;
          }
          v30 = SddlpReAlloc(v27, v29, v25);
          *(_QWORD *)(v23 + 8) = v30;
          if ( !v30 )
            goto LABEL_2;
        }
        else
        {
          v29 = v26 + *(_DWORD *)(v22 + 4);
          if ( v29 < v26 )
            goto LABEL_38;
          *(_QWORD *)(v23 + 8) = SddlpAlloc(v29);
        }
        v31 = *(_QWORD *)(v23 + 8);
        if ( !v31 )
          goto LABEL_2;
        *(_BYTE *)(*(unsigned int *)(v23 + 4) + v31) = *((_BYTE *)v62 + 1);
        if ( !v24 )
          *(_DWORD *)(*(unsigned int *)(v23 + 4) + *(_QWORD *)(v23 + 8) + 1LL) = *((_DWORD *)v62 + 1);
        memmove(
          (void *)(*(unsigned int *)(v23 + 4) + *(_QWORD *)(v23 + 8)
                                              + (-(__int64)(v24 != 0) & 0xFFFFFFFFFFFFFFFCuLL)
                                              + 5),
          *((const void **)v62 + 1),
          *((unsigned int *)v62 + 1));
        *(_DWORD *)(v23 + 4) = v29;
        FreeOperandValue(v62);
        v62 = 0LL;
        LODWORD(a5) = *v9 + (_DWORD)a5;
        AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5);
        if ( AttributeName )
          goto LABEL_81;
        if ( a1[(unsigned int)a5] != 44 )
        {
          v32 = a1[(unsigned int)a5] == 125;
          v16 = P;
          if ( !v32 )
            goto LABEL_41;
          *v9 = (_DWORD)a5 + 1;
          goto LABEL_8;
        }
        LODWORD(a5) = (_DWORD)a5 + 1;
        if ( !a1[(unsigned int)a5] )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v33 = 3;
  if ( !wcsnicmp(a1, L"SID", 3uLL) )
  {
    LODWORD(a5) = 3;
    AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5);
    if ( AttributeName )
      goto LABEL_81;
    if ( a1[(unsigned int)a5] == 40 )
    {
      v34 = (unsigned int)((_DWORD)a5 + 1);
      AttributeName = LocalGetSidForString(&a1[v34], &Sid, &a5, &v66, a6, v57, v58, a9);
      if ( AttributeName
        || (LODWORD(a5) = v34 + (((char *)a5 - 2 * v34 - (char *)a1) >> 1),
            (AttributeName = GetNextNoneWhiteSpace((__int64)a1, &a5)) != 0) )
      {
        v16 = Sid;
      }
      else
      {
        v32 = a1[(unsigned int)a5] == 41;
        v16 = Sid;
        if ( v32 )
        {
          v35 = *a4;
          v36 = Sid;
          *v9 = (_DWORD)a5 + 1;
          *(_BYTE *)(v35 + 1) = 81;
          *(_DWORD *)(v35 + 4) = RtlLengthSid(v36);
          v32 = v66 == 0;
          *(_QWORD *)(v35 + 8) = v16;
          v16 = 0LL;
          *(_BYTE *)v35 = v32;
          goto LABEL_8;
        }
LABEL_41:
        AttributeName = 1336;
      }
      goto LABEL_82;
    }
    goto LABEL_37;
  }
  GetBinaryOperandLen(a1, &a5);
  if ( *a1 == 35 )
  {
    v38 = (int)a5;
    if ( (unsigned int)a5 >= 2 )
    {
      v39 = *a4;
      LODWORD(v40) = (unsigned int)a5 >> 1;
      *v9 = (unsigned int)a5;
      *(_BYTE *)(v39 + 1) = 24;
      *(_DWORD *)(v39 + 4) = v40;
      v41 = SddlpAlloc((unsigned int)v40);
      *(_QWORD *)(*a4 + 8) = v41;
      if ( !v41 )
      {
LABEL_2:
        AttributeName = 8;
LABEL_81:
        v16 = P;
        goto LABEL_82;
      }
      v42 = v38 - 1;
      while ( v42 >= 1 )
      {
        if ( !GetDigitFromChar(a1[v42], v59) || !GetDigitFromChar(a1[v43 - 1], &a5) )
          goto LABEL_2;
        v40 = (unsigned int)(v40 - 1);
        v42 = v44 - 2;
        *(_BYTE *)(v40 + *(_QWORD *)(v45 + 8)) = v59[0] | (16 * (_BYTE)a5);
      }
LABEL_7:
      v16 = P;
      goto LABEL_8;
    }
LABEL_37:
    AttributeName = 1336;
    goto LABEL_81;
  }
  v46 = (unsigned int)a5;
  if ( !(_DWORD)a5 )
    goto LABEL_37;
  *v9 = (unsigned int)a5;
  v60 = v37;
  v47 = wcstoxq(0LL, a1, v64, 0, 1, &v60);
  v48 = v64[0];
  v49 = v47;
  if ( v64[0] == a1 && !v47 )
    goto LABEL_37;
  if ( v64[0] != &a1[v46] || v60 )
    goto LABEL_37;
  v50 = *a1;
  if ( *a1 == 45 )
  {
    v51 = wcstoxq(0LL, ++a1, v64, 0, 1, &v60);
    if ( v51 >= v49 && v51 )
      goto LABEL_37;
    v50 = *a1;
    v52 = 2;
    v48 = v64[0];
  }
  else if ( v50 == 43 )
  {
    ++a1;
    v52 = 1;
    v50 = *a1;
  }
  else
  {
    v52 = 3;
  }
  if ( v50 == 48 )
  {
    v53 = a1 + 1;
    if ( v53 >= v48 || ((*v53 - 88) & 0xFFDF) != 0 )
      v33 = 1;
  }
  else
  {
    v33 = 2;
  }
  v54 = *a4;
  *(_BYTE *)(v54 + 1) = 4;
  *(_DWORD *)(v54 + 4) = 10;
  v55 = SddlpAlloc(0xAuLL);
  v56 = *a4;
  v16 = P;
  *(_QWORD *)(*a4 + 8) = v55;
  if ( v55 )
  {
    *v55 = v49;
    *(_WORD *)(*(_QWORD *)(v56 + 8) + 8LL) = v52;
    *(_BYTE *)(*(_QWORD *)(v56 + 8) + 9LL) = v33;
    goto LABEL_8;
  }
  AttributeName = 8;
LABEL_82:
  FreeOperandValue((_QWORD *)*a4);
  *a4 = 0LL;
LABEL_8:
  if ( v62 )
    FreeOperandValue(v62);
  if ( v16 && v66 )
    ExFreePoolWithTag(v16, 0);
  return AttributeName;
}
