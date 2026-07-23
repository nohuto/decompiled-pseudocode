/*
 * XREFs of EtwpAllocateEventNameFilter @ 0x1408C265C
 * Callers:
 *     EtwpAllocateFilter @ 0x1408C2A1C (EtwpAllocateFilter.c)
 * Callees:
 *     strnlen @ 0x1401974E0 (strnlen.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1408C3680 (EtwpFreeEventNameFilter.c)
 */

__int64 __fastcall EtwpAllocateEventNameFilter(_DWORD *a1, _QWORD *a2)
{
  unsigned int v2; // r15d
  unsigned int v3; // ebx
  __int64 v4; // rdi
  unsigned int v5; // r14d
  __int64 v6; // r15
  __int64 v7; // r12
  char *PoolWithTag; // rsi
  char *v10; // rbp
  char v11; // al
  __int64 v12; // rax
  char *v13; // r12
  unsigned int v14; // ebp
  unsigned int v15; // r11d
  unsigned int v16; // eax
  unsigned int v17; // edi
  const char *v18; // r12
  unsigned int v19; // eax
  unsigned int v20; // r10d
  __int64 v21; // r8
  unsigned __int8 *v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  int v30; // r8d
  int v31; // r8d
  int v32; // r8d
  unsigned int v33; // r8d
  char v34; // cl
  unsigned __int64 v35; // rdi
  unsigned int v36; // edx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdx
  unsigned int v39; // [rsp+70h] [rbp+8h]
  _QWORD *v41; // [rsp+80h] [rbp+18h]
  char *v42; // [rsp+88h] [rbp+20h]

  v2 = a1[2];
  v3 = 0;
  if ( v2 >= 0x18 )
  {
    v4 = *(_QWORD *)a1;
    v5 = *(unsigned __int16 *)(*(_QWORD *)a1 + 18LL);
    if ( *(_WORD *)(*(_QWORD *)a1 + 18LL) )
    {
      v6 = v2 - 20;
      if ( (unsigned int)v6 >= 2 * v5 )
      {
        v7 = 24 * v5;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v7 + v6 + 40, 0x46777445u);
        if ( !PoolWithTag )
          return 3221225495LL;
        v10 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x100uLL, 0x46777445u);
        if ( !v10 )
        {
          v3 = -1073741801;
          goto LABEL_43;
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
        v41 = PoolWithTag + 40;
        v42 = v13;
        memmove(v13, (const void *)(v4 + 20), (unsigned int)v6);
        *((_DWORD *)PoolWithTag + 6) = 0;
        *((_QWORD *)PoolWithTag + 4) = v10;
        *((_DWORD *)PoolWithTag + 7) = 1024;
        if ( (v10 + 256 >= v10 ? 0x20 : 0) != 0 )
          memset64(v10, (unsigned __int64)(PoolWithTag + 24) | 1, v10 + 256 >= v10 ? 0x20 : 0);
        v39 = 0;
        v14 = 0;
        v15 = 0;
        if ( !v5 )
        {
LABEL_41:
          if ( v14 == (_DWORD)v6 )
          {
            *a2 = PoolWithTag;
            return v3;
          }
LABEL_42:
          v3 = -1073741811;
LABEL_43:
          EtwpFreeEventNameFilter(PoolWithTag);
          return v3;
        }
        v16 = v6 - 1;
        while ( 1 )
        {
          if ( v14 >= v16 )
            goto LABEL_42;
          v17 = v6 - v14;
          v18 = &v13[v14];
          if ( v18 )
          {
            v19 = strnlen(v18, v17);
            v15 = v39;
          }
          else
          {
            v19 = 0;
          }
          v20 = v19 + 1;
          if ( v19 + 1 > v17 || v19 == -1 )
            goto LABEL_42;
          v21 = v19;
          v22 = (unsigned __int8 *)v18;
          v23 = 314159LL;
          if ( v19 >= 8uLL )
          {
            v24 = (unsigned __int64)v19 >> 3;
            v21 = v19 - 8 * v24;
            do
            {
              v25 = v22[6]
                  + 37
                  * (v22[5] + 37 * (v22[4] + 37 * (v22[3] + 37 * (v22[2] + 37 * (v22[1] + 37 * (*v22 + 37 * v23))))));
              v26 = v22[7];
              v22 += 8;
              v23 = v26 + 37 * v25;
              --v24;
            }
            while ( v24 );
          }
          if ( (unsigned __int64)(v21 - 1) <= 6 )
          {
            v27 = v21 - 1;
            if ( !v27 )
              goto LABEL_39;
            v28 = v27 - 1;
            if ( !v28 )
              goto LABEL_38;
            v29 = v28 - 1;
            if ( !v29 )
              goto LABEL_37;
            v30 = v29 - 1;
            if ( !v30 )
              goto LABEL_36;
            v31 = v30 - 1;
            if ( !v31 )
              goto LABEL_35;
            v32 = v31 - 1;
            if ( !v32 )
              goto LABEL_34;
            if ( v32 == 1 )
              break;
          }
LABEL_40:
          ++v15;
          v14 += v20;
          v39 = v15;
          v41[1] = v23;
          v41[2] = v18;
          v33 = *((_DWORD *)PoolWithTag + 7);
          v13 = v42;
          v34 = v33 & 0x1F;
          v35 = v23 & (-1LL << (v33 & 0x1F));
          v36 = 37
              * (BYTE5(v35)
               + 37
               * (BYTE4(v35)
                + 37
                * ((((unsigned int)v23 & (-1 << v34)) >> 24)
                 + 37
                 * ((unsigned __int8)(((unsigned int)v23 & (-1 << v34)) >> 16)
                  + 37
                  * (37 * ((unsigned __int8)(v23 & (-1 << v34)) + 11623883)
                   + (unsigned __int8)((unsigned __int16)(v23 & (-1 << v34)) >> 8))))));
          v37 = *((_QWORD *)PoolWithTag + 4);
          v38 = (HIBYTE(v35) + 37 * (BYTE6(v35) + v36)) & ((v33 >> 5) - 1);
          *v41 = *(_QWORD *)(v37 + 8 * v38);
          v16 = v6 - 1;
          *(_QWORD *)(v37 + 8 * v38) = v41;
          ++*((_DWORD *)PoolWithTag + 6);
          v41 += 3;
          if ( v15 >= v5 )
            goto LABEL_41;
        }
        v23 = *v22++ + 37 * v23;
LABEL_34:
        v23 = *v22++ + 37 * v23;
LABEL_35:
        v23 = *v22++ + 37 * v23;
LABEL_36:
        v23 = *v22++ + 37 * v23;
LABEL_37:
        v23 = *v22++ + 37 * v23;
LABEL_38:
        v23 = *v22++ + 37 * v23;
LABEL_39:
        v23 = *v22 + 37 * v23;
        goto LABEL_40;
      }
    }
  }
  return 3221225485LL;
}
