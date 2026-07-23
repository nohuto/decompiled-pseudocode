/*
 * XREFs of EtwpPreserveLogger @ 0x1408CB38C
 * Callers:
 *     EtwpKsrCallback @ 0x1408CB240 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1408CBCA4 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140015524 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x1400DD35C (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x14069B7E8 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1408CB074 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x1408CB5B4 (EtwpPreserveMdlList.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __m128i *v1; // rbp
  PVOID v4; // r14
  SIZE_T v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // ebx
  _DWORD *PoolWithTag; // rax
  _DWORD *v10; // rsi
  int v11; // ebx
  unsigned int *v12; // rax
  unsigned int *v13; // r15
  __int128 v14; // xmm6
  __int64 v15; // r12
  __int64 *v16; // rdi
  _QWORD *v17; // r13
  _QWORD *v18; // rax
  unsigned int v19; // [rsp+80h] [rbp+8h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(__m128i **)(a1 + 1072);
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  v6 = v1[1];
  if ( ((v5 * (unsigned int)(*(_DWORD *)(a1 + 248) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v19 = v7 + 18;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v19, 0x4B777445u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v19);
    v10[2] = *(_DWORD *)(a1 + 4);
    v10[3] = 16;
    memmove(v10 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    v12 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4B777445u);
    v13 = v12;
    if ( !v12 )
    {
      v11 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(v10, 0);
      return (unsigned int)v11;
    }
    EtwpInitializeBufferHeader((__int16 *)a1, v12);
    EtwpResetBufferHeader((__int64)v13, 4);
    v14 = *(_OWORD *)(a1 + 168);
    *(__m128i *)(a1 + 168) = v6;
    EtwpAddLogHeader(a1, v13);
    *(_OWORD *)(a1 + 168) = v14;
    v11 = EtwpBuildMdlForTraceBuffer(v13, (struct _MDL **)&P);
    if ( v11 >= 0 )
    {
      ++v10[1];
      v15 = a1 + 96;
      v16 = *(__int64 **)(a1 + 96);
      v4 = P;
      if ( v16 == (__int64 *)v15 )
        v16 = 0LL;
      if ( v16 )
      {
        v17 = P;
        while ( 1 )
        {
          v11 = EtwpBuildMdlForTraceBuffer((_DWORD *)v16[2], (struct _MDL **)&P);
          if ( v11 < 0 )
            break;
          v18 = P;
          *v17 = P;
          v17 = v18;
          ++v10[1];
          v16 = (__int64 *)*v16;
          if ( v16 == (__int64 *)v15 )
            v16 = 0LL;
          if ( !v16 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v11 = EtwpPreserveMdlList(v4, v10, v19, v1);
        if ( v11 >= 0 )
        {
          v1->m128i_i64[1] = (__int64)v13;
          v1[2].m128i_i8[1] = 1;
          goto LABEL_21;
        }
      }
    }
    ExFreePoolWithTag(v13, 0);
LABEL_21:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_23;
  }
  return (unsigned int)-1073741670;
}
