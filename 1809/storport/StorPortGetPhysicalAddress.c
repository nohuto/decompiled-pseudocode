/*
 * XREFs of StorPortGetPhysicalAddress @ 0x1C001B390
 * Callers:
 *     StorPortGetPhysicalAddressVrfy @ 0x1C00772B0 (StorPortGetPhysicalAddressVrfy.c)
 * Callees:
 *     <none>
 */

PHYSICAL_ADDRESS __fastcall StorPortGetPhysicalAddress(__int64 a1, __int64 a2, void *a3, unsigned int *a4)
{
  unsigned int v4; // ebx
  unsigned int *v5; // r12
  unsigned __int8 v6; // di
  PHYSICAL_ADDRESS result; // rax
  __int64 v9; // rsi
  unsigned int v10; // r14d
  unsigned __int64 v11; // r13
  unsigned __int64 v12; // r15
  unsigned __int64 v13; // r11
  unsigned __int64 v14; // rbp
  unsigned int v15; // r9d
  unsigned __int8 v16; // cl
  int v17; // r14d
  unsigned int v18; // r15d
  unsigned int v19; // r12d
  __int64 v20; // rdx
  unsigned __int64 v21; // r9
  __int64 v22; // rdi
  int v23; // edx
  unsigned __int64 v24; // rdx
  __int64 v25; // rdx
  int v26; // edx
  unsigned int v27; // ebx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  __int64 v30; // r9
  unsigned int v31; // r8d
  int v32; // edx
  unsigned int v33; // r13d
  unsigned int v34; // edi
  __int64 v35; // rdx
  unsigned __int64 v36; // r15
  __int64 v37; // r9
  __int64 v38; // rcx
  __int64 v39; // r9
  unsigned int *v40; // rdx
  unsigned int v41; // edi
  unsigned int v42; // ecx
  unsigned int *v43; // r8
  unsigned int v44; // [rsp+20h] [rbp-58h]
  unsigned __int64 v45; // [rsp+28h] [rbp-50h]
  unsigned __int8 v46; // [rsp+80h] [rbp+8h]
  unsigned int v47; // [rsp+90h] [rbp+18h]

  v4 = 0;
  v5 = a4;
  v44 = 0;
  v6 = 0;
  result.QuadPart = 0LL;
  v46 = 0;
  v9 = **(_QWORD **)(a1 - 16);
  v10 = 0;
  *a4 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !a2 )
    goto LABEL_16;
  v16 = *(_BYTE *)(a2 + 2);
  if ( v16 != 40 )
  {
    v15 = *(_DWORD *)(a2 + 16);
    v11 = *(_QWORD *)(a2 + 24);
    v13 = *(_QWORD *)(a2 + 56);
    v47 = v15;
    v17 = v16;
    if ( !v16 )
    {
      v14 = *(_QWORD *)(a2 + 32);
      v6 = *(_BYTE *)(a2 + 11);
    }
    goto LABEL_14;
  }
  v17 = *(_DWORD *)(a2 + 20);
  v11 = *(_QWORD *)(a2 + 64);
  v13 = *(_QWORD *)(a2 + 104);
  v45 = v11;
  v47 = *(_DWORD *)(a2 + 60);
  if ( !v17 )
  {
    v18 = *(_DWORD *)(a2 + 56);
    v19 = 0;
    if ( v18 )
    {
      do
      {
        v20 = *(unsigned int *)(a2 + 4LL * v19 + 120);
        if ( (unsigned int)v20 >= 0x80 )
        {
          v21 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v20 <= (unsigned int)v21 )
          {
            v22 = (unsigned int)v20;
            v23 = *(_DWORD *)(v20 + a2);
            if ( v23 == 64 )
            {
              if ( v22 + 40 <= v21 )
                goto LABEL_9;
            }
            else
            {
              v32 = v23 - 65;
              if ( v32 )
              {
                if ( v32 == 1 && v22 + 40 <= v21 )
                {
                  v14 = *(_QWORD *)(v22 + a2 + 24);
                  v6 = *(_BYTE *)(v22 + a2 + 9);
                  v46 = v6;
                  goto LABEL_10;
                }
              }
              else if ( v22 + 56 <= v21 )
              {
LABEL_9:
                v14 = *(_QWORD *)(v22 + a2 + 16);
                v6 = *(_BYTE *)(v22 + a2 + 9);
                v46 = v6;
                goto LABEL_10;
              }
            }
          }
        }
        ++v19;
      }
      while ( v19 < v18 );
      v6 = 0;
    }
  }
