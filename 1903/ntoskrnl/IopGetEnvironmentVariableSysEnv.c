/*
 * XREFs of IopGetEnvironmentVariableSysEnv @ 0x14085BF50
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     IopVerifierExAllocatePool_4 @ 0x14029BFF4 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085C244 (IopIssueSystemEnvironmentRequest.c)
 */

__int64 __fastcall IopGetEnvironmentVariableSysEnv(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        __int128 *a4,
        void *a5,
        unsigned int *a6,
        _DWORD *a7)
{
  __int64 v7; // rax
  unsigned int v10; // ebx
  ULONG InputBufferLength; // ebp
  char *Pool_4; // rax
  _DWORD *InputBuffer; // rsi
  unsigned int v14; // ebx
  __int128 v15; // xmm0
  ULONG v16; // ebx
  __int64 v17; // rcx
  _DWORD *Context; // rdi
  int v19; // eax
  unsigned int v20; // edx
  unsigned int v21; // eax
  __int64 v23; // [rsp+50h] [rbp-28h] BYREF

  v7 = -1LL;
  do
    ++v7;
  while ( a3[v7] );
  v10 = 2 * v7 + 2;
  InputBufferLength = 2 * v7 + 22;
  Pool_4 = (char *)IopVerifierExAllocatePool_4(a1, InputBufferLength);
  InputBuffer = Pool_4;
  if ( Pool_4 )
  {
    memmove(Pool_4 + 20, a3, v10);
    v15 = *a4;
    InputBuffer[4] = v10;
    *(_OWORD *)InputBuffer = v15;
    v16 = *a6 + 8;
    Context = IopVerifierExAllocatePool_4(v17, v16);
    if ( !Context )
    {
      v14 = -1073741670;
LABEL_17:
      ExFreePoolWithTag(InputBuffer, 0);
      return v14;
    }
    v19 = IopIssueSystemEnvironmentRequest(0x520004u, InputBuffer, InputBufferLength, Context, v16, (__int64)&v23);
    v14 = v19;
    if ( v19 < 0 )
    {
      if ( v19 != -1073741789 )
      {
LABEL_16:
        ExFreePoolWithTag(Context, 0);
        goto LABEL_17;
      }
      v21 = v23 - 8;
    }
    else
    {
      if ( a7 )
        *a7 = *Context;
      v20 = *a6;
      if ( *a6 >= Context[1] )
        v20 = Context[1];
      memmove(a5, Context + 2, v20);
      v21 = Context[1];
    }
    *a6 = v21;
    goto LABEL_16;
  }
  return (unsigned int)-1073741670;
}
