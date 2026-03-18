/*
 * XREFs of NtUserfnINLPDELETEITEMSTRUCT @ 0x1C0238010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall NtUserfnINLPDELETEITEMSTRUCT(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        char a6)
{
  _OWORD v11[2]; // [rsp+38h] [rbp-30h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    a4 = (_OWORD *)MmUserProbeAddress;
  v11[0] = *a4;
  v11[1] = a4[1];
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v11,
           a5);
}
