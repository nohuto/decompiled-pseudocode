/*
 * XREFs of NtUserfnOUTDWORDINDWORD @ 0x1C0238C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtUserfnOUTDWORDINDWORD(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // r8
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))mpFnidPfn[(a6 + 6) & 0x1F])(a1, a2, v9);
  if ( (unsigned __int64)a3 >= MmUserProbeAddress )
    a3 = (_DWORD *)MmUserProbeAddress;
  *a3 = v9[0];
  return v7;
}
