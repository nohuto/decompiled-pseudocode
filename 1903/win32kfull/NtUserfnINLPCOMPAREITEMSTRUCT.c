/*
 * XREFs of NtUserfnINLPCOMPAREITEMSTRUCT @ 0x1C0237F30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINLPCOMPAREITEMSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        ULONG64 a4,
        __int64 a5,
        char a6)
{
  _BYTE v11[56]; // [rsp+38h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a4 >= MmUserProbeAddress )
    a4 = MmUserProbeAddress;
  *(_OWORD *)v11 = *(_OWORD *)a4;
  *(_OWORD *)&v11[16] = *(_OWORD *)(a4 + 16);
  *(_OWORD *)&v11[32] = *(_OWORD *)(a4 + 32);
  *(_QWORD *)&v11[48] = *(_QWORD *)(a4 + 48);
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _BYTE *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v11,
           a5);
}
