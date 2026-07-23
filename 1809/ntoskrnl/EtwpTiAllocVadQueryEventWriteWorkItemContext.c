/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140312D40
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140312F14 (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpTiAllocVadQueryEventWriteWorkItemContext(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        _QWORD *a8)
{
  unsigned int v8; // r14d
  __int64 v9; // rbp
  unsigned int v10; // r11d
  __int64 v11; // rbx
  void *v12; // r12
  _DWORD *v14; // r9
  unsigned int v15; // ecx
  unsigned int v16; // edx
  int v17; // eax
  __int64 result; // rax
  unsigned int v19; // eax
  unsigned int v20; // esi
  bool v21; // cf
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned __int64 v24; // rcx
  _QWORD *PoolWithTag; // rax
  _QWORD *v26; // rbx
  char *v27; // rdi
  const void **v28; // rsi
  __int64 v29; // r12
  int v30; // eax
  __int64 v31; // rcx
  __int64 v32; // rax
  void *v33; // rcx

  v8 = 0;
  v9 = a3;
  v10 = 0;
  v11 = a2;
  v12 = a4;
  if ( !a3 )
  {
LABEL_7:
    v19 = 16 * v11;
    if ( (unsigned __int64)(16 * v11) > 0xFFFFFFFF )
    {
      v21 = 1;
    }
    else
    {
      v20 = 2 * v11;
      if ( v19 >= 0xFFFFFFB0 )
        return 3221225621LL;
      v22 = v19 + 80;
      v21 = v22 + v8 < v22;
      if ( v22 + v8 >= v22 )
      {
        v23 = v19 + 80 + v8;
        v24 = 8LL * a6;
        if ( v24 <= 0xFFFFFFFF )
        {
          v21 = v23 + (unsigned int)v24 < v23;
          if ( v23 + (unsigned int)v24 >= v23 )
          {
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v23 + (unsigned int)v24, 0x6E734954u);
            v26 = PoolWithTag;
            if ( !PoolWithTag )
              return 3221225495LL;
            PoolWithTag[4] = PoolWithTag + 10;
            v27 = (char *)&PoolWithTag[v20 + 10];
            PoolWithTag[5] = v27;
            PoolWithTag[9] = &v27[v8];
            if ( (_DWORD)v9 )
            {
              v28 = (const void **)(a1 + 8);
              v29 = v9;
              do
              {
                memmove(v27, *(v28 - 1), *(unsigned int *)v28);
                v30 = *(_DWORD *)v28;
                v31 = (__int64)v28 + v26[4] - a1 - 8;
                *(_DWORD *)(v31 + 12) = 0;
                *(_QWORD *)v31 = v27;
                *(_DWORD *)(v31 + 8) = v30;
                v32 = *(unsigned int *)v28;
                v28 += 2;
                v27 += v32;
                --v29;
              }
              while ( v29 );
              v12 = a4;
            }
            *((_DWORD *)v26 + 12) = v9;
            ObfReferenceObjectWithTag(v12, 0x69547445u);
            v33 = (void *)v26[9];
            v26[8] = v12;
            memmove(v33, Src, 8 * a6);
            *((_DWORD *)v26 + 13) = a6;
            v26[7] = a7;
            *a8 = v26;
            return 0LL;
          }
        }
        else
        {
          v21 = 1;
        }
      }
    }
    return v21 ? 0xC0000095 : 0;
  }
  v14 = (_DWORD *)(a1 + 8);
  while ( 1 )
  {
    v15 = v8;
    v16 = v8 + *v14;
    v17 = -1;
    if ( v16 >= v8 )
      v17 = v8 + *v14;
    v8 = v17;
    result = v16 < v15 ? 0xC0000095 : 0;
    if ( v16 < v15 )
      return result;
    ++v10;
    v14 += 4;
    if ( v10 >= a3 )
      goto LABEL_7;
  }
}
