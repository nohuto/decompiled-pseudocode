/*
 * XREFs of LocalGetConditionForString @ 0x1408A9E2C
 * Callers:
 *     LocalGetAclForString @ 0x1406B0F2C (LocalGetAclForString.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     iswspace @ 0x1401961B0 (iswspace.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x1406B1814 (SddlpAlloc.c)
 *     AppendCondition @ 0x1408A8110 (AppendCondition.c)
 *     FreeOperandValue @ 0x1408A8598 (FreeOperandValue.c)
 *     GetConditionToken @ 0x1408A8880 (GetConditionToken.c)
 *     GetOperandValue @ 0x1408A8A98 (GetOperandValue.c)
 *     GetOperatorIndexByToken @ 0x1408A9244 (GetOperatorIndexByToken.c)
 *     IsValueSizeFixed @ 0x1408A9E00 (IsValueSizeFixed.c)
 */

__int64 __fastcall LocalGetConditionForString(
        wint_t *a1,
        wint_t **a2,
        _QWORD *a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        char a8)
{
  wint_t *v8; // r14
  unsigned int *v9; // r15
  int v10; // esi
  unsigned int appended; // ebx
  unsigned int v12; // edi
  int v13; // r13d
  _QWORD *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rax
  size_t v19; // rcx
  unsigned __int64 v20; // rax
  _DWORD *v21; // rax
  __int64 v22; // rax
  char ConditionToken; // al
  char v24; // r10
  char v25; // r15
  __int64 v26; // rax
  __int64 v27; // r14
  char v28; // r15
  char v29; // al
  int OperatorIndexByToken; // eax
  char v31; // r10
  int v32; // eax
  char v33; // r10
  __int64 v34; // r8
  char v35; // r11
  int v36; // eax
  char v37; // r10
  char v38; // r10
  __int64 v39; // r8
  __int64 v40; // r8
  int v41; // r9d
  __int64 v42; // rax
  char v43; // al
  int v44; // eax
  int v45; // r9d
  __int64 v46; // rax
  __int64 v47; // r8
  int v48; // eax
  __int64 v49; // r8
  int v50; // r9d
  char v51; // cl
  unsigned int OperandValue; // eax
  char v53; // cl
  const void **v54; // r13
  __int64 v55; // rdi
  const void **v56; // r13
  char v57; // al
  const void **v58; // rdi
  size_t Size; // [rsp+20h] [rbp-E0h]
  size_t Sizea; // [rsp+20h] [rbp-E0h]
  char v62; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v63; // [rsp+51h] [rbp-AFh]
  int v64[2]; // [rsp+58h] [rbp-A8h]
  char v65; // [rsp+60h] [rbp-A0h]
  int v66[2]; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v67; // [rsp+6Ch] [rbp-94h] BYREF
  int v68[2]; // [rsp+70h] [rbp-90h]
  wint_t *v69; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h] BYREF
  __int64 v71; // [rsp+88h] [rbp-78h]
  __int64 v72; // [rsp+90h] [rbp-70h]
  __int64 v73; // [rsp+98h] [rbp-68h]
  wint_t **v74; // [rsp+A0h] [rbp-60h]
  _BYTE v75[257]; // [rsp+AFh] [rbp-51h] BYREF

  v69 = a1;
  v8 = a1;
  *(_QWORD *)v64 = a4;
  v73 = a5;
  v9 = a4;
  v10 = 0;
  v72 = a6;
  appended = 0;
  v12 = 0;
  v71 = a7;
  v13 = 0;
  *(_QWORD *)v68 = a3;
  v14 = 0LL;
  v74 = a2;
  v63 = 0;
  P = 0LL;
  v65 = 0;
  if ( !a1 || !a2 || !a3 || !a4 )
    return 87LL;
  *a3 = 0LL;
  v15 = -1LL;
  *a4 = 0;
  do
    ++v15;
  while ( a1[v15] );
  if ( (unsigned int)v15 < 3 || *a1 != 40 )
  {
    appended = 1336;
    goto LABEL_120;
  }
  v16 = v15 + 1;
  v17 = -1;
  if ( v16 )
    v17 = v16;
  *a4 = v17;
  if ( !v16 )
    goto LABEL_13;
  v18 = v17;
  v19 = 0xFFFFFFFFLL;
  v20 = 2 * v18;
  if ( v20 <= 0xFFFFFFFF )
    v19 = (unsigned int)v20;
  *a4 = v19;
  if ( v20 > 0xFFFFFFFF )
  {
LABEL_13:
    appended = 534;
    goto LABEL_116;
  }
  v21 = SddlpAlloc(v19);
  **(_QWORD **)v68 = v21;
  if ( !v21 )
  {
    appended = 8;
    goto LABEL_116;
  }
  *v21 = 2020897377;
  v66[0] = 4;
  while ( *v8 )
  {
    if ( iswspace(*v8) )
    {
      v22 = 2LL;
      goto LABEL_106;
    }
    if ( v10 == 255 )
    {
      appended = 1001;
      goto LABEL_116;
    }
    ConditionToken = GetConditionToken(v8, &v67);
    v24 = 0;
    v25 = ConditionToken;
    if ( ConditionToken )
    {
      if ( ConditionToken == -2 )
      {
        if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 )
          goto LABEL_114;
        v26 = v10;
        v12 = 1;
        ++v10;
        v75[v26 + 1] = v25;
        v9 = *(unsigned int **)v64;
        goto LABEL_105;
      }
      v27 = v10;
      if ( ConditionToken == -1 )
      {
        if ( !v10 || v12 == 3 || v12 == 1 )
          goto LABEL_114;
        v28 = v75[v10];
        v65 = v28 == -2;
        while ( 1 )
        {
          v29 = v75[v27--];
          --v10;
          LOBYTE(v63) = v29;
          v62 = v29;
          if ( v29 == -2 )
            break;
          LODWORD(Size) = 1;
          appended = AppendCondition(*(const void ***)v68, *(unsigned int **)v64, (unsigned int *)v66, &v62, Size);
          if ( appended )
            goto LABEL_115;
          if ( !v27 )
          {
            LOBYTE(v63) = v62;
            if ( v62 != -2 )
              goto LABEL_114;
            break;
          }
        }
        if ( !v10 )
        {
          v8 = &v69[v67];
          break;
        }
        OperatorIndexByToken = GetOperatorIndexByToken(v75[v10]);
        if ( OperatorIndexByToken != -1
          && v28 != -2
          && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 19) != v31
          && *((_BYTE *)&Operators + 24 * OperatorIndexByToken + 8) != 0xA2 )
        {
          goto LABEL_114;
        }
        v12 = 2;
      }
      else
      {
        v32 = GetOperatorIndexByToken(ConditionToken);
        v34 = 3LL * v32;
        v66[1] = *((_DWORD *)&Operators + 6 * v32 + 3);
        if ( *((_BYTE *)&Operators + 24 * v32 + 18) != v33 && v12 != 4 && (v12 != 2 || v65 == v33) )
          goto LABEL_114;
        v35 = (char)(&Operators)[3 * v32 + 1];
        if ( v35 )
        {
          if ( v12 > 1 )
          {
            if ( v12 != 3 )
              goto LABEL_114;
            v36 = GetOperatorIndexByToken(v75[v10]);
            if ( *((_BYTE *)&Operators + 24 * v36 + 19) != v37 )
              goto LABEL_114;
          }
        }
        v38 = *((_BYTE *)&Operators + 8 * v34 + 19);
        if ( !v38 && (v12 & 0xFFFFFFFC) == 0 && v12 != 2 )
          goto LABEL_114;
        if ( (unsigned int)(v13 - 4) <= 1 )
          goto LABEL_114;
        if ( v10 )
        {
          if ( v38 )
          {
            v39 = v10 - 1;
            if ( v10 - 1 >= 0 )
            {
              while ( (unsigned int)GetOperatorIndexByToken(v75[v39 + 1]) == -1 )
              {
                v39 = v40 - 1;
                if ( v39 < 0 )
                  goto LABEL_64;
              }
              v42 = 3LL * (int)GetOperatorIndexByToken(v75[v41 + 1]);
              if ( *((_BYTE *)&Operators + 8 * v42 + 19) )
              {
                if ( *((_BYTE *)&Operators + 8 * v42 + 8) != 0xA2 )
                {
LABEL_114:
                  appended = 1336;
LABEL_115:
                  v9 = *(unsigned int **)v64;
                  goto LABEL_116;
                }
              }
            }
          }
        }
LABEL_64:
        if ( v35 || !v38 )
          v13 = 0;
        else
          v13 = 5;
        if ( v10 )
        {
          while ( 1 )
          {
            v43 = v75[v27];
            if ( v43 == -2 )
              break;
            LOBYTE(v63) = v75[v27];
            v62 = v43;
            v44 = GetOperatorIndexByToken(v63);
            if ( v45 > *((_DWORD *)&Operators + 6 * v44 + 3) )
              break;
            --v10;
            LODWORD(Size) = 1;
            --v27;
            appended = AppendCondition(*(const void ***)v68, *(unsigned int **)v64, (unsigned int *)v66, &v62, Size);
            if ( appended )
              goto LABEL_115;
            LOBYTE(v63) = v62;
            if ( !v27 )
              goto LABEL_75;
          }
          v46 = v10++;
          v75[v46 + 1] = v25;
        }
LABEL_75:
        v12 = 3;
      }
      v9 = *(unsigned int **)v64;
    }
    else
    {
      if ( (v12 & 0xFFFFFFFC) != 0 || v12 == 2 || v13 == 3 )
        goto LABEL_114;
      if ( !v13 )
      {
        v13 = 5;
        if ( !v10 )
          goto LABEL_93;
        v47 = v10 - 1;
        if ( v10 - 1 < 0 )
          goto LABEL_93;
        while ( 1 )
        {
          LOBYTE(v63) = v75[v47 + 1];
          v48 = GetOperatorIndexByToken(v63);
          if ( v48 != -1 )
            break;
          --v50;
          v47 = v49 - 1;
          if ( v47 < 0 )
            goto LABEL_92;
        }
        v51 = *((_BYTE *)&Operators + 24 * v48 + 8);
        if ( (unsigned __int8)(v51 + 119) > 3u
          && (unsigned __int8)(v51 + 112) > 3u
          && BYTE1((&Operators)[3 * v48 + 1]) != v24 )
        {
          v13 = 4;
        }
        if ( v51 == -121 || v51 == -115 )
          HIBYTE(v63) = 1;
LABEL_92:
        if ( v50 < 0 )
LABEL_93:
          v13 = 4;
      }
      v12 = v13;
      OperandValue = GetOperandValue(v8, v13 == 4, v24, (__int64 *)&P, &v67, v73, v72, v71, a8);
      v14 = P;
      appended = OperandValue;
      if ( OperandValue )
        goto LABEL_115;
      if ( HIBYTE(v63) )
      {
        v53 = *((_BYTE *)P + 1);
        HIBYTE(v63) = 0;
        if ( ((v53 + 7) & 0xFC) == 0 && v53 != -6 )
          goto LABEL_114;
      }
      v9 = *(unsigned int **)v64;
      v54 = *(const void ***)v68;
      LODWORD(Sizea) = 1;
      appended = AppendCondition(*(const void ***)v68, *(unsigned int **)v64, (unsigned int *)v66, (char *)P + 1, Sizea);
      if ( appended )
        goto LABEL_116;
      if ( !IsValueSizeFixed(*((_BYTE *)v14 + 1)) )
      {
        LODWORD(Size) = 4;
        appended = AppendCondition(v54, v9, (unsigned int *)v66, (char *)v14 + 4, Size);
        if ( appended )
          goto LABEL_116;
      }
      if ( *((_DWORD *)v14 + 1) )
      {
        LODWORD(Size) = *((_DWORD *)v14 + 1);
        appended = AppendCondition(v54, v9, (unsigned int *)v66, (const void *)v14[1], Size);
        if ( appended )
          goto LABEL_116;
      }
      FreeOperandValue(v14);
      v14 = 0LL;
      P = 0LL;
      v13 = 3;
    }
    v8 = v69;
LABEL_105:
    v22 = 2LL * v67;
LABEL_106:
    v8 = (wint_t *)((char *)v8 + v22);
    v69 = v8;
  }
  v9 = *(unsigned int **)v64;
  v55 = v10;
  if ( v10 )
  {
    v56 = *(const void ***)v68;
    while ( 1 )
    {
      v57 = v75[v55--];
      v62 = v57;
      if ( v57 == -2 )
        break;
      LODWORD(Size) = 1;
      appended = AppendCondition(v56, v9, (unsigned int *)v66, &v62, Size);
      if ( appended )
        goto LABEL_116;
      if ( !v55 )
        goto LABEL_126;
    }
    appended = 1336;
  }
LABEL_126:
  *v9 = v66[0];
  *v74 = v8;
LABEL_116:
  if ( v14 )
    FreeOperandValue(v14);
  if ( *v9 == 4 || appended )
  {
LABEL_120:
    v58 = *(const void ***)v68;
    if ( **(_QWORD **)v68 )
    {
      ExFreePoolWithTag(**(PVOID **)v68, 0);
      *v58 = 0LL;
      *v9 = 0;
    }
  }
  return appended;
}
