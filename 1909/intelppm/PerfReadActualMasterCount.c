/*
 * XREFs of PerfReadActualMasterCount @ 0x1C000E4D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfReadActualMasterCount(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  char v6; // bl
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+60h] [rbp+18h] BYREF

  v6 = a2;
  LOBYTE(a2) = 1;
  (*(void (__fastcall **)(_QWORD, __int64, __int64 *, __int64 *))(a1 + 48))(*(_QWORD *)(a1 + 56), a2, &v10, &v11);
  v8 = *(_QWORD *)(a1 + 24);
  if ( !v6 )
  {
    v8 += v10;
    *(_QWORD *)(a1 + 16) += v11;
    *(_QWORD *)(a1 + 24) = v8;
  }
  *a3 = v8;
  result = *(_QWORD *)(a1 + 16);
  *a4 = result;
  return result;
}
