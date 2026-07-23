/*
 * XREFs of sub_1800D95E0 @ 0x1800D95E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 */

int __fastcall sub_1800D95E0(__int64 a1, __int64 a2)
{
  struct _PEB *v2; // rax
  __int64 *v5; // rbx
  void (__fastcall *v6)(__int64, __int64); // rax

  v2 = NtCurrentPeb();
  if ( (v2->NtGlobalFlag & 0x100) != 0 && byte_18017A299 )
  {
    RtlEnterCriticalSection(&stru_1801645E0);
    v5 = (__int64 *)qword_180164610;
    while ( v5 != &qword_180164610 )
    {
      v6 = (void (__fastcall *)(__int64, __int64))v5[8];
      v5 = (__int64 *)*v5;
      if ( v6 )
        v6(a1, a2);
    }
    LODWORD(v2) = RtlLeaveCriticalSection(&stru_1801645E0);
  }
  return (int)v2;
}
