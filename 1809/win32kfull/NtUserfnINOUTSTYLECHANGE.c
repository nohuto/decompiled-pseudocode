/*
 * XREFs of NtUserfnINOUTSTYLECHANGE @ 0x1C0220880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnINOUTSTYLECHANGE(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, __int64 a5, char a6)
{
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // [rsp+30h] [rbp-28h] BYREF

  if ( (unsigned __int64)a4 >= MmUserProbeAddress )
    *(_DWORD *)MmUserProbeAddress = 0;
  v7 = *a4;
  *a4 = *a4;
  v9 = v7;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64 *, __int64))mpFnidPfn[(a6 + 6) & 0x1F])(
             a1,
             a2,
             a3,
             &v9,
             a5);
  *a4 = v9;
  return result;
}
