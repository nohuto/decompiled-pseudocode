/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_THREADS @ 0x180089CA8
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800897D0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A0800 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

NTSTATUS __fastcall PsspWalkInfoClass_PSS_WALK_THREADS(__int64 a1, PVOID *a2, _OWORD *a3)
{
  void *v5; // rcx
  unsigned __int64 v7; // rdi
  char *v8; // rbp
  unsigned int v9; // ecx
  NTSTATUS result; // eax
  ULONG_PTR ViewSize; // [rsp+70h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 1008);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(v5, (HANDLE)0xFFFFFFFFFFFFFFFFLL, a2, 0LL, 0LL, 0LL, &ViewSize, ViewShare, 0, 2u);
    if ( result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = (unsigned __int64)a2[1];
  if ( v7 >= *(_QWORD *)(a1 + 1000) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v8 = (char *)*a2;
  memset(a3, 0, 0x88uLL);
  v9 = 128;
  *a3 = *(_OWORD *)&v8[v7];
  a3[1] = *(_OWORD *)&v8[v7 + 16];
  a3[2] = *(_OWORD *)&v8[v7 + 32];
  a3[3] = *(_OWORD *)&v8[v7 + 48];
  *((_QWORD *)a3 + 8) = *(_QWORD *)&v8[v7 + 64];
  *(_OWORD *)((char *)a3 + 72) = *(_OWORD *)&v8[v7 + 72];
  *(_OWORD *)((char *)a3 + 88) = *(_OWORD *)&v8[v7 + 88];
  *((_QWORD *)a3 + 13) = *(_QWORD *)&v8[v7 + 104];
  *((_QWORD *)a3 + 14) = *(_QWORD *)&v8[v7 + 112];
  *((_WORD *)a3 + 60) = *(_WORD *)&v8[v7 + 120];
  *((_WORD *)a3 + 61) = *(_WORD *)&v8[v7 + 122];
  if ( *(_WORD *)&v8[v7 + 122] >= 2u )
  {
    *((_QWORD *)a3 + 16) = &v8[v7 + 128];
    v9 = (((*(unsigned __int16 *)&v8[v7 + 122] >> 1) + 15) & 0xFFFFFFF0) + 128;
  }
  a2[1] = (PVOID)(v7 + v9);
  return 0;
}
