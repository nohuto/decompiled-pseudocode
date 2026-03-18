/*
 * XREFs of vSrcOpaqCopyS1D1 @ 0x1C0131BF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcOpaqCopyS1D1(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10)
{
  unsigned __int32 v11; // r11d
  __int64 v12; // rbx
  int v13; // esi
  int v14; // edi
  unsigned int v15; // r9d
  unsigned __int32 v16; // r10d
  unsigned int v17; // r12d
  _DWORD *v18; // r8
  unsigned int *v19; // rdx
  __int64 v20; // r13
  unsigned int *v21; // rbp
  __int64 v22; // r12
  unsigned int *v23; // rsi
  int v24; // ecx
  __int64 result; // rax
  int v26; // ebx
  __int64 v27; // rdi
  unsigned int *v28; // r9
  int v29; // eax
  int v30; // ebx
  __int64 v31; // rdi
  unsigned int *v32; // r9
  int v33; // r10d
  int v34; // r10d
  int v35; // ecx
  int v36; // r9d
  int v37; // edi
  int v38; // edi
  __int64 v39; // r14
  __int64 v40; // rbp
  unsigned int *v41; // rbx
  unsigned int v42; // eax
  int v43; // r10d
  int v44; // ecx

  v11 = -1;
  v12 = a3;
  v13 = a6 + a2 - a5;
  v14 = a10 & 1;
  v15 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v16 = -1;
  v17 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v16 = _byteswap_ulong(0xFFFFFFFF >> v17);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v11 = _byteswap_ulong(-1 << (32 - v15));
  v18 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v20 = v17;
  v21 = (unsigned int *)(a1 + (((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v22 = v15;
  v23 = (unsigned int *)((char *)v19 + v12 * a8);
  v24 = (_DWORD)v21 - (_DWORD)v19;
  if ( (a9 & 1) == 0 )
  {
    if ( (a10 & 1) != 0 )
    {
      if ( v19 == v21 )
      {
        v34 = v11 & v16;
        do
        {
          result = *v18 & (unsigned int)~v34;
          v35 = v34 & ~*v19;
          v19 = (unsigned int *)((char *)v19 + v12);
          *v18 = result | v35;
          v18 = (_DWORD *)((char *)v18 + a7);
        }
        while ( v19 != v23 );
      }
      else
      {
        result = (unsigned int)(a7 - v24);
        v26 = v12 - v24;
        v27 = (int)result;
        do
        {
          v28 = (unsigned int *)((char *)v19 + v24);
          if ( v20 )
          {
            result = *v18 & ~v16;
            *v18++ = result | v16 & ~*v19++;
          }
          while ( v19 != v28 )
          {
            v29 = *v19++;
            result = (unsigned int)~v29;
            *v18++ = result;
          }
          if ( v22 )
          {
            result = *v18 & ~v11;
            *v18 = result | v11 & ~*v19;
          }
          v19 = (unsigned int *)((char *)v19 + v26);
          v18 = (_DWORD *)((char *)v18 + v27);
        }
        while ( v19 != v23 );
      }
      return result;
    }
    goto LABEL_35;
  }
  if ( (a10 & 1) != 0 )
  {
LABEL_35:
    v36 = (((unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8)) << 16) | (unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8);
    v37 = (unsigned __int8)-(v14 != 0) | ((unsigned __int8)-(v14 != 0) << 8);
    v38 = (v37 << 16) | v37;
    if ( v19 == v21 )
    {
      v43 = v11 & v16;
      do
      {
        result = *v18 & (unsigned int)~v43;
        v44 = v38 ^ v36 & *v19;
        v19 = (unsigned int *)((char *)v19 + v12);
        *v18 = result | v43 & v44;
        v18 = (_DWORD *)((char *)v18 + a7);
      }
      while ( v19 != v23 );
    }
    else
    {
      result = (unsigned int)(a7 - v24);
      v39 = (int)result;
      v40 = (int)v12 - v24;
      do
      {
        v41 = (unsigned int *)((char *)v19 + v24);
        if ( v20 )
        {
          result = *v18 & ~v16;
          *v18++ = result | v16 & (v38 ^ v36 & *v19++);
        }
        while ( v19 != v41 )
        {
          v42 = *v19++;
          result = v38 ^ v36 & v42;
          *v18++ = result;
        }
        if ( v22 )
        {
          result = *v18 & ~v11;
          *v18 = result | v11 & (v38 ^ v36 & *v19);
        }
        v19 = (unsigned int *)((char *)v19 + v40);
        v18 = (_DWORD *)((char *)v18 + v39);
      }
      while ( v19 != v23 );
    }
    return result;
  }
  if ( v19 == v21 )
  {
    v33 = v11 & v16;
    do
    {
      result = v33 & *v19;
      v19 = (unsigned int *)((char *)v19 + v12);
      *v18 = result | *v18 & ~v33;
      v18 = (_DWORD *)((char *)v18 + a7);
    }
    while ( v19 != v23 );
  }
  else
  {
    result = (unsigned int)(a7 - v24);
    v30 = v12 - v24;
    v31 = (int)result;
    do
    {
      v32 = (unsigned int *)((char *)v19 + v24);
      if ( v20 )
      {
        result = v16 & *v19;
        *v18 = result | *v18 & ~v16;
        ++v18;
        ++v19;
      }
      while ( v19 != v32 )
      {
        result = *v19++;
        *v18++ = result;
      }
      if ( v22 )
      {
        result = v11 & *v19;
        *v18 = result | *v18 & ~v11;
      }
      v19 = (unsigned int *)((char *)v19 + v30);
      v18 = (_DWORD *)((char *)v18 + v31);
    }
    while ( v19 != v23 );
  }
  return result;
}
