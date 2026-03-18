/*
 * XREFs of SdbpResolveMatchingFile @ 0x14074C5C4
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x14074C3F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingDir @ 0x140921DE0 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingTextEntry @ 0x140922724 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140922B10 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _wcsnicmp @ 0x1401A0960 (_wcsnicmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     AslLogCallPrintf @ 0x14070AA34 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070EABC (AslAlloc.c)
 *     AslEnvExpandStrings2 @ 0x14074C818 (AslEnvExpandStrings2.c)
 *     AslImageFileToArchitecture @ 0x14074CE18 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x14074CE44 (AslEnvGetProcessWowInfo.c)
 *     AslPathToNetworkPathNt @ 0x14074CEFC (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x14074CF74 (AslPathClean.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r13
  unsigned int v11; // r12d
  __int64 v12; // r14
  __int16 v13; // ax
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  SIZE_T v17; // rdi
  char *v18; // rax
  char *v19; // rbx
  __int16 v20; // ax
  __int64 v21; // r8
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  int v25; // [rsp+28h] [rbp-28h]
  int v26; // [rsp+30h] [rbp-20h]
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  char *v28; // [rsp+48h] [rbp-8h] BYREF
  __int16 v31; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v31 = -1;
  v27 = 0LL;
  *a6 = 0LL;
  v28 = 0LL;
  v11 = 0;
  LOWORD(a6) = -1;
  if ( !a4 )
    goto LABEL_29;
  v12 = a5;
  if ( *a3 != 37 )
  {
    v23 = *(unsigned int *)(a5 + 8);
    v24 = v23 + a4;
    if ( v24 >= v23 )
    {
      v15 = v24 + 1;
      if ( v24 + 1 >= v24 )
        goto LABEL_8;
    }
LABEL_29:
    AslLogCallPrintf(1LL);
    return v11;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v31) < 0 )
    goto LABEL_29;
  v13 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v13 == -1 )
    v13 = v31;
  v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &v27, (_WORD)a6, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
    goto LABEL_29;
  v15 = 2 * v27;
LABEL_8:
  v16 = v15 + 20;
  if ( v15 + 20 < v15 )
    goto LABEL_29;
  v17 = 2 * v16;
  if ( !is_mul_ok(v16, 2uLL) )
    goto LABEL_29;
  v27 = 2 * v16;
  if ( v17 < 0x208 )
    v17 = 520LL;
  v18 = (char *)AslAlloc(v16, v17);
  v19 = v18;
  if ( !v18 )
    goto LABEL_29;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v31) < 0 )
      goto LABEL_34;
    v20 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
    if ( v20 == -1 )
      v20 = v31;
    LOWORD(v26) = v20;
    LOWORD(v25) = (_WORD)a6;
    if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v19, v17 >> 1, &v27, v25, v26) < 0 )
      goto LABEL_34;
  }
  else
  {
    memmove(v18, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
    memmove(&v19[2 * *(unsigned int *)(v12 + 8)], a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean((wchar_t *)v19, v19) >= 0 )
  {
    if ( (int)AslPathToNetworkPathNt(&v28, v19) >= 0 )
    {
      ExFreePoolWithTag(v19, 0x74705041u);
      v19 = v28;
    }
    else if ( wcsnicmp((const wchar_t *)v19, L"\\??\\", 4uLL) )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( *(_WORD *)&v19[2 * v21] );
      memmove(v19 + 8, v19, 2 * v21 + 2);
      memmove(v19, L"\\??\\", 8uLL);
    }
    *v6 = v19;
    v11 = 1;
    v19 = 0LL;
    goto LABEL_25;
  }
LABEL_34:
  AslLogCallPrintf(1LL);
LABEL_25:
  if ( v19 )
    ExFreePoolWithTag(v19, 0x74705041u);
  return v11;
}
