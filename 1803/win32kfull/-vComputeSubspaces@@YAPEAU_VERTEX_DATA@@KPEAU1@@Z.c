/*
 * XREFs of ?vComputeSubspaces@@YAPEAU_VERTEX_DATA@@KPEAU1@@Z @ 0x1C0258D28
 * Callers:
 *     EngDitherColor @ 0x1C0259570 (EngDitherColor.c)
 * Callees:
 *     <none>
 */

struct _VERTEX_DATA *__fastcall vComputeSubspaces(int a1, struct _VERTEX_DATA *a2)
{
  unsigned int v2; // r10d
  unsigned int v3; // r9d
  unsigned int v4; // r11d
  unsigned int v5; // ebp
  int v6; // eax
  int v7; // ecx
  unsigned int v8; // r8d
  unsigned int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  unsigned int v12; // r10d
  unsigned int v13; // edi
  unsigned int v14; // esi
  int v15; // r11d
  unsigned int v16; // edi
  unsigned int v17; // r10d
  int v18; // r8d
  __int64 v19; // rax
  int v20; // esi
  unsigned int v21; // r10d
  unsigned int v22; // r11d
  unsigned int v23; // r8d
  int v24; // r11d
  int v25; // esi
  int v26; // r10d
  int v27; // r8d
  int v28; // r11d
  int v29; // r10d
  int v30; // esi
  int v31; // r8d

  v2 = (unsigned __int8)a1;
  v3 = BYTE1(a1);
  v4 = BYTE2(a1);
  v5 = BYTE1(a1);
  v6 = (unsigned __int8)a1 < (unsigned int)BYTE2(a1) ? 4 : 0;
  if ( BYTE2(a1) <= (unsigned int)(unsigned __int8)a1 )
  {
    v2 = BYTE2(a1);
    v4 = (unsigned __int8)a1;
  }
  v7 = v6 | 2;
  if ( v2 <= v3 )
  {
    v7 = v6;
    v5 = v2;
    v2 = v3;
  }
  v8 = v2;
  v9 = v4;
  if ( v2 <= v4 )
  {
    v9 = v2;
    v8 = v4;
  }
  v10 = v7 | 1;
  if ( v2 <= v4 )
    v10 = v7;
  v11 = (unsigned int)(16 * v10);
  v12 = (v8 + 1) >> 2;
  v13 = (v9 + 1) >> 2;
  v14 = (v5 + 1) >> 2;
  if ( v8 + v9 <= 0x100 )
  {
    if ( v8 <= 0x80 )
    {
      v28 = 2 * (32 - v12);
      if ( v28 )
      {
        *((_DWORD *)a2 + 1) = jSwapSubSpace[v11];
        *(_DWORD *)a2 = v28;
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v29 = 2 * (v12 - v13);
      if ( v29 )
      {
        *(_DWORD *)a2 = v29;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v30 = 2 * v14;
      v31 = 64 - v29 - v30 - v28;
      if ( v31 )
      {
        *(_DWORD *)a2 = v31;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v30 )
      {
        *(_DWORD *)a2 = v30;
        v19 = (unsigned int)(v11 + 7);
        goto LABEL_44;
      }
    }
    else
    {
      v24 = 2 * (64 - v13 - v12);
      if ( v24 )
      {
        *(_DWORD *)a2 = v24;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 1)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      v25 = 2 * v14;
      v26 = 2 * v12 - 64;
      v27 = 64 - v26 - v25 - v24;
      if ( v27 )
      {
        *(_DWORD *)a2 = v27;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 3)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v25 )
      {
        *(_DWORD *)a2 = v25;
        *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 7)];
        a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
      }
      if ( v26 )
      {
        *(_DWORD *)a2 = v26;
        v19 = (unsigned int)(v11 + 9);
        goto LABEL_44;
      }
    }
  }
  else if ( v8 + v5 <= 0x100 )
  {
    v20 = 2 * v14;
    v21 = v13 + v12 - 64;
    v22 = ((v8 + 1) >> 2) - v13;
    v23 = 64 - v20 - v21 - v22;
    if ( v23 )
    {
      *(_DWORD *)a2 = v23;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 3)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v20 )
    {
      *(_DWORD *)a2 = v20;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v22 )
    {
      *(_DWORD *)a2 = v22;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v21 )
    {
      *(_DWORD *)a2 = v21;
      v19 = (unsigned int)(v11 + 11);
      goto LABEL_44;
    }
  }
  else
  {
    v15 = 2 * (64 - v12);
    if ( v15 )
    {
      *(_DWORD *)a2 = v15;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 7)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    v16 = v13 - v14;
    v17 = v14 + v12 - 64;
    v18 = 64 - v17 - v16 - v15;
    if ( v18 )
    {
      *(_DWORD *)a2 = v18;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 9)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v16 )
    {
      *(_DWORD *)a2 = v16;
      *((_DWORD *)a2 + 1) = jSwapSubSpace[(unsigned int)(v11 + 11)];
      a2 = (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
    if ( v17 )
    {
      *(_DWORD *)a2 = v17;
      v19 = (unsigned int)(v11 + 15);
LABEL_44:
      *((_DWORD *)a2 + 1) = jSwapSubSpace[v19];
      return (struct _VERTEX_DATA *)((char *)a2 + 8);
    }
  }
  return a2;
}
