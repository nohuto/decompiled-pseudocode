/*
 * XREFs of InvokePTStateChange @ 0x1C00018A0
 * Callers:
 *     PerfControlPTStates @ 0x1C0001800 (PerfControlPTStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, __int64 a2, char a3)
{
  __int64 (__fastcall **v3)(__int64, _QWORD, _QWORD, _QWORD); // r9
  __int64 v4; // rcx
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD, _QWORD); // rax

  v3 = (__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a1;
  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 40);
    ++v3;
  }
  v5 = *v3;
  LOBYTE(v3) = a3;
  return v5(v4, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), v3);
}
