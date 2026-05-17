/*
 * XREFs of PsspWalkInfoClass_PSS_WALK_HANDLES @ 0x180089A98
 * Callers:
 *     PssNtWalkSnapshot @ 0x1800897C0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x1800A07E0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

__int64 __fastcall PsspWalkInfoClass_PSS_WALK_HANDLES(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v5; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rbx
  unsigned int v9; // edx
  char v10; // al
  int v11; // ecx
  __int64 v12; // rax
  unsigned int v13; // edx
  int v14; // ecx
  __int64 result; // rax
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ecx

  v5 = *(_QWORD *)(a1 + 976);
  if ( !v5 )
    return 3221226021LL;
  if ( !a2 )
    return 3221225485LL;
  if ( !*a2 )
  {
    result = ZwMapViewOfSection(v5, -1LL, a2);
    if ( (int)result < 0 )
      return result;
    a2[1] = 0LL;
  }
  v7 = a2[1];
  if ( v7 >= *(_QWORD *)(a1 + 968) )
    return 2147483674LL;
  if ( !a3 )
    return 261LL;
  v8 = v7 + *a2;
  memset(a3, 0, 0x48uLL);
  v9 = 16;
  *a3 = *(_DWORD *)v8;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v8 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v8 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v8 + 8);
  v10 = *(_BYTE *)(v8 + 4);
  if ( (v10 & 1) != 0 )
  {
    v11 = *(unsigned __int16 *)(v8 + 16);
    *((_WORD *)a3 + 8) = v11;
    *((_QWORD *)a3 + 3) = v8 + 18;
    v10 = *(_BYTE *)(v8 + 4);
    v9 = v11 + 18;
  }
  if ( (v10 & 2) != 0 )
  {
    v16 = v9;
    v17 = v9 + 2;
    v18 = *(unsigned __int16 *)(v16 + v8);
    *((_WORD *)a3 + 16) = v18;
    *((_QWORD *)a3 + 5) = v8 + v17;
    v9 = v18 + v17;
    v10 = *(_BYTE *)(v8 + 4);
  }
  if ( (v10 & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v8 + v9;
    v9 += 56;
    v10 = *(_BYTE *)(v8 + 4);
  }
  if ( (v10 & 8) != 0 )
  {
    v12 = v9;
    v13 = v9 + 2;
    v14 = *(unsigned __int16 *)(v12 + v8);
    *((_WORD *)a3 + 28) = v14;
    *((_QWORD *)a3 + 8) = v8 + v13;
    v9 = v14 + v13;
  }
  a2[1] = v7 + v9;
  return 0LL;
}
