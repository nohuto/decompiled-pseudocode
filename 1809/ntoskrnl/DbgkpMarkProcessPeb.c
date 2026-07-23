/*
 * XREFs of DbgkpMarkProcessPeb @ 0x14080FC78
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x14060A650 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1406E2614 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x14080F9A0 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1408108EC (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  _WORD *v3; // rax
  __int16 v4; // cx
  _BYTE v5[48]; // [rsp+28h] [rbp-40h] BYREF

  v2 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 760);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 760)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v5);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v3 = *(_WORD **)(BugCheckParameter1 + 1064);
      if ( v3 )
      {
        v4 = v3[4];
        if ( v4 == 332 || v4 == 452 )
        {
          if ( *(_QWORD *)v3 )
            *(_BYTE *)(*(_QWORD *)v3 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((__int64)v5, 0LL);
    }
    ExReleaseRundownProtection_0(v2);
  }
}
