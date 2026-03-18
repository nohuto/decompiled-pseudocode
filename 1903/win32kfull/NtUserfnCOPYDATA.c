/*
 * XREFs of NtUserfnCOPYDATA @ 0x1C012C390
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnCOPYDATA(__int64 a1, unsigned int a2, __int64 a3, ULONG64 a4, __int64 a5, char a6)
{
  __int64 v9; // r10
  __int128 v11; // [rsp+38h] [rbp-20h] BYREF
  volatile void *v12; // [rsp+48h] [rbp-10h]

  v11 = 0uLL;
  v12 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    if ( a4 >= MmUserProbeAddress )
      a4 = MmUserProbeAddress;
    v11 = *(_OWORD *)a4;
    v12 = *(volatile void **)(a4 + 16);
    if ( v12 )
      ProbeForRead(v12, DWORD2(v11), 1u);
    return ((__int64 (__fastcall *)(__int64, _QWORD, __int64, __int128 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v11,
             a5);
  }
  return v9;
}
