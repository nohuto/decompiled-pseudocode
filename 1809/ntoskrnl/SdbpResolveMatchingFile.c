/*
 * XREFs of SdbpResolveMatchingFile @ 0x140722D14
 * Callers:
 *     SdbpCheckMatchingFiles @ 0x1407226F0 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingDir @ 0x1408E6F60 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingTextEntry @ 0x1408E78A4 (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x1408E7CA0 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     _wcsnicmp @ 0x140195BB0 (_wcsnicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     AslEnvExpandStrings2 @ 0x140722F74 (AslEnvExpandStrings2.c)
 *     AslImageFileToArchitecture @ 0x140723598 (AslImageFileToArchitecture.c)
 *     AslEnvGetProcessWowInfo @ 0x1407235C4 (AslEnvGetProcessWowInfo.c)
 *     AslPathToNetworkPathNt @ 0x14072367C (AslPathToNetworkPathNt.c)
 *     AslPathClean @ 0x1407236F4 (AslPathClean.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  unsigned int v10; // r12d
  __int64 v11; // r15
  __int64 v12; // rsi
  __int16 v13; // ax
  int v14; // ecx
  unsigned __int64 v15; // rcx
  SIZE_T v16; // rdi
  char *v17; // rax
  char *v18; // rbx
  __int16 v19; // ax
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r8
  int v23; // [rsp+28h] [rbp-38h]
  int v24; // [rsp+30h] [rbp-30h]
  __int16 v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  char *v27; // [rsp+50h] [rbp-10h] BYREF
  __int16 v30; // [rsp+B8h] [rbp+58h] BYREF

  v26 = 0LL;
  v10 = 0;
  *a6 = 0LL;
  v30 = -1;
  v25 = -1;
  v27 = 0LL;
  if ( !a4 )
    goto LABEL_28;
  v11 = a5;
  v12 = -1LL;
  if ( *a3 != 37 )
  {
    v21 = *(unsigned int *)(a5 + 8);
    if ( v21 + a4 >= v21 )
    {
      v22 = v21 + a4;
      if ( v22 + 1 >= v22 )
      {
        v15 = v22 + 1;
        goto LABEL_8;
      }
    }
LABEL_28:
    AslLogCallPrintf(1LL);
    return v10;
  }
  if ( (int)AslEnvGetProcessWowInfo(&v25, &v30) < 0 )
    goto LABEL_28;
  v13 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
  if ( v13 == -1 )
    v13 = v30;
  v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, &v26, v25, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
    goto LABEL_28;
  v15 = 2 * v26;
LABEL_8:
  if ( v15 + 20 < v15 )
    goto LABEL_28;
  v16 = 2 * (v15 + 20);
  if ( !is_mul_ok(v15 + 20, 2uLL) )
    goto LABEL_28;
  v26 = 2 * (v15 + 20);
  if ( v26 < 0x208 )
    v16 = 520LL;
  v17 = (char *)AslAlloc(v15, v16);
  v18 = v17;
  if ( !v17 )
    goto LABEL_28;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&v25, &v30) < 0 )
      goto LABEL_37;
    v19 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 576));
    if ( v19 == -1 )
      v19 = v30;
    LOWORD(v24) = v19;
    LOWORD(v23) = v25;
    if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v18, v16 >> 1, &v26, v23, v24) < 0 )
      goto LABEL_37;
  }
  else
  {
    memmove(v17, *(const void **)v11, 2LL * *(unsigned int *)(v11 + 8));
    memmove(&v18[2 * *(unsigned int *)(v11 + 8)], a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean((wchar_t *)v18, v18) >= 0 )
  {
    if ( (int)AslPathToNetworkPathNt(&v27, v18) >= 0 )
    {
      ExFreePoolWithTag(v18, 0x74705041u);
      v18 = v27;
    }
    else if ( wcsnicmp((const wchar_t *)v18, L"\\??\\", 4uLL) )
    {
      do
        ++v12;
      while ( *(_WORD *)&v18[2 * v12] );
      memmove(v18 + 8, v18, 2 * v12 + 2);
      memmove(v18, L"\\??\\", 8uLL);
    }
    v10 = 1;
    *a6 = v18;
    v18 = 0LL;
    goto LABEL_24;
  }
LABEL_37:
  AslLogCallPrintf(1LL);
LABEL_24:
  if ( v18 )
    ExFreePoolWithTag(v18, 0x74705041u);
  return v10;
}
