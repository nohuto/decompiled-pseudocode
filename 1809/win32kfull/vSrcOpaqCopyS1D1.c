/*
 * XREFs of vSrcOpaqCopyS1D1 @ 0x1C0154A00
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
  int v13; // r9d
  int v14; // edi
  int v15; // r12d
  unsigned __int32 v16; // r10d
  int v17; // r13d
  __int64 v18; // r15
  _DWORD *v19; // r8
  unsigned int *v20; // rdx
  unsigned int *v21; // rbp
  unsigned int *v22; // rsi
  int v23; // ecx
  __int64 result; // rax
  int v25; // ebx
  __int64 v26; // rdi
  unsigned int *v27; // r9
  int v28; // eax
  int v29; // ebx
  __int64 v30; // rdi
  unsigned int *v31; // r9
  int v32; // r10d
  int v33; // r10d
  int v34; // ecx
  int v35; // r9d
  int v36; // edi
  int v37; // edi
  __int64 v38; // r14
  __int64 v39; // rbp
  unsigned int *v40; // rbx
  unsigned int v41; // eax
  int v42; // r10d
  int v43; // ecx

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
  v18 = a3;
  v19 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v20 = (unsigned int *)(a1 + (((__int64)a2 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v21 = (unsigned int *)(a1 + (((__int64)v13 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v22 = (unsigned int *)((char *)v20 + v12 * a8);
  v23 = (_DWORD)v21 - (_DWORD)v20;
  if ( (a9 & 1) == 0 )
  {
    if ( (a10 & 1) != 0 )
    {
      if ( v20 == v21 )
      {
        v33 = v11 & v16;
        do
        {
          result = *v19 & (unsigned int)~v33;
          v34 = v33 & ~*v20;
          v20 = (unsigned int *)((char *)v20 + v12);
          *v19 = result | v34;
          v19 = (_DWORD *)((char *)v19 + a7);
        }
        while ( v20 != v22 );
      }
      else
      {
        result = (unsigned int)(a7 - v23);
        v25 = v12 - v23;
        v26 = (int)result;
        do
        {
          v27 = (unsigned int *)((char *)v20 + v23);
          if ( v17 )
          {
            result = *v19 & ~v16;
            *v19++ = result | v16 & ~*v20++;
          }
          while ( v20 != v27 )
          {
            v28 = *v20++;
            result = (unsigned int)~v28;
            *v19++ = result;
          }
          if ( v15 )
          {
            result = *v19 & ~v11;
            *v19 = result | v11 & ~*v20;
          }
          v20 = (unsigned int *)((char *)v20 + v25);
          v19 = (_DWORD *)((char *)v19 + v26);
        }
        while ( v20 != v22 );
      }
      return result;
    }
    goto LABEL_35;
  }
  if ( (a10 & 1) != 0 )
  {
LABEL_35:
    v35 = (((unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8)) << 16) | (unsigned __int8)-(v14 != (a9 & 1)) | ((unsigned __int8)-(v14 != (a9 & 1)) << 8);
    v36 = (unsigned __int8)-(v14 != 0) | ((unsigned __int8)-(v14 != 0) << 8);
    v37 = (v36 << 16) | v36;
    if ( v20 == v21 )
    {
      v42 = v11 & v16;
      do
      {
        result = *v19 & (unsigned int)~v42;
        v43 = v37 ^ v35 & *v20;
        v20 = (unsigned int *)((char *)v20 + v18);
        *v19 = result | v42 & v43;
        v19 = (_DWORD *)((char *)v19 + a7);
      }
      while ( v20 != v22 );
    }
    else
    {
      result = (unsigned int)(a7 - v23);
      v38 = (int)result;
      v39 = (int)v12 - v23;
      do
      {
        v40 = (unsigned int *)((char *)v20 + v23);
        if ( v17 )
        {
          result = *v19 & ~v16;
          *v19++ = result | v16 & (v37 ^ v35 & *v20++);
        }
        while ( v20 != v40 )
        {
          v41 = *v20++;
          result = v37 ^ v35 & v41;
          *v19++ = result;
        }
        if ( v15 )
        {
          result = *v19 & ~v11;
          *v19 = result | v11 & (v37 ^ v35 & *v20);
        }
        v20 = (unsigned int *)((char *)v20 + v39);
        v19 = (_DWORD *)((char *)v19 + v38);
      }
      while ( v20 != v22 );
    }
    return result;
  }
  if ( v20 == v21 )
  {
    v32 = v11 & v16;
    do
    {
      result = v32 & *v20;
      v20 = (unsigned int *)((char *)v20 + v12);
      *v19 = result | *v19 & ~v32;
      v19 = (_DWORD *)((char *)v19 + a7);
    }
    while ( v20 != v22 );
  }
  else
  {
    result = (unsigned int)(a7 - v23);
    v29 = v12 - v23;
    v30 = (int)result;
    do
    {
      v31 = (unsigned int *)((char *)v20 + v23);
      if ( v17 )
      {
        result = v16 & *v20;
        *v19 = result | *v19 & ~v16;
        ++v19;
        ++v20;
      }
      while ( v20 != v31 )
      {
        result = *v20++;
        *v19++ = result;
      }
      if ( v15 )
      {
        result = v11 & *v20;
        *v19 = result | *v19 & ~v11;
      }
      v20 = (unsigned int *)((char *)v20 + v29);
      v19 = (_DWORD *)((char *)v19 + v30);
    }
    while ( v20 != v22 );
  }
  return result;
}
