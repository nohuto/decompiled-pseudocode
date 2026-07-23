/*
 * XREFs of PfSnBuildDumpFromTrace @ 0x14066A8B8
 * Callers:
 *     PfSnEndTrace @ 0x14066A514 (PfSnEndTrace.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PfVerifyTraceBuffer @ 0x14066AAF4 (PfVerifyTraceBuffer.c)
 */

__int64 __fastcall PfSnBuildDumpFromTrace(PVOID *a1, __int64 a2)
{
  int v2; // r12d
  PVOID *v4; // r15
  SIZE_T v5; // rdi
  char *PoolWithTag; // rax
  char *v7; // rbx
  char *v8; // r14
  char *v9; // r13
  __int64 *v10; // rbp
  int v11; // edi
  __int64 *v12; // rdx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  int v15; // eax
  __int64 v16; // rdx
  unsigned int v17; // edi
  char v20; // [rsp+68h] [rbp+10h] BYREF

  *a1 = 0LL;
  v2 = 0;
  v4 = a1;
  if ( *(int *)(a2 + 332) < 32 )
  {
    v17 = -1073741789;
    goto LABEL_11;
  }
  if ( (*(_BYTE *)(a2 + 484) & 2) != 0 )
  {
    v17 = -1072103399;
LABEL_11:
    v7 = 0LL;
    goto LABEL_12;
  }
  v5 = ((16 * (*(_DWORD *)(a2 + 120) + *(_DWORD *)(a2 + 344)) + 215) & 0xFFFFFFF8)
     + 8 * (*(_DWORD *)(a2 + 480) + 2 * (*(_DWORD *)(a2 + 480) + 1));
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x44506343u);
  *v4 = PoolWithTag;
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)v5);
    v8 = v7 + 16;
    *((_DWORD *)v7 + 4) = 30;
    *((_DWORD *)v7 + 5) = 1128485697;
    v9 = (char *)((unsigned __int64)(v7 + 231) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_OWORD *)(v7 + 28) = *(_OWORD *)(a2 + 24);
    *(_OWORD *)(v7 + 44) = *(_OWORD *)(a2 + 40);
    *(_OWORD *)(v7 + 60) = *(_OWORD *)(a2 + 56);
    *(_OWORD *)(v7 + 76) = *(_OWORD *)(a2 + 72);
    *((_DWORD *)v7 + 23) = *(_DWORD *)(a2 + 88);
    *((_QWORD *)v7 + 21) = *(_QWORD *)(a2 + 464);
    *((_QWORD *)v7 + 15) = *(_QWORD *)(a2 + 200);
    *((_DWORD *)v7 + 44) ^= (*((_DWORD *)v7 + 44) ^ *(unsigned __int16 *)(a2 + 484)) & 1;
    *((_DWORD *)v7 + 44) ^= ((unsigned __int8)*((_DWORD *)v7 + 44) ^ (unsigned __int8)(2 * *(_WORD *)(a2 + 486))) & 2;
    *((_DWORD *)v7 + 24) = (((_DWORD)v7 + 231) & 0xFFFFFFF8) - ((_DWORD)v7 + 16);
    v10 = *(__int64 **)(a2 + 104);
    if ( v10 != (__int64 *)(a2 + 104) )
    {
      do
      {
        v11 = *((_DWORD *)v10 + 4);
        v12 = v10;
        v10 = (__int64 *)*v10;
        memmove(v9, v12 + 3, (unsigned int)(16 * v11));
        v9 += (unsigned int)(16 * v11);
        v2 += v11;
      }
      while ( v10 != (__int64 *)(a2 + 104) );
      v4 = a1;
    }
    *((_DWORD *)v7 + 25) = v2;
    *((_DWORD *)v7 + 26) = *(_DWORD *)(a2 + 332);
    v13 = (((_DWORD)v9 + 7) & 0xFFFFFFF8) - (_DWORD)v8;
    *((_DWORD *)v7 + 27) = *(_DWORD *)(a2 + 336);
    *((_OWORD *)v7 + 8) = *(_OWORD *)(a2 + 284);
    *((_OWORD *)v7 + 9) = *(_OWORD *)(a2 + 300);
    *((_QWORD *)v7 + 20) = *(_QWORD *)(a2 + 316);
    *((_DWORD *)v7 + 28) = v13;
    v14 = 24 * *(_DWORD *)(a2 + 480);
    memmove((void *)((unsigned __int64)(v9 + 7) & 0xFFFFFFFFFFFFFFF8uLL), *(const void **)(a2 + 472), v14);
    v15 = *(_DWORD *)(a2 + 480);
    v16 = v13 + v14;
    *((_DWORD *)v8 + 2) = v16;
    *((_DWORD *)v8 + 25) = v15;
    if ( (unsigned __int8)PfVerifyTraceBuffer(v8, v16, &v20) )
      return 0;
    v7 = (char *)*v4;
    v17 = -1073741823;
  }
  else
  {
    v17 = -1073741670;
  }
LABEL_12:
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *v4 = 0LL;
  }
  return v17;
}
