/*
 * XREFs of RtlpHpSegPageRangeHandleCommit @ 0x14000C760
 * Callers:
 *     RtlpHpSegLfhVsCommit @ 0x14000BF30 (RtlpHpSegLfhVsCommit.c)
 *     RtlpHpSegPageRangeCommit @ 0x14000C594 (RtlpHpSegPageRangeCommit.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  unsigned __int64 v6; // rbx
  unsigned int v7; // esi
  char v8; // cl
  int v9; // r11d
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
  int v25; // ecx
  unsigned int v26; // r9d
  int v27; // ecx
  int v28; // edx
  unsigned int v29; // ecx
  int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // r8d

  v6 = (unsigned int)*a3;
  v7 = 1 << *(_BYTE *)(a1 + 9);
  v8 = *(_BYTE *)(a1 + 9);
  v9 = 0;
  v10 = v6 >> v8;
  v11 = v6 >> v8 << v8;
  v12 = a2 + 32 * v10;
  v13 = *a3 & (v7 - 1);
  v14 = -1;
  v15 = v13 + *a4 - 1;
  v16 = -1;
  v17 = v15 & (v7 - 1);
  v18 = (unsigned __int64)v15 >> v8;
  v19 = 0;
  v20 = v12 + 32 * v18;
  v21 = v17 + 1;
  if ( v13 )
  {
    v31 = *(unsigned __int8 *)(v12 + 25);
    v32 = v7;
    if ( v12 == v20 )
      v32 = v17 + 1;
    if ( a5 > 1 || v31 >= v32 )
    {
      if ( a5 != 2 || v31 <= v13 )
      {
LABEL_43:
        v12 += 32LL;
        LODWORD(v11) = v7 + v11;
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
      v26 = *(unsigned __int8 *)(v12 + 25);
      v27 = v14;
      v28 = 0;
      if ( v26 < v7 && a5 <= 1 )
        break;
      if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
      {
        v30 = v11;
        v28 = -v26;
        if ( v14 != -1 )
          v30 = v14;
        v14 = v30;
        v29 = *(unsigned __int8 *)(v12 + 25);
        goto LABEL_25;
      }
LABEL_29:
      v19 += v28;
      v12 += 32LL;
      LODWORD(v11) = v7 + v11;
      if ( v12 >= v20 )
        goto LABEL_3;
    }
    v14 = v26 + v11;
    v28 = v7 - v26;
    if ( v27 != -1 )
      v14 = v27;
    v29 = v7;
LABEL_25:
    v16 = v11 + v29;
    if ( v28 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v28 + v26;
    goto LABEL_29;
  }
LABEL_3:
  v22 = v14;
  if ( v12 != v20 )
    goto LABEL_12;
  v23 = *(unsigned __int8 *)(v12 + 25);
  if ( a5 <= 1 && v23 < v21 )
  {
    v14 = v11 + v23;
    v9 = v21 - v23;
    if ( v22 != -1 )
      v14 = v22;
LABEL_8:
    v16 = v11 + v21;
    if ( v9 && a5 >= 1 )
      *(_BYTE *)(v12 + 25) = v9 + v23;
    goto LABEL_11;
  }
  if ( a5 == 2 && *(_BYTE *)(v12 + 25) )
  {
    v25 = v11;
    v9 = -v23;
    v21 = *(unsigned __int8 *)(v12 + 25);
    if ( v14 != -1 )
      v25 = v14;
    v14 = v25;
    goto LABEL_8;
  }
LABEL_11:
  v19 += v9;
LABEL_12:
  if ( v19 )
  {
    *a4 = v16 - v14;
    *a3 = v14;
  }
  return v19;
}
