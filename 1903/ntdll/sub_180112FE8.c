/*
 * XREFs of sub_180112FE8 @ 0x180112FE8
 * Callers:
 *     PssNtWalkSnapshot @ 0x180110EF0 (PssNtWalkSnapshot.c)
 * Callees:
 *     ZwMapViewOfSection @ 0x18009CBE0 (ZwMapViewOfSection.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

NTSTATUS __fastcall sub_180112FE8(__int64 a1, __int64 a2, _DWORD *a3)
{
  void *v5; // rcx
  NTSTATUS result; // eax
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  unsigned int v10; // edx
  char v11; // al
  int v12; // ecx
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // ecx
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ecx
  ULONG_PTR ViewSize; // [rsp+60h] [rbp+8h] BYREF

  v5 = *(void **)(a1 + 976);
  if ( !v5 )
    return -1073741275;
  if ( !a2 )
    return -1073741811;
  if ( !*(_QWORD *)a2 )
  {
    ViewSize = 0LL;
    result = ZwMapViewOfSection(
               v5,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               (PVOID *)a2,
               0LL,
               0LL,
               0LL,
               &ViewSize,
               ViewShare,
               0,
               2u);
    if ( result < 0 )
      return result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v8 >= *(_QWORD *)(a1 + 968) )
    return -2147483622;
  if ( !a3 )
    return 261;
  v9 = v8 + *(_QWORD *)a2;
  memset(a3, 0, 0x48uLL);
  v10 = 16;
  *a3 = *(_DWORD *)v9;
  *((_BYTE *)a3 + 4) = *(_BYTE *)(v9 + 4);
  *((_BYTE *)a3 + 5) = *(_BYTE *)(v9 + 5);
  *((_QWORD *)a3 + 1) = *(_QWORD *)(v9 + 8);
  v11 = *(_BYTE *)(v9 + 4);
  if ( (v11 & 1) != 0 )
  {
    v12 = *(unsigned __int16 *)(v9 + 16);
    *((_WORD *)a3 + 8) = v12;
    *((_QWORD *)a3 + 3) = v9 + 18;
    v11 = *(_BYTE *)(v9 + 4);
    v10 = v12 + 18;
  }
  if ( (v11 & 2) != 0 )
  {
    v13 = v10;
    v14 = v10 + 2;
    v15 = *(unsigned __int16 *)(v13 + v9);
    *((_WORD *)a3 + 16) = v15;
    *((_QWORD *)a3 + 5) = v9 + v14;
    v10 = v15 + v14;
    v11 = *(_BYTE *)(v9 + 4);
  }
  if ( (v11 & 4) != 0 )
  {
    *((_QWORD *)a3 + 6) = v9 + v10;
    v10 += 56;
    v11 = *(_BYTE *)(v9 + 4);
  }
  if ( (v11 & 8) != 0 )
  {
    v16 = v10;
    v17 = v10 + 2;
    v18 = *(unsigned __int16 *)(v16 + v9);
    *((_WORD *)a3 + 28) = v18;
    *((_QWORD *)a3 + 8) = v9 + v17;
    v10 = v18 + v17;
  }
  *(_QWORD *)(a2 + 8) = v8 + v10;
  return 0;
}
