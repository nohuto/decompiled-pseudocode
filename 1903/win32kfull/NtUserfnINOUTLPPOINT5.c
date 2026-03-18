/*
 * XREFs of NtUserfnINOUTLPPOINT5 @ 0x1C0159670
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINOUTLPPOINT5(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 result; // rax
  _BYTE v11[40]; // [rsp+48h] [rbp-60h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 32) = *(_QWORD *)(a4 + 32);
  *(_OWORD *)v11 = *(_OWORD *)a4;
  *(_OWORD *)&v11[16] = *(_OWORD *)(a4 + 16);
  *(_QWORD *)&v11[32] = *(_QWORD *)(a4 + 32);
  result = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             v11,
             a5);
  *(_OWORD *)a4 = *(_OWORD *)v11;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)&v11[16];
  *(_QWORD *)(a4 + 32) = *(_QWORD *)&v11[32];
  return result;
}
