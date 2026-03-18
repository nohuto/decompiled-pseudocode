/*
 * XREFs of NtUserfnDWORDOPTINLPMSG @ 0x1C0149250
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall NtUserfnDWORDOPTINLPMSG(__int64 a1, unsigned int a2, __int64 a3, _OWORD *a4, __int64 a5, char a6)
{
  _OWORD v11[3]; // [rsp+38h] [rbp-40h] BYREF

  memset(v11, 0, sizeof(v11));
  if ( a4 )
  {
    if ( (unsigned __int64)a4 >= MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    v11[0] = *a4;
    v11[1] = a4[1];
    v11[2] = a4[2];
    a4 = v11;
  }
  return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           a4,
           a5);
}
