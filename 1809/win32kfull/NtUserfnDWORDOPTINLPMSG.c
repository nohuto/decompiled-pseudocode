/*
 * XREFs of NtUserfnDWORDOPTINLPMSG @ 0x1C01494D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnDWORDOPTINLPMSG(__int64 a1, __int64 a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  _OWORD *v6; // r10
  _OWORD v8[4]; // [rsp+38h] [rbp-40h] BYREF

  v6 = (_OWORD *)a4;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      v6 = (_OWORD *)MmUserProbeAddress;
    v8[0] = *v6;
    v8[1] = v6[1];
    v8[2] = v6[2];
    v6 = v8;
  }
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
           a1,
           a2,
           a3,
           v6,
           a5);
}
