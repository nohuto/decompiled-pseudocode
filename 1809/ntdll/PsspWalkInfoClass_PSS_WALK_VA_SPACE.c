/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_VA_SPACE @ 0x18008994C
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800897D0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_VA_SPACE(__int64 a1, PVOID *a2, _QWORD *a3)
{
  void *v4; // rcx
  unsigned __int64 v7; // rbx
  char *v8; // rbp
  __int64 v9; // rdx
  NTSTATUS result; // eax
  unsigned __int16 v11; // cx
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(void **)(a1 + 920);
  if ( !v4 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(v4, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
    if ( result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = *((unsigned int *)a2 + 2);
  if ( v7 >= *(unsigned int *)(a1 + 916) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = (char *)*a2;
  memset(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)&v8[v7];
  v9 = 72LL;
  a3[1] = *(_QWORD *)&v8[v7 + 8];
  *((_DWORD *)a3 + 4) = *(_DWORD *)&v8[v7 + 16];
  a3[3] = *(_QWORD *)&v8[v7 + 24];
  *((_DWORD *)a3 + 8) = *(_DWORD *)&v8[v7 + 32];
  *((_DWORD *)a3 + 9) = *(_DWORD *)&v8[v7 + 36];
  *((_DWORD *)a3 + 10) = *(_DWORD *)&v8[v7 + 40];
  *((_DWORD *)a3 + 11) = *(_DWORD *)&v8[v7 + 48];
  *((_DWORD *)a3 + 12) = *(_DWORD *)&v8[v7 + 52];
  a3[7] = *(_QWORD *)&v8[v7 + 56];
  *((_DWORD *)a3 + 16) = *(_DWORD *)&v8[v7 + 64];
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0
    && v7 + 76 <= *(unsigned int *)(a1 + 916)
    && (*(_DWORD *)&v8[v7 + 40] == 0x1000000 || *(_DWORD *)&v8[v7 + 40] == 0x40000) )
  {
    v11 = *(_WORD *)&v8[v7 + 72];
    *((_WORD *)a3 + 34) = v11;
    if ( v11 )
      a3[9] = &v8[v7 + 74];
    v9 = v11 + 74LL;
  }
  a2[1] = (PVOID)(v7 + ((v9 + 7) & 0xFFFFFFF8LL));
  return 0;
}
