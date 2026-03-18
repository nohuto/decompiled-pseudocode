/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x140021A10
 * Callers:
 *     RtlpHpSegPageRangeCommit @ 0x14001F7D8 (RtlpHpSegPageRangeCommit.c)
 *     RtlpHpSegLfhVsCommit @ 0x1400217E0 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegAlloc @ 0x14005FD40 (RtlpHpSegAlloc.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 v6; // rbx
  int v7; // ebp
  unsigned int v8; // esi
  char v9; // cl
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rax
  unsigned int v13; // r15d
  int v14; // r10d
  unsigned int v15; // r8d
  int v16; // r14d
  int v17; // r9d
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  unsigned __int64 v20; // rdi
  unsigned int v21; // r12d
  int v22; // ecx
  unsigned int v23; // edx
  unsigned int v25; // r9d
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  unsigned int v29; // ecx
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // r8d

  v6 = (unsigned int)*a3;
  v7 = 0;
  v8 = 1 << *(_BYTE *)(a1 + 9);
  v9 = *(_BYTE *)(a1 + 9);
  v10 = v6 >> v9;
  v11 = v6 >> v9 << v9;
  v12 = a2 + 32 * v10;
  v13 = *a3 & (v8 - 1);
  v14 = -1;
  v15 = v13 + *a4 - 1;
  v16 = -1;
  v17 = v15 & (v8 - 1);
  v18 = (unsigned __int64)v15 >> v9;
  v19 = 0;
  v20 = v12 + 32 * v18;
  v21 = v17 + 1;
  if ( v13 )
  {
    v31 = *(unsigned __int8 *)(v12 + 25);
    v32 = v8;
    if ( v12 == v20 )
      v32 = v17 + 1;
    if ( a5 > 1 || v31 >= v32 )
    {
      if ( a5 != 2 || v31 <= v13 )
      {
LABEL_43:
        v12 += 32LL;
        LODWORD(v11) = v8 + v11;
        goto LABEL_2;
      }
      v33 = v13;
      v32 = *(unsigned __int8 *)(v12 + 25);
    }
    else
    {
      v33 = v32;
      v13 = *(unsigned __int8 *)(v12 + 25);
    }
    v19 = v33 - v31;
    v16 = v11 + v32;
    v14 = v11 + v13;
    if ( v19 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v19 + v31;
    goto LABEL_43;
  }
LABEL_2:
  if ( v12 < v20 )
  {
    while ( 1 )
    {
      v25 = *(unsigned __int8 *)(v12 + 25);
      v26 = v14;
      v27 = 0;
      if ( a5 <= 1 && v25 < v8 )
        break;
      if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
      {
        v28 = v11;
        v27 = -v25;
        if ( v14 != -1 )
          v28 = v14;
        v14 = v28;
        v29 = *(unsigned __int8 *)(v12 + 25);
        goto LABEL_22;
      }
LABEL_25:
      v19 += v27;
      v12 += 32LL;
      LODWORD(v11) = v8 + v11;
      if ( v12 >= v20 )
        goto LABEL_3;
    }
    v14 = v25 + v11;
    v27 = v8 - v25;
    if ( v26 != -1 )
      v14 = v26;
    v29 = v8;
LABEL_22:
    v16 = v11 + v29;
    if ( v27 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v27 + v25;
    goto LABEL_25;
  }
LABEL_3:
  v22 = v14;
  if ( v12 != v20 )
    goto LABEL_7;
  v23 = *(unsigned __int8 *)(v12 + 25);
  if ( v23 < v21 && a5 <= 1 )
  {
    v14 = v11 + v23;
    v7 = v21 - v23;
    if ( v22 != -1 )
      v14 = v22;
LABEL_13:
    v16 = v11 + v21;
    if ( v7 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v7 + v23;
    goto LABEL_6;
  }
  if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
  {
    v30 = v11;
    v7 = -v23;
    v21 = *(unsigned __int8 *)(v12 + 25);
    if ( v14 != -1 )
      v30 = v14;
    v14 = v30;
    goto LABEL_13;
  }
LABEL_6:
  v19 += v7;
LABEL_7:
  if ( v19 )
  {
    *a4 = v16 - v14;
    *a3 = v14;
  }
  return v19;
}