LABEL_10:
  if ( (*(_BYTE *)(a2 + 24) & 0xC0) != 0xC0 )
    goto LABEL_11;
  v33 = *(_DWORD *)(a2 + 56);
  v34 = 0;
  if ( !v33 )
  {
LABEL_52:
    v11 = v45;
    v6 = v46;
LABEL_11:
    v5 = a4;
    goto LABEL_12;
  }
  while ( 1 )
  {
    v35 = *(unsigned int *)(a2 + 4LL * v34 + 120);
    if ( (unsigned int)v35 >= 0x80 )
    {
      v36 = *(unsigned int *)(a2 + 16);
      if ( (unsigned int)v35 <= (unsigned int)v36 )
      {
        v37 = v35 + a2;
        if ( *(_DWORD *)(v35 + a2) == 1 && v35 + 24 <= v36 )
          break;
      }
    }
    if ( ++v34 >= v33 )
      goto LABEL_52;
  }
  v11 = v45;
  v6 = v46;
  v5 = a4;
  if ( v37 )
  {
    v12 = *(_QWORD *)(v37 + 16);
    v44 = *(_DWORD *)(v37 + 8);
    goto LABEL_13;
  }
LABEL_12:
  v12 = 0LL;
LABEL_13:
  v16 = 40;
  v15 = v47;
LABEL_14:
  if ( v17 == 23 )
  {
    if ( v16 == 40 )
      v38 = *(_QWORD *)(a2 + 96);
    else
      v38 = *(_QWORD *)(a2 + 48);
    v10 = v47;
    if ( *(_DWORD *)(*(_QWORD *)(v38 + 104) + 40LL) > v47 )
      v15 = *(_DWORD *)(*(_QWORD *)(v38 + 104) + 40LL);
  }
  else
  {
    v10 = v47;
  }
LABEL_16:
  v24 = *(_QWORD *)(v9 + 752);
  if ( v24 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v24 + *(unsigned int *)(v9 + 768) )
  {
    v30 = *(unsigned int *)(v9 + 768);
    if ( (unsigned __int64)a3 < v24 + v30 )
    {
      v31 = (_DWORD)a3 - v24;
      result.QuadPart = *(_QWORD *)(v9 + 760) + v31;
      *v5 = v30 - v31;
    }
  }
  else if ( a2 )
  {
    v25 = v15;
    if ( v11 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v15 + v11
      || v12 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v12 + v44 )
    {
      if ( *(_BYTE *)(a2 + 2) == 40 )
        v39 = *(_QWORD *)(a2 + 96);
      else
        v39 = *(_QWORD *)(a2 + 48);
      if ( v11 > (unsigned __int64)a3 || (unsigned __int64)a3 >= v25 + v11 )
      {
        v40 = *(unsigned int **)(v39 + 152);
        v10 = v44;
        v41 = (_DWORD)a3 - v12;
      }
      else
      {
        v40 = *(unsigned int **)(v39 + 112);
        v41 = (_DWORD)a3 - v11;
      }
      if ( v40 )
      {
        v42 = *v40;
        if ( *v40 )
        {
          v43 = v40 + 6;
          do
          {
            if ( v41 < *v43 )
              break;
            v41 -= *v43;
            ++v4;
            v43 += 6;
          }
          while ( v4 < v42 );
        }
        if ( v4 < v42 )
        {
          *v5 = v40[6 * v4 + 6] - v41;
          return (PHYSICAL_ADDRESS)(*(_QWORD *)&v40[6 * v4 + 4] + v41);
        }
      }
      else if ( (*(_BYTE *)(v9 + 4515) & 4) != 0 && (!*(_BYTE *)(v9 + 728) || *(_DWORD *)(v9 + 748) != 3) )
      {
        result = MmGetPhysicalAddress(a3);
        *v5 = v10 - v41;
      }
    }
    else
    {
      if ( v14 <= (unsigned __int64)a3 && (unsigned __int64)a3 < v14 + v6 )
      {
        v27 = (_DWORD)a3 - v14;
        if ( *(_BYTE *)(v9 + 728) && *(_DWORD *)(v9 + 748) == 3 )
          result.QuadPart = v27 + *(_QWORD *)(v13 - 1064) + 832LL;
        else
          result = MmGetPhysicalAddress(a3);
        v28 = v6;
        goto LABEL_30;
      }
      if ( v13 <= (unsigned __int64)a3 )
      {
        v26 = *(_DWORD *)(v9 + 460);
        if ( (unsigned __int64)a3 < v13 + ((v26 + 7) & 0xFFFFFFF8) )
        {
          v27 = (_DWORD)a3 - v13;
          if ( *(_BYTE *)(v9 + 728) && *(_DWORD *)(v9 + 748) == 3 )
          {
            result.QuadPart = v27 + *(_QWORD *)(v13 - 1064) + 1088LL;
          }
          else
          {
            result = MmGetPhysicalAddress(a3);
            v26 = *(_DWORD *)(v9 + 460);
          }
          v28 = (v26 + 7) & 0xFFFFFFF8;
LABEL_30:
          v29 = v28 - v27;
LABEL_31:
          *v5 = v29;
        }
      }
    }
  }
  else if ( !*(_BYTE *)(v9 + 728) || *(_DWORD *)(v9 + 748) != 3 )
  {
    result = MmGetPhysicalAddress(a3);
    v29 = (*(_DWORD *)(v9 + 460) + 7) & 0xFFFFFFF8;
    goto LABEL_31;
  }
  return result;
}
