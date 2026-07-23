/*
 * XREFs of EmpParseRuleExpression @ 0x1409BF5D4
 * Callers:
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EmpParseRuleTerm @ 0x1409BF478 (EmpParseRuleTerm.c)
 *     CmpGetSectionLineIndex @ 0x1409C0514 (CmpGetSectionLineIndex.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409C058C (EmpInfParseGetValueFromSectionAndKeyName.c)
 *     EmpRuleParserStackPush @ 0x1409C0798 (EmpRuleParserStackPush.c)
 *     EmpRuleParserStackPop @ 0x1409C080C (EmpRuleParserStackPop.c)
 *     EmpInfParseSearchDependencyList @ 0x1409C0864 (EmpInfParseSearchDependencyList.c)
 */

__int64 __fastcall EmpParseRuleExpression(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  _QWORD *v5; // r15
  PVOID v6; // r13
  _BYTE *ValueFromSectionAndKeyName; // r14
  _DWORD *PoolWithTag; // rax
  _QWORD *v9; // rsi
  char v10; // al
  _DWORD *v11; // r14
  unsigned int v12; // r8d
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // ecx
  _QWORD *v17; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // rax
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  _QWORD *v23; // rax
  unsigned int v24; // ecx
  __int64 v25; // rax
  PVOID v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rcx
  _QWORD *v29; // rcx
  void *v30; // rcx
  void *v31; // rcx
  ULONG v32; // edx
  void *i; // rcx
  _QWORD *v34; // rsi
  __int64 v35; // rdx
  _QWORD *v36; // rax
  _QWORD *v37; // rsi
  __int64 v38; // rdx
  _QWORD *v39; // rax
  unsigned int v40; // [rsp+30h] [rbp-20h] BYREF
  int v41; // [rsp+34h] [rbp-1Ch]
  unsigned int v42; // [rsp+38h] [rbp-18h] BYREF
  __int64 v43; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v44; // [rsp+48h] [rbp-8h] BYREF
  char v46; // [rsp+A8h] [rbp+58h] BYREF

  v4 = 0;
  v41 = 0;
  v5 = 0LL;
  v6 = 0LL;
  ValueFromSectionAndKeyName = (_BYTE *)EmpInfParseGetValueFromSectionAndKeyName(a1, "Rule", a2);
  if ( !ValueFromSectionAndKeyName )
  {
    v4 = -1073741275;
    goto LABEL_55;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74734D45u);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = 0;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
  }
  do
  {
    if ( *ValueFromSectionAndKeyName != 37 )
    {
      if ( *ValueFromSectionAndKeyName == 38 )
        goto LABEL_46;
      if ( *ValueFromSectionAndKeyName != 63 )
      {
        if ( *ValueFromSectionAndKeyName != 124 )
          goto LABEL_61;
LABEL_46:
        if ( *(_DWORD *)v9 < 2u )
          goto LABEL_61;
        v5 = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x74734D45u);
        if ( !v5
          || (v5[1] = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74734D45u),
              v26 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74734D45u),
              v27 = v5[1],
              v5[4] = v26,
              !v27)
          || !v26 )
        {
LABEL_60:
          v4 = -1073741670;
          goto LABEL_28;
        }
        *(_BYTE *)v5 = *ValueFromSectionAndKeyName;
        *(_DWORD *)(v27 + 16) = 0;
        *(_QWORD *)(v5[1] + 24LL) = 0LL;
        *(_DWORD *)(v5[4] + 16LL) = 0;
        *(_QWORD *)(v5[4] + 24LL) = 0LL;
        if ( !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 v5[4],
                                 (unsigned int)v5[4] + 8,
                                 (int)v5 + 48,
                                 (__int64)(v5 + 5))
          || !(unsigned __int8)EmpRuleParserStackPop(
                                 (_DWORD)v9,
                                 v5[1],
                                 (unsigned int)v5[1] + 8,
                                 (int)v5 + 24,
                                 (__int64)(v5 + 2)) )
        {
          goto LABEL_59;
        }
        EmpRuleParserStackPush((_DWORD)v9, 2, (_DWORD)v5, 0, 0);
        goto LABEL_24;
      }
    }
    v4 = EmpParseRuleTerm(a1, (__int64)ValueFromSectionAndKeyName, &v44, &v43, &v40);
    if ( v4 < 0 )
      goto LABEL_28;
    v10 = *ValueFromSectionAndKeyName;
    v11 = v44;
    v46 = v10;
    if ( v10 == 63 )
    {
      v12 = v44[14];
      v13 = v44[15];
    }
    else
    {
      v12 = v44[10];
      v13 = v44[11];
    }
    v14 = v13 + v12;
    if ( (unsigned int)v14 > v40 )
      goto LABEL_61;
    v15 = 0LL;
    if ( v12 )
    {
      while ( *(_DWORD *)(v43 + 4 * v15) < *(_DWORD *)(a3 + 40) )
      {
        v15 = (unsigned int)(v15 + 1);
        if ( (unsigned int)v15 >= v12 )
          goto LABEL_14;
      }
      goto LABEL_61;
    }
