/*
 * XREFs of DbgkpLkmdSnapKernelStack @ 0x14026DD84
 * Callers:
 *     DbgkpLkmdSnapThreadInContext @ 0x14081322C (DbgkpLkmdSnapThreadInContext.c)
 * Callees:
 *     KeEnumerateKernelStackSegments @ 0x14013D3E8 (KeEnumerateKernelStackSegments.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall DbgkpLkmdSnapKernelStack(__int64 a1, __int64 a2, __int64 a3, char a4, _QWORD *a5, __int64 a6)
{
  __int64 v10; // rbx
  _QWORD *v11; // rcx
  _QWORD v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v14; // [rsp+50h] [rbp-B0h]
  __int64 v15; // [rsp+58h] [rbp-A8h]
  _QWORD v16[8]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[154]; // [rsp+A0h] [rbp-60h] BYREF

  if ( a5 )
    v10 = a5[19];
  else
    v10 = *(_QWORD *)(a3 + 88);
  if ( !a5 && a4 )
  {
    memset(v17, 0, sizeof(v17));
    v17[19] = v10;
    v17[20] = v10;
  }
  v13[0] = a1;
  v13[1] = v10;
  v14 = a4;
  v15 = a6;
  KeEnumerateKernelStackSegments(
    a2,
    (__int64 (__fastcall *)(__int64, _OWORD *, __int64))DbgkpLkmdSnapKernelStackSegmentCallback,
    (__int64)v13);
  if ( a4 )
  {
    v11 = v17;
    if ( a5 )
      v11 = a5;
    v16[0] = 0LL;
    v16[7] = v11[31];
    v16[6] = v11[20];
    (*(void (__fastcall **)(__int64, _QWORD *, __int64))(a1 + 10304))(a1 + 10240, v16, 64LL);
    *(_QWORD *)(a3 + 88) = v10 - 64;
    *(_BYTE *)(a3 + 388) = -1;
  }
  return 0LL;
}
