/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1408FDF38
 * Callers:
 *     EtwpAllocateFilter @ 0x1408FE2F0 (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x1401A22C0 (strnlen.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1408FEF0C (EtwpFreeEventNameFilter.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // r12
  _BYTE *PoolWithTag; // rsi
  char *v10; // rbp
  char v11; // al
  __int64 v12; // rax
  char *v13; // r12
  unsigned int v14; // ebp
  unsigned int v15; // eax
  unsigned int v16; // edi
  const char *v17; // r12
  unsigned int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // r9
  unsigned __int8 *v21; // rdi
  __int64 v22; // r8
  unsigned __int64 v23; // r10
  __int64 v24; // rcx
  __int64 v25; // rax
  int v26; // r9d
  int v27; // r9d
  int v28; // r9d
  int v29; // r9d
  int v30; // r9d
  int v31; // r9d
  _QWORD *v32; // r9
  unsigned int v33; // edi
  __int64 v34; // rcx
  __int64 v35; // rdx
  unsigned int v36; // [rsp+70h] [rbp+8h]
  _QWORD *v38; // [rsp+80h] [rbp+18h]
  __int64 v39; // [rsp+80h] [rbp+18h]
  char *v40; // [rsp+88h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  if ( v2 < 0x18 )
    return 3221225485LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
  if ( !*(_WORD *)(*(_QWORD *)a1 + 18LL) )
    return 3221225485LL;
  v6 = v2 - 20;
  if ( (unsigned int)v6 < 2 * v5 )
    return 3221225485LL;
  v7 = 24 * v5;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v7 + v6 + 40, 0x46777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x46777445u);
  if ( !v10 )
  {
    ExFreePoolWithTag(PoolWithTag, 0);
    return 3221225495LL;
  }
  *PoolWithTag = *(_BYTE *)(v4 + 17);
  v11 = *(_BYTE *)(v4 + 16);
  if ( !v11 )
    v11 = -1;
  PoolWithTag[1] = v11;
  v12 = *(_QWORD *)v4;
  if ( !*(_QWORD *)v4 )
    v12 = -1LL;
  *((_QWORD *)PoolWithTag + 1) = v12;
  *((_QWORD *)PoolWithTag + 2) = *(_QWORD *)(v4 + 8);
  v13 = &PoolWithTag[v7 + 40];
  v38 = PoolWithTag + 40;
  v40 = v13;
  memmove(v13, (const void *)(v4 + 20), (unsigned int)v6);
  *((_DWORD *)PoolWithTag + 6) = 0;
  *((_QWORD *)PoolWithTag + 4) = v10;
  *((_DWORD *)PoolWithTag + 7) = 1024;
  if ( (v10 + 256 >= v10 ? 0x20 : 0) != 0 )
    memset64(v10, (unsigned __int64)(PoolWithTag + 24) | 1, v10 + 256 >= v10 ? 0x20 : 0);
  v36 = 0;
  v14 = 0;
  if ( v5 )
  {
    v15 = v6 - 1;
    while ( 1 )
    {
      if ( v14 >= v15 )
        goto LABEL_42;
      v16 = v6 - v14;
      v17 = &v13[v14];
      v18 = v17 ? strnlen(v17, v16) : 0;
      v19 = v18 + 1;
      if ( v18 + 1 > v16 || v18 == -1 )
        goto LABEL_42;
      v20 = v18;
      v21 = (unsigned __int8 *)v17;
      v22 = 314159LL;
      if ( v18 >= 8uLL )
      {
        v23 = (unsigned __int64)v18 >> 3;
        v20 = v18 - 8 * v23;
        do
        {
          v24 = v21[6]
              + 37 * (v21[5] + 37 * (v21[4] + 37 * (v21[3] + 37 * (v21[2] + 37 * (v21[1] + 37 * (*v21 + 37 * v22))))));
          v25 = v21[7];
          v21 += 8;
          v22 = v25 + 37 * v24;
          --v23;
        }
        while ( v23 );
      }
      if ( (unsigned __int64)(v20 - 1) <= 6 )
      {
        v26 = v20 - 1;
        if ( !v26 )
          goto LABEL_39;
        v27 = v26 - 1;
        if ( !v27 )
          goto LABEL_38;
        v28 = v27 - 1;
        if ( !v28 )
          goto LABEL_37;
        v29 = v28 - 1;
        if ( !v29 )
          goto LABEL_36;
        v30 = v29 - 1;
        if ( !v30 )
          goto LABEL_35;
        v31 = v30 - 1;
        if ( !v31 )
          goto LABEL_34;
        if ( v31 == 1 )
          break;
      }
LABEL_40:
      v32 = v38;
      v14 += v19;
      v38[2] = v17;
      v13 = v40;
      v38[1] = v22;
      v33 = *((_DWORD *)PoolWithTag + 7);
      v39 = v22 & (-1LL << (v33 & 0x1F));
      v34 = *((_QWORD *)PoolWithTag + 4);
      v35 = (37
           * (BYTE6(v39)
            + 37
            * (BYTE5(v39)
             + 37
             * (BYTE4(v39)
              + 37
              * ((((unsigned int)v22 & (-1 << (v33 & 0x1F))) >> 24)
               + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
           + HIBYTE(v39)) & ((v33 >> 5) - 1);
      *v32 = *(_QWORD *)(v34 + 8 * v35);
      v15 = v6 - 1;
      *(_QWORD *)(v34 + 8 * v35) = v32;
      ++*((_DWORD *)PoolWithTag + 6);
      ++v36;
      v38 = v32 + 3;
      if ( v36 >= v5 )
        goto LABEL_41;
    }
    v22 = *v21++ + 37 * v22;
LABEL_34:
    v22 = *v21++ + 37 * v22;
LABEL_35:
    v22 = *v21++ + 37 * v22;
LABEL_36:
    v22 = *v21++ + 37 * v22;
LABEL_37:
    v22 = *v21++ + 37 * v22;
LABEL_38:
    v22 = *v21++ + 37 * v22;
LABEL_39:
    v22 = *v21 + 37 * v22;
    goto LABEL_40;
  }
LABEL_41:
  if ( v14 == (_DWORD)v6 )
  {
    *a2 = PoolWithTag;
  }
  else
  {
LABEL_42:
    EtwpFreeEventNameFilter(PoolWithTag);
    return (unsigned int)-1073741811;
  }
  return v3;
}
