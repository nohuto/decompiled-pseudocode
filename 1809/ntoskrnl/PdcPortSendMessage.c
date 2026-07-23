/*
 * XREFs of PdcPortSendMessage @ 0x14089B860
 * Callers:
 *     PdcNotificationClientAcknowledge @ 0x14089BA5C (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x14089BEB0 (PdcpNotificationClientCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14004D320 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessage(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    *(_DWORD *)(a2 + 44) = 4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 32))(*(_QWORD *)(a1 + 24), a2, 800LL);
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
