/*
 * XREFs of NtUserfnINOUTLPMEASUREITEMSTRUCT @ 0x1C015A230
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTLPMEASUREITEMSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  __int128 v10; // xmm1
  __int64 result; // rax
  _OWORD v12[2]; // [rsp+48h] [rbp-50h] BYREF

  memset(v12, 0, sizeof(v12));
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *a4 = *a4;
  v10 = a4[1];
  a4[1] = v10;
  v12[0] = *a4;
  v12[1] = v10;
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v12,
             a5);
  *a4 = v12[0];
  a4[1] = v12[1];
  return result;
}
