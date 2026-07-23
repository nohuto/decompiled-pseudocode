/*
 * XREFs of EtwpUMGLEnabled @ 0x1408B69EC
 * Callers:
 *     EtwQueryPerformanceTraceInformation @ 0x1408BA620 (EtwQueryPerformanceTraceInformation.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

unsigned __int8 __fastcall EtwpUMGLEnabled(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _EX_RUNDOWN_REF *v3; // rsi
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 *v6; // rcx
  _BYTE v8[48]; // [rsp+30h] [rbp-48h] BYREF

  v2 = *(_QWORD *)(BugCheckParameter1 + 1016);
  if ( !v2 )
    return 0;
  v3 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
    return 0;
  KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v8);
  v4 = _bittest((const signed __int32 *)(v2 + 888), 0);
  v5 = 0LL;
  v6 = *(__int64 **)(BugCheckParameter1 + 1064);
  if ( v6 )
    v5 = *v6;
  if ( v5 && (v4 || _bittest((const signed __int32 *)(v5 + 576), 0)) )
    v4 = 1;
  KiUnstackDetachProcess((__int64)v8, 0LL);
  ExReleaseRundownProtection_0(v3);
  return v4;
}