LABEL_14:
    v16 = v12;
    if ( v12 < (unsigned int)v14 )
    {
      while ( *(_DWORD *)(v43 + 4LL * v16) < *(_DWORD *)(a3 + 44) )
      {
        if ( ++v16 >= (unsigned int)v14 )
          goto LABEL_17;
      }
      goto LABEL_61;
    }
LABEL_17:
    while ( (unsigned int)v14 < v40 )
    {
      v24 = *(_DWORD *)(v43 + 4 * v14);
      if ( v24 >= *(_DWORD *)(a3 + 48) )
        goto LABEL_61;
      v25 = v46 == 63
          ? *(_QWORD *)&v44[2 * ((_DWORD)v14 - v13 - v12) + 18]
          : *(_QWORD *)(*((_QWORD *)v44 + 7) + 8LL * ((_DWORD)v14 - v13 - v12));
      if ( *(_QWORD *)(*(_QWORD *)(a3 + 56) + 8LL * v24) != v25 )
        goto LABEL_61;
      v14 = (unsigned int)(v14 + 1);
    }
    if ( v46 == 63 )
    {
      v21 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x74694D45u);
      if ( !v21 )
        goto LABEL_60;
      *v21 = v11;
      v22 = v11 + 12;
      v21[1] = *(_QWORD *)(a3 + 64);
      *(_QWORD *)(a3 + 64) = v21 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 12, a3) )
      {
        v23 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
        if ( !v23 )
          goto LABEL_60;
        *v23 = a3;
        v23[1] = *v22;
        *v22 = v23 + 1;
      }
      EmpRuleParserStackPush((_DWORD)v9, 0, (_DWORD)v11, v43, v40);
    }
    else
    {
      v17 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
      if ( !v17 )
        goto LABEL_60;
      *v17 = v11;
      v18 = v11 + 8;
      v17[1] = *(_QWORD *)(a3 + 72);
      *(_QWORD *)(a3 + 72) = v17 + 1;
      if ( !(unsigned __int8)EmpInfParseSearchDependencyList(v11 + 8, a3) )
      {
        v19 = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x74694D45u);
        if ( !v19 )
          goto LABEL_60;
        *v19 = a3;
        v19[1] = *v18;
        *v18 = v19 + 1;
      }
      EmpRuleParserStackPush((_DWORD)v9, 1, (_DWORD)v11, v43, v40);
    }
LABEL_24:
    ValueFromSectionAndKeyName = (_BYTE *)CmpGetSectionLineIndex(a1, "Rule", v42, (unsigned int)++v41);
  }
  while ( ValueFromSectionAndKeyName );
  if ( *(_DWORD *)v9 == 1 )
  {
    v6 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x74694D45u);
    if ( (unsigned __int8)EmpRuleParserStackPop((_DWORD)v9, (_DWORD)v6, (int)v6 + 8, (int)v6 + 24, (__int64)v6 + 16) )
    {
      *(_QWORD *)(a3 + 96) = v6;
      goto LABEL_28;
    }
LABEL_59:
    v4 = -1073741275;
    goto LABEL_28;
  }
LABEL_61:
  v4 = -1073741811;
LABEL_28:
  if ( v9 )
  {
    while ( v9[1] )
      EmpRuleParserStackPop((_DWORD)v9, (unsigned int)&v42, (unsigned int)&v43, (unsigned int)&v44, (__int64)&v46);
    ExFreePoolWithTag(v9, 0x74734D45u);
  }
  if ( v4 < 0 )
  {
    if ( !v5 )
      goto LABEL_55;
    v30 = (void *)v5[1];
    if ( v30 )
      ExFreePoolWithTag(v30, 0x74734D45u);
    v31 = (void *)v5[4];
    if ( v31 )
      ExFreePoolWithTag(v31, 0x74734D45u);
    v32 = 1953713477;
    for ( i = v5; ; i = v34 )
    {
      ExFreePoolWithTag(i, v32);
LABEL_55:
      v28 = *(_QWORD **)(a3 + 72);
      if ( !v28 )
        break;
      v34 = v28 - 1;
      *(_QWORD *)(a3 + 72) = *v28;
      v35 = *(v28 - 1);
      v36 = *(_QWORD **)(v35 + 32);
      if ( *(v36 - 1) == a3 )
      {
        if ( v36 )
          *(_QWORD *)(v35 + 32) = *v36;
        ExFreePoolWithTag(v36 - 1, 0x74694D45u);
      }
      v32 = 1953058117;
    }
    while ( 1 )
    {
      v29 = *(_QWORD **)(a3 + 64);
      if ( !v29 )
        break;
      v37 = v29 - 1;
      *(_QWORD *)(a3 + 64) = *v29;
      v38 = *(v29 - 1);
      v39 = *(_QWORD **)(v38 + 48);
      if ( *(v39 - 1) == a3 )
      {
        if ( v39 )
          *(_QWORD *)(v38 + 48) = *v39;
        ExFreePoolWithTag(v39 - 1, 0x74694D45u);
      }
      ExFreePoolWithTag(v37, 0x74694D45u);
    }
    if ( v6 )
      ExFreePoolWithTag(v6, 0x74694D45u);
  }
  return (unsigned int)v4;
}
