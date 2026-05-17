/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES @ 0x180089BC0
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800897C0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall PsspWalkInfoClass_PSS_WALK_AUXILIARY_PAGES(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rcx
  __int64 v7; // r14
  __int64 result; // rax
  __int64 v9; // rbx

  v4 = *(_QWORD *)(a1 + 896);
  if ( !v4 )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    result = ZwMapViewOfSection(v4, -1LL, a2);
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = *((unsigned int *)a2 + 2);
  if ( (unsigned int)v7 >= *(_DWORD *)(a1 + 888) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v9 = *(_QWORD *)(a1 + 904) + (v7 << 6);
  memset(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)v9;
  *(_OWORD *)(a3 + 1) = *(_OWORD *)(v9 + 8);
  *(_OWORD *)(a3 + 3) = *(_OWORD *)(v9 + 24);
  *(_OWORD *)(a3 + 5) = *(_OWORD *)(v9 + 40);
  a3[7] = *(_QWORD *)(v9 + 56);
  a3[8] = *a2 + (unsigned int)((_DWORD)v7 << 12);
  result = 0LL;
  *((_DWORD *)a3 + 18) = 4096;
  a2[1] = (unsigned int)(v7 + 1);
  return result;
}
