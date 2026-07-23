/*
 * XREFs of ViThunkFindExportAddress @ 0x1409EF208
 * Callers:
 *     ViThunkFindAllExportAddresses @ 0x1409EF168 (ViThunkFindAllExportAddresses.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x1400E8980 (RtlpImageDirectoryEntryToDataEx.c)
 */

unsigned __int64 __fastcall ViThunkFindExportAddress(__int64 a1, __int64 a2, int *a3)
{
  _QWORD *v3; // r14
  _QWORD *v4; // rdi
  int v6; // esi
  int v7; // ebx
  unsigned __int64 v8; // rbp
  NTSTATUS v9; // eax
  _DWORD *v10; // r8
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // r9
  char *v15; // rcx
  unsigned __int64 v16; // r11
  char v17; // r10
  int v18; // ecx
  unsigned int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // rcx
  __int64 v22; // r11
  __int64 v23; // rax
  int v24; // edx
  unsigned __int16 v25; // cx
  unsigned __int64 v26; // r8
  __int64 v28; // [rsp+70h] [rbp+8h] BYREF
  char *v29; // [rsp+78h] [rbp+10h]
  __int64 v30; // [rsp+80h] [rbp+18h] BYREF

  v29 = (char *)a2;
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
    LOBYTE(a2) = 1;
    v9 = RtlpImageDirectoryEntryToDataEx(v8, a2, 0LL, (__int64)&v28, &v30);
    v10 = (_DWORD *)v30;
    if ( v9 < 0 )
      v10 = 0LL;
    v30 = (__int64)v10;
    if ( v10 )
    {
      a2 = 0LL;
      v11 = v8 + (unsigned int)v10[8];
      v12 = v8 + (unsigned int)v10[9];
      v13 = v10[6] - 1;
      while ( 1 )
      {
        v14 = (unsigned int)(v13 + a2) >> 1;
        v28 = v14;
        v15 = v29;
        v16 = v8 + *(unsigned int *)(v11 + 4 * v14) - (_QWORD)v29;
        while ( 1 )
        {
          v17 = *v15;
          if ( *v15 != v15[v16] )
            break;
          ++v15;
          if ( !v17 )
          {
            v18 = 0;
            goto LABEL_11;
          }
        }
        v18 = (unsigned __int8)*v15 < (unsigned __int8)v15[v16] ? -1 : 1;
LABEL_11:
        if ( v18 >= 0 )
        {
          if ( v18 <= 0 )
            goto LABEL_15;
          a2 = (unsigned int)(v14 + 1);
          goto LABEL_14;
        }
        if ( !(_DWORD)v14 )
          break;
        v13 = v14 - 1;
LABEL_14:
        if ( v13 < (unsigned int)a2 )
          goto LABEL_15;
      }
      a2 = 1LL;
      v13 = 0;
LABEL_15:
      if ( v13 >= (int)a2 )
      {
        v19 = v10[5];
        v20 = *(unsigned __int16 *)(v12 + 2 * v28);
        if ( v20 < v19 )
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
  v21 = (unsigned int)v10[7];
  v22 = v21 + v8;
  v23 = v21 + 4LL * (unsigned __int16)v20;
  v24 = *(_DWORD *)(v21 + v8 + 4LL * (unsigned __int16)v20);
  v25 = 0;
  v26 = v8 + *(unsigned int *)(v23 + v8);
  if ( v19 )
  {
    while ( v25 == (_WORD)v20 || *(_DWORD *)(v22 + 4LL * v25) != v24 )
    {
      if ( ++v25 >= v19 )
        goto LABEL_21;
    }
  }
  else
  {
LABEL_21:
    v7 = 0;
  }
  *a3 = v7;
  return v26;
}
