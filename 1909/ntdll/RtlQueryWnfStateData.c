/*
 * XREFs of RtlQueryWnfStateData @ 0x18007CC10
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     ZwQueryWnfStateData @ 0x18009FA20 (ZwQueryWnfStateData.c)
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
 *     _alloca_probe @ 0x1800A1EE0 (_alloca_probe.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 */

__int64 __fastcall RtlQueryWnfStateData(
        unsigned int *a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, __int64, __int64, __int64, _BYTE *, int),
        __int64 a4,
        __int64 a5)
{
  void *v8; // rsp
  __int64 result; // rax
  __int64 v10; // rdx
  _BYTE v11[4096]; // [rsp+20h] [rbp-1000h] BYREF
  int v12; // [rsp+1020h] [rbp+0h] BYREF
  unsigned int v13; // [rsp+1024h] [rbp+4h] BYREF
  _BYTE *v14; // [rsp+1028h] [rbp+8h]
  __int64 v15; // [rsp+1030h] [rbp+10h] BYREF

  v15 = a2;
  v8 = alloca(4096LL);
  v14 = v11;
  v12 = 4096;
  result = ZwQueryWnfStateData(&v15, a5, 0LL, &v13, v11, &v12);
  if ( (int)result >= 0 )
  {
    v10 = v13;
    *a1 = v13;
    return a3(v15, v10, a5, a4, v11, v12);
  }
  return result;
}
