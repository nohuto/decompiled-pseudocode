/*
 * XREFs of IopProcessWorkItem @ 0x140006640
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     PsImpersonateContainerOfThread @ 0x14005AE90 (PsImpersonateContainerOfThread.c)
 *     PspRevertContainerImpersonation @ 0x14005B390 (PspRevertContainerImpersonation.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwTraceThreadWorkItem @ 0x140310950 (EtwTraceThreadWorkItem.c)
 */

struct _KTHREAD *__fastcall IopProcessWorkItem(__int64 a1)
{
  _WORD *v1; // rbp
  void (__fastcall *v3)(_WORD *, __int64, __int64); // rdi
  int v4; // r14d
  __int64 v5; // rcx
  void *v6; // rsi
  __int64 v7; // rdx
  struct _KTHREAD *result; // rax
  _WORD *v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-38h] BYREF

  v1 = *(_WORD **)(a1 + 40);
  v3 = *(void (__fastcall **)(_WORD *, __int64, __int64))(a1 + 32);
  v4 = 0;
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
    EtwTraceThreadWorkItem(v3, 1344LL);
  v7 = *(_QWORD *)(a1 + 48);
  if ( *(_DWORD *)(a1 + 64) )
  {
    v3(v1, v7, a1);
  }
  else
  {
    if ( *v1 == 3 )
      v9 = v1;
    else
      v9 = 0LL;
    ((void (__fastcall *)(_WORD *, __int64))v3)(v9, v7);
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x8000000) != 0 )
    EtwTraceThreadWorkItem(v3, 1345LL);
  ObfDereferenceObjectWithTag(v1, 0x746C6644u);
  if ( v4 )
    KeGetCurrentThread()[1].WaitBlock[0].SparePtr = 0LL;
  if ( v6 )
  {
    PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread());
    ObfDereferenceObjectWithTag(v6, 0x746C6644u);
  }
  result = KeGetCurrentThread();
  if ( result->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, (ULONG_PTR)v3, KeGetCurrentThread()->ApcStateIndex, KeGetCurrentThread()->CombinedApcDisable, 0LL);
  return result;
}
