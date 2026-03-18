/*
 * XREFs of EtwpUMGLEnabled @ 0x1408F1EEC
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1408F5828 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
