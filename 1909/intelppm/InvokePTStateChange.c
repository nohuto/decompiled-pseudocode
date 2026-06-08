/*
 * XREFs of InvokePTStateChange @ 0x1C00018CC
 * Callers:
 *     PerfControlPTStates @ 0x1C0001830 (PerfControlPTStates.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InvokePTStateChange(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 (__fastcall **v3)(__int64, _QWORD, _QWORD, _QWORD); // r9
  __int64 v4; // rcx

  v3 = (__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))a1;
  if ( *(_BYTE *)(a2 + 25) == 1 )
  {
    v4 = *(_QWORD *)(a1 + 40);
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 48);
    ++v3;
  }
  return (*v3)(v4, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), a3);
}
