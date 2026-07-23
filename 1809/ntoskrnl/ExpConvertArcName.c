/*
 * XREFs of ExpConvertArcName @ 0x1408D0EE8
 * Callers:
 *     ExpTranslateArcPath @ 0x1408D3830 (ExpTranslateArcPath.c)
 * Callees:
 *     wcscpy_s @ 0x14019BE00 (wcscpy_s.c)
 *     wcsncat_s @ 0x14019BE90 (wcsncat_s.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ExpCreateOutputNT @ 0x1408D1588 (ExpCreateOutputNT.c)
 *     ExpTranslateNtPath @ 0x1408D4138 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1408D4408 (ExpTranslateSymbolicLink.c)
 */

__int64 __fastcall ExpConvertArcName(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4,
        wchar_t *Src,
        unsigned int MaxCount)
{
  unsigned int v9; // esi
  unsigned int v10; // r15d
  wchar_t *PoolWithTag; // rax
  wchar_t *v12; // rdi
  int v14; // ebx
  int OutputNT; // eax
  char *v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rax
  unsigned int v19; // ebx
  char *v20; // rax
  char *v21; // rsi
  char *v22; // r14
  wchar_t *v23; // r14
  char v24[8]; // [rsp+20h] [rbp-38h] BYREF
  char *v25; // [rsp+28h] [rbp-30h]

  v9 = MaxCount + 10;
  v10 = 2 * (MaxCount + 10);
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, v10, 0x72766E45u);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  wcscpy_s(PoolWithTag, v9, L"\\ArcName\\");
  wcsncat_s(v12, v9, a4, MaxCount);
  v12[MaxCount + 9] = 0;
  if ( a1 != 3 )
  {
    v17 = v10 + 12;
    if ( Src )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( Src[v18] );
      v17 += 2 * v18;
    }
    v19 = v17 + 2;
    v20 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v19, 0x72766E45u);
    v21 = v20;
    if ( !v20 )
    {
      ExFreePoolWithTag(v12, 0);
      return 3221225626LL;
    }
    v22 = v20 + 12;
    *(_DWORD *)v20 = 1;
    *((_DWORD *)v20 + 1) = v19;
    *((_DWORD *)v20 + 2) = 3;
    wcscpy_s((wchar_t *)v20 + 6, (unsigned __int64)(v19 - 12) >> 1, v12);
    v23 = (wchar_t *)&v22[v10];
    ExFreePoolWithTag(v12, 0);
    if ( Src )
      wcscpy_s(v23, (unsigned __int64)(v19 - v10 - 12) >> 1, Src);
    else
      *v23 = 0;
    OutputNT = ExpTranslateNtPath(v21, a1, a2, a3);
    v16 = v21;
    goto LABEL_16;
  }
  v14 = ExpTranslateSymbolicLink(v12);
  ExFreePoolWithTag(v12, 0);
  if ( v14 >= 0 )
  {
    OutputNT = ExpCreateOutputNT(a2, a3, v24, Src);
    v16 = v25;
LABEL_16:
    v14 = OutputNT;
    ExFreePoolWithTag(v16, 0);
  }
  return (unsigned int)v14;
}
