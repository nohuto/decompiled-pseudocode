/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C001E170
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C00772B0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     <none>
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  PHYSICAL_ADDRESS result; // rax
  unsigned int *v5; // rbp
  unsigned __int8 v6; // r12
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // rsi
  __int64 v11; // r13
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbx
  unsigned int v15; // r9d
  unsigned __int8 v16; // bp
  int v17; // edi
  unsigned int v18; // r12d
  __int64 v19; // rdx
  unsigned __int64 v20; // r9
  __int64 v21; // r14
  int v22; // edx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  int v25; // edx
  unsigned int v26; // ebx
  unsigned int v27; // ecx
  __int64 v28; // r9
  unsigned int v29; // r8d
  int v30; // edx
  __int64 v31; // rdx
  unsigned __int64 v32; // r12
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r9
  unsigned int *v36; // rdx
  unsigned int v37; // ebx
  unsigned int v38; // r8d
  unsigned int v39; // ecx
  unsigned int *v40; // r9
  __int64 v41; // rcx
  unsigned int v42; // edi
  unsigned int v43; // [rsp+20h] [rbp-58h]
  unsigned __int8 v44; // [rsp+80h] [rbp+8h]
  unsigned int v45; // [rsp+88h] [rbp+10h]

  result.QuadPart = 0LL;
  v5 = a4;
  v6 = 0;
  v44 = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = **(_QWORD **)(a1 - 16);
  v11 = 0LL;
  *a4 = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !a2 )
    goto LABEL_18;
  v16 = *(_BYTE *)(a2 + 2);
  if ( v16 != 40 )
  {
    v15 = *(_DWORD *)(a2 + 16);
    v9 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 56);
    v45 = v15;
    v17 = v16;
    if ( !v16 )
    {
      v14 = *(_QWORD *)(a2 + 32);
      v44 = *(_BYTE *)(a2 + 11);
    }
    goto LABEL_15;
  }
  v17 = *(_DWORD *)(a2 + 20);
  v9 = *(_QWORD *)(a2 + 64);
  v13 = *(_QWORD *)(a2 + 104);
  v45 = *(_DWORD *)(a2 + 60);
  if ( v17 )
    goto LABEL_12;
  v18 = *(_DWORD *)(a2 + 56);
  if ( !v18 )
    goto LABEL_11;
  while ( 1 )
  {
    v19 = *(unsigned int *)(a2 + 4 * v11 + 120);
    if ( (unsigned int)v19 < 0x80 )
      goto LABEL_45;
    v20 = *(unsigned int *)(a2 + 16);
    if ( (unsigned int)v19 > (unsigned int)v20 )
      goto LABEL_45;
    v21 = (unsigned int)v19;
    v22 = *(_DWORD *)(v19 + a2);
    if ( v22 == 64 )
    {
      if ( v21 + 40 <= v20 )
        goto LABEL_9;
      goto LABEL_45;
    }
    v30 = v22 - 65;
    if ( v30 )
      break;
    if ( v21 + 56 <= v20 )
    {
LABEL_9:
      v14 = *(_QWORD *)(v21 + a2 + 16);
      goto LABEL_10;
    }
LABEL_45:
    v11 = (unsigned int)(v11 + 1);
    if ( (unsigned int)v11 >= v18 )
      goto LABEL_11;
  }
  if ( v30 != 1 || v21 + 40 > v20 )
    goto LABEL_45;
  v14 = *(_QWORD *)(v21 + a2 + 24);
LABEL_10:
  v44 = *(_BYTE *)(v21 + a2 + 9);
LABEL_11:
  LODWORD(v11) = 0;
LABEL_12:
  if ( (*(_BYTE *)(a2 + 24) & 0xC0) == 0xC0 )
  {
    v12 = 0LL;
    v43 = *(_DWORD *)(a2 + 56);
    if ( v43 )
    {
      while ( 1 )
      {
        v31 = *(unsigned int *)(a2 + 4LL * (unsigned int)v12 + 120);
        if ( (unsigned int)v31 >= 0x80 )
        {
          v32 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v31 <= (unsigned int)v32 )
          {
            v33 = a2 + v31;
            if ( *(_DWORD *)(a2 + v31) == 1 && v31 + 24 <= v32 )
              break;
          }
        }
        LODWORD(v12) = v12 + 1;
        if ( (unsigned int)v12 >= v43 )
          goto LABEL_39;
      }
      if ( !v33 )
      {
LABEL_39:
        LODWORD(v11) = 0;
        goto LABEL_13;
      }
      v12 = *(_QWORD *)(v33 + 16);
      LODWORD(v11) = *(_DWORD *)(v33 + 8);
    }
  }
  else
  {
LABEL_13:
    v12 = 0LL;
  }
  v15 = v45;
