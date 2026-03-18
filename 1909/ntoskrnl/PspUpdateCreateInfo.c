/*
 * XREFs of PspUpdateCreateInfo @ 0x140619A74
 * Callers:
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     PspAllocateProcess @ 0x140681A9C (PspAllocateProcess.c)
 * Callees:
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     PspPropagateHandle @ 0x140619C94 (PspPropagateHandle.c)
 */

__int64 __fastcall PspUpdateCreateInfo(int a1, __int64 a2, __int64 a3)
{
  int v5; // edi
  __int64 v6; // rbx
  unsigned __int8 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // al
  char v14; // cl
  char v15; // al
  char v16; // cl
  HANDLE *v18; // rbx
  __int64 v19; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v20[6]; // [rsp+38h] [rbp-30h] BYREF
  char v22; // [rsp+88h] [rbp+20h]

  v5 = 0;
  v6 = *(_QWORD *)(a2 + 40);
  v19 = 0LL;
  v20[0] = 0LL;
  v7 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
  v8 = 2LL;
  if ( (*(_BYTE *)(a2 + 8) & 2) == 0 )
    goto LABEL_14;
  v9 = (unsigned int)(a1 - 2);
  if ( !(_DWORD)v9 )
  {
    LODWORD(v9) = v7;
    v5 = PspPropagateHandle(v9, a2 + 168, &v19);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = v19;
      goto LABEL_14;
    }
LABEL_22:
    v19 = 0LL;
    goto LABEL_14;
  }
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_WORD *)(v6 + 16) = *(_WORD *)(a2 + 94);
    goto LABEL_14;
  }
  v11 = (unsigned int)(v10 - 2);
  if ( !(_DWORD)v11 )
  {
    LODWORD(v11) = v7;
    v5 = PspPropagateHandle(v11, a2 + 192, &v19);
    if ( v5 >= 0 )
    {
      *(_QWORD *)(v6 + 16) = v19;
      goto LABEL_14;
    }
    goto LABEL_22;
  }
  if ( (_DWORD)v11 == 1 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x20) != 0 )
    {
      LOBYTE(v11) = v7;
      v5 = PspPropagateHandle(v11, a2 + 168, &v19);
      if ( v5 < 0 )
      {
        v19 = 0LL;
      }
      else
      {
        LOBYTE(v12) = v7;
        v5 = PspPropagateHandle(v12, a2 + 184, v20);
        if ( v5 < 0 )
          v20[0] = 0LL;
      }
      if ( v5 < 0 )
        goto LABEL_23;
    }
    *(_DWORD *)(v6 + 16) = 0;
    v22 = *(_BYTE *)(a3 + 1786);
    *(_BYTE *)(v6 + 16) = (v22 & 7) != 0;
    v13 = ((v22 & 7) != 0) | ((*(_BYTE *)(a3 + 1786) & 7) != 1 ? 0 : 0x10);
    *(_BYTE *)(v6 + 16) = v13;
    v14 = v13 | *(_BYTE *)(a3 + 782) & 2;
    *(_BYTE *)(v6 + 16) = v14;
    v15 = v14 | (4 * (PspGlobalFlags & 1));
    *(_BYTE *)(v6 + 16) = v15;
    v16 = v15 | (*(_BYTE *)(a2 + 8) >> 2) & 8;
    *(_BYTE *)(v6 + 16) = v16;
    if ( (v16 & 8) != 0 )
    {
      *(_QWORD *)(v6 + 72) = *(_QWORD *)(a2 + 304);
      *(_DWORD *)(v6 + 80) = *(_DWORD *)(a2 + 312);
    }
    *(_QWORD *)(v6 + 24) = v19;
    *(_QWORD *)(v6 + 32) = v20[0];
    *(_QWORD *)(v6 + 40) = *(_QWORD *)(a2 + 216);
    *(_DWORD *)(v6 + 48) = *(_DWORD *)(a2 + 224);
    *(_DWORD *)(v6 + 52) = *(_DWORD *)(*(_QWORD *)(a2 + 208) + 8LL);
    *(_QWORD *)(v6 + 56) = *(_QWORD *)(a3 + 1016);
    *(_DWORD *)(v6 + 64) = *(_DWORD *)(a2 + 228);
  }
LABEL_14:
  if ( v5 >= 0 )
  {
    *(_DWORD *)(v6 + 8) = a1;
    return 0LL;
  }
LABEL_23:
  v18 = (HANDLE *)&v19;
  do
  {
    if ( *v18 )
      ObCloseHandle(*v18, v7);
    ++v18;
    --v8;
  }
  while ( v8 );
  return (unsigned int)v5;
}
