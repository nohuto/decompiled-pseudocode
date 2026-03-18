/*
 * XREFs of AlpcpAllocateFromBitmap @ 0x1406BD9E0
 * Callers:
 *     AlpcpAllocateCompletionBuffer @ 0x1406BD914 (AlpcpAllocateCompletionBuffer.c)
 * Callees:
 *     AlpcpFreeBitmap @ 0x140885F24 (AlpcpFreeBitmap.c)
 */

__int64 __fastcall AlpcpAllocateFromBitmap(_DWORD *a1, _DWORD *a2, int a3)
{
  unsigned int v3; // r9d
  _DWORD *v6; // r14
  __int64 v7; // r8
  unsigned int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  signed __int32 *v11; // r11
  int v12; // ebx
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  signed __int32 v16; // eax
  signed __int32 v17; // ett
  unsigned int v18; // esi
  int v19; // edi
  signed __int32 v20; // eax
  signed __int32 v21; // ett
  unsigned int v22; // r10d

  v3 = 0;
  v6 = a1;
  v7 = 0xFFFFFFFFLL;
  if ( a1 == a2 )
    return 0xFFFFFFFFLL;
LABEL_2:
  v8 = *a1;
  v9 = 0;
  while ( (v8 & 1) != 0 )
  {
    v7 = 0xFFFFFFFFLL;
    v3 = 0;
LABEL_7:
    v8 >>= 1;
    if ( (unsigned int)++v9 >= 0x20 )
    {
      if ( ++a1 != a2 )
        goto LABEL_2;
      return 0xFFFFFFFFLL;
    }
  }
  if ( (_DWORD)v7 == -1 )
    v7 = v9 + 32 * (unsigned int)(a1 - v6);
  if ( ++v3 != a3 )
    goto LABEL_7;
  v10 = 1LL;
  v11 = &v6[(unsigned __int64)(unsigned int)v7 >> 5];
  v12 = v7 & 0x1F;
  if ( (v7 & 0x1F) == 0 )
    goto LABEL_11;
  v18 = v3;
  if ( v3 >= 32 - v12 )
    v18 = 32 - v12;
  v19 = ((1 << v18) - 1) << v12;
  _m_prefetchw(v11);
  v20 = *v11;
  if ( (*v11 & v19) == 0 )
  {
    while ( 1 )
    {
      v21 = v20;
      v20 = _InterlockedCompareExchange(v11, v19 | v20, v20);
      if ( v21 == v20 )
        break;
      if ( (v20 & v19) != 0 )
        return 4294967294LL;
    }
    v3 -= v18;
    ++v11;
LABEL_11:
    if ( v3 >= 0x20 )
    {
      while ( 1 )
      {
        _m_prefetchw(v11);
        v16 = *v11;
        if ( *v11 )
          break;
        while ( 1 )
        {
          v17 = v16;
          v16 = _InterlockedCompareExchange(v11, -1, v16);
          if ( v17 == v16 )
            break;
          if ( v16 )
            goto LABEL_33;
        }
        v3 -= 32;
        ++v11;
        if ( v3 < 0x20 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      if ( !v3 )
        return (unsigned int)v7;
      v10 = (unsigned int)((1 << v3) - 1);
      _m_prefetchw(v11);
      v13 = *v11;
      while ( (v13 & (unsigned int)v10) == 0 )
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(v11, v10 | v13, v13);
        if ( v14 == v13 )
          return (unsigned int)v7;
      }
    }
LABEL_33:
    v22 = a3 - v3;
    if ( v22 )
      AlpcpFreeBitmap(v6, v10, v7, v22);
  }
  return 4294967294LL;
}
