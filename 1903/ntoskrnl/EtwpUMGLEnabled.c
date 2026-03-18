/*
 * XREFs of EtwpUMGLEnabled @ 0x1408F25DC
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5EB8 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1400438A0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140090690 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x140090AF0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  _BYTE v7[48]; // [rsp+30h] [rbp-48h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 || !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v6 )
    v5 = *v6;
  if ( v5 && (v4 || _bittest((const signed __int32 *)(v5 + 576), 0)) )
    v4 = 1;
  KiUnstackDetachProcess((struct _KTHREAD *)v7, 0);
  ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  return v4;
}
