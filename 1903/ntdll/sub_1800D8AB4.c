/*
 * XREFs of sub_1800D8AB4 @ 0x1800D8AB4
 * Callers:
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     DbgPrint @ 0x180053DA0 (DbgPrint.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800D9B68 @ 0x1800D9B68 (sub_1800D9B68.c)
 *     sub_1800D9F98 @ 0x1800D9F98 (sub_1800D9F98.c)
 */

int __fastcall sub_1800D8AB4(__int64 a1)
{
  struct _PEB *v1; // rax
  __int64 *v3; // rdi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, __int64); // rax

  v1 = NtCurrentPeb();
  if ( (v1->NtGlobalFlag & 0x100) != 0 && byte_18017A299 )
  {
    RtlEnterCriticalSection(&stru_1801645E0);
    if ( (unsigned __int8)sub_1800D9F98(*(_QWORD *)(a1 + 48)) )
    {
      DbgPrint("AVRF: AVrfDllUnloadNotification called for a provider (%p) \n", (const void *)a1);
      __debugbreak();
    }
    if ( (int)sub_1800D9B68(a1) >= 0 )
    {
      v3 = (__int64 *)qword_180164610;
      while ( v3 != &qword_180164610 )
      {
        v4 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v3[7];
        v3 = (__int64 *)*v3;
        if ( v4 )
          v4(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
    LODWORD(v1) = RtlLeaveCriticalSection(&stru_1801645E0);
  }
  return (int)v1;
}
