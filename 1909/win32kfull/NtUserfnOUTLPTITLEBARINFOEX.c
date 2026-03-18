/*
 * XREFs of NtUserfnOUTLPTITLEBARINFOEX @ 0x1C01015A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserfnOUTLPTITLEBARINFOEX(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  _OWORD v14[9]; // [rsp+50h] [rbp-D8h] BYREF

  memset(v14, 0, 0x8CuLL);
  v12 = 0LL;
  if ( a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  *(_OWORD *)a4 = *(_OWORD *)a4;
  *(_OWORD *)(a4 + 16) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a4 + 32) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a4 + 48) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(a4 + 64) = *(_OWORD *)(a4 + 64);
  *(_OWORD *)(a4 + 80) = *(_OWORD *)(a4 + 80);
  *(_OWORD *)(a4 + 96) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a4 + 112) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a4 + 128) = *(_QWORD *)(a4 + 128);
  *(_DWORD *)(a4 + 136) = *(_DWORD *)(a4 + 136);
  v14[0] = *(_OWORD *)a4;
  v14[1] = *(_OWORD *)(a4 + 16);
  v14[2] = *(_OWORD *)(a4 + 32);
  v14[3] = *(_OWORD *)(a4 + 48);
  v14[4] = *(_OWORD *)(a4 + 64);
  v14[5] = *(_OWORD *)(a4 + 80);
  v14[6] = *(_OWORD *)(a4 + 96);
  v14[7] = *(_OWORD *)(a4 + 112);
  *(_QWORD *)&v14[8] = *(_QWORD *)(a4 + 128);
  DWORD2(v14[8]) = *(_DWORD *)(a4 + 136);
  if ( LODWORD(v14[0]) == 140 )
  {
    v12 = ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
            a1,
            a2,
            a3,
            v14,
            a5);
    *(_OWORD *)a4 = v14[0];
    *(_OWORD *)(a4 + 16) = v14[1];
    *(_OWORD *)(a4 + 32) = v14[2];
    *(_OWORD *)(a4 + 48) = v14[3];
    *(_OWORD *)(a4 + 64) = v14[4];
    *(_OWORD *)(a4 + 80) = v14[5];
    *(_OWORD *)(a4 + 96) = v14[6];
    *(_OWORD *)(a4 + 112) = v14[7];
    *(_QWORD *)(a4 + 128) = *(_QWORD *)&v14[8];
    *(_DWORD *)(a4 + 136) = DWORD2(v14[8]);
  }
  else
  {
    UserSetLastError(87LL, (__int64)v14, v10, v11);
  }
  return v12;
}
