/*
 * XREFs of EtwpPreserveLogger @ 0x14090761C
 * Callers:
 *     EtwpKsrCallback @ 0x1409074E0 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x140908100 (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140003A68 (EtwpResetBufferHeader.c)
 *     EtwpInitializeBufferHeader @ 0x140108BA8 (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpAddLogHeader @ 0x1406B91F0 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x140907288 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x140907840 (EtwpPreserveMdlList.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __int64 v1; // rbp
  PVOID v4; // r14
  SIZE_T v5; // r15
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rsi
  int v8; // ebx
  unsigned int *v9; // rax
  unsigned int *v10; // r15
  __int128 v11; // xmm6
  __int64 v12; // r12
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rdi
  _QWORD *v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rax
  void *Src[2]; // [rsp+20h] [rbp-58h]
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 1104);
  if ( *(_BYTE *)(v1 + 33) )
    return 0LL;
  v4 = 0LL;
  v5 = *(unsigned int *)(a1 + 4);
  *(_OWORD *)Src = *(_OWORD *)(v1 + 16);
  if ( ((v5 * (unsigned int)(*(_DWORD *)(a1 + 248) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)LOWORD(Src[0]) + 18, 0x4B777445u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, (unsigned int)LOWORD(Src[0]) + 18);
    v7[2] = *(_DWORD *)(a1 + 4);
    v7[3] = 16;
    memmove(v7 + 4, Src[1], (unsigned int)LOWORD(Src[0]) + 2);
    v9 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x4B777445u);
    v10 = v9;
    if ( !v9 )
    {
      v8 = -1073741801;
LABEL_23:
      ExFreePoolWithTag(v7, 0);
      return (unsigned int)v8;
    }
    EtwpInitializeBufferHeader((__int16 *)a1, v9);
    EtwpResetBufferHeader((__int64)v10, 4);
    v11 = *(_OWORD *)(a1 + 168);
    *(_OWORD *)(a1 + 168) = *(_OWORD *)Src;
    EtwpAddLogHeader(a1, v10);
    *(_OWORD *)(a1 + 168) = v11;
    v8 = EtwpBuildMdlForTraceBuffer(v10, (struct _MDL **)&P);
    if ( v8 >= 0 )
    {
      ++v7[1];
      v12 = a1 + 96;
      v13 = *(_QWORD *)(a1 + 96);
      v4 = P;
      v14 = v13 == a1 + 96;
      v15 = v13 - 56;
      if ( v14 )
        v15 = 0LL;
      if ( v15 )
      {
        v16 = P;
        while ( 1 )
        {
          v8 = EtwpBuildMdlForTraceBuffer((_DWORD *)v15, (struct _MDL **)&P);
          if ( v8 < 0 )
            break;
          v17 = P;
          *v16 = P;
          v16 = v17;
          ++v7[1];
          v18 = *(_QWORD *)(v15 + 56);
          v15 = v18 - 56;
          if ( v18 == v12 )
            v15 = 0LL;
          if ( !v15 )
            goto LABEL_18;
        }
      }
      else
      {
LABEL_18:
        v8 = EtwpPreserveMdlList(v4, v7, (unsigned int)LOWORD(Src[0]) + 18, v1);
        if ( v8 >= 0 )
        {
          *(_QWORD *)(v1 + 8) = v10;
          *(_BYTE *)(v1 + 33) = 1;
          goto LABEL_21;
        }
      }
    }
    ExFreePoolWithTag(v10, 0);
LABEL_21:
    if ( v4 )
      ExFreePoolWithTag(v4, 0);
    goto LABEL_23;
  }
  return (unsigned int)-1073741670;
}
