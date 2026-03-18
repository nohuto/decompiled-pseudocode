/*
 * XREFs of IopSetEnvironmentVariableTrEE @ 0x14085BF40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     IopIssueTrEERequest @ 0x14029BC60 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_4 @ 0x14029BD54 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x14085AF20 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopSetEnvironmentVariableTrEE(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        _OWORD *a4,
        void *Src,
        size_t Size,
        int a7)
{
  __int64 v11; // rax
  size_t v12; // rbp
  unsigned int v13; // ebx
  unsigned int v14; // r14d
  char *Pool_4; // rax
  __int64 v16; // rdi
  int v17; // ebx
  int v18; // edx
  int v19; // ecx
  unsigned __int64 v21; // [rsp+50h] [rbp-38h] BYREF

  v21 = 0LL;
  v11 = -1LL;
  do
    ++v11;
  while ( a3[v11] );
  v12 = (unsigned int)Size;
  v13 = 2 * v11 + 2;
  v14 = v13 + Size + 36;
  Pool_4 = (char *)IopVerifierExAllocatePool_4(0LL, v14);
  v16 = (__int64)Pool_4;
  if ( Pool_4 )
  {
    v18 = a7;
    v19 = a7 | 6;
    *(_OWORD *)(Pool_4 + 4) = *a4;
    *(_DWORD *)Pool_4 = 36;
    if ( (v18 & 1) == 0 )
      v19 = v18;
    *((_DWORD *)Pool_4 + 5) = v19;
    memmove(Pool_4 + 36, a3, v13);
    *(_DWORD *)(v16 + 32) = v13 + 36;
    *(_QWORD *)(v16 + 24) = v12;
    memmove((void *)(v16 + v13 + 36), Src, v12);
    v17 = IopIssueTrEERequest(2, a1, a2, v16, v14, (__int64)&v21, 8u, 8u, (int *)&Size);
    if ( v17 >= 0 && v21 )
      v17 = IopEfiStatusToNTSTATUS(v21);
    ExFreePoolWithTag((PVOID)v16, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v17;
}
