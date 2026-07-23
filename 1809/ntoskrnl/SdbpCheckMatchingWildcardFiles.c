/*
 * XREFs of SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SdbFindFirstTag @ 0x14067E340 (SdbFindFirstTag.c)
 *     AslFileMappingCreate @ 0x14067F63C (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x14067FB24 (AslFileMappingDelete.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x1407215E4 (SdbpCheckAllAttributes.c)
 *     SdbGetStringTagPtr @ 0x1407229B0 (SdbGetStringTagPtr.c)
 *     SdbpResolveMatchingFile @ 0x140722D14 (SdbpResolveMatchingFile.c)
 *     SdbpInitializeSearchDBContext @ 0x140723818 (SdbpInitializeSearchDBContext.c)
 *     AslPathWildcardFindClose @ 0x1408EB768 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x1408EB7A8 (AslPathWildcardFindFirst.c)
 *     AslPathWildcardFindNext @ 0x1408EBD84 (AslPathWildcardFindNext.c)
 */

__int64 __fastcall SdbpCheckMatchingWildcardFiles(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  _DWORD *v7; // r15
  unsigned int v8; // r12d
  PVOID v9; // rdi
  PVOID *v10; // rsi
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  _WORD *v13; // r8
  __int64 v14; // r13
  int *v15; // rdx
  int v16; // r15d
  int i; // eax
  __int64 result; // rax
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  PVOID *v20; // [rsp+38h] [rbp-C8h] BYREF
  PVOID P; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+50h] [rbp-B0h]
  _WORD *v24; // [rsp+58h] [rbp-A8h]
  _DWORD *v25; // [rsp+60h] [rbp-A0h]
  __int64 v26; // [rsp+68h] [rbp-98h]
  int *v27; // [rsp+70h] [rbp-90h]
  wchar_t pszDest[264]; // [rsp+80h] [rbp-80h] BYREF

  v23 = a2;
  v26 = a3;
  v7 = a1;
  v25 = a1;
  v8 = 0;
  v9 = 0LL;
  v19 = 0;
  v10 = 0LL;
  P = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  if ( *(_QWORD *)(a6 + 88) )
  {
    v19 = 1;
LABEL_28:
    v8 = 1;
    goto LABEL_29;
  }
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_29;
  StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
  v24 = (_WORD *)StringTagPtr;
  v13 = (_WORD *)StringTagPtr;
  if ( !StringTagPtr )
  {
LABEL_5:
    AslLogCallPrintf(1LL);
    goto LABEL_29;
  }
  v14 = -1LL;
  do
    ++v14;
  while ( *(_WORD *)(StringTagPtr + 2 * v14) );
  if ( (*(_DWORD *)a6 & 1) == 0 )
  {
    if ( !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      goto LABEL_5;
    v13 = v24;
  }
  v15 = *(int **)(a6 + 72);
  v16 = 0;
  v27 = v15;
  if ( *v15 <= 0 )
  {
LABEL_27:
    v7 = v25;
    *(_DWORD *)(a6 + 80) = 1;
    goto LABEL_28;
  }
  while ( (unsigned int)SdbpResolveMatchingFile(v23, a6, v13, v14, (__int64)&v15[12 * v16 + 2], &P) )
  {
    AslPathWildcardFindClose(&v22);
    memset(pszDest, 0, 0x208uLL);
    v9 = P;
    for ( i = AslPathWildcardFindFirst(pszDest); i >= 0; i = AslPathWildcardFindNext(pszDest) )
    {
      if ( v10 )
      {
        AslFileMappingDelete(v10);
        v20 = 0LL;
      }
      i = AslFileMappingCreate((wchar_t ***)&v20, pszDest, 0LL, 0LL, 0LL);
      v10 = v20;
      if ( i < 0 )
        break;
      if ( (int)SdbpCheckAllAttributes(&v19, v23, v26, a5, (__int64)v20) >= 0 )
        goto LABEL_27;
    }
    if ( i != -2147483642 )
      AslLogCallPrintf(3LL);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0x74705041u);
      v9 = 0LL;
      P = 0LL;
    }
    v15 = v27;
    if ( ++v16 >= *v27 )
      goto LABEL_27;
    v13 = v24;
  }
  AslLogCallPrintf(1LL);
  v9 = P;
  v7 = v25;
LABEL_29:
  AslPathWildcardFindClose(&v22);
  AslFileMappingDelete(v10);
  if ( v9 )
    ExFreePoolWithTag(v9, 0x74705041u);
  result = v8;
  *v7 = v19;
  return result;
}
