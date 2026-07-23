/*
 * XREFs of sub_180083400 @ 0x180083400
 * Callers:
 *     sub_18002C944 @ 0x18002C944 (sub_18002C944.c)
 *     sub_180083398 @ 0x180083398 (sub_180083398.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A0100 (_guard_dispatch_icall_nop.c)
 *     sub_1800D9A8C @ 0x1800D9A8C (sub_1800D9A8C.c)
 *     sub_1800D9F98 @ 0x1800D9F98 (sub_1800D9F98.c)
 */

__int64 __fastcall sub_180083400(__int64 a1)
{
  int v3; // esi
  __int64 *v4; // rbx
  void (__fastcall *v5)(_QWORD, _QWORD, _QWORD, __int64); // rax

  if ( (NtCurrentPeb()->NtGlobalFlag & 0x100) == 0 )
    return 0LL;
  v3 = 0;
  RtlEnterCriticalSection(&stru_1801645E0);
  if ( !(unsigned __int8)sub_1800D9F98(*(_QWORD *)(a1 + 48)) )
  {
    v3 = sub_1800D9A8C(a1);
    if ( v3 >= 0 )
    {
      v4 = (__int64 *)qword_180164610;
      while ( v4 != &qword_180164610 )
      {
        v5 = (void (__fastcall *)(_QWORD, _QWORD, _QWORD, __int64))v4[6];
        v4 = (__int64 *)*v4;
        if ( v5 )
          v5(*(_QWORD *)(a1 + 96), *(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), a1);
      }
    }
  }
  RtlLeaveCriticalSection(&stru_1801645E0);
  return (unsigned int)v3;
}
