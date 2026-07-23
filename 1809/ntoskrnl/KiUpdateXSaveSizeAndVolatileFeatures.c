/*
 * XREFs of KiUpdateXSaveSizeAndVolatileFeatures @ 0x14057457C
 * Callers:
 *     KiInitializeXSave @ 0x1405742C0 (KiInitializeXSave.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiUpdateXSaveSizeAndVolatileFeatures(__int64 a1)
{
  unsigned __int64 v1; // r8
  unsigned int v3; // r10d
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rbx
  unsigned int v6; // r11d
  __int64 result; // rax
  unsigned int v8; // r11d
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rbx
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // rdi
  unsigned int v17; // r10d

  v1 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 16) = 576;
  *(_DWORD *)(a1 + 552) = 576;
  if ( (*(_DWORD *)(a1 + 20) & 2) != 0 )
  {
    v8 = 2;
    v9 = *(_QWORD *)(a1 + 544) >> 2;
    v10 = v1 >> 2;
    if ( v10 )
    {
      do
      {
        v11 = v10;
        if ( v8 >= 0x40 )
          break;
        if ( (v10 & 1) != 0 )
        {
          v12 = *(_DWORD *)(a1 + 16);
          if ( (v9 & 1) != 0 )
          {
            v12 = (v12 + 63) & 0xFFFFFFC0;
            *(_DWORD *)(a1 + 16) = v12;
          }
          *(_DWORD *)(a1 + 8LL * v8 + 24) = v12;
          *(_DWORD *)(a1 + 16) += *(_DWORD *)(a1 + 8LL * v8 + 28);
        }
        v10 >>= 1;
        ++v8;
        v9 >>= 1;
      }
      while ( v11 >= 2 );
    }
    v1 = *(_QWORD *)a1;
    v13 = 2;
    v14 = (*(_QWORD *)a1 | *(_QWORD *)(a1 + 536)) >> 2;
    v15 = *(_QWORD *)(a1 + 544) >> 2;
    if ( v14 )
    {
      do
      {
        v16 = v14;
        if ( v13 >= 0x40 )
          break;
        if ( (v14 & 1) != 0 )
        {
          v17 = *(_DWORD *)(a1 + 552);
          if ( (v15 & 1) != 0 )
          {
            v17 = (v17 + 63) & 0xFFFFFFC0;
            *(_DWORD *)(a1 + 552) = v17;
          }
          *(_DWORD *)(a1 + 552) = v17 + *(_DWORD *)(a1 + 4LL * v13 + 556);
        }
        v14 >>= 1;
        ++v13;
        v15 >>= 1;
      }
      while ( v16 >= 2 );
    }
  }
  else
  {
    v3 = 0;
    v4 = v1;
    if ( v1 )
    {
      do
      {
        v5 = v4;
        if ( v3 >= 0x40 )
          break;
        if ( (v4 & 1) != 0 )
        {
          v6 = *(_DWORD *)(a1 + 8LL * v3 + 28) + *(_DWORD *)(a1 + 8LL * v3 + 24);
          if ( *(_DWORD *)(a1 + 16) < v6 )
            *(_DWORD *)(a1 + 16) = v6;
        }
        v4 >>= 1;
        ++v3;
      }
      while ( v5 >= 2 );
    }
    *(_DWORD *)(a1 + 552) = *(_DWORD *)(a1 + 16);
  }
  result = *(_DWORD *)(a1 + 536) & 0x800;
  *(_QWORD *)(a1 + 8) = v1 & 0xBFFFFFFFFFFFFFEFuLL;
  *(_QWORD *)(a1 + 816) = result;
  return result;
}
