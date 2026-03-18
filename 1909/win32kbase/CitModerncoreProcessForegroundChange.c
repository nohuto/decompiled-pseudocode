/*
 * XREFs of CitModerncoreProcessForegroundChange @ 0x1C01C8080
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00835D0 (-CitpProcessForegroundChange@@YAHPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@PEAUtagSHELL_I.c)
 */

LONG_PTR __fastcall CitModerncoreProcessForegroundChange(int a1, int a2, struct tagMONITOR *a3)
{
  void *v3; // rbx
  struct tagPROCESSINFO *v4; // rsi
  struct tagPROCESSINFO *v5; // rdi
  NTSTATUS v7; // eax
  struct _KPROCESS *v8; // rcx
  NTSTATUS v9; // eax
  struct _KPROCESS *v10; // rcx
  __int64 ProcessWin32Process; // rax
  LONG_PTR result; // rax
  PEPROCESS Process; // [rsp+30h] [rbp-10h] BYREF
  PEPROCESS v14; // [rsp+78h] [rbp+38h] BYREF

  v3 = (void *)a2;
  Process = 0LL;
  v4 = 0LL;
  v14 = 0LL;
  v5 = 0LL;
  v7 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  v8 = Process;
  if ( v7 < 0 )
    v8 = 0LL;
  Process = v8;
  v9 = PsLookupProcessByProcessId(v3, &v14);
  v10 = v14;
  if ( v9 < 0 )
    v10 = 0LL;
  v14 = v10;
  if ( Process )
  {
    ProcessWin32Process = PsGetProcessWin32Process(Process);
    v10 = v14;
    v4 = (struct tagPROCESSINFO *)ProcessWin32Process;
  }
  if ( v10 )
    v5 = (struct tagPROCESSINFO *)PsGetProcessWin32Process(v10);
  result = CitpProcessForegroundChange(v5, 0LL, v4, a3, 0LL);
  if ( v14 )
    result = ObfDereferenceObject(v14);
  if ( Process )
    return ObfDereferenceObject(Process);
  return result;
}
