/*
 * XREFs of ViThunkFindExportAddress @ 0x1409B788C
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x1409B77F0 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400F2C50 (RtlpImageDirectoryEntryToDataEx.c)
 */

unsigned __int64 __fastcall ViThunkFindExportAddress(__int64 a1, char *a2, int *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v6; // esi
  int v7; // ebx
  unsigned __int64 v8; // rbp
  NTSTATUS v9; // eax
  _DWORD *v10; // r8
  int v11; // edx
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r9
  char *v16; // rcx
  unsigned __int64 v17; // r11
  char v18; // r10
  int v19; // ecx
  unsigned int v20; // r10d
  unsigned int v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // r11
  __int64 v24; // rax
  int v25; // edx
  unsigned __int16 v26; // cx
  unsigned __int64 v27; // r8
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  char *v30; // [rsp+78h] [rbp+10h]
  __int64 v31; // [rsp+80h] [rbp+18h] BYREF

  v30 = a2;
  v3 = (_QWORD *)(a1 + 16);
  v4 = *(_QWORD **)(a1 + 16);
  *a3 = 0;
  v6 = 0;
  if ( v4 == (_QWORD *)(a1 + 16) )
    return 0LL;
  v7 = 1;
  while ( 1 )
  {
    v8 = v4[6];
    v9 = RtlpImageDirectoryEntryToDataEx(v8, 1, 0, (int)&v29, &v31);
    v10 = (_DWORD *)v31;
    if ( v9 < 0 )
      v10 = 0LL;
    v31 = (__int64)v10;
    if ( v10 )
    {
      v11 = 0;
      v12 = v8 + (unsigned int)v10[8];
      v13 = v8 + (unsigned int)v10[9];
      v14 = v10[6] - 1;
      while ( 1 )
      {
        v15 = (unsigned int)(v14 + v11) >> 1;
        v29 = v15;
        v16 = v30;
        v17 = v8 + *(unsigned int *)(v12 + 4 * v15) - (_QWORD)v30;
        while ( 1 )
        {
          v18 = *v16;
          if ( *v16 != v16[v17] )
            break;
          ++v16;
          if ( !v18 )
          {
            v19 = 0;
            goto LABEL_11;
          }
        }
        v19 = (unsigned __int8)*v16 < (unsigned __int8)v16[v17] ? -1 : 1;
LABEL_11:
        if ( v19 >= 0 )
        {
          if ( v19 <= 0 )
            goto LABEL_15;
          v11 = v15 + 1;
          goto LABEL_14;
        }
        if ( !(_DWORD)v15 )
          break;
        v14 = v15 - 1;
LABEL_14:
        if ( v14 < (unsigned int)v11 )
          goto LABEL_15;
      }
      v11 = 1;
      v14 = 0;
LABEL_15:
      if ( v14 >= v11 )
      {
        v20 = v10[5];
        v21 = *(unsigned __int16 *)(v13 + 2 * v29);
        if ( v21 < v20 )
          break;
      }
    }
    if ( ++v6 != 2 )
    {
      v4 = (_QWORD *)*v4;
      if ( v4 != v3 )
        continue;
    }
    return 0LL;
  }
  v22 = (unsigned int)v10[7];
  v23 = v22 + v8;
  v24 = v22 + 4LL * (unsigned __int16)v21;
  v25 = *(_DWORD *)(v22 + v8 + 4LL * (unsigned __int16)v21);
  v26 = 0;
  v27 = v8 + *(unsigned int *)(v24 + v8);
  if ( v20 )
  {
    while ( v26 == (_WORD)v21 || *(_DWORD *)(v23 + 4LL * v26) != v25 )
    {
      if ( ++v26 >= v20 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    v7 = 0;
  }
  *a3 = v7;
  return v27;
}
