/*
 * XREFs of InvokePTStateChangeHidden @ 0x1C0004878
 * Callers:
 *     PerfControlPTStatesHiddenSwAll @ 0x1C0004990 (PerfControlPTStatesHiddenSwAll.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChangeHidden(__int64 a1, _QWORD *a2, __int64 a3, char a4)
{
  __int64 (__fastcall *v4)(__int64, __int64, _QWORD, _QWORD, char); // rax
  __int64 v5; // rdx

  if ( *(_BYTE *)(a3 + 25) == 1 )
  {
    v4 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, char))a2[3];
    v5 = a2[4];
  }
  else
  {
    v4 = (__int64 (__fastcall *)(__int64, __int64, _QWORD, _QWORD, char))a2[2];
    v5 = a2[5];
  }
  return v4(a1, v5, *(_QWORD *)a3, *(_QWORD *)(a3 + 8), a4);
}
