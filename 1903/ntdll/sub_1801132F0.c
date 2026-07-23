/*
 * XREFs of sub_1801132F0 @ 0x1801132F0
 * Callers:
 *     PssNtWalkSnapshot @ 0x180110EF0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_1801132F0(__int64 a1, PVOID *a2, _QWORD *a3)
{
  void *v4; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v8; // rbx
  char *v9; // rbp
  __int64 v10; // rdx
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
  v8 = *((unsigned int *)a2 + 2);
  if ( v8 >= *(unsigned int *)(a1 + 916) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v9 = (char *)*a2;
  memset(a3, 0, 0x50uLL);
  *a3 = *(_QWORD *)&v9[v8];
  v10 = 72LL;
  a3[1] = *(_QWORD *)&v9[v8 + 8];
  *((_DWORD *)a3 + 4) = *(_DWORD *)&v9[v8 + 16];
  a3[3] = *(_QWORD *)&v9[v8 + 24];
  *((_DWORD *)a3 + 8) = *(_DWORD *)&v9[v8 + 32];
  *((_DWORD *)a3 + 9) = *(_DWORD *)&v9[v8 + 36];
  *((_DWORD *)a3 + 10) = *(_DWORD *)&v9[v8 + 40];
  *((_DWORD *)a3 + 11) = *(_DWORD *)&v9[v8 + 48];
  *((_DWORD *)a3 + 12) = *(_DWORD *)&v9[v8 + 52];
  a3[7] = *(_QWORD *)&v9[v8 + 56];
  *((_DWORD *)a3 + 16) = *(_DWORD *)&v9[v8 + 64];
  if ( (*(_DWORD *)(a1 + 8) & 0x1000) != 0
    && v8 + 76 <= *(unsigned int *)(a1 + 916)
    && (*(_DWORD *)&v9[v8 + 40] == 0x1000000 || *(_DWORD *)&v9[v8 + 40] == 0x40000) )
  {
    v11 = *(_WORD *)&v9[v8 + 72];
    *((_WORD *)a3 + 34) = v11;
    if ( v11 )
      a3[9] = &v9[v8 + 74];
    v10 = v11 + 74LL;
  }
  a2[1] = (PVOID)(v8 + ((v10 + 7) & 0xFFFFFFF8LL));
  return 0;
}
