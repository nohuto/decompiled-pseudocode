/*
 * XREFs of DbgkpMarkProcessPeb @ 0x140847A20
 * Callers:
 *     DbgkCopyProcessDebugPort @ 0x140677E60 (DbgkCopyProcessDebugPort.c)
 *     DbgkClearProcessDebugObject @ 0x1407296E4 (DbgkClearProcessDebugObject.c)
 *     DbgkpCloseObject @ 0x140847740 (DbgkpCloseObject.c)
 *     DbgkpSetProcessDebugObject @ 0x1408486C0 (DbgkpSetProcessDebugObject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall DbgkpMarkProcessPeb(ULONG_PTR BugCheckParameter1)
{
  _WORD *v2; // rax
  __int16 v3; // cx
  _BYTE v4[48]; // [rsp+28h] [rbp-40h] BYREF

  memset(v4, 0, sizeof(v4));
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768)) )
  {
    if ( *(_QWORD *)(BugCheckParameter1 + 1016) )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v4);
      ExAcquireFastMutex(&DbgkpProcessDebugPortMutex);
      *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL) = *(_QWORD *)(BugCheckParameter1 + 1056) != 0LL;
      v2 = *(_WORD **)(BugCheckParameter1 + 1064);
      if ( v2 )
      {
        v3 = v2[4];
        if ( v3 == 332 || v3 == 452 )
        {
          if ( *(_QWORD *)v2 )
            *(_BYTE *)(*(_QWORD *)v2 + 2LL) = *(_BYTE *)(*(_QWORD *)(BugCheckParameter1 + 1016) + 2LL);
        }
      }
      KeReleaseGuardedMutex(&DbgkpProcessDebugPortMutex);
      KiUnstackDetachProcess((struct _KTHREAD *)v4, 0);
    }
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 768));
  }
}