LABEL_15:
  if ( v17 == 23 )
  {
    if ( v16 == 40 )
      v34 = *(_QWORD *)(a2 + 96);
    else
      v34 = *(_QWORD *)(a2 + 48);
    v8 = v45;
    if ( *(_DWORD *)(*(_QWORD *)(v34 + 104) + 40LL) > v45 )
      v15 = *(_DWORD *)(*(_QWORD *)(v34 + 104) + 40LL);
  }
  else
  {
    v8 = v45;
  }
  v5 = a4;
  v6 = v44;
LABEL_18:
  v23 = *(_QWORD *)(v10 + 728);
  if ( v23 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v23 + *(unsigned int *)(v10 + 744) )
  {
    v28 = *(unsigned int *)(v10 + 744);
    if ( (unsigned __int64)a3 < v23 + v28 )
    {
      v29 = (_DWORD)a3 - v23;
      result.QuadPart = *(_QWORD *)(v10 + 736) + v29;
      *v5 = v28 - v29;
    }
  }
  else if ( a2 )
  {
    v24 = v15;
    if ( v9 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v15 + v9
      || v12 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v12 + (unsigned int)v11 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v35 = *(_QWORD *)(a2 + 96);
      else
        v35 = *(_QWORD *)(a2 + 48);
      if ( v9 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v9 + v24 )
      {
        v36 = *(unsigned int **)(v35 + 152);
        v37 = (_DWORD)a3 - v12;
        v8 = v11;
      }
      else
      {
        v36 = *(unsigned int **)(v35 + 112);
        v37 = (_DWORD)a3 - v9;
      }
      if ( v36 )
      {
        v38 = *v36;
        v39 = 0;
        if ( *v36 )
        {
          v40 = v36 + 6;
          do
          {
            if ( v37 < *v40 )
              break;
            v37 -= *v40;
            ++v39;
            v40 += 6;
          }
          while ( v39 < v38 );
        }
        if ( v39 < v38 )
        {
          v41 = 3LL * v39;
          *v5 = v36[2 * v41 + 6] - v37;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v36[2 * v41 + 4] + v37);
        }
      }
      else if ( (*(_BYTE *)(v10 + 4451) & 4) != 0 && (!*(_BYTE *)(v10 + 704) || *(_DWORD *)(v10 + 724) != 3) )
      {
        result = MmGetPhysicalAddress(a3);
        *v5 = v8 - v37;
      }
    }
    else if ( v14 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v14 + v6 )
    {
      v42 = (_DWORD)a3 - v14;
      if ( *(_BYTE *)(v10 + 704) && *(_DWORD *)(v10 + 724) == 3 )
        result.QuadPart = v42 + *(_QWORD *)(v13 - 1064) + 832LL;
      else
        result = MmGetPhysicalAddress(a3);
      v27 = v6 - v42;
LABEL_32:
      *v5 = v27;
    }
    else if ( v13 <= (unsigned __int64)a3 )
    {
      v25 = *(_DWORD *)(v10 + 444);
      if ( (unsigned __int64)a3 < v13 + ((v25 + 7) & 0xFFFFFFF8) )
      {
        v26 = (_DWORD)a3 - v13;
        if ( *(_BYTE *)(v10 + 704) && *(_DWORD *)(v10 + 724) == 3 )
        {
          result.QuadPart = v26 + *(_QWORD *)(v13 - 1064) + 1088LL;
        }
        else
        {
          result = MmGetPhysicalAddress(a3);
          v25 = *(_DWORD *)(v10 + 444);
        }
        v27 = ((v25 + 7) & 0xFFFFFFF8) - v26;
        goto LABEL_32;
      }
    }
  }
  else if ( !*(_BYTE *)(v10 + 704) || *(_DWORD *)(v10 + 724) != 3 )
  {
    result = MmGetPhysicalAddress(a3);
    v27 = (*(_DWORD *)(v10 + 444) + 7) & 0xFFFFFFF8;
    goto LABEL_32;
  }
  return result;
}
