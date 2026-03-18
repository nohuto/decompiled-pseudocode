/*
 * XREFs of NtUserfnINOUTMENUGETOBJECT @ 0x1C0238BA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTMENUGETOBJECT(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD *v10; // rax
  __int64 result; // rax
  _OWORD v12[2]; // [rsp+48h] [rbp-30h] BYREF

  memset(v12, 0, sizeof(v12));
  v10 = a4;
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    v10 = (_OWORD *)MmUserProbeAddress;
  v12[0] = *v10;
  v12[1] = v10[1];
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
