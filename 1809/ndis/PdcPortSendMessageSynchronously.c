/*
 * XREFs of PdcPortSendMessageSynchronously @ 0x1C008366C
 * Callers:
 *     PdcTaskClientRequest @ 0x1C01097B8 (PdcTaskClientRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PdcPortSendMessageSynchronously(__int64 a1, __int64 a2)
{
  struct _EX_RUNDOWN_REF *v2; // rdi
  unsigned int v5; // ebx

  v2 = (struct _EX_RUNDOWN_REF *)(a1 + 8);
  if ( ExAcquireRundownProtection((PEX_RUNDOWN_REF)(a1 + 8)) )
  {
    *(_DWORD *)(a2 + 44) = 4;
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(a1 + 40))(*(_QWORD *)(a1 + 24), a2, 800LL);
    ExReleaseRundownProtection(v2);
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
