/*
 * XREFs of vSrcTranCopyS1D1 @ 0x1C0104320
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcTranCopyS1D1(__int64 a1, int a2, int a3, __int64 a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned __int32 v9; // r11d
  unsigned __int32 v11; // r10d
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned int *v15; // rax
  _DWORD *v16; // rdx
  __int64 v17; // r15
  unsigned int *v18; // rcx
  __int64 v19; // r14
  unsigned int *v20; // rdi
  int v21; // r9d
  __int64 result; // rax
  __int64 v23; // rsi
  __int64 v24; // rbx
  __int64 v25; // r9
  unsigned int *v26; // r8
  int v27; // eax
  __int64 v28; // rsi
  __int64 v29; // rbx
  __int64 v30; // r9
  unsigned int *v31; // r8
  int v32; // r10d
  unsigned int v33; // eax
  int v34; // r10d
  unsigned int v35; // eax

  v9 = -1;
  v11 = -1;
  v12 = ((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F;
  v13 = a2 & 0x1F;
  if ( (a2 & 0x1F) != 0 )
    v11 = _byteswap_ulong(0xFFFFFFFF >> v13);
  if ( (((_BYTE)a6 + (_BYTE)a2 - (_BYTE)a5) & 0x1F) != 0 )
    v9 = _byteswap_ulong(-1 << (32 - v12));
  v14 = (__int64)a2 >> 3;
  v15 = (unsigned int *)(a1 + (((__int64)(a6 + a2 - a5) >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v16 = (_DWORD *)(a4 + (((__int64)a5 >> 3) & 0xFFFFFFFFFFFFFFFCuLL));
  v17 = v13;
  v18 = (unsigned int *)(a1 + (v14 & 0xFFFFFFFFFFFFFFFCuLL));
  v19 = v12;
  v20 = (unsigned int *)((char *)v18 + a3 * (__int64)a8);
  v21 = (_DWORD)v15 - (_DWORD)v18;
  if ( a9 )
  {
    if ( v18 == v15 )
    {
      v32 = v9 & v11;
      do
      {
        v33 = *v18;
        v18 = (unsigned int *)((char *)v18 + a3);
        result = v32 & v33;
        *v16 |= result;
        v16 = (_DWORD *)((char *)v16 + a7);
      }
      while ( v18 != v20 );
    }
    else
    {
      result = (unsigned int)(a7 - v21);
      v28 = v21;
      v29 = (int)result;
      v30 = a3 - v21;
      do
      {
        v31 = (unsigned int *)((char *)v18 + v28);
        if ( v17 )
        {
          result = v11 & *v18;
          *v16++ |= result;
          ++v18;
        }
        while ( v18 != v31 )
        {
          result = *v18++;
          *v16++ |= result;
        }
        if ( v19 )
        {
          result = v9 & *v18;
          *v16 |= result;
        }
        v18 = (unsigned int *)((char *)v18 + v30);
        v16 = (_DWORD *)((char *)v16 + v29);
      }
      while ( v18 != v20 );
    }
  }
  else if ( v18 == v15 )
  {
    v34 = v9 & v11;
    do
    {
      v35 = *v18;
      v18 = (unsigned int *)((char *)v18 + a3);
      result = ~(v34 & v35);
      *v16 &= result;
      v16 = (_DWORD *)((char *)v16 + a7);
    }
    while ( v18 != v20 );
  }
  else
  {
    result = (unsigned int)(a7 - v21);
    v23 = v21;
    v24 = (int)result;
    v25 = a3 - v21;
    do
    {
      v26 = (unsigned int *)((char *)v18 + v23);
      if ( v17 )
      {
        result = ~(v11 & *v18);
        *v16++ &= result;
        ++v18;
      }
      while ( v18 != v26 )
      {
        v27 = *v18++;
        result = (unsigned int)~v27;
        *v16++ &= result;
      }
      if ( v19 )
      {
        result = ~(v9 & *v18);
        *v16 &= result;
      }
      v18 = (unsigned int *)((char *)v18 + v25);
      v16 = (_DWORD *)((char *)v16 + v24);
    }
    while ( v18 != v20 );
  }
  return result;
}
