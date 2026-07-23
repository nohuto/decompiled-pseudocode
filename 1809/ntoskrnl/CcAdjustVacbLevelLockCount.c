/*
 * XREFs of CcAdjustVacbLevelLockCount @ 0x1400223FC
 * Callers:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcAllocateInitializeBcb @ 0x1400CC398 (CcAllocateInitializeBcb.c)
 *     CcDeleteBcbs @ 0x14016059C (CcDeleteBcbs.c)
 * Callees:
 *     CcSetVacbLargeOffset @ 0x1400224B0 (CcSetVacbLargeOffset.c)
 *     VacbLevelReference @ 0x140022BAC (VacbLevelReference.c)
 */

__int64 __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v8; // rdx
  int v9; // ecx
  int v10; // r11d
  char v11; // cl
  __int64 v12; // rax
  bool v13; // zf
  _DWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 result; // rax
  __int64 v25; // rax
  __int64 v26; // rcx

  LODWORD(v4) = 0;
  v5 = a2;
  v8 = *(_QWORD *)(a1 + 88);
  v9 = 25;
  do
  {
    v10 = v9;
    v9 += 7;
    LODWORD(v4) = v4 + 1;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v9 );
  do
  {
    v11 = v10;
    v12 = v5 >> v10;
    v10 -= 7;
    v8 = *(_QWORD *)(v8 + 8LL * (unsigned int)v12);
    v5 &= (1LL << v11) - 1;
    v13 = (_DWORD)v4 == 1;
    v4 = (unsigned int)(v4 - 1);
  }
  while ( !v13 );
  v14 = (_DWORD *)VacbLevelReference(a1, v8, 0LL, v4);
  *v14 += a3;
  v19 = (_DWORD *)VacbLevelReference(v16, v15, v17, v18);
  result = (unsigned int)(*v19 | v19[1]);
  if ( !(_DWORD)result )
  {
    v25 = VacbLevelReference(v23, v20, v21, v22);
    ++*(_DWORD *)(v25 + 4);
    return CcSetVacbLargeOffset(v26, a2 & 0xFFFFFFFFFE000000uLL, -2LL, 0LL);
  }
  return result;
}
