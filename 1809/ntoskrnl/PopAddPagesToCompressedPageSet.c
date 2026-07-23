/*
 * XREFs of PopAddPagesToCompressedPageSet @ 0x14056BC20
 * Callers:
 *     PopWriteHiberImage @ 0x14056B4C8 (PopWriteHiberImage.c)
 *     PopCompressHiberBlocks @ 0x14056BB70 (PopCompressHiberBlocks.c)
 * Callees:
 *     RtlCompressBufferProgress @ 0x1401439F8 (RtlCompressBufferProgress.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

const void *__fastcall PopAddPagesToCompressedPageSet(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        const void *a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  int v7; // esi
  const void *v8; // r15
  unsigned int v10; // edi
  void *v13; // rbp
  unsigned __int64 v14; // rbx
  int v15; // ecx
  unsigned __int64 v16; // rax
  const void *result; // rax
  unsigned int v18; // r9d
  __int64 v19; // r8
  int v20; // r10d
  unsigned int v21; // edx
  __int64 v22; // [rsp+20h] [rbp-58h]

  v7 = 0;
  v8 = *(const void **)(a2 + 24);
  v10 = a6 << 12;
  if ( v8 )
  {
    if ( a5 )
    {
      v13 = *(void **)a2;
      memmove(*(void **)a2, a4, v10);
    }
    else
    {
      v13 = (void *)a4;
      v18 = *(_DWORD *)(a2 + 120);
      v19 = *((_QWORD *)qword_140418958 + 5) - *((_QWORD *)qword_140418958 + 7);
      if ( v18 && (v20 = *(_DWORD *)(a2 + 124), (int)(100 * v20 / v18) <= dword_140418904) )
      {
        v21 = *((_DWORD *)qword_140418958 + 2);
        if ( v19 >= (__int64)((unsigned __int64)v21 >> 1) )
        {
          *(_DWORD *)(a2 + 124) = v20 + 1;
          LOBYTE(v7) = v19 >= (__int64)((unsigned __int64)(3 * v21) >> 2);
          v7 += 2;
        }
      }
      else
      {
        LOBYTE(v7) = v19 >= (__int64)((unsigned __int64)*((unsigned int *)qword_140418958 + 2) >> 1);
      }
      *(_DWORD *)(a2 + 120) = v18 + 1;
    }
    v14 = __rdtsc();
    v15 = RtlCompressBufferProgress(
            PopCompressMethodMap[v7],
            (int)v13,
            v10,
            (int)v8,
            v22,
            (__int64)&a6,
            *(_QWORD *)(a2 + 16),
            a7,
            a1);
    v16 = __rdtsc();
    *(_QWORD *)(a2 + 40) += (((unsigned __int64)HIDWORD(v16) << 32) | (unsigned int)v16) - v14;
    if ( v15 < 0 || a6 >= (7 * v10) >> 3 )
    {
      a4 = v13;
    }
    else
    {
      v10 = a6;
      a4 = v8;
    }
  }
  result = a4;
  *a3 = (v7 << 30) | ((v10 << 8) | (unsigned __int8)*a3) & 0x3FFFFFFF;
  return result;
}
