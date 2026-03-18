/*
 * XREFs of GreDxgkSetProcessStatus @ 0x1C008E010
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreDxgkSetProcessStatus(__int64 *a1, int a2, char a3)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v5 = 0LL;
  v4 = *a1;
  LODWORD(v5) = a2;
  BYTE4(v5) = a3;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C0215230)(&v4);
}
