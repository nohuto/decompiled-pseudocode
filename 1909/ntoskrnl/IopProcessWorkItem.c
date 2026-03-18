/*
 * XREFs of IopProcessWorkItem @ 0x140013BB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     PsImpersonateContainerOfThread @ 0x140047240 (PsImpersonateContainerOfThread.c)
 *     NtRevertContainerImpersonation @ 0x140132B50 (NtRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x14032E0C0 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rbp
  void (__fastcall *v2)(_WORD *, __int64, __int64); // rdi
  int v4; // r14d
  __int64 v5; // rcx
  void *v6; // rsi
  __int64 v7; // rdx
  struct _KTHREAD *result; // rax
  _WORD *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v2 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
  v10 = 0uLL;
  v5 = *(_QWORD *)&NullGuid.Data1 - *(_QWORD *)(a1 + 68);
  if ( !v5 )
    v5 = *(_QWORD *)NullGuid.Data4 - *(_QWORD *)(a1 + 76);
  if ( v5 )
  {
    v4 = 1;
    v10 = *(_OWORD *)(a1 + 68);
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = &v10;
  }
  if ( *(_QWORD *)(a1 + 56) )
  {
    PsImpersonateContainerOfThread();
    v6 = *(void **)(a1 + 56);
    *(_QWORD *)(a1 + 56) = 0LL;
  }
  else
  {
    v6 = 0LL;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v2, 1344LL);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v2(v1, v7, a1);
  }
  else
  {
    if ( *v1 == 3 )
      v9 = v1;
    else
      v9 = 0LL;
    ((void (__fastcall *)(_WORD *, __int64))v2)(v9, v7);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v2, 1345LL);
  ObfDereferenceObject(v1);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
  if ( v6 )
  {
    NtRevertContainerImpersonation();
    ObfDereferenceObject(v6);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v2, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
