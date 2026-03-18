/*
 * XREFs of EtwpUpdateProcessTracingCallback @ 0x1408F2860
 * Callers:
 *     EtwpUpdatePerProcessTracing @ 0x1408F2730 (EtwpUpdatePerProcessTracing.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall EtwpUpdateProcessTracingCallback(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  __int64 v4; // rsi
  char v5; // r8
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 *v8; // rcx
  _BYTE v10[48]; // [rsp+28h] [rbp-50h] BYREF

  memset(v10, 0, sizeof(v10));
  v4 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( v4 && ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v10);
    v5 = *(_BYTE *)(a2 + 4);
    v6 = *(_DWORD *)a2;
    if ( v5 )
      _interlockedbittestandset((volatile signed __int32 *)(v4 + 888), v6);
    else
      _interlockedbittestandreset((volatile signed __int32 *)(v4 + 888), v6);
    v7 = 0LL;
    v8 = *(__int64 **)(BugCheckParameter1 + 1064);
    if ( v8 )
      v7 = *v8;
    if ( v7 )
    {
      if ( v5 )
        _interlockedbittestandset((volatile signed __int32 *)(v7 + 576), v6);
      else
        _interlockedbittestandreset((volatile signed __int32 *)(v7 + 576), v6);
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v10, 0);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  }
  return 0LL;
}
