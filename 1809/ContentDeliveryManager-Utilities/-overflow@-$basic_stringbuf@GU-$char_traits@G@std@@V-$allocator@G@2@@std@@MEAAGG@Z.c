/*
 * XREFs of ?overflow@?$basic_stringbuf@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@MEAAGG@Z @ 0x18002F110
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800A9DC8 (--2@YAPEAX_K@Z.c)
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x1800A9FB8 (-_Xbad_alloc@std@@YAXXZ.c)
 *     memcpy_0 @ 0x1800C7147 (memcpy_0.c)
 */

__int64 __fastcall std::basic_stringbuf<unsigned short>::overflow(__int64 a1, unsigned __int16 a2)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rdi
  int *v10; // rcx
  __int64 v11; // rdx
  _WORD **v12; // rcx
  unsigned __int16 *v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r15
  __int64 v17; // r14
  const void **v18; // rax
  void *v19; // r12
  __int64 *v20; // rax
  int v21; // ecx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rdx
  int v28; // eax

  if ( (*(_BYTE *)(a1 + 112) & 2) == 0 )
  {
    if ( a2 == 0xFFFF )
      return 0LL;
    if ( (*(_BYTE *)(a1 + 112) & 8) != 0 )
    {
      v5 = *(unsigned __int64 **)(a1 + 64);
      v6 = *v5;
      if ( *v5 )
      {
        v7 = *(_QWORD *)(a1 + 104);
        if ( v6 < v7 )
        {
          v8 = **(int **)(a1 + 88);
          *v5 = v7;
          **(_DWORD **)(a1 + 88) = (__int64)(v6 + 2 * v8 - v7) >> 1;
        }
      }
    }
    v9 = **(_QWORD **)(a1 + 64);
    if ( v9 )
    {
      v10 = *(int **)(a1 + 88);
      v11 = *v10;
      if ( v9 < v9 + 2 * v11 )
      {
        *v10 = v11 - 1;
LABEL_11:
        v12 = *(_WORD ***)(a1 + 64);
        v13 = (*v12)++;
        result = a2;
        *v13 = a2;
        return result;
      }
      v14 = (__int64)(2 * v11 + v9 - **(_QWORD **)(a1 + 24)) >> 1;
    }
    else
    {
      v14 = 0LL;
    }
    v15 = 32LL;
    if ( v14 >> 1 < 0x20 || (v15 = v14 >> 1) != 0 )
    {
      do
      {
        if ( 0x7FFFFFFF - v15 >= v14 )
          break;
        v15 >>= 1;
      }
      while ( v15 );
    }
    if ( v15 )
    {
      v16 = v15 + v14;
      v17 = 0LL;
      if ( v15 + v14 )
      {
        if ( v16 > 0x7FFFFFFFFFFFFFFFLL || (v17 = (__int64)operator new(2 * v16)) == 0 )
          std::_Xbad_alloc();
      }
      v18 = *(const void ***)(a1 + 24);
      v19 = (void *)*v18;
      if ( v14 )
      {
        memcpy_0((void *)v17, *v18, 2 * v14);
        *(_QWORD *)(a1 + 104) = v17 + 2 * ((__int64)(*(_QWORD *)(a1 + 104) - (_QWORD)v19) >> 1);
        v23 = v17 + 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v19) >> 1);
        v24 = (__int64)(2 * v16 - 2 * ((__int64)(**(_QWORD **)(a1 + 64) - (_QWORD)v19) >> 1)) >> 1;
        **(_QWORD **)(a1 + 32) = v17 + 2 * ((__int64)(**(_QWORD **)(a1 + 32) - (_QWORD)v19) >> 1);
        **(_QWORD **)(a1 + 64) = v23;
        **(_DWORD **)(a1 + 88) = v24;
        if ( (*(_BYTE *)(a1 + 112) & 4) == 0 )
        {
          v25 = **(_QWORD **)(a1 + 64);
          v26 = (__int64)(**(_QWORD **)(a1 + 56) - (_QWORD)v19) >> 1;
          **(_QWORD **)(a1 + 24) = v17;
          v27 = v17 + 2 * v26;
          **(_QWORD **)(a1 + 56) = v27;
          **(_DWORD **)(a1 + 80) = (v25 - v27 + 2) >> 1;
          goto LABEL_30;
        }
        **(_QWORD **)(a1 + 24) = v17;
        v22 = *(__int64 **)(a1 + 56);
      }
      else
      {
        v20 = *(__int64 **)(a1 + 32);
        *(_QWORD *)(a1 + 104) = v17;
        *v20 = v17;
        **(_QWORD **)(a1 + 64) = v17;
        **(_DWORD **)(a1 + 88) = v16;
        v21 = *(_DWORD *)(a1 + 112);
        **(_QWORD **)(a1 + 24) = v17;
        v22 = *(__int64 **)(a1 + 56);
        if ( (v21 & 4) == 0 )
        {
          *v22 = v17;
          **(_DWORD **)(a1 + 80) = 1;
LABEL_30:
          v28 = *(_DWORD *)(a1 + 112);
          if ( (v28 & 1) != 0 )
          {
            operator delete(v19);
            v28 = *(_DWORD *)(a1 + 112);
          }
          *(_DWORD *)(a1 + 112) = v28 | 1;
          --**(_DWORD **)(a1 + 88);
          goto LABEL_11;
        }
      }
      *v22 = 0LL;
      **(_DWORD **)(a1 + 80) = v17 >> 1;
      goto LABEL_30;
    }
  }
  return 0xFFFFLL;
}
