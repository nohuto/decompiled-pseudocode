/*
 * XREFs of NtGdiDdDDIGetDeviceState @ 0x1C00639F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSurfaceAccessCheck @ 0x1C0023F60 (UserSurfaceAccessCheck.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIGetDeviceState(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rax
  int v7; // edi
  __int64 v8; // rcx

  v5 = (_QWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v5 = (_QWORD *)MmUserProbeAddress;
  if ( HIDWORD(*v5) != 3 )
    return ((__int64 (__fastcall *)(ULONG64, const ULONG64, __int64, __int64, _QWORD, _QWORD, _QWORD))qword_1C01CD800)(
             a1,
             MmUserProbeAddress,
             a3,
             a4,
             *v5,
             v5[1],
             v5[2]);
  v7 = 0;
  v8 = 0LL;
  if ( grpdeskRitInput )
    v8 = ***((_QWORD ***)grpdeskRitInput + 1);
  if ( !(unsigned int)UserSurfaceAccessCheck(v8) )
    v7 = 1;
  *(_DWORD *)(a1 + 8) = v7;
  return 0LL;
}
