/*
 * XREFs of MiReduceMdl @ 0x14011A9A4
 * Callers:
 *     MiPfPutPagesInTransition @ 0x140064E60 (MiPfPutPagesInTransition.c)
 *     MiResolvePageFileFault @ 0x140154C44 (MiResolvePageFileFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReduceMdl(__int64 a1)
{
  char *v1; // rdi
  unsigned int v2; // r9d
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v6; // r11
  char *v7; // rcx
  unsigned int v8; // r10d
  unsigned __int64 v9; // r8
  __int64 v10; // r10
  int v12; // ebx
  __int16 v13; // cx
  __int16 v14; // si
  unsigned int v15; // eax
  unsigned int v16; // ebx
  bool v17; // zf
  __int64 v18; // rcx
  char *v19; // r10
  signed __int64 v20; // rbx

  v1 = (char *)(a1 + 48);
  v2 = 0;
  v3 = *(unsigned int *)(a1 + 40);
  v4 = (*(_DWORD *)(a1 + 32) + *(_DWORD *)(a1 + 44)) & 0xFFF;
  v6 = 0LL;
  v7 = (char *)(a1 + 48);
  v8 = 0;
  v9 = (unsigned __int64)(v4 + v3 + 4095) >> 12;
  if ( v9 != 1 )
  {
    do
    {
      if ( *(_QWORD *)v7 != qword_14043BE98 )
        break;
      ++v8;
      ++v6;
      v7 += 8;
    }
    while ( v8 < v9 - 1 );
  }
  if ( v6 )
  {
    *(_WORD *)(a1 + 8) += -8 * v6;
    *(_DWORD *)(a1 + 40) = v3 - ((_DWORD)v6 << 12);
    v20 = v1 - v7;
    do
    {
      ++v8;
      *(_QWORD *)&v7[v20] = *(_QWORD *)v7;
      v7 += 8;
    }
    while ( v8 < v9 );
    v9 -= v6;
  }
  v10 = a1 + 8 * v9;
  if ( *(_QWORD *)(v10 + 40) == qword_14043BE98 )
  {
    v12 = *(_DWORD *)(a1 + 40);
    v13 = v12;
    *(_WORD *)(a1 + 8) -= 8;
    v14 = *(_WORD *)(a1 + 8);
    v15 = v12 - 4096;
    v16 = v12 & 0xFFFFF000;
    v17 = (v13 & 0xFFF) == 0;
    v18 = 0LL;
    if ( v17 )
      v16 = v15;
    v19 = (char *)(v10 + 32);
    *(_DWORD *)(a1 + 40) = v16;
    if ( v19 != v1 )
    {
      do
      {
        if ( *(_QWORD *)v19 != qword_14043BE98 )
          break;
        ++v18;
        v19 -= 8;
      }
      while ( v19 != v1 );
      if ( v18 )
      {
        *(_WORD *)(a1 + 8) = v14 - 8 * v18;
        *(_DWORD *)(a1 + 40) = v16 - ((_DWORD)v18 << 12);
      }
    }
    v9 += -1 - v18;
  }
  *(_WORD *)(a1 + 10) |= 0x4000u;
  if ( v9 )
  {
    while ( *(_QWORD *)v1 != qword_14043BE98 )
    {
      ++v2;
      v1 += 8;
      if ( v2 >= v9 )
        return v6;
    }
    *(_WORD *)(a1 + 10) &= ~0x4000u;
  }
  return v6;
}
