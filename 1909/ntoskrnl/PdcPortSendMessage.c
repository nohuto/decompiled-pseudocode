/*
 * XREFs of PdcPortSendMessage @ 0x1408D8A90
 * Callers:
 *     PdcNotificationClientAcknowledge @ 0x1408D8C98 (PdcNotificationClientAcknowledge.c)
 *     PdcpNotificationClientCallback @ 0x1408D8FE0 (PdcpNotificationClientCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PdcPortSendMessage(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    *(_DWORD *)(a2 + 44) = 5;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 32))(*(_QWORD *)(a1 + 24), a2, 800LL);
    ExReleaseRundownProtection_0(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
