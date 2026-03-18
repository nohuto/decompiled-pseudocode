/*
 * XREFs of DpiAgpSetAgpCommand @ 0x1C02AD210
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DpiAgpSetAgpCommand(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  unsigned int (__fastcall *v4)(_QWORD); // rax
  unsigned int v5; // ebx
  __int64 v6; // rax

  v3 = *(_QWORD *)(a1 + 64);
  if ( v3
    && *(_DWORD *)(v3 + 16) == 1953656900
    && *(_DWORD *)(v3 + 20) == 2
    && (v4 = *(unsigned int (__fastcall **)(_QWORD))(v3 + 752)) != 0LL )
  {
    return v4(*(_QWORD *)(v3 + 680));
  }
  else
  {
    v5 = -1073741811;
    v6 = WdLogNewEntry5_WdError(v3, a2, a3);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v6);
  }
  return v5;
}
